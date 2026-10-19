#!/bin/bash
# oc_gate.sh: clears the cooldown files run_one_oc.sh writes after a provider error (~/.oc/COOLDOWN for the OpenCode free
# tier, ~/.oc/COOLDOWN.<model> for per-model limits such as a ChatGPT Plus session window) once that model answers again.
# Each file holds "<time> <model>". Probes with one tiny request every OC_PROBE seconds; logs to ~/.oc/gate.log.
# Exits when no batch is running.
{ # whole script in one block: bash parses it before running, so editing this file cannot break a live gate
export XDG_CONFIG_HOME=$HOME/.oc/config; mkdir -p $HOME/.oc/t; cd $HOME/.oc/t
export TMPDIR=$HOME/.oc/tmp/gate; mkdir -p "$TMPDIR"   # each probe's unpacked library is removed after it (see run_one_oc.sh)
while pgrep -f "oc_[b]atch.sh" > /dev/null; do
  if ls $HOME/.oc/COOLDOWN* > /dev/null 2>&1; then
    sleep ${OC_PROBE:-900}
    for f in $HOME/.oc/COOLDOWN*; do
      [ -f "$f" ] || continue
      read -r since model < "$f"; model=${model:-opencode/deepseek-v4.1-flash-free}
      case $model in openrouter/*) OPENROUTER_API_KEY=$(tr -d '\n\r ' < $HOME/.oc/openrouter.key); export OPENROUTER_API_KEY;; esac
      if [ "${model%%/*}" = codex ]; then
        probe() { CODEX_HOME=$HOME/.cx timeout 90 $HOME/.local/bin/codex exec --skip-git-repo-check --sandbox read-only \
                    -m "${model#codex/}" "Reply with just PONG" < /dev/null 2>&1; }
      else
        probe() { OPENCODE_CONFIG_CONTENT="{\"small_model\":\"$model\"}" timeout 60 $HOME/.local/bin/opencode run --pure \
                    -m "$model" "Reply with just PONG" 2>&1; }
      fi
      ok=0; probe | grep -q PONG && ok=1; rm -rf "$TMPDIR"/.*.so "$TMPDIR"/* 2>/dev/null
      if [ $ok = 1 ]; then
        echo "$(date -Is) $model open again (blocked since $since)" >> $HOME/.oc/gate.log; rm -f "$f"
      else echo "$(date -Is) $model still rate limited" >> $HOME/.oc/gate.log; fi
    done
  else sleep 30; fi
done
exit; }
