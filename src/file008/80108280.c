#include "common.h"

extern s32 D_801BBAD0;
#define func_80108280 func_80108280_decl
#undef func_80108280

struct func_80108280_StructB { u8 pad0[8]; struct func_80108280_StructA *head; };
struct func_80108280_StructA {
    struct func_80108280_StructA *next;
    u8 pad4[0x20];
    s32 f24;
    u8 pad28[4];
    s32 f2C;
    u8 pad30[0x44];
    u8 *f74;
};
struct func_80108280_StructC {
    u8 pad0[4];
    u16 f4;
    u8 pad6[0x4A];
    struct func_80108280_StructB *f50;
};
extern struct func_80108280_StructC D_801BBBF0;
extern s32 func_8012FF58();

s32 func_80108280(void)
{
  struct func_80108280_StructA *s0;
  s32 a0;
  s32 s1;
  u8 *p;
  D_801BBAD0 = 0;
  s0 = D_801BBBF0.f50->head;
  a0 = 0;
  if (s0 != 0)
  {
    do
    {
      if (s0->f24 != 0)
      {
        p = s0->f74;
        if (((p != 0) && (s0->f2C & 0x800)) && (s0->f74[0] == 0xFD))
        {
          D_801BBAD0 = (s32) s0;
          s1 = func_8012FF58(a0) & 0xFFFF;
          a0 = (((func_8012FF58() % 10) + ((s1 / 10) << 8)) + 0x101) & 0xFFFF;
          if (D_801BBBF0.f4 >= 0x64)
          {
            a0 = 0;
          }
        }
      }
      s0 = s0->next;
    }
    while (s0 != 0);
  }
  return a0;
}

s32 func_80108664(s32 arg0);
extern void (*D_801BBAD4)(void);

extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern s32 D_801BBF7C;

s32 func_801083BC(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 var_v1;

    func_80108280();
    D_801BBAD4 = func_80108664;
    var_v1 = func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
    if (D_801BBF7C != D_801BBAD0) {
        var_v1 = 0;
    }
    return var_v1;
}




struct func_8010843C_StructArg {
    s32 value;
};

void func_8010843C(f32 arg0, f32 arg1, struct func_8010843C_StructArg arg2, struct func_8010843C_StructArg arg3, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108664;
    func_80108868(arg0, arg1, arg2.value, arg3.value, arg4, arg5);
}

s32 func_80108670(s32 arg0);
s32 func_80108670(s32 arg0);



struct func_80108480_StructArgs {
    s32 first;
    s32 second;
};

void func_80108480(f32 arg0, f32 arg1, struct func_80108480_StructArgs args, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108670;
    func_80108868(arg0, arg1, args.first, args.second, arg4, arg5);
}

s32 func_801086C4(s32 arg0);
s32 func_801086C4(s32 arg0);



struct func_801084C4_StructPair {
    s32 first;
    s32 second;
};

void func_801084C4(f32 arg0, f32 arg1, struct func_801084C4_StructPair args, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_801086C4;
    func_80108868(arg0, arg1, args.first, args.second, arg4, arg5);
}

#define func_80108718 func_80108718__decl114
s32 func_80108718(s32 arg0);
#define func_80108718 func_80108718__decl115
s32 func_80108718(s32 arg0);

#undef func_80108718
s32 func_80108718(u8 arg0);

#undef func_80108718

struct func_80108508_StructRange {
    s32 start;
    s32 end;
};

void func_80108508(f32 arg0, f32 arg1, struct func_80108508_StructRange range, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_80108718;
    func_80108868(arg0, arg1, range.start, range.end, arg4, arg5);
}
#define func_80108718 func_80108718__decl115
#undef func_80108718

s32 func_8010876C(s32 arg0);
s32 func_8010876C(s32 arg0);



struct func_8010854C_StructPair {
    s32 first;
    s32 second;
};

void func_8010854C(f32 arg0, f32 arg1, struct func_8010854C_StructPair pair, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_8010876C;
    func_80108868(arg0, arg1, pair.first, pair.second, arg4, arg5);
}

s32 func_801087C0(s32 arg0);
s32 func_801087C0(s32 arg0);



void func_80108590(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801BBAD4 = func_801087C0;
    func_80108868(arg0, arg1, *(s32 *)&arg2, *(s32 *)&arg3, arg4, arg5);
}


