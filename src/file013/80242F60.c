#include "common.h"

extern f32 D_80246CA8;
extern f32 D_80249B60;
extern f32 D_80249B64;
extern f64 D_80249B48;
extern f64 D_80249B50;
extern f64 D_80249B58;
extern s32 func_80010550();
extern s32 func_80126CC0(void *, void *);
extern s32 func_8012C6B4();
extern s32 func_8012CE9C();
extern s32 func_80133A24(s32);
extern u8 D_80246C64[];
extern u8 func_80126EAC[];
extern void func_80005700(void *);
extern void func_800058DC(void *, void *);
extern void func_8001F74C(void *);
extern void func_80020744(s32);
extern void func_8012636C(void *, s32);
extern void func_80127014(void);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8013A1B4();
extern void func_8013B570(void *, s32, s32, s32, void *);
extern void func_80242F80(void *, void *);
extern void func_8024310C();
extern void func_802431C4();
extern void func_8024373C();
extern void func_8024388C();
extern void func_80243930();
extern void func_80243A70();


typedef struct func_80242F60_Struct {
    u8 pad0[6];
    u16 unk6;
} func_80242F60_Struct;

void func_80242F60(func_80242F60_Struct *arg0) {
    arg0->unk6 = (u16) (arg0->unk6 | 0x10);
}


void func_80242F70(u8 *arg0) {
    *(u16 *) (arg0 + 0x6) = *(u16 *) (arg0 + 0x6) & 0xFFEF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/80242F60/func_80242F80.s")


typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;

typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;

typedef struct func_80242FD0_StructA {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
} func_80242FD0_StructA;

extern func_80242FD0_StructC *D_801BBCD0;

s32 func_80242FD0(func_80242FD0_StructA *arg0) {
    func_80242FD0_StructB *temp_v0;
    func_80242FD0_StructB *temp_v1;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->unk2C;
    temp_v1 = arg0->unk24->unk2C;
    temp_fv0 = temp_v0->unk4;
    temp_fv1 = temp_v1->unk4;
    if (temp_fv0 < temp_fv1) {
        var_fa0 = -(temp_fv0 - temp_fv1);
    } else {
        var_fa0 = temp_fv0 - temp_fv1;
    }
    if (var_fa0 < 50.0f) {
        temp_fv0 = temp_v0->unkC;
        temp_fv1 = temp_v1->unkC;
        if (temp_fv0 < temp_fv1) {
            var_fa0_2 = -(temp_fv0 - temp_fv1);
        } else {
            var_fa0_2 = temp_fv0 - temp_fv1;
        }
        if (var_fa0_2 < 50.0f) {
            return 1;
        }
    }
    return 0;
}


typedef struct func_80243070_StructB {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[12];
    u32 unk10;
} func_80243070_StructB;

typedef struct func_80243070_StructA {
    u8 pad0[0x38];
    func_80243070_StructB *unk38;
} func_80243070_StructA;


void func_80243070(func_80243070_StructA *arg0, s32 arg1) {
    u32 temp_v1;
    func_80243070_StructB *temp_v0;

    func_8001F74C(arg0);
    if (func_80126CC0(arg0, func_80127014) != 0) {
        temp_v0 = arg0->unk38;
        if (temp_v0) {}
        temp_v1 = temp_v0->unk10 >> 16;
        if (temp_v1 == 0) goto L0;
        if (temp_v1 != 1) goto end;
        goto L1;
L0:
        func_8013B570(arg0, temp_v0->unk2, 2, 4, func_8024310C);
        goto end;
L1:
        func_8013B570(arg0, temp_v0->unk2, 2, 4, func_8024388C);
    }
end:;
}


typedef struct func_8024310C_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_8024310C_StructE;

typedef struct func_8024310C_StructD {
    s32 a;
    s32 b;
    s32 c;
} func_8024310C_StructD;

typedef struct func_8024310C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024310C_StructE *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[3];
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u8 pad98[4];
    s16 unk9C;
    u8 pad9E[2];
    s16 unkA0;
} func_8024310C_Struct;


void func_8024310C(func_8024310C_Struct *arg0, s32 arg1) {
    func_80242FD0_StructB *temp_v0;
    func_8024310C_StructE *temp_v1;

    arg0->unkA0 = 0;
    arg0->unk90 = 0;
    arg0->unk95 = 0;
    arg0->unk96 = 0;
    arg0->unk97 = 1;
    arg0->unk94 = 0;
    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = arg0->unk5C;
    arg0->unk9C = (s32)(temp_v0->unk4 + temp_v0->unkC);
    temp_v1->unk78 = 1;
    func_8013A1B4(arg1, *(func_8024310C_StructD *)D_80246C64, 0x1FFFFF);
    func_800058DC(arg0, func_802431C4);
}


