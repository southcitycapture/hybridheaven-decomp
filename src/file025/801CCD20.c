#include "common.h"

extern f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2);
extern f64 D_801DD3F0;
extern f64 D_801DD3F8;
extern f64 func_80034C24(u64);
extern s32 D_801DAB20;
extern s32 D_801DABB8;
extern s32 D_801DABBC;
extern s32 D_801E0C38;
extern s32 func_801BF968();
extern s32 func_801C0DE4(s32);
extern s8 D_801E0BD0[][16];
extern s8 D_801E0BD1[][16];
extern s8 D_801E0BD2[][16];
extern u64 func_801C0F18();
extern u8 D_801BBBF0[];
extern u8 D_801DAB88[];
extern u8 D_801E0CF8[];
extern void func_800058DC(s32, void *);
extern void func_801BF6C4(s32);
extern void func_801C0D04(s32, s32);
extern void func_801C0EB0();
extern void func_801CCD60();
extern void func_801CCDAC(s32 arg0, s32 arg1);
extern void func_801CCE50(u8 arg0, u8 arg1, u8 arg2);
#define func_801CCF48 func_801CCF48__decl
extern void func_801CCF48();
extern void func_801CD71C();
#define func_801CD804 func_801CD804__decl
extern void func_801CD804();
#define func_801CD8D0 func_801CD8D0__decl
extern void func_801CD8D0();

#define func_801CCD60 func_801CCD60__func_801CCD20

extern void func_801CCD60();

void func_801CCD20(s32 arg0) {
    D_801E0C38 = 0;
    func_801CCF48();
    func_801BF6C4(1);
    func_800058DC(arg0, func_801CCD60);
}
#undef func_801CCD60

#define func_801CCDAC func_801CCDAC__func_801CCD60
void func_801CCDAC(s32 arg0, s32 arg1);


void func_801CCD60(s32 arg0, s32 arg1) {
    D_801E0C38 = 1;
    func_801CD71C();
    if (func_801BF968() != 0) {
        func_800058DC(arg0, &func_801CCDAC);
    }
}
#undef func_801CCDAC


extern void func_801BF850(void *a, s32 b, void *c);

void func_801CCDAC(s32 arg0, s32 arg1) {
    D_801DABB8 = arg0;
    D_801DABBC = arg1;
    func_801BF850(D_801DAB88, 1, D_801E0CF8);
    func_801CD804();
    func_801CD8D0();
}



s32 func_801CCE00(void) {
    return D_801E0C38;
}



s32 func_801CCE0C(s32 arg0) {
    if (arg0 >= 6) {
        D_801DAB20 = 4;
        return 0;
    }
    if (arg0 < 0) {
        D_801DAB20 = 0;
        return 0;
    }
    D_801DAB20 = arg0;
    return 1;
}


typedef struct func_801CCE50_Struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
} func_801CCE50_Struct;

extern func_801CCE50_Struct D_801E0BC0;

void func_801CCE50(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0BC0.unk0 = arg0;
    D_801E0BC0.unk1 = arg1;
    D_801E0BC0.unk2 = arg2;
    D_801E0BC0.unk3 = 0;
    D_801E0BC0.unk4 = arg0;
    D_801E0BC0.unk5 = arg1;
    D_801E0BC0.unk6 = arg2;
    D_801E0BC0.unk7 = 0;
}


void func_801CCE88(s32 arg0, u8 arg1, u8 arg2, u8 arg3) {
    u8 *temp_v0;

    temp_v0 = (u8 *)&D_801E0BC0 + arg0 * 0x10;
    temp_v0[8] = arg1;
    temp_v0[9] = arg2;
    temp_v0[10] = arg3;
    temp_v0[11] = 0;
    temp_v0[12] = arg1;
    temp_v0[13] = arg2;
    temp_v0[14] = arg3;
    temp_v0[15] = 0;
}


