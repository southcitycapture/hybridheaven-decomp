#include "common.h"


extern f32 func_8002FC20(f32, f32);

s8 func_80119C20(void *a0, void *a1, void *a2, s32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 temp_fv1;
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_fv0;

    temp_fv1 = *(f32 *)&arg3 - *(f32 *)a0;
    temp_fa1 = arg4 - *(f32 *)a1;
    temp_ft4 = arg5 - *(f32 *)a2;
    temp_fv0 = func_8002FC20((temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4), temp_fa1);
    if ((temp_fv0 * arg6) == 0.0f) {
        return 0;
    }
    if (arg6 < temp_fv0) {
        *(f32 *)a0 += (temp_fv1 / temp_fv0) * arg6;
        *(f32 *)a1 += (temp_fa1 / temp_fv0) * arg6;
        *(f32 *)a2 += (temp_ft4 / temp_fv0) * arg6;
        return 1;
    }
    *(f32 *)a0 = *(f32 *)&arg3;
    *(f32 *)a1 = arg4;
    *(f32 *)a2 = arg5;
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_80119D38.s")


void func_80119F9C(s16 *arg0, s16 *arg1);
extern void func_8011A06C(s16, s16, s32, s32, f32, s32);
void func_8011A148(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5);

s8 func_80119E24(void *arg0, void *arg1, void *arg2, s16 arg3, s32 arg4) {
    s16 sp36;
    s16 sp34;
    s16 t;
    s16 sp30;
    s32 v;
    s32 a;
    s32 b;

    func_80119F9C(&sp36, &sp34);
    func_8011A06C(sp36, sp34, *(s32 *)arg0, *(s32 *)arg1, *(f32 *)arg2, (s32)&sp30);
    t = arg3 - sp30;
    if (t & 0x1000) {
        v = (s16)((t & 0x1FFF) - 0x2000);
    } else {
        v = (s16)(t & 0x1FFF);
    }
    if (((s16)arg4 * v) < 0) {
        b = (v < 0) ? -v : v;
        v = (s16)((s16)(0x2000 - b) & 0x1FFF);
    }
    if ((s16)arg4 == 0) {
        return 0;
    }
    a = (v < 0) ? -v : v;
    b = ((s16)arg4 < 0) ? -(s16)arg4 : (s16)arg4;
    if (a > b) {
        sp30 = sp30 + (s16)arg4;
        func_8011A148(sp36, sp34, sp30, arg0, arg1, arg2);
        return 1;
    }
    sp30 = arg3 & 0x1FFF;
    func_8011A148(sp36, sp34, sp30, arg0, arg1, arg2);
    return 0;
}

typedef struct func_8011A0F0_StructB {
    u8 pad0[0x48];
    s32 unk48;
    s32 unk4C;
    f32 unk50;
} func_8011A0F0_StructB;
typedef struct func_8011A0F0_StructA {
    u8 pad0[0x2C];
    func_8011A0F0_StructB *unk2C;
} func_8011A0F0_StructA;
s16 func_8001EF38(f32, f32);                        /* extern */

typedef struct func_80119F9C_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80119F9C_Inner;

typedef struct func_80119F9C_Outer {
    u8 pad0[0x2C];
    func_80119F9C_Inner *unk2C;
} func_80119F9C_Outer;

extern struct func_8011A0F0_StructA *D_801BBCD8;

void func_80119F9C(s16 *arg0, s16 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 len;

    x = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk3C - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk30;
    y = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk40 - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk34;
    z = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk44 - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk38;
    len = func_8002FC20((x * x) + (z * z), x);
    *arg0 = func_8001EF38(z, x) & 0x1FFF;
    if (func_8001EF38(y, len) & 0x1000) {
        *arg1 = (func_8001EF38(y, len) & 0x1FFF) - 0x2000;
    } else {
        *arg1 = func_8001EF38(y, len) & 0x1FFF;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A06C.s")





void func_8011A0F0(s32 arg0) {
    s16 sp26;
    s16 sp24;
    func_8011A0F0_StructB *temp_v0;

    func_80119F9C(&sp26, &sp24);
    temp_v0 = D_801BBCD8->unk2C;
    func_8011A06C(sp26, sp24, temp_v0->unk48, temp_v0->unk4C, temp_v0->unk50, arg0);
}


f32 func_8001EAD0(s16);                             /* extern */
f32 func_8001EB64(s16);                             /* extern */
void func_80130C40(s16, f32 *, f32 *);              /* extern */

void func_8011A148(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    *arg3 = 0.0f;
    *arg4 = func_8001EB64(arg2);
    *arg5 = func_8001EAD0(arg2);
    func_80130C40(arg1, arg3, arg4);
    func_80130C40(arg0, arg3, arg5);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A1B8.s")

typedef struct func_8011A7FC_StructInner {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[0x4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[0x4];
    f32 unk44;
} func_8011A7FC_StructInner;
typedef struct func_8011A7FC_StructOuter {
    u8 pad0[0x2C];
    func_8011A7FC_StructInner *unk2C;
} func_8011A7FC_StructOuter;
typedef struct func_8011A7FC_Struct {
    u8 pad0[0xE8];
    func_8011A7FC_StructOuter *unkE8;
    u8 pad1[0x232 - 0xEC];
    s16 unk232;
    u8 pad2[0x254 - 0x234];
    u8 unk254;
    u8 unk255;
    u8 unk256;
    u8 pad3[0x2AD - 0x257];
    u8 unk2AD;
    u8 pad4[0x2B0 - 0x2AE];
    s32 unk2B0;
    u8 unk2B4;
    u8 unk2B5;
} func_8011A7FC_Struct;
extern func_8011A7FC_Struct D_801BBBF0;

extern f64 D_80189E88;

typedef struct func_8011A2D8_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
} func_8011A2D8_StructInner;

s32 func_8011A2D8(u8 arg0) {
    f32 temp_fv0;
    f64 temp_fv1;

    temp_fv0 = ((f32 *) &D_801BBBF0)[arg0 + 0xC3];
    temp_fv1 = (f64) temp_fv0;
    if ((temp_fv1 > 0.0) && (temp_fv1 < D_80189E88)) {
        ((func_8011A2D8_StructInner *) D_801BBBF0.unkE8->unk2C)->unk1C = temp_fv0;
        return 0;
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A348.s")


typedef struct func_8011A3D4_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8011A3D4_Inner;
typedef struct func_8011A3D4_Mid {
    u8 pad0[0x2C];
    func_8011A3D4_Inner *unk2C;
} func_8011A3D4_Mid;
typedef struct func_8011A3D4_Struct {
    u8 pad0[0xE8];
    func_8011A3D4_Mid *unkE8;
    u8 pad1[0x2B8 - 0xEC];
    f32 unk2B8;
    u8 pad2[0x2C0 - 0x2BC];
    s32 unk2C0;
    u8 pad3[0x2CC - 0x2C4];
    f32 unk2CC;
    u8 pad4[0x2D8 - 0x2D0];
    f32 unk2D8;
    u8 pad5[0x2E0 - 0x2DC];
    f32 unk2E0;
    u8 pad6[0x2E8 - 0x2E4];
    s32 unk2E8;
    u8 pad7[0x2F4 - 0x2EC];
    f32 unk2F4;
    u8 pad8[0x300 - 0x2F8];
    f32 unk300;
    u8 pad9[0x308 - 0x304];
    s32 unk308;
    u8 pad10[0x310 - 0x30C];
    s32 unk310;
    u8 pad11[0x318 - 0x314];
    s16 unk318;
    u8 padx[2];
    s16 unk31C;
    u8 pad12[0x324 - 0x31E];
    f32 unk324;
} func_8011A3D4_Struct;

extern s8 func_80119D38(void *, s32, s32);
extern f32 D_80163EE0;
#define g ((func_8011A3D4_Struct *)&D_801BBBF0)

s32 func_8011A3D4(void) {
    s8 sp47;
    s8 sp46;
    s8 sp45;
    s8 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3E;

    sp44 = 0;
    g->unkE8->unk2C->unk34 = g->unkE8->unk2C->unk34 - D_80163EE0;
    g->unkE8->unk2C->unk40 = g->unkE8->unk2C->unk40 - D_80163EE0;
    func_8011A0F0((s32)&sp3E);
    sp47 = func_80119C20(&g->unkE8->unk2C->unk30, &g->unkE8->unk2C->unk34, &g->unkE8->unk2C->unk38, g->unk2C0, g->unk2CC, g->unk2D8, g->unk2B8);
    sp46 = func_80119C20(&g->unkE8->unk2C->unk3C, &g->unkE8->unk2C->unk40, &g->unkE8->unk2C->unk44, g->unk2E8, g->unk2F4, g->unk300, g->unk2E0);
    sp45 = func_80119D38((u8 *)g->unkE8->unk2C + 0x1C, g->unk310, g->unk308);
    func_80119F9C(&sp42, &sp40);
    func_8011A148(sp42, sp40, sp3E, (f32 *)((u8 *)g->unkE8->unk2C + 0x48), (f32 *)((u8 *)g->unkE8->unk2C + 0x4C), (f32 *)((u8 *)g->unkE8->unk2C + 0x50));
    if ((g->unk318 != -1) && (g->unk31C != -1)) {
        sp44 = func_80119E24((u8 *)g->unkE8->unk2C + 0x48, (u8 *)g->unkE8->unk2C + 0x4C, (u8 *)g->unkE8->unk2C + 0x50, g->unk31C, g->unk318);
    }
    g->unkE8->unk2C->unk34 = g->unkE8->unk2C->unk34 + g->unk324;
    g->unkE8->unk2C->unk40 = g->unkE8->unk2C->unk40 + g->unk324;
    D_80163EE0 = g->unk324;
    g->unk324 = 0.0f;
    return (s8)(sp47 | sp46 | sp45 | sp44);
}


typedef struct func_8011A5A4_Inner {
    u8 pad0[0x1C];
    f32 unk1C;
    u8 pad1[0x10];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44, unk48, unk4C, unk50;
} func_8011A5A4_Inner;
typedef struct func_8011A5A4_Mid {
    u8 pad0[0x2C];
    func_8011A5A4_Inner *unk2C;
} func_8011A5A4_Mid;
typedef struct func_8011A5A4_Struct {
    u8 pad0[0xE8];
    func_8011A5A4_Mid *unkE8;
    u8 pad1[0x2B8 - 0xEC];
    f32 unk2B8;
    u8 pad2[4];
    s32 unk2C0;
    u8 pad3[0x2CC - 0x2C4];
    f32 unk2CC;
    u8 pad4[0x2D8 - 0x2D0];
    f32 unk2D8;
    u8 pad5[0x2E0 - 0x2DC];
    f32 unk2E0;
    u8 pad6[4];
    s32 unk2E8;
    u8 pad7[0x2F4 - 0x2EC];
    f32 unk2F4;
    u8 pad8[0x300 - 0x2F8];
    f32 unk300;
    u8 pad9[4];
    s32 unk308;
    u8 padA[4];
    s32 unk310;
    u8 padB[4];
    s16 unk318;
    s16 unk31A;
    s16 unk31C;
} func_8011A5A4_Struct;


#define g ((func_8011A5A4_Struct *)&D_801BBBF0)
s8 func_8011A5A4(void) {
    s8 a, b, c, d;
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8, f9;

    d = 0;
    f0 = g->unkE8->unk2C->unk30;
    f1 = g->unkE8->unk2C->unk34;
    f2 = g->unkE8->unk2C->unk38;
    a = func_80119C20(&f0, &f1, &f2, g->unk2C0, g->unk2CC, g->unk2D8, g->unk2B8);
    f3 = g->unkE8->unk2C->unk3C;
    f4 = g->unkE8->unk2C->unk40;
    f5 = g->unkE8->unk2C->unk44;
    b = func_80119C20(&f3, &f4, &f5, g->unk2E8, g->unk2F4, g->unk300, g->unk2E0);
    f6 = g->unkE8->unk2C->unk1C;
    c = func_80119D38(&f6, g->unk310, g->unk308);
    if (g->unk318 != -1 && g->unk31C != -1) {
        f7 = g->unkE8->unk2C->unk48;
        f8 = g->unkE8->unk2C->unk4C;
        f9 = g->unkE8->unk2C->unk50;
        d = func_80119E24(&f7, &f8, &f9, g->unk31C, g->unk318);
    }
    return a | b | c | d;
}


struct func_8011A724_Obj {
    u8 pad0[0x34];
    f32 unk34;
    u8 pad1[0x40 - 0x38];
    f32 unk40;
};

struct func_8011A724_Mid {
    u8 pad0[0x2C];
    struct func_8011A724_Obj *unk2C;
};

struct func_8011A724_Struct {
    u8 pad0[0xE8];
    struct func_8011A724_Mid *unkE8;
    u8 pad1[0x31A - 0xEC];
    s16 unk31A[5];
    f32 unk324;
};

void func_8011A1B8(u8);
void func_8011A348(u8);

void func_8011A724(u8 arg0) {
    s16 sp36;
    s16 sp34;
    s16 sp32;

    func_8011A0F0((s32) &sp32);
    func_8011A1B8(arg0);
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk34 = ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk34 + ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324;
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk40 = ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk40 + ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324;
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324 = 0.0f;
    func_8011A2D8(arg0);
    func_80119F9C(&sp36, &sp34);
    func_8011A148(sp36, sp34, sp32,
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x48),
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x4C),
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x50));
    if (((struct func_8011A724_Struct *) &D_801BBBF0)->unk31A[arg0] != -1) {
        func_8011A348(arg0);
    }
}






void func_8011A7FC(void) {
    func_8011A7FC_StructInner *temp_v0;

    D_801BBBF0.unk2AD = 0;
    D_801BBBF0.unk2B5 = 0;
    D_801BBBF0.unk2B0 = 0;
    if ((D_801BBBF0.unk254 == 0) && (D_801BBBF0.unk255 == 0) && (D_801BBBF0.unk256 == 0)) {
        temp_v0 = D_801BBBF0.unkE8->unk2C;
        D_801BBBF0.unk232 = func_8001EF38(temp_v0->unk44 - temp_v0->unk38, temp_v0->unk3C - temp_v0->unk30);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011A878.s")


extern void func_800058DC(s32, s32);
extern void func_8011AA88(s32, s32);

void func_8011AA0C(s32 arg0, s32 arg1, s32 arg2) {
    if (func_8011A3D4() != 0) {
        func_800058DC(arg0, arg1);
        return;
    }
    func_8011AA88(arg0, arg2);
}



void func_8011AA54(s32 arg0, s32 arg1) {
    if (func_8011A3D4() == 0) {
        func_8011AA88(arg0, arg1);
    }
}


void func_8011AA88(s32 arg0, s32 arg1) {
    func_8011A7FC_StructInner *temp_v0;

    D_801BBBF0.unk2AD = 0;
    D_801BBBF0.unk2B5 = 0;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    D_801BBBF0.unk232 = func_8001EF38(temp_v0->unk44 - temp_v0->unk38, temp_v0->unk3C - temp_v0->unk30);
    func_800058DC(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011AAF4.s")


extern s8 D_801BBE8A;

s8 func_8011B254(void) {
    return D_801BBE8A;
}


s32 func_8011B260(void) {
    if (D_801BBBF0.unk254 == 2 && D_801BBBF0.unk255 == 8 && D_801BBBF0.unk256 == 1) {
        return 0;
    }
    return D_801BBBF0.unk256 + (D_801BBBF0.unk254 * 0x2710) + (D_801BBBF0.unk255 * 0x64);
}

typedef struct func_8011B2E4_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_8011B2E4_StructC;
typedef struct func_8011B2E4_StructB { u8 pad0[0x2C]; func_8011B2E4_StructC *unk2C; } func_8011B2E4_StructB;
typedef struct func_8011B2E4_Struct {
    u8 pad0[0xE0]; func_8011B2E4_StructB *unkE0;
    u8 pad1[0x198-0xE4]; f32 unk198;
    u8 pad2[4]; f32 unk1A0;
    u8 pad3[0x334-0x1A4]; f32 unk334; f32 unk338; f32 unk33C;
    u8 pad4[0x380-0x340]; f32 unk380; f32 unk384; f32 unk388;
} func_8011B2E4_Struct;
extern void func_8010843C(f32, f32, f32, f32, f32, f32);
#define P ((func_8011B2E4_Struct *)&D_801BBBF0)
void func_8011B2E4(void) {
    s16 a;
    u8 pad[4];
    f32 c;
    f32 y;
    f32 d;
    a = func_8001EF38(P->unk1A0 - P->unkE0->unk2C->unkC, P->unk198 - P->unkE0->unk2C->unk4);
    c = func_8001EB64(a);
    d = func_8001EAD0(a);
    y = P->unkE0->unk2C->unk8 + 18.0;
    func_8010843C(P->unk198, y, P->unk1A0, P->unk198 - c * 100.0, y, P->unk1A0 - d * 100.0);
    P->unk334 = P->unk380;
    P->unk338 = P->unk384;
    P->unk33C = P->unk388;
}


extern void func_8011B474(s16, f32, f32, f32 *, f32 *);

void func_8011B3D8(s16 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    f32 sp2C;
    f32 sp28;
    s16 sp26;
    s16 temp_a0;

    sp26 = arg0 - 0x800;
    func_8011B474(sp26, arg1, arg2, &sp2C, &sp28);
    temp_a0 = -sp26;
    func_8011B474(temp_a0, 0.0f, sp28, arg3, arg4);
    func_8011B474(temp_a0, sp2C, 0.0f, arg5, arg6);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011B520.s")


typedef struct func_8011B7A0_C { u8 pad0[4]; f32 unk4; } func_8011B7A0_C;
typedef struct func_8011B7A0_B { u8 pad0[0x2C]; func_8011B7A0_C *unk2C; } func_8011B7A0_B;
typedef struct func_8011B7A0_F {
    u8 pad0[1]; u8 unk1; u8 unk2; u8 pad3; f32 unk4, unk8, unkC, unk10, unk14, unk18, unk1C, unk20, unk24, unk28;
} func_8011B7A0_F;
typedef struct func_8011B7A0_O {
    u8 pad0[0x14]; func_8011B7A0_F *unk14; u8 unk18; u8 unk19;
} func_8011B7A0_O;
typedef struct func_8011B7A0_G {
    u8 pad0[0xE0]; func_8011B7A0_B *unkE0;
    u8 pad1[0x234 - 0xE4]; u8 unk234;
    u8 pad2[0x254 - 0x235]; u8 unk254, unk255, unk256;
    u8 pad3[0x2AC - 0x257]; u8 unk2AC;
} func_8011B7A0_G;
typedef struct func_8011B7A0_N { u8 pad0[0x19]; u8 unk19; } func_8011B7A0_N;
typedef struct func_8011B7A0_M { u8 pad0[0xC]; func_8011B7A0_N *unkC; } func_8011B7A0_M;
typedef struct func_8011B7A0_L { u8 pad0[4]; func_8011B7A0_N *unk4; } func_8011B7A0_L;
typedef struct func_8011B7A0_K { struct func_8011B7A0_K *unk0; func_8011B7A0_N *unk4; u8 pad8[4]; func_8011B7A0_N *unkC; u8 pad10[0xC]; func_8011B7A0_M *unk1C; } func_8011B7A0_K;
typedef struct func_8011B7A0_P {
    u8 pad0[8]; func_8011B7A0_K **unk8; func_8011B7A0_K *unkC; func_8011B7A0_K **unk10;
} func_8011B7A0_P;

extern s32 func_8011AAF4(void *, s32, s32, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80189EDC[];
extern func_8011B7A0_O *D_801BBBC4;
extern func_8011B7A0_P D_80164DAC;
extern u8 func_8011B520[];
#define G ((func_8011B7A0_G *)&D_801BBBF0)

void func_8011B7A0(s32 arg0, s32 arg1) {
    func_8011B7A0_F *f;

    if ((G->unk254 == 4) && (G->unk255 == 8) && (G->unk256 == 1)) {
        D_801BBBC4->unk14->unk8 = G->unkE0->unk2C->unk4;
        D_801BBBC4->unk14->unk18 = G->unkE0->unk2C->unk4;
    }
    f = D_801BBBC4->unk14;
    if (!(func_8011AAF4(D_80189EDC, 0x113, arg0, f->unk1, f->unk2, f->unk4, f->unk8, f->unkC, f->unk10, f->unk14, f->unk18, f->unk1C, f->unk20, f->unk24, f->unk28, -1, -1) & 0xFF)) {
        if ((G->unk254 == 3) && (G->unk255 == 1) && (G->unk256 == 1)) {
            (*D_80164DAC.unk8)->unk4->unk19 = 0;
        }
        if ((G->unk254 == 4) && (G->unk255 == 1) && (G->unk256 == 3)) {
            D_80164DAC.unkC->unk0->unkC->unk19 = 0;
        }
        if ((G->unk254 == 4) && (G->unk255 == 8) && (G->unk256 == 3)) {
            D_80164DAC.unkC->unk1C->unkC->unk19 = 0;
        }
        if ((G->unk254 == 5) && (G->unk255 == 1) && (G->unk256 == 1)) {
            (*D_80164DAC.unk10)->unk4->unk19 = 0;
        }
        if (D_801BBBC4->unk18 == 2) {
            D_801BBBC4->unk19 = 1;
            if (D_801BBBC4->unk14->unk1 == 2) {
                G->unk254 = 0;
                G->unk255 = 0;
                G->unk256 = 0;
            }
        }
        G->unk234 = 0x1E;
        G->unk2AC = 2;
        func_800058DC(arg0, (s32)func_8011B520);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80119C20/func_8011BA18.s")

#define func_8002FC20 func_8002FC20__func_8011BAEC

typedef struct func_8011BAEC_StructC {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8011BAEC_StructC;
typedef struct func_8011BAEC_StructB {
    u8 pad0[0x24];
    s32 unk24;
} func_8011BAEC_StructB;
typedef struct func_8011BAEC_StructD {
    u8 pad0[0x2C];
    func_8011BAEC_StructC *unk2C;
} func_8011BAEC_StructD;
typedef struct func_8011BAEC_Struct {
    u8 pad0[0x40];
    func_8011BAEC_StructB *unk40;
    u8 pad1[0xE0 - 0x44];
    func_8011BAEC_StructD *unkE0;
    u8 pad2[0xF5 - 0xE4];
    u8 unkF5;
} func_8011BAEC_Struct;

extern f32 func_8002FC20(f32);
extern s32 D_80164DE4;

s32 func_8011BAEC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
  int new_var;
  f32 dx;
  f32 dz;
  f32 y;
  f32 d;
  new_var = 1;
  if (((func_8011BAEC_Struct *) (&D_801BBBF0))->unk40->unk24 == 0)
  {
    D_80164DE4 += new_var;
    return 0;
 do { } while (0);
  }
  if (((func_8011BAEC_Struct *) (&D_801BBBF0))->unkF5 == 0)
  {
    D_80164DE4 += new_var;
    return 0;
  }
  D_80164DE4 = 0;
  dx = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unk4 - arg0;
  dz = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unkC - arg2;
  if (func_8002FC20((dx * dx) + (dz * dz)) < arg3)
  {
    y = ((func_8011BAEC_Struct *) (&D_801BBBF0))->unkE0->unk2C->unk8;
    if (arg1 < y)
    {
      d = -(arg1 - y);
    }
    else
    {
      d = arg1 - y;
    }
    if (d < arg4)
    {
      return new_var;
    }
  }
  return 0;
}
#undef func_8002FC20

