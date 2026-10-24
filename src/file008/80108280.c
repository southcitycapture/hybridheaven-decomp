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


void func_8010843C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108664;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_80108670(s32 arg0);
s32 func_80108670(s32 arg0);

void func_80108480(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108670;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_801086C4(s32 arg0);
s32 func_801086C4(s32 arg0);

void func_801084C4(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_801086C4;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

#define func_80108718 func_80108718__decl114
s32 func_80108718(s32 arg0);
#define func_80108718 func_80108718__decl115
s32 func_80108718(s32 arg0);

void func_80108508(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108718;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
#undef func_80108718
}
#undef func_80108718

s32 func_8010876C(s32 arg0);
s32 func_8010876C(s32 arg0);

void func_8010854C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_8010876C;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_801087C0(s32 arg0);
s32 func_801087C0(s32 arg0);

void func_80108590(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_801087C0;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
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


extern u8 D_80163530[];

s32 func_80108670(s32 arg0) {
    s32 i;

    if (0) {
        func_8012FF58(&arg0);
    }
    arg0 = (u8)arg0;
    for (i = 0; D_80163530[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163530[i]) {
            return 0;
        }
    }
    return 1;
}


extern u8 D_80163570[];

s32 func_801086C4(s32 arg0) {
    s32 i;

    if (0) {
        func_8012FF58(&arg0);
    }
    arg0 = (u8)arg0;
    for (i = 0; D_80163570[i] != 0xFF; i++) {
        if ((arg0 & 0x3F) == D_80163570[i]) {
            return 0;
        }
    }
    return 1;
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80109560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A6A0.s")

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

s32 func_8010ACF8(func_8010ACF8_StructArg *arg0)
{
    s32 result;
    f32 fa, fb, fc, fd, fe;
    u8 v;
    s16 minX, minY, minZ;
    s16 maxX, maxY, maxZ;
    func_8010ACF8_StructNode *node;
    func_8010ACF8_StructNode *base;
    func_8010ACF8_StructNode *start;

    arg0->distance = 2147483648.0f;
    result = 0;
    while (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        node = arg0->node;
        if (arg0->a[0] < arg0->b[0]) {
            minX = (s16)arg0->a[0];
            maxX = (s16)arg0->b[0];
        } else {
            minX = (s16)arg0->b[0];
            maxX = (s16)arg0->a[0];
        }
        if (arg0->a[1] < arg0->b[1]) {
            minY = (s16)arg0->a[1];
            maxY = (s16)arg0->b[1];
        } else {
            minY = (s16)arg0->b[1];
            maxY = (s16)arg0->a[1];
        }
        if (arg0->a[2] < arg0->b[2]) {
            minZ = (s16)arg0->a[2];
            maxZ = (s16)arg0->b[2];
        } else {
            minZ = (s16)arg0->b[2];
            maxZ = (s16)arg0->a[2];
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
#undef func_80108718
#undef func_80108814


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

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010C21C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010CC68.s")