void func_801CCEC8(s32 arg0, s8 arg1, s8 arg2, s8 arg3) {
    u8 *temp_v0;

    if (arg1 == -0x80) {
        arg1 = 0x7F;
    }
    if (arg2 == -0x80) {
        arg2 = 0x7F;
    }
    if (arg3 == -0x80) {
        arg3 = 0x7F;
    }
    if (arg1 == 0) {
        arg1 = 1;
    }
    temp_v0 = (u8 *) &D_801E0BC0 + arg0 * 16;
    if (arg2 == 0) {
        arg2 = 1;
    }
    if (arg3 == 0) {
        arg3 = 1;
    }
    temp_v0[0x10] = arg1;
    temp_v0[0x11] = arg2;
    temp_v0[0x12] = arg3;
    temp_v0[0x13] = 0;
}

#undef func_801CCF48
#define D_801DAB28 D_801DAB28__func_801CCF48
#define D_801DAB80 D_801DAB80__func_801CCF48
#define D_801DABA8 D_801DABA8__func_801CCF48
#define D_801DD3B0 D_801DD3B0__func_801CCF48
#define func_80005E44 func_80005E44__func_801CCF48
#define func_80006214 func_80006214__func_801CCF48
#define func_801CD8D0 func_801CD8D0_ctx2
typedef struct func_801CD8D0_StructGfx {
    u32 w0;
    u32 w1;
} func_801CD8D0_StructGfx;
extern func_801CD8D0_StructGfx *D_801DAB80;
extern func_801CD8D0_StructGfx D_801DD3B0[];
#undef func_801CD8D0
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern u8 D_801DAB28[];
extern u8 D_801DABA8[];
typedef struct func_801CCF48_S { u8 pad[0x30]; struct func_801CCF48_S *p30; } func_801CCF48_S;
s32 func_801CCF48(s32 arg0, func_801CCF48_S **arg1) {
    s32 i;
    func_80005E44(arg0, D_801DABA8);
    func_80006214(arg0);
    D_801DAB20 = 1;
    *D_801DAB80 = D_801DD3B0[D_801DAB20];
    func_801CCE50(0, 0, 0);
    for (i = 0; i != 5; i++) {
        func_801CCE88(i, 0, 0, 0);
        func_801CCEC8(i, 0, 0, 0);
    }
    *(u32 *)((u8 *)(*arg1)->p30 + 0x30) = (u32)D_801DAB28 | 0x40000000;
    *(u32 *)((u8 *)(*arg1)->p30 + 0x28) = 0;
    return 1;
}
#undef D_801DAB28
#undef D_801DAB80
#undef D_801DABA8
#undef D_801DD3B0
#undef func_80005E44
#undef func_80006214
#define func_801CCF48 func_801CCF48__decl


s32 func_801CD03C(void) {
    return 0x1;
}



void func_801CD044(void) {
    D_801BBBF0[0xF20] = 0;
    D_801BBBF0[0xF21] = 0;
    D_801BBBF0[0xF22] = 0;
    D_801BBBF0[0xF23] = 0;
    D_801BBBF0[0xF24] = 0;
    D_801BBBF0[0xF25] = 0;
    D_801BBBF0[0xF29] = 0;
    D_801BBBF0[0xF2A] = 0;
    D_801BBBF0[0xF2B] = 0;
}

#define func_801C0D04 func_801C0D04__func_801CD074

extern void func_801C0D04(s32 arg0, s32 arg1);

void func_801CD074(s32 arg0) {
    func_801C0D04(1, arg0);
}
#undef func_801C0D04

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/D_801DD310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/D_801DD330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/D_801DD3B0.s")