typedef struct func_802431C4_StructP {
    u8 pad0[0x78];
    u16 unk78;
} func_802431C4_StructP;
typedef struct func_802431C4_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802431C4_StructB;
typedef struct func_802431C4_Vec {
    f32 x;
    f32 y;
    f32 z;
} func_802431C4_Vec;
typedef struct func_802431C4_StructC {
    u8 pad0[0x2C];
    func_802431C4_StructB *unk2C;
} func_802431C4_StructC;
typedef struct func_802431C4_Struct {
    u8 pad0[0x24];
    func_802431C4_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_802431C4_StructP *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91;
    u8 unk92;
    u8 pad93;
    u8 unk94;
    u8 pad95;
    u8 unk96;
    u8 pad97;
    s16 unk98;
    u8 pad9A[6];
    s16 unkA0;
} func_802431C4_Struct;

extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_801475C8(f32 *);
extern f32 D_80249B40;
#define func_8024342C func_8024342C__decl227
extern u8 func_8024342C[];
void func_80243578();

void func_802431C4(func_802431C4_Struct *arg0, s32 arg1) {
    func_802431C4_StructP *sp44;
    s32 pad;
    func_802431C4_Vec d;
    func_802431C4_StructB *v;
    u8 v1;

    sp44 = arg0->unk5C;
    v1 = arg0->unk94;
    if ((v1 % 70) == 0) {
        v = arg0->unk24->unk2C;
        func_80127430(v->unk4, v->unk8, *(s32 *)&v->unkC, 0x65E, D_80249B40, 1.0f);
        v1 = arg0->unk94;
    }
    arg0->unk94 = v1 - 1;
    if (arg0->unk90 != 0) {
        v = arg0->unk24->unk2C;
        *(s16 *)((u8 *)v + 0x12) += 0x1000;
        arg0->unk90 = 0;
    }
    d.x = arg0->unk24->unk2C->unk4;
    d.y = arg0->unk24->unk2C->unk8;
    d.z = arg0->unk24->unk2C->unkC;
    func_80010550(arg1, sp44);
    d.x = arg0->unk24->unk2C->unk4 - d.x;
    d.y = arg0->unk24->unk2C->unk8 - d.y;
    d.z = arg0->unk24->unk2C->unkC - d.z;
    func_801475C8((f32 *)&d);
    arg0->unkA0 = arg0->unkA0 - 1;
    if (arg0->unkA0 < 0) {
        arg0->unkA0 = 0;
    }
    v = arg0->unk24->unk2C;
    if (func_8010843C(v->unk4, v->unk8, v->unkC, v->unk4 + d.x * 20.0f, v->unk8 + d.y * 20.0f, v->unkC + d.z * 20.0f) != 0) {
        arg0->unk96 = 0;
        sp44->unk78 = 1;
        arg0->unk98 = (s32)arg0->unk24->unk2C->unk4;
        func_800058DC(arg0, func_8024342C);
        return;
    }
    if ((func_80242FD0((void *)arg0) != 0) && (arg0->unkA0 == 0)) {
        func_80242F80(arg0, D_80246C64 + 0x18);
        arg0->unk98 = (s32)arg0->unk24->unk2C->unk4;
        arg0->unk92 = func_8012C6B4(0x78) + 0x3C;
        sp44->unk78 = 1;
        *((u8 *)sp44 + 0x76) = 1;
        func_800058DC(arg0, func_80243578);
    }
}
#undef func_8024342C


typedef struct func_8024342C_V {
    s32 a;
    s32 b;
    s32 c;
} func_8024342C_V;

typedef struct func_8024342C_E {
    u8 pad0[0x78];
    u16 unk78;
} func_8024342C_E;

typedef struct func_8024342C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024342C_E *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[4];
    u8 unk95;
    u8 pad96[2];
    s16 unk98;
    u8 pad9A[2];
    s16 unk9C;
} func_8024342C_Struct;

extern s32 D_8012CE9C(s32, s32, func_8024342C_V, s32);
extern func_8024342C_V D_80246C70;

