"""Read IDO binary ucode (the .B file cfe writes and the .O file uopt writes; `cc -K` keeps both).

The format tables (opcode order, record lengths, constant payloads) follow IDO's ucode.h / libu uini.c, as
transcribed in n64-decomp-workbench's decomp_workbench/ucode.py (CC0). Only what tools/hh/regtrace.py needs is decoded:
record framing, opcode, memory type, block/offset/length of loads and stores, labels, jumps and line numbers.

uopt's output is register-allocated: every value its global colouring put in a register appears as Rmt memory with the
register number as the offset (`lod Rmt 16` reads $s0). Values left in memory keep their Mmt (locals) / Pmt (params)
block and offset, the same ones cfe used in the .B file."""
import struct

OPS = ("abs add adj aent and aos asym bgn bgnb bsub cg1 cg2 chkh chkl chkn chkt cia clab clbd comm csym ctrl cubd "
       "cup cvt cvtl dec def dif div dup end endb ent eof equ esym fill fjp fsym geq grt gsym hsym icuf idx iequ igeq "
       "igrt ijp ilda ildv ileq iles ilod inc ineq init inn int ior isld isst istr istv ixa lab lbd lbdy lbgn lca lda "
       "ldap ldc ldef ldsp lend leq les lex lnot loc lod lsym ltrm max min mod mov movv mpmv mpy mst mus neg neq nop "
       "not odd optn par pdef pmov pop regs rem ret rlda rldc rlod rnd rpar rstr sdef sgs shl shr sign sqr sqrt ssym "
       "step stp str stsp sub swp tjp tpeq tpge tpgt tple tplt tpne typ ubd ujp unal uni vreg xjp xor xpar mtag alia "
       "ildi isti irld irst ldrc msym rcuf ksym osym irlv irsv").split()
DTYPES = "A C F G H I J K L M N P Q R S W X Z".split()
MTYPES = "Z M P R S A T K".split()          # Zmt Mmt(locals) Pmt(params) Rmt(registers) Smt(statics) Amt Tmt Kmt

FOUR = set(("adj aent asym bgn cia clab comm csym ctrl cup cvt def dif ent esym fill fsym gsym hsym icuf iequ igeq "
            "igrt ildv ileq iles ilod ineq inn int isld isst istr istv ksym lab lca ldc ldef ldrc lod lsym mov mpmv "
            "msym mus optn osym par pdef pmov rcuf regs rlda rldc rlod rnd rpar rstr sdef sgs ssym str swp typ uni "
            "vreg ildi isti irld irst").split())
SIX = {"ilda", "lda", "init"}
HAS_CONST = {"cia", "comm", "init", "lca", "ldc", "rldc", "ssym"}
VAR_CONST_DTYPES = {9, 12, 13, 14, 16}     # Mdt, Qdt, Rdt, Sdt, Xdt: byte-length-prefixed payload
JUMPS = {"fjp", "tjp", "ujp"}


class Rec:
    __slots__ = ("i", "op", "mtype", "dtype", "lexlev", "words")

    def __init__(self, i, op, mtype, dtype, lexlev, words):
        self.i, self.op, self.mtype, self.dtype, self.lexlev, self.words = i, op, mtype, dtype, lexlev, words

    @property
    def m(self): return MTYPES[self.mtype]

    @property
    def block(self): return self.words[1] if len(self.words) > 1 else None

    @property
    def length(self): return self.words[2] if len(self.words) > 2 else None

    @property
    def offset(self):
        if len(self.words) < 4: return None
        v = self.words[3]
        return v - (1 << 32) if v & 0x80000000 else v

    @property
    def label(self): return self.words[1]

    @property
    def const(self):
        """Integer value of an ldc of a one-word integer type (Jdt/Ldt), else None."""
        if self.op != "ldc" or len(self.words) < 5 or self.dtype not in (6, 8): return None
        v = self.words[4]
        return v - (1 << 32) if self.dtype == 6 and v & 0x80000000 else v

    def __repr__(self):
        d = DTYPES[self.dtype] if self.dtype < len(DTYPES) else self.dtype
        if self.op in ("lod", "str", "lda", "ilod", "istr", "par", "rpar"):
            return "%s %s%s %d:%d" % (self.op, d, self.m, self.block, self.offset)
        if self.op in ("lab", "fjp", "tjp", "ujp"): return "%s L%d" % (self.op, self.label)
        if self.op == "ldc" and self.const is not None: return "ldc %s %d" % (d, self.const)
        return "%s %s" % (self.op, d)