extern void func_8010A1AC(u8, f32, f32, f32, f32, f32, f32);
#define func_80108814 func_80108814__decl159
extern void func_80108814();

void func_801085D4(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    D_801BBAD4 = func_80108814;
    func_8010A1AC(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
#undef func_80108814


extern void func_80109560(f32, f32);

void func_80108634(f32 arg0, f32 arg1, s32 arg2) {
    D_801BBAD4 = (void (*)(void)) func_80108664;
    func_80109560(arg0, arg1);
}


s32 func_80108664(s32 arg0) {
    return 1;
}

#define D_80163530 D_80163530__func_80108670

extern u8 D_80163530[];

#undef D_80163530
#define D_80163530 D_80163530__func_80108670_03fa71b3


extern u8 D_80163530[];

s32 func_80108670(s32 arg0) {
    s32 i;
    s32 *p = &arg0;

    arg0 = (u8)*p;
    for (i = 0; D_80163530[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163530[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_80163530
#define D_80163530 D_80163530__func_80108670
#undef D_80163530

#define D_80163570 D_80163570__func_801086C4

extern u8 D_80163570[];

#undef D_80163570
#define D_80163570 D_80163570__func_801086C4_a45cab9e


extern u8 D_80163570[];

s32 func_801086C4(s32 arg0) {
    s32 i;
    s32 *value = &arg0;

    *value = (u8)*value;
    for (i = 0; D_80163570[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163570[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_80163570
#define D_80163570 D_80163570__func_801086C4
#undef D_80163570

#define D_801635B0 D_801635B0__func_80108718

extern u8 D_801635B0[];

s32 func_80108718(u8 arg0) {
    s32 i;

    for (i = 0; D_801635B0[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_801635B0[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_801635B0

#define D_801635F0 D_801635F0__func_8010876C

extern u8 D_801635F0[];

s32 func_8010876C(s32 arg0) {
    s32 i;

    arg0 = *(u32 *)&arg0 & 0xFF;
    for (i = 0; D_801635F0[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_801635F0[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_801635F0

#define D_80163630 D_80163630__func_801087C0

extern u8 D_80163630[];

s32 func_801087C0(s32 arg0) {
    s32 i;

    arg0 = *(u32 *)&arg0 & 0xFF;
    for (i = 0; D_80163630[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163630[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_80163630

#define D_80163670 D_80163670__func_80108814

extern u8 D_80163670[];

s32 func_80108814(u8 arg0) {
    s32 i;

    for (i = 0; D_80163670[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163670[i]) {
            return 0;
        }
    }
    return 1;
}
#undef D_80163670

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80109560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A6A0.s")

#define func_8010B73C func_8010B73C__func_8010ACF8
#define func_80108718 func_80108718_ctx38
#define func_80108814 func_80108814_ctx48

typedef struct func_8010ACF8_StructNode {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010ACF8_StructNode;

typedef struct func_8010ACF8_StructArg {
    func_8010ACF8_StructNode *node;
    f32 a[3];
    f32 b[3];
    u8 pad1C[4];
    f32 distance;
} func_8010ACF8_StructArg;
extern s32 func_8010B73C();

#undef func_8010B73C
#define func_8010ACF8_StructArg func_8010ACF8_StructArg__func_8010ACF8_1562c122
#define func_8010ACF8_StructNode func_8010ACF8_StructNode__func_8010ACF8_1562c122
#define func_8010B73C func_8010B73C__func_8010ACF8_1562c122


typedef struct func_8010ACF8_StructNode {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010ACF8_StructNode;

typedef struct func_8010ACF8_StructArg {
    func_8010ACF8_StructNode *node;
    f32 a[3];
    f32 b[3];
    u8 pad1C[4];
    f32 distance;
} func_8010ACF8_StructArg;
extern s32 func_8010B73C();

s32 func_8010ACF8(func_8010ACF8_StructArg *arg0)
{
    s32 result;
    f32 firstX, secondX, firstY, secondY, firstZ;
    s16 minY, minX;
    f32 secondZ;
    s16 maxX, minZ, maxY;
    s32 maxZ;
    func_8010ACF8_StructNode *node;
    func_8010ACF8_StructNode *start;

    arg0->distance = 2147483648.0f;
    result = 0;
    while (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        node = arg0->node;
        firstX = arg0->a[0];
        secondX = arg0->b[0];
        if (firstX < secondX) {
            minX = (s16)firstX;
            maxX = (s16)secondX;
        } else {
            minX = (s16)secondX;
            maxX = (s16)firstX;
        }
        firstY = arg0->a[1];
        secondY = arg0->b[1];
        if (firstY < secondY) {
            minY = (s16)firstY;
            maxY = (s16)secondY;
        } else {
            minY = (s16)secondY;
            maxY = (s16)firstY;
        }
        firstZ = arg0->a[2];
        secondZ = arg0->b[2];
        if (firstZ < secondZ) {
            minZ = (s16)firstZ;
            maxZ = (s16)secondZ;
        } else {
            minZ = (s16)secondZ;
            maxZ = (s16)firstZ;
        }
        start = arg0->node;
        if (start->type != 0xFF) {
            do {
                if (maxX >= node->min[0] && node->max[0] >= minX &&
                    maxY >= node->min[1] && node->max[1] >= minY &&
                    maxZ >= node->min[2] && node->max[2] >= minZ) {
                    arg0->node = start + node->next;
                    if (func_8010B73C(arg0)) {
                        result = 1;
                    }
                }
                node++;
            } while (node->type != 0xFF);
        }
    } else {
        if (func_8010B73C(arg0)) {
            result = 1;
        }
    }
    return result;
}
#undef func_8010ACF8_StructArg
#undef func_8010ACF8_StructNode
#undef func_8010B73C
#define func_8010B73C func_8010B73C__func_8010ACF8
#undef func_80108718
#undef func_80108814
#undef func_8010B73C


typedef struct {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010AF98_Node;

typedef struct {
    func_8010AF98_Node *node;
    f32 a[3];
    f32 b[3];
} func_8010AF98_Arg;

extern s32 func_8010C21C();

s32 func_8010AF98(func_8010AF98_Arg *arg0) {
    func_8010AF98_Node *base;
    s32 i;
    s32 stride;
    s16 x0, y0, z0, x1, y1, z1;

    if (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        stride = 0x14;
        if (arg0->a[0] < arg0->b[0]) {
            x0 = arg0->a[0];
            x1 = arg0->b[0];
        } else {
            x0 = arg0->b[0];
            x1 = arg0->a[0];
        }
        if (arg0->a[1] < arg0->b[1]) {
            y0 = arg0->a[1];
            y1 = arg0->b[1];
        } else {
            y0 = arg0->b[1];
            y1 = arg0->a[1];
        }
        if (arg0->a[2] < arg0->b[2]) {
            z0 = arg0->a[2];
            z1 = arg0->b[2];
        } else {
            z0 = arg0->b[2];
            z1 = arg0->a[2];
        }
        base = arg0->node;
        for (i = 0; base[i].type != 0xFF; i++) {
            if (x1 >= base[i].min[0] && base[i].max[0] >= x0 && y1 >= base[i].min[1] && base[i].max[1] >= y0 &&
                z1 >= base[i].min[2] && base[i].max[2] >= z0) {
                arg0->node = &base[i];
                stride = base[i].next;
                arg0->node = &base[stride];
                if (func_8010C21C(arg0) != 0) {
                    return 1;
                }
            }
        }
    } else if (func_8010C21C(arg0) != 0) {
        return 1;
    }
    return 0;
}


typedef struct {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010B238_Node;

typedef struct {
    func_8010B238_Node *node;
    f32 a[3];
    f32 b[3];
} func_8010B238_Arg;

extern s32 func_8010CC68();

s32 func_8010B238(func_8010B238_Arg *arg0) {
    func_8010B238_Node *base;
    s32 i;
    s32 stride;
    s16 x0, y0, z0, x1, y1, z1;

    if (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        stride = 0x14;
        if (arg0->a[0] < arg0->b[0]) {
            x0 = arg0->a[0];
            x1 = arg0->b[0];
        } else {
            x0 = arg0->b[0];
            x1 = arg0->a[0];
        }
        if (arg0->a[1] < arg0->b[1]) {
            y0 = arg0->a[1];
            y1 = arg0->b[1];
        } else {
            y0 = arg0->b[1];
            y1 = arg0->a[1];
        }
        if (arg0->a[2] < arg0->b[2]) {
            z0 = arg0->a[2];
            z1 = arg0->b[2];
        } else {
            z0 = arg0->b[2];
            z1 = arg0->a[2];
        }
        base = arg0->node;
        for (i = 0; base[i].type != 0xFF; i++) {
            if (x1 >= base[i].min[0] && base[i].max[0] >= x0 && y1 >= base[i].min[1] && base[i].max[1] >= y0 &&
                z1 >= base[i].min[2] && base[i].max[2] >= z0) {
                arg0->node = &base[i];
                stride = base[i].next;
                arg0->node = &base[stride];
                if (func_8010CC68(arg0) != 0) {
                    return 1;
                }
            }
        }
    } else if (func_8010CC68(arg0) != 0) {
        return 1;
    }
    return 0;
}


typedef struct {
    u8 pad0[4];
    f32 f4, f8, fC, f10, f14, f18;
    u8 pad1c[8];
    f32 f24, f28, f2C, f30;
} func_8010B4D8_Struct;

extern f32 func_8002FC20(f32);

void func_8010B4D8(func_8010B4D8_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 dx, dy, dz, len, t, den, pa, pb, k;

    dx = arg0->f10 - arg0->f4;
    dy = arg0->f14 - arg0->f8;
    dz = arg0->f18 - arg0->fC;
    len = func_8002FC20(dx * dx + dy * dy + dz * dz);
    den = arg0->f24 * dx + arg0->f28 * dy + arg0->f2C * dz;
    t = ((((-arg0->f24 * arg0->f4) - arg0->f28 * arg0->f8) - arg0->f2C * arg0->fC) - arg0->f30) / den;
    k = len * 4.0f;
    *arg1 = (arg0->f4 + dx * t) - dx / k;
    *arg2 = (arg0->f8 + dy * t) - dy / k;
    *arg3 = (arg0->fC + dz * t) - dz / k;
}

#define func_8002FC20 func_8002FC20__func_8010B634


typedef struct {
    u8 pad0[0x10];
    f32 x10, x14, x18;
    u8 pad1c[8];
    f32 x24, x28, x2C, x30;
} func_8010B634_Struct;
extern f32 func_8002FC20(f32, f32);

void func_8010B634(func_8010B634_Struct *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    f32 sq;
    f32 t;
    f32 d;
    f32 dx, dy, dz;

    sq = (arg0->x24 * arg0->x24) + (arg0->x28 * arg0->x28) + (arg0->x2C * arg0->x2C);
    t = ((((-arg0->x24 * arg0->x10) - (arg0->x28 * arg0->x14)) - (arg0->x2C * arg0->x18)) - arg0->x30) / sq;
    d = func_8002FC20(sq, arg0->x24) * 4.0f;
    dx = arg0->x24 / d;
    dy = arg0->x28 / d;
    dz = arg0->x2C / d;
    *arg1 = arg0->x10 + (arg0->x24 * t) + dx;
    *arg2 = arg0->x14 + (arg0->x28 * t) + dy;
    *arg3 = arg0->x18 + (arg0->x2C * t) + dz;
}
#undef func_8002FC20

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010C21C.s")


#define x0 p[0]
#define y0 p[1]
#define z0 p[2]
#define x1 p[3]
#define y1 p[4]
#define z1 p[5]
#define x2 p[6]
#define y2 p[7]
#define z2 p[8]
#define x0f ((f32)x0)
#define y0f ((f32)y0)
#define z0f ((f32)z0)
#define x1f ((f32)x1)
#define y1f ((f32)y1)
#define z1f ((f32)z1)
#define x2f ((f32)x2)
#define y2f ((f32)y2)
#define z2f ((f32)z2)
#define ax arg0->a.x
#define ay arg0->a.y
#define az arg0->a.z
#define bx arg0->b.x
#define by arg0->b.y
#define bz arg0->b.z
#define e1x (x1 - x0)
#define e1y (y1 - y0)
#define e1z (z1 - z0)
#define e2x (x2 - x0)
#define e2y (y2 - y0)
#define e2z (z2 - z0)

typedef struct {
    u8 type;
    u8 pad1;
    s16 v[9];
} func_8010CC68_Node;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} func_8010CC68_Vec;

typedef struct {
    func_8010CC68_Node *node;
    func_8010CC68_Vec a;
    func_8010CC68_Vec b;
} func_8010CC68_Arg;

s32 func_8010CC68(func_8010CC68_Arg *arg0) {
    s32 off;
    f32 nx;
    f32 ny;
    f32 nz;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 num;
    f32 ty;
    f32 tz;
    f32 den;
    f32 md;
    f32 mx1;
    f32 my1;
    f32 mz1;
    f32 md1;
    f32 s1;
    s16 *p;
    f32 tx;
    f32 lx;
    f32 ly;
    f32 lz;
    f32 s2;
    f32 md2;
    f32 minx;
    f32 miny;
    f32 minz;
    f32 maxx;
    f32 maxy;
    f32 maxz;
    s16 lo0, hi0, lo1, hi1, lo2, hi2;

    if (arg0->a.x < arg0->b.x) {
        minx = arg0->a.x;
        maxx = arg0->b.x;
    } else {
        minx = arg0->b.x;
        maxx = arg0->a.x;
    }
    if (arg0->a.y < arg0->b.y) {
        miny = arg0->a.y;
        maxy = arg0->b.y;
    } else {
        miny = arg0->b.y;
        maxy = arg0->a.y;
    }
    if (arg0->a.z < arg0->b.z) {
        minz = arg0->a.z;
        maxz = arg0->b.z;
    } else {
        minz = arg0->b.z;
        maxz = arg0->a.z;
    }
    for (off = 0; arg0->node[off].type != 0xFF; off++) {
        p = &arg0->node[off].v[0];
        if (p[0] < p[3]) {
            if (p[6] < p[3]) {
                hi0 = p[3];
                if (p[0] < p[6]) {
                    lo0 = p[0];
                } else {
                    lo0 = p[6];
                }
            } else {
                lo0 = p[0];
                hi0 = p[6];
            }
        } else {
            if (p[6] < p[0]) {
                hi0 = p[0];
                if (p[3] < p[6]) {
                    lo0 = p[3];
                } else {
                    lo0 = p[6];
                }
            } else {
                lo0 = p[3];
                hi0 = p[6];
            }
        }
        if (p[1] < p[4]) {
            if (p[7] < p[4]) {
                hi1 = p[4];
                if (p[1] < p[7]) {
                    lo1 = p[1];
                } else {
                    lo1 = p[7];
                }
            } else {
                lo1 = p[1];
                hi1 = p[7];
            }
        } else {
            if (p[7] < p[1]) {
                hi1 = p[1];
                if (p[4] < p[7]) {
                    lo1 = p[4];
                } else {
                    lo1 = p[7];
                }
            } else {
                lo1 = p[4];
                hi1 = p[7];
            }
        }
        if (p[2] < p[5]) {
            if (p[8] < p[5]) {
                hi2 = p[5];
                if (p[2] < p[8]) {
                    lo2 = p[2];
                } else {
                    lo2 = p[8];
                }
            } else {
                lo2 = p[2];
                hi2 = p[8];
            }
        } else {
            if (p[8] < p[2]) {
                hi2 = p[2];
                if (p[5] < p[8]) {
                    lo2 = p[5];
                } else {
                    lo2 = p[8];
                }
            } else {
                lo2 = p[5];
                hi2 = p[8];
            }
        }
        if (!(maxx < (f32)lo0) && !((f32)hi0 < minx) && !(maxy < (f32)lo1) && !((f32)hi1 < miny) &&
            !(maxz < (f32)lo2) && !((f32)hi2 < minz) &&
            ((s32 (*)(u8, s16 *))D_801BBAD4)(arg0->node[off].type, p) != 0) {
        nx = e1y * e2z - e2y * e1z;
        ny = e2x * e1z - e1x * e2z;
        nz = e1x * e2y - e2x * e1y;
        dx = bx - ax;
        dy = by - ay;
        dz = bz - az;
        den = nx * dx + ny * dy + nz * dz;
        if (den < 0.0f) {
            md = -(nx * x0f + ny * y0f + z0f * nz);
            num = -nx * ax - ny * ay - nz * az - md;
            tx = dx * num;
            ty = dy * num;
            tz = dz * num;
            lx = dx * den;
            ly = dy * den;
            lz = dz * den;
            if ((tx >= 0.0f && tx <= lx) || (tx <= 0.0f && lx <= tx)) {
                if ((ty >= 0.0f && ty <= ly) || (ty <= 0.0f && ly <= ty)) {
                    if ((tz >= 0.0f && tz <= lz) || (tz <= 0.0f && lz <= tz)) {
                        tx += ax * den;
                        ty += ay * den;
                        tz += az * den;
                        mx1 = (f32)e1y * nz - (f32)e1z * ny;
                        my1 = nx * (f32)e1z - (f32)e1x * nz;
                        mz1 = (f32)e1x * ny - (f32)e1y * nx;
                        md1 = -(mx1 * x0f + my1 * y0f + z0f * mz1);
                        s1 = mx1 * x2f + my1 * y2f + z2f * mz1 + md1;
                        s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                        if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                            mx1 = (f32)(y2 - y1) * nz - (f32)(z2 - z1) * ny;
                            my1 = nx * (f32)(z2 - z1) - (f32)(x2 - x1) * nz;
                            mz1 = (f32)(x2 - x1) * ny - (f32)(y2 - y1) * nx;
                            md1 = -(mx1 * x1f + my1 * y1f + z1f * mz1);
                            s1 = mx1 * x0f + my1 * y0f + z0f * mz1 + md1;
                            s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                            if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                mx1 = (f32)(y0 - y2) * nz - (f32)(z0 - z2) * ny;
                                my1 = nx * (f32)(z0 - z2) - (f32)(x0 - x2) * nz;
                                mz1 = (f32)(x0 - x2) * ny - (f32)(y0 - y2) * nx;
                                md1 = -(mx1 * x2f + my1 * y2f + z2f * mz1);
                                s1 = mx1 * x1f + my1 * y1f + z1f * mz1 + md1;
                                s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                                if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (den > 0.0f) {
            dx = ax - bx;
            dy = ay - by;
            dz = az - bz;
            den = nx * dx + ny * dy + nz * dz;
            md2 = -(nx * x0f + ny * y0f + z0f * nz);
            num = -nx * bx - ny * by - nz * bz - md2;
            tx = dx * num;
            ty = dy * num;
            tz = dz * num;
            lx = dx * den;
            ly = dy * den;
            lz = dz * den;
            if ((tx >= 0.0f && tx <= lx) || (tx <= 0.0f && lx <= tx)) {
                if ((ty >= 0.0f && ty <= ly) || (ty <= 0.0f && ly <= ty)) {
                    if ((tz >= 0.0f && tz <= lz) || (tz <= 0.0f && lz <= tz)) {
                        tx += bx * den;
                        ty += by * den;
                        tz += bz * den;
                        mx1 = (f32)e1y * nz - (f32)e1z * ny;
                        my1 = nx * (f32)e1z - (f32)e1x * nz;
                        mz1 = (f32)e1x * ny - (f32)e1y * nx;
                        md1 = -(mx1 * x0f + my1 * y0f + z0f * mz1);
                        s1 = mx1 * x2f + my1 * y2f + z2f * mz1 + md1;
                        s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                        if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                            mx1 = (f32)(y2 - y1) * nz - (f32)(z2 - z1) * ny;
                            my1 = nx * (f32)(z2 - z1) - (f32)(x2 - x1) * nz;
                            mz1 = (f32)(x2 - x1) * ny - (f32)(y2 - y1) * nx;
                            md1 = -(mx1 * x1f + my1 * y1f + z1f * mz1);
                            s1 = mx1 * x0f + my1 * y0f + z0f * mz1 + md1;
                            s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                            if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                mx1 = (f32)(y0 - y2) * nz - (f32)(z0 - z2) * ny;
                                my1 = nx * (f32)(z0 - z2) - (f32)(x0 - x2) * nz;
                                mz1 = (f32)(x0 - x2) * ny - (f32)(y0 - y2) * nx;
                                md1 = -(mx1 * x2f + my1 * y2f + z2f * mz1);
                                s1 = mx1 * x1f + my1 * y1f + z1f * mz1 + md1;
                                s2 = mx1 * tx + my1 * ty + mz1 * tz + md1 * den;
                                if ((s1 <= 0.0f && s2 >= 0.0f) || (s1 >= 0.0f && s2 <= 0.0f)) {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        }
    }
    return 0;
}
#undef x0
#undef y0
#undef z0
#undef x1
#undef y1
#undef z1
#undef x2
#undef y2
#undef z2
#undef x0f
#undef y0f
#undef z0f
#undef x1f
#undef y1f
#undef z1f
#undef x2f
#undef y2f
#undef z2f
#undef ax
#undef ay
#undef az
#undef bx
#undef by
#undef bz
#undef e1x
#undef e1y
#undef e1z
#undef e2x
#undef e2y
#undef e2z