void func_8024342C(func_8024342C_Struct *arg0, s32 arg1) {
    func_8024342C_E *sp2C;
    f32 temp_fa0;
    f32 temp_fv0;
    s16 temp_v1;
    func_80242FD0_StructB *temp_v0;

    sp2C = arg0->unk5C;
    if (D_8012CE9C(arg1, (s32)sp2C, D_80246C70, 1) == 0) {
        temp_v1 = arg0->unk98;
        temp_v0 = arg0->unk24->unk2C;
        temp_fv0 = ((f32) temp_v1 - temp_v0->unk4) / 3.0f;
        temp_fa0 = ((f32) (arg0->unk9C - temp_v1) - temp_v0->unkC) / 3.0f;
        temp_v0->unk4 += temp_fv0;
        temp_v0 = arg0->unk24->unk2C;
        temp_v0->unkC = temp_v0->unkC + temp_fa0;
        if (func_80010550(arg1, sp2C) != 0) {
            sp2C->unk78 = 1;
            arg0->unk95 ^= 1;
            arg0->unk90 = 1;
            ((u16 *)D_80246C64)[2] = 0;
            func_80242F70(D_80246C64);
            func_8013A1B4(arg1, *(func_8024342C_V *)D_80246C64, 0x1FFFFF);
            func_800058DC(arg0, func_802431C4);
        }
    }
}

typedef struct func_80243688_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
    u8 pad60[0xA0 - 0x60];
    u16 unkA0;
} func_80243688_Struct;
typedef struct func_80243688_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_80243688_StructE;
void func_80243688(func_80243688_Struct *arg0, s32 arg1);
typedef struct func_8024373C_V { s32 a; s32 b; s32 c; } func_8024373C_V;
typedef struct func_80243A70_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_80243688_StructE *unk5C;
    u8 pad60[0x70 - 0x60];
    u16 unk70;
    u8 pad72[0x91 - 0x72];
    u8 unk91;
    u8 unk92;
} func_80243A70_Struct;
extern func_8024373C_V D_80246C7C;
extern func_8024373C_V D_80246C88;

void func_80243578(func_80243A70_Struct *arg0, s32 arg1) {
    void *sp2C;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, (s32)sp2C, D_80246C7C, 0xA) == 0) {
        if (arg0->unk70 == 0x14) {
            func_80020744(0x13B);
        }
        if (func_80010550(arg1, sp2C) != 0) {
            if ((--arg0->unk92 == 0) || (func_80242FD0((func_80242FD0_StructA *)arg0) == 0)) {
                func_80242F80(arg0, &D_80246C88);
                func_8013A1B4(arg1, D_80246C88, 0x1FFFFF);
                func_800058DC(arg0, func_80243688);
            }
        }
    }
}





void func_80243688(func_80243688_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp1C;
    f64 sub;

    sub = D_80249B48;
    sp1C = arg0->unk5C;
    arg0->unk24->unk2C->unkC = (f32) ((f64) arg0->unk24->unk2C->unkC - sub);
    arg0->unk24->unk2C->unk4 = (f32) ((f64) arg0->unk24->unk2C->unk4 - sub);
    if (func_80010550(arg1, sp1C, arg0) != 0) {
        sp1C->unk78 = 1;
        arg0->unkA0 = 0x50;
        func_80242F80(arg0, D_80246C64);
        func_800058DC(arg0, (void *) func_8024373C);
    }
}


typedef struct func_8024373C_S {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    s32 unk5C;
    u8 pad60[0x9C - 0x60];
    s16 unk9C;
} func_8024373C_S;

void func_8024373C(func_8024373C_S *arg0, s32 arg1) {
    s32 a5c;
    f32 d;

    a5c = arg0->unk5C;
    d = (f64)((f32)arg0->unk9C - (arg0->unk24->unk2C->unk4 + arg0->unk24->unk2C->unkC)) * D_80249B50;
    arg0->unk24->unk2C->unk4 += d;
    arg0->unk24->unk2C->unkC += d;
    if (func_8012CE9C(arg1, a5c, *(func_8024373C_V *)D_80246C64, 3) == 0) {
        if (!(D_80249B58 < (f64)((d < 0.0f) ? -d : d))) {
            func_8013A1B4(arg1, *(func_8024373C_V *)D_80246C64, 0x1FFFFF);
            func_80010550(arg1, a5c);
            func_800058DC(arg0, func_802431C4);
        }
    }
}


typedef struct func_8024388C_StructD {
    s32 a;
    s32 b;
    s32 c;
} func_8024388C_StructD;

extern func_8024388C_StructD D_8017DC2C;