def parse(data):
    if len(data) % 4: raise ValueError("ucode stream is not a whole number of words")
    w = struct.unpack(">%dI" % (len(data) // 4), data)
    out, k = [], 0
    while k < len(w):
        h = w[k]; opc = h >> 24
        if opc >= len(OPS): raise ValueError("unknown ucode opcode 0x%02x at word %d" % (opc, k))
        op = OPS[opc]; dtype = (h >> 16) & 0x1F
        n = 8 if op == "xjp" else 6 if op in SIX else 4 if op in FOUR else 2
        if op in HAS_CONST:
            extra = 2
            if dtype in VAR_CONST_DTYPES or op == "comm":
                pw = (w[k + n] + 3) // 4
                extra += pw + (pw & 1)
            n += extra
        out.append(Rec(len(out), op, (h >> 21) & 7, dtype, h & 0xFFFF, w[k:k + n]))
        k += n
    return out


def procedures(recs):
    """[(ent record, [records from ent to end])] in file order (the order of the C function definitions)."""
    out, cur = [], None
    for r in recs:
        if r.op == "ent": cur = [r]; out.append(cur); continue
        if cur is not None:
            cur.append(r)
            if r.op == "end": cur = None
    return [(p[0], p) for p in out]


def read(path):
    with open(path, "rb") as fh:
        return parse(fh.read())


# Stack effects (uini.c): how many operands an instruction pops and whether it pushes a result. Used to rebuild the
# expression tree of each statement.
PUSH = set(("abs add adj and bsub chkh chkl chkn cvt cvtl dec dif div dup equ geq grt idx iequ igeq igrt ilda ildi "
            "ileq iles ilod irld inc ineq inn int ior isld ixa lbd lca lda ldap ldc ldrc ldsp leq les lnot lod max min "
            "mod mpy mus neg neq not odd rem rnd sgs shl shr sign sqr sqrt sub swp typ ubd uni xor").split())
POP1 = set(("abs adj aos chkh chkl chkn chkt cvt cvtl dec fjp icuf ijp ilda ilod inc irld isld lbd lnot mpmv neg not "
            "odd par pmov pop rnd sgs sqr sqrt str stsp swp tjp typ ubd xjp xpar rpar").split())
POP2 = set(("add and bsub dif div equ fill geq grt iequ igeq igrt ildi ileq iles ineq inn int ior irst isst istr ixa "
            "leq les max min mod mov mpy mus neq rem shl shr sign sub tpeq tpge tpgt tple tplt tpne uni xor").split())
POP3 = {"idx", "isti"}


class Node:
    __slots__ = ("rec", "kids", "line")

    def __init__(self, rec, kids, line):
        self.rec, self.kids, self.line = rec, kids, line

    def walk(self):
        yield self
        for k in self.kids:
            yield from k.walk()


def statements(recs):
    """Rebuild expression trees. Returns [Node] of statement roots (stores, jumps, calls, ...) in order; leftover
    values (dup and friends) are tolerated. Each node remembers the source line of the last `loc` before it."""
    stack, out, line = [], [], 0
    for r in recs:
        if r.op == "loc": line = r.words[1]; continue
        n = 3 if r.op in POP3 else 2 if r.op in POP2 else 1 if r.op in POP1 else 0
        kids = stack[-n:] if n and len(stack) >= n else list(stack) if n else []
        if n: del stack[-n:]
        node = Node(r, kids, line)
        if r.op == "dup" and kids:      # dup pushes its operand twice
            stack += [kids[0], kids[0]]; continue
        if r.op in PUSH: stack.append(node)
        else: out.append(node)
    return out
