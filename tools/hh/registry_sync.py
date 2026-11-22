"""Recover drifted registry recipes from ROM-checked source, without editing src/.

Run after setup and a clean matching build. Default is a dry run; --write
updates only units proven by an independent render of the proposed registry.
"""
import argparse
from collections import Counter, defaultdict
from multiprocessing import Pool
from pathlib import Path
import re
import tempfile

import srcbuild as S
import reconcile_frozen as F
import rule_check


C_TOKEN = re.compile(r'/\*[\s\S]*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|[^\s]')


def masked(text):
    """Keep offsets while hiding braces in comments and quoted strings."""
    return C_TOKEN.sub(lambda m: re.sub(r'[^\n]', ' ', m[0]) if m[0][0] in '/"\'' and len(m[0]) > 1 else m[0], text)


def definitions(text):
    code = masked(text)
    out, start, depth, pos = {}, None, 0, 0
    for line in code.splitlines(keepends=True):
        if not depth and start is None and not line.lstrip().startswith('#'):
            m = S.DEFN.match(line.split('{', 1)[0]) or S.KR_DEFN.match(line)
            if m:
                start, name = pos, m[1]
        if not line.lstrip().startswith('#'):
            for brace in re.finditer(r'[{}]', line):
                depth += 1 if brace[0] == '{' else -1
                if not depth and start is not None and brace[0] == '}':
                    out[name] = (start, pos + brace.end())
                    start = None
        pos += len(line)
    return out


def definition(text, span):
    return text[slice(*span)] if span else None


def body_tokens(body):
    return re.findall(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|\w+|[^\s]',
                      re.sub(r'/\*[\s\S]*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'',
                             lambda m: ' ' if m[0][0] == '/' else m[0], body)) if body else None


def recipe(seg, cfile, name, source, span):
    body = definition(source, span)
    prefix = source[:span[0]]
    includes = list(dict.fromkeys(re.findall(r'^\s*(#include[^\n]+)', prefix, re.M)))
    deps = F.context_dependencies(seg, cfile, name, body, F.Scan(''), 0, context=prefix)
    return '\n'.join(includes + ['', deps]).strip() + '\n'


def verify_render(seg, cfile, snips, wanted, changes, td):
    """Render all recipes together and verify linked text (including asm) and rodata."""
    why = 'no independent render'
    for mode in (False, True, 'unproto', 'alias'):
        rendered, _ = S.render(seg, cfile, snips, hoist=mode)
        obj, err = S.compile_file(rendered, td)
        if not obj:
            if mode is False:
                why = 'render does not compile: ' + ' '.join(err.strip().splitlines()[:2])[:220]
            continue
        # Match the regular renderer's zero-padding policy.
        start, end = S.file_span(seg, cfile)
        with open(obj, 'rb') as fh:
            size = S.ELFFile(fh).get_section_by_name('.text')['sh_size']
        pad = end - start - size
        if pad > 0 and pad % 4 == 0 and not any(S.IMG[end - pad:end]):
            rendered, _ = S.render(seg, cfile, snips, pad=pad, hoist=mode)
        spans = definitions(rendered)
        if any(name not in spans for name in wanted):
            why = 'render omitted a C definition'
            continue
        if any(body_tokens(definition(rendered, spans[name])) !=
               body_tokens(definition(snips[name], definitions(snips[name])[name])) for name in changes):
            why = 'render changed a synced definition'
            continue
        ok, why = F.verify(seg, cfile, rendered, wanted, td)
        if ok:
            return None
    return why


def unit(job):
    (seg, cfile), snips = job
    path = Path('src') / seg / (str(cfile) + '.c')
    if not cfile or not path.exists():
        return {name: ('cannot sync: no unique source unit', None) for name in snips}
    source = path.read_text()
    spans = definitions(source)
    result, proposed = {}, dict(snips)
    for name, old in snips.items():
        span = spans.get(name)
        body = definition(source, span)
        if body_tokens(body) == body_tokens(definition(old, definitions(old).get(name))) and body:
            result[name] = ('in sync', None)
        elif not body:
            result[name] = ('cannot sync: no built C definition', None)
        else:
            text = recipe(seg, cfile, name, source, span)
            hard = [h[0] for h in rule_check.hits('', whole_body=rule_check.body_of(body)) if h[1] == 'hard']
            if hard or re.search(r'^\s*#\s*define\s+(goto|return|if|else|while|for|do|switch|case|default|break|continue)\b', text, re.M) or re.search(r'\bif\s*\(\s*0\s*\)\s*\{', body):
                result[name] = ('cannot sync: honesty gate ' + ', '.join(sorted(set(hard))), None)
            else:
                proposed[name] = text
    changes = proposed.keys() - result.keys()
    if changes:
        with tempfile.TemporaryDirectory(dir='build', prefix='registry-sync-') as td:
            # Verify the source side as well; neither a stale object nor an ASM
            # fallback in the render proves that a recipe reconstructs the unit.
            wanted = sorted(snips.keys() & spans.keys())
            ok, why = F.verify(seg, cfile, source, wanted, td)
            why = verify_render(seg, cfile, proposed, wanted, changes, td) if ok else 'source verification: ' + why
        for name in changes:
            result[name] = ('cannot sync: ' + why, None) if why else ('synced', proposed[name])
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--write', action='store_true')
    parser.add_argument('--jobs', type=int, choices=range(1, 5), default=4)
    args = parser.parse_args()
    groups = defaultdict(dict)
    for (seg, name), text in S.registry().items():
        groups[seg, S.file_of(seg, name)][name] = text
    jobs = sorted(groups.items(), key=lambda item: (item[0][0], item[0][1] or ''))
    counts = Counter()
    updates = []
    with Pool(args.jobs) as pool:
        for ((seg, _), _), results in zip(jobs, pool.imap(unit, jobs)):
            for name, (status, text) in sorted(results.items()):
                counts[status.split(':')[0]] += 1
                if status != 'in sync':
                    print(seg, name, status, flush=True)
                if args.write and text is not None:
                    updates.append((Path('matched') / seg / (name + '.c'), text))
    for path, text in updates:
        path.write_text(text)
    print(', '.join(f'{counts[key]} {key}' for key in ('in sync', 'synced', 'cannot sync'))
          + ('' if args.write else ' (dry run)'))


if __name__ == '__main__':
    main()