void func_8024388C(u8 *arg0, s32 arg1) {
    u8 *sp2C;

    sp2C = *(u8 **)(arg0 + 0x5C);
    func_8012636C(arg0, 0);
    *(s16 *)(sp2C + 0x78) = 1;
    *(f32 *)(*(u8 **)(*(u8 **)(arg0 + 0x24) + 0x2C) + 0xC) = -30.0f;
    arg0[0x94] = 0;
    arg0[0x91] = 0;
    func_8013A1B4(arg1, D_8017DC2C, 0xE00000);
    func_800058DC(arg0, (void *)func_80243930);
}


typedef struct func_80243930_StructV { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80243930_StructV;
typedef struct func_80243930_StructC { u8 pad0[0x2C]; func_80243930_StructV *unk2C; } func_80243930_StructC;
typedef struct func_80243930_Struct {
    u8 pad0[0x24];
    func_80243930_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_80243688_StructE *unk5C;
    u8 pad60[0x92 - 0x60];
    u8 unk92;
    u8 pad93;
    u8 unk94;
} func_80243930_Struct;
extern func_8024373C_V D_80246C94;

void func_80243930(func_80243930_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp2C;
    func_80243930_StructV *v;
    s32 c;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, (s32)sp2C, D_80246C94, 0x14) == 0) {
        func_80010550(arg1, sp2C);
        arg0->unk24->unk2C->unkC = -30.0f;
        c = arg0->unk94;
        if ((c % 70) == 0x23) {
            v = arg0->unk24->unk2C;
            func_80127430(v->unk4, v->unk8, *(s32 *)&v->unkC, 0x65F, D_80249B60, 1.0f);
            c = arg0->unk94;
        }
        arg0->unk94 = c - 1;
        if ((func_80242FD0((void *)arg0) != 0) && (func_8012C6B4(0x50) == 0)) {
            arg0->unk92 = func_8012C6B4(0x78) + 0x3C;
            sp2C->unk78 = 1;
            D_80246CA8 = D_80249B64;
            func_800058DC(arg0, func_80243A70);
        }
    }
}



extern func_8024388C_StructD D_80246CA0;

void func_80243A70(func_80243A70_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp2C;
    s32 temp_t6;
    s32 temp_v1;
    u8 var_v0;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, sp2C, D_80246CA0, 10) == 0) {
        func_80010550(arg1, sp2C);
        arg0->unk24->unk2C->unkC = -30.0f;
        if (arg0->unk70 == 0x19) {
            if (arg0->unk91 == 0) {
                func_80020744(0x322);
            } else {
                func_80020744(0x323);
            }
            arg0->unk91 = (u8)(arg0->unk91 ^ 1);
        }
        if (arg0->unk92 > 0) {
            arg0->unk92--;
        }
        if (arg0->unk92 == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, &func_80243930);
        }
    }
}


typedef struct func_80243B70_StructB {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
} func_80243B70_StructB;
typedef struct func_80243B70_Struct {
    u8 pad0[0x38];
    func_80243B70_StructB *unk38;
} func_80243B70_Struct;
typedef struct func_80243B70_StructA {
    u8 pad0[0x14];
    u32 unk14;
} func_80243B70_StructA;
typedef struct func_80243B70_StructP {
    u8 pad0[0x38];
    void *unk38;
} func_80243B70_StructP;
typedef struct func_80243B70_StructQ {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    f32 unk98;
} func_80243B70_StructQ;
typedef struct func_80243B70_StructR {
    u8 pad0[0x38];
    func_80243B70_StructA *unk38;
} func_80243B70_StructR;
struct func_80243C6C_Struct;
void func_80243C6C(struct func_80243C6C_Struct *arg0, s32 arg1);

void func_80243B70(func_80243B70_StructQ *arg0, s32 arg1) {
    u16 t;
    func_80243B70_StructB *b;
    t = ((func_80243B70_StructR *)arg0)->unk38->unk14 & 0xFFFF;
    if (t != 0 && func_80133A24(t) != 0) {
        func_80005700(arg0);
        return;
    }
    func_8001F74C(arg0);
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        b = (func_80243B70_StructB *)((func_80243B70_Struct *)arg0)->unk38;
        arg0->unk90 = (f32)b->unk6 / 10.0;
        arg0->unk94 = (f32)b->unk8 / 10.0;
        arg0->unk98 = (f32)b->unkA / 10.0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243C6C);
    }
}



typedef struct func_80243C6C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
} func_80243C6C_Struct;

void func_80243C6C(func_80243C6C_Struct *arg0, s32 arg1) {
    if (((s32) arg0->unk3C % 180) == 0) {
        func_80127430(arg0->unk90, arg0->unk94, arg0->unk98, 0x660, 1.5f, 1.0f);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}