s32 func_801CD098(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11, f32 arg12, f32 arg13, f32 arg14)
{
  u8 pad[16];
  u8 sp27;
  u8 sp26;
  u8 sp25;
  s8 sp24;
  s8 sp23;
  s8 sp22;
  f32 temp_fs0;
  u64 temp_ret;
  if (1)
  {
    if (func_801C0DE4(1) != 0)
    {
      func_801C0EB0(1, arg1);
      return 1;
    }
    temp_ret = func_801C0F18(1, arg1);
    temp_fs0 = ((f32) (func_80034C24(temp_ret) / 1000000.0)) / arg2;
    sp27 = (u8) ((u32) func_801CDBD4(arg3, arg6, temp_fs0));
    sp26 = (u8) ((u32) func_801CDBD4(arg4, arg7, temp_fs0));
    sp25 = (u8) ((u32) func_801CDBD4(arg5, arg8, temp_fs0));
    sp24 = (s8) ((s32) func_801CDBD4(arg9, arg12, temp_fs0));
    sp23 = (s8) ((s32) func_801CDBD4(arg10, arg13, temp_fs0));
    sp22 = (s8) ((s32) func_801CDBD4(arg11, arg14, temp_fs0));
    func_801CCE88(arg0, sp27, sp26, sp25);
    func_801CCEC8(arg0, sp24, sp23, sp22);
    return 0;
  }
}



void func_801CD354(void) {
    func_801C0D04(1, 0x56D8);
}

#define func_80034C24 func_80034C24__func_801CD378
#define func_801C0DE4 func_801C0DE4__func_801CD378
#define func_801C0EB0 func_801C0EB0__func_801CD378
#define func_801C0F18 func_801C0F18__func_801CD378
#define func_801CCE50 func_801CCE50__func_801CD378
#define func_801CDBD4 func_801CDBD4__func_801CD378

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);

f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2);
void func_801CCE50(u8 arg0, u8 arg1, u8 arg2);

s32 func_801CD378(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    u8 pad[12];
    f32 sp20;
    u8 sp1F;
    u8 sp1E;

    if (func_801C0DE4(1, 0x56D8, arg0) != 0) {
        func_801C0EB0(1, 0x56D8);
        return 1;
    }
    sp20 = (f32)(func_80034C24(func_801C0F18(1, 0x56D8)) / 1000000.0) / arg0;
    sp1F = (u32)func_801CDBD4(arg1, arg4, sp20);
    sp1E = (u32)func_801CDBD4(arg2, arg5, sp20);
    func_801CCE50(sp1F, sp1E, (u32)func_801CDBD4(arg3, arg6, sp20));
    return 0;
}
#undef func_80034C24
#undef func_801C0DE4
#undef func_801C0EB0
#undef func_801C0F18
#undef func_801CCE50
#undef func_801CDBD4


typedef struct func_801CD5C8_Struct {
    s32 f[3];
    s8 b0;
    u8 pad0[3];
    s32 v0;
    s8 b1;
    u8 pad1[3];
    s32 v1;
    s8 b2;
    u8 pad2[3];
    s32 v2;
} func_801CD5C8_Struct;
extern func_801CD5C8_Struct D_801E0C40[];
s32 func_801CD5C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        if (arg2 & 1) {
            D_801E0C40[arg0].f[0] = 1;
            D_801E0C40[arg0].b0 = D_801E0BD0[arg0][0];
            D_801E0C40[arg0].v0 = arg3;
            goto end;
        }
        if (arg2 & 2) {
            D_801E0C40[arg0].f[1] = 1;
            D_801E0C40[arg0].b1 = D_801E0BD1[arg0][0];
            D_801E0C40[arg0].v1 = arg3;
            goto end;
        }
        if (arg2 & 4) {
            D_801E0C40[arg0].f[2] = 1;
            D_801E0C40[arg0].b2 = D_801E0BD2[arg0][0];
            D_801E0C40[arg0].v2 = arg3;
            goto end;
        }
        goto end;
    }
    if (arg2 & 1) {
        D_801E0C40[arg0].f[0] = 0;
    } else if (arg2 & 2) {
        D_801E0C40[arg0].f[1] = 0;
    } else if (arg2 & 4) {
        D_801E0C40[arg0].f[2] = 0;
    }
end:
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801CCD20/func_801CD71C.s")

#undef func_801CD804
#define func_801CD8D0 func_801CD8D0_ren

typedef struct func_801CD804_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s8 unkC;
    u8 padD[6];
    s8 unk13;
    s8 unk14;
    u8 pad15[6];
    s8 unk1B;
    s8 unk1C;
    u8 pad1D[6];
    s8 unk23;
} func_801CD804_Struct;

s32 func_801CD804(void) {
    func_801CD804_Struct *p;
    s32 i;
    s32 changed;

    p = (func_801CD804_Struct *)D_801E0C40;
    i = 0;
    do {
        changed = 0;
        if (p->unk0 != 0) {
            changed = 1;
            p->unkC = (s8)(p->unkC + p->unk13);
        }
        if (p->unk4 != 0) {
            changed = 1;
            p->unk14 = (s8)(p->unk14 + p->unk1B);
        }
        if (p->unk8 != 0) {
            changed = 1;
            p->unk1C = (s8)(p->unk1C + p->unk23);
        }
        if (changed != 0) {
            func_801CCEC8(i, p->unkC, p->unk14, p->unk1C);
        }
        i++;
        p++;
    } while (i != 5);
    return 1;
}
#undef func_801CD8D0
#define func_801CD804 func_801CD804__decl

#undef func_801CD8D0
#define D_801DAB80 D_801DAB80__func_801CD8D0
#define D_801DAB84 D_801DAB84__func_801CD8D0
#define D_801DD3B0 D_801DD3B0__func_801CD8D0
#define func_801CD8D0_StructGfx func_801CD8D0_StructGfx__func_801CD8D0

typedef struct func_801CD8D0_StructGfx {
    u32 w0;
    u32 w1;
} func_801CD8D0_StructGfx;

extern func_801CD8D0_StructGfx *D_801DAB80;
extern func_801CD8D0_StructGfx *D_801DAB84;
extern func_801CD8D0_StructGfx D_801DD3B0[];

#define SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define LIGHT(pkt, l, n)                                                      \
    {                                                                         \
        func_801CD8D0_StructGfx *_g = (func_801CD8D0_StructGfx *)(pkt);       \
        _g->w0 = SHIFTL(0xDC, 24, 8) | SHIFTL((16 - 1) / 8, 19, 5) |          \
                 SHIFTL(((n) * 24 + 24) / 8, 8, 8) | SHIFTL(10, 0, 8);         \
        _g->w1 = (unsigned int)(l);                                           \
    }

s32 func_801CD8D0(void) {
    s32 i;
    s32 count;

    *D_801DAB80 = D_801DD3B0[D_801DAB20];
    count = (D_801DAB20 == 0) ? 1 : D_801DAB20;
    for (i = 0; i < count; i++) {
        LIGHT(&D_801DAB84[i], (u8 *)&D_801E0BC0 + i * 16 + 8, i + 1);
    }
    LIGHT(&D_801DAB84[i++], &D_801E0BC0, count + 1);
    {
        func_801CD8D0_StructGfx *_g = &D_801DAB84[i];
        _g->w0 = 0xDF000000;
        _g->w1 = 0;
    }
    return 1;
}
#undef SHIFTL
#undef LIGHT
#undef D_801DAB80
#undef D_801DAB84
#undef D_801DD3B0
#undef func_801CD8D0_StructGfx
#define func_801CD8D0 func_801CD8D0__decl


void func_801CDB88(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_801CCD60 func_801CCD60__func_801CDB94
extern void func_801CCD60();

void func_801CDB94(s32 arg0, s32 arg1) {
    s32 temp = D_801DABB8;

    func_800058DC(temp, (void *) func_801CCD60);
}
#undef func_801CCD60


void func_801CDBC8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


f32 func_801CDBD4(f32 arg0, f32 arg1, f32 arg2) {
    return ((arg1 - arg0) * arg2) + arg0;
}

