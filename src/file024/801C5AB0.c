#include "common.h"

extern f32 D_801CD094[];
extern f32 D_801CF3D4;
extern f32 func_8001EAD0(s16);
extern f64 D_801CF3B8;
extern f64 D_801CF3E0;
extern s16 func_8012C6B4(s32);
extern s32 D_801CD0CC;
extern s32 D_801CF2A0;
extern s32 D_801CFDB8[];
extern s32 func_80001060(s32);
extern s32 func_80006214(s32);
extern s32 func_80126A0C(void *, u16, s32);
extern s32 func_801C5AD4(u8);
extern s8 D_801CFDA6[];
extern u16 **D_80171CEC[];
extern u16 D_801CD0C0[];
extern u16 D_801CFDAC[];
extern u16 func_80152980(u8, u8);
extern u32 D_80171CF0[];
extern u8 *D_801CFD90[];
extern u8 D_80089474[];
extern u8 D_801CCBB0[];
extern u8 D_801CCBF8[];
extern u8 D_801CCC40[];
extern u8 D_801CCCA8[];
extern u8 D_801CCD10[];
extern u8 D_801CD0C4[];
extern u8 D_801CD0E4[];
extern u8 D_801CD100[];
extern u8 D_801CD13C[];
extern u8 D_801CD150[];
extern u8 D_801CD164;
extern u8 D_801CFD70;
extern u8 D_801CFDA8[];
extern u8 D_801CFDB0[];
extern u8 D_801CFDC0;
extern u8 func_80152890(u8);
extern u8 func_801C8568[];
extern u8 func_801C9328[];
extern void *D_801CFD78[];
extern void *D_801CFDA0;
extern void *func_80005670(s32, void *);
extern void func_80005700(s32);
extern void func_800058DC(void *, void *, void *, void *);
extern void func_80005E44(s32, void *);
extern void func_8001B204(s32, s32, s32, void *);
extern void func_800208C4(s32);
extern void func_80116E80(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_8013B268(void *, u16, s32, u8, void (*)(), s32);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, s16 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80147250(void *, s32, s32, s32, s32);
extern void func_801472C0(void *, s32, s32, s32, s32);
extern void func_80147370(void *, s32, s32, s32, s32);
extern void func_8014753C(void *, s32);
extern void func_80147734(void *arg0, void *arg1, void *arg2);
extern void func_80147768(f32 *arg0, s32 arg1);
extern void func_801477C4(void *arg0, f32 arg1);
extern void func_801C5D64(void *arg0, s32 arg1);
extern void func_801C5F04(void *arg0);
extern void func_801C63CC(s32);
extern void func_801C6C6C();
extern void func_801C70E8();
extern void func_801C7D5C();
extern void func_801C8328();



s32 func_801C5AB0(void) {
    if (D_801CD0CC != 0) {
        return 1;
    }
    return 0;
}


s32 func_801C5AD4(u8 arg0) {
    u8 o = 1 - arg0;
    if (D_801CFDB8[o] == 1 && D_801CFDAC[o] == D_801CFDAC[arg0]) {
        return 1;
    }
    return 0;
}



s32 func_801C5B38(void) {
    if (D_801CFDB8[0] == 1 && D_801CFDB8[1] == 1) {
        return 1;
    }
    return 0;
}


void func_801C5B70(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x18) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x1C) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}


void func_801C5BC4(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x20) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x24) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}



void func_801C5C18(void)
{
  s32 var_s0;
  s32 *var_s1;
 do { var_s0 = 0; var_s1 = &D_801CF2A0; do { func_8001B204(var_s0 & 0xFF, 0, 0, var_s1); var_s0 = (var_s0 + 1) & 0xFF; } while (var_s0 < 0xA); } while (0);
}


typedef struct func_801C5C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C5C70_Struct;


void func_801C5C70(void *arg0, func_801C5C70_Struct *arg1, f32 arg2) {
    func_801C5C70_Struct sp1C;

    sp1C = *arg1;
    func_801477C4(&sp1C, arg2);
    func_80147734(arg0, &sp1C, arg0);
}



void func_801C5CC8(f32 *arg0, f32 *arg1, u8 *arg2) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = arg1[0] - arg0[0];
    sp20 = arg1[1] - arg0[1];
    sp24 = arg1[2] - arg0[2];
    func_80147768(&sp1C, 0x42FA0000);
    arg2[8] = (s32) sp1C;
    arg2[9] = (s32) sp20;
    arg2[10] = (s32) sp24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5D64.s")

typedef struct func_801C5DAC_Struct {
    u8 pad[0x10];
    struct func_801C5DAC_Struct *unk10;
} func_801C5DAC_Struct;

void func_801C5DAC(u8 *arg0) {
    u8 i;
    u8 j;
    func_801C5DAC_Struct *p;

    p = (func_801C5DAC_Struct *)D_801CFD90[arg0[0x90]];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if ((i == 0 && D_801CFDA6[arg0[0x90]] == 1) || (i == 1 && D_801CFDA6[arg0[0x90]] == 2)) {
                func_80147250(p, 0xFF, 0xCF, 0xCF, 0xFF);
                func_801472C0(p, 0xFF, 0x20, 0x20, 0xFF);
            } else {
                func_80147250(p, 0x60, 0x30, 0x30, 0xFF);
                func_801472C0(p, 0x40, 0, 0, 0xFF);
            }
            p = p->unk10;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C63CC.s")



void func_801C655C(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_801C63CC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 2);
}


typedef struct func_801C659C_Struct16 {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s32 unkC;
} func_801C659C_Struct16;

typedef struct func_801C659C_Copy16 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_801C659C_Copy16;

typedef struct func_801C659C_Arg20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_801C659C_Arg20;

typedef struct func_801C659C_Inner {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    func_801C659C_Copy16 unk8;
    u8 pad18[4];
    f32 unk1C;
    u8 pad20[8];
    f32 unk28;
    u8 pad2C[4];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C659C_Inner;

typedef struct func_801C659C_Mid {
    u8 pad[0x2C];
    func_801C659C_Inner *unk2C;
} func_801C659C_Mid;

typedef struct func_801C659C_Glob {
    u8 pad[0x3C];
    s32 unk3C;
    u8 pad40[0x28C - 0x40];
    func_801C659C_Mid *unk28C[2];
} func_801C659C_Glob;

typedef struct func_801C659C_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    u8 pad12[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
} func_801C659C_Obj30;

typedef struct func_801C659C_Obj {
    u8 pad[0x30];
    func_801C659C_Obj30 *unk30;
} func_801C659C_Obj;

typedef struct func_801C659C_Ret {
    u8 pad[0x90];
    u8 unk90;
} func_801C659C_Ret;

extern func_801C659C_Ret *func_8012C4D0(s32, func_801C659C_Arg20, s32);
extern func_801C659C_Struct16 D_80164F30;
extern func_801C659C_Struct16 D_80164F40;
extern func_801C659C_Glob D_801BBBF0;
extern func_801C659C_Copy16 D_801CCF28[];
extern func_801C659C_Copy16 D_801CCF48[];
extern func_801C659C_Arg20 D_801CD114;

void func_801C659C(s32 arg0, func_801C659C_Obj **arg1) {
    func_801C659C_Obj **p;
    func_801C659C_Struct16 sp7C;
    func_801C659C_Struct16 sp6C;
    s16 sp6A;
    u8 i;
    u8 idx;
    s8 v;
    func_801C659C_Ret *r;
    extern void func_800058DC();

    sp7C = D_80164F30;
    sp6C = D_80164F40;
    func_800208C4(0x5C);
    for (i = 0; i < 2; i++) {
        D_801CFDB0[i] = func_80152890(i);
        D_801CFDA8[i] = 0;
        D_801CFDB8[i] = 0;
    }
    func_80116E80(0x10);
    func_80116E80(0x2000);
    func_80116E80(0x4000);
    func_80116E80(0x200);
    sp6C.unk4 = -3;
    sp6C.unk8 = 0x2000;
    func_80005E44(arg0, &sp6C);
    func_80006214(arg0);
    arg1[0]->unk30->unk30 = (s32)D_801CCBB0;
    sp6C.unk4 = -3;
    sp6C.unk8 = 0x4000;
    func_80005E44(arg0, &sp6C);
    func_80006214(arg0);
    arg1[1]->unk30->unk30 = (s32)D_801CCBF8;
    for (i = 0; i < 2; i++) {
        v = i * 2 - 1;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 = (f64)(v * 70 + 160) - 60.0;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 = 20;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk4 = D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 + 120;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk6 = D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 + 100;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk30 = v * 25 + 100;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk34 = 6.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk38 = 25.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk3C = 100.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk40 = 16.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk44 = 0.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk1C = 40.0f;
        D_801BBBF0.unk28C[(s32)i]->unk2C->unk28 = 50.0f;
        if (func_80001060(i) != 0) {
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk0 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk2 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk4 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk6 *= 2;
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk8 = D_801CCF48[i];
        } else {
            D_801BBBF0.unk28C[(s32)i]->unk2C->unk8 = D_801CCF28[i];
        }
    }
    for (i = 0; i < 2; i++) {
        D_801CFD78[i] = func_80005670(arg0, D_801CD100);
        if (D_801CFD78[i] != NULL) {
            ((func_801C659C_Ret *)D_801CFD78[i])->unk90 = i;
        }
    }
    for (i = 0; i < 2; i++) {
        r = func_8012C4D0(D_801BBBF0.unk3C, D_801CD114, 3);
        if (r != NULL) {
            r->unk90 = i;
        }
    }
    for (i = 0; i < 4; i++) {
        (&D_801CFD70)[i] = 0;
    }
    func_80005670(arg0, D_801CD150);
    func_80146208(arg0, &sp6A, 0x66, 0x90, 0x19, 0x20, 0x20, 0, 0, 0xFF, 0x229, 0xC);
    func_80145348(arg0, 1, 0x1B);
    func_80146208(arg0, &sp6A, 0x66, 0x7A, 0x28, 0x10, 0x10, 0, 0, 0xFF, 0x229, 0xA);
    func_80145348(arg0, 1, 3);
    func_80146208(arg0, &sp6A, 0x66, 0xB6, 0x28, 0x10, 0x10, 0, 0, 0xFF, 0x229, 0xB);
    func_80145348(arg0, 1, 0xD);
    sp6C.unk8 = 0x10;
    func_80005E44(arg0, &sp6C);
    idx = func_80006214(arg0) - 1;
    func_8012C89C(arg0, idx, 0x229, 2);
    arg1[idx]->unk30->unk24 = 0x101;
    arg1[idx]->unk30->unk30 = (s32)D_801CCD10 | 0x40000000;
    arg1[idx]->unk30->unk4 = 160.0f;
    arg1[idx]->unk30->unk8 = 120.0f;
    arg1[idx]->unk30->unkC = -20.0f;
    arg1[idx]->unk30->unk10 = 0x1000;
    arg1[idx]->unk30->unk18 = 3.0f;
    arg1[idx]->unk30->unk1C = 3.0f;
    arg1[idx]->unk30->unk20 = 3.0f;
    func_80147250(arg1[idx], 0, 0, 0, 0);
    func_800058DC(arg0, func_801C6C6C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C6C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C6D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C70E8.s")


typedef struct func_801C7264_StructInner {
    u8 pad[0xB];
    u8 unkB;
} func_801C7264_StructInner;

typedef struct func_801C7264_Struct {
    u8 pad[0x30];
    func_801C7264_StructInner *unk30;
} func_801C7264_Struct;

extern void (*D_801CCB00)(void *, s32, u8, void **);

void func_801C7264(s32 arg0, s32 arg1) {
    void func_800058DC();
    s16 temp_v0;
    func_801C7264_StructInner *temp_v1;

    temp_v1 = ((func_801C7264_Struct *) D_801CFDA0)->unk30;
    temp_v0 = temp_v1->unkB;
    temp_v0 += 0x14;
    if (temp_v0 >= 0x100) {
        temp_v1->unkB = 0;
        D_801CCB00(D_801CFDA0, 0x229, D_801CD0E4[D_801CFDC0], &D_801CFDA0);
        func_800058DC(arg0, func_801C70E8);
        return;
    }
    temp_v1->unkB = (u8) temp_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C72F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C7D5C.s")


typedef struct func_801C813C_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_801C813C_Struct;


void func_801C813C(func_801C813C_Struct *arg0, s32 arg1) {
    extern void func_800058DC();
    u16 flags;

    flags = *(u16 *)(D_80089474 + 4 + (arg0->unk90 << 5));
    if ((flags & 0x4000) && (func_801C5B38() == 0)) {
        D_801CFDB8[arg0->unk90] = 0;
        func_801C5D64(arg0, 0);
        func_801C5F04(arg0);
        func_800058DC(arg0, &func_801C7D5C);
    }
}


typedef struct func_801C81C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C81C8_Struct;


void func_801C81C8(func_801C81C8_Struct *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk3C;
    if ((s32)temp_v0 > 0) {
        arg0->unk3C = temp_v0 - 1;
    } else {
        func_8012FE50(0x1C, (*(u16 *)((u8 *)&D_801BBBF0 + 4) = 0xBE), 1, 1, 0);
    }
}


typedef struct func_801C8220_Struct {
    u8 pad[0x90];
    u8 unk90;
} func_801C8220_Struct;
typedef struct func_801C8220_StructCopy {
    u16 data[57];
} func_801C8220_StructCopy;

extern func_801C8220_StructCopy D_801CD1A0;

void func_801C8220(func_801C8220_Struct *arg0, s32 arg1)
{
    func_801C8220_StructCopy copy = D_801CD1A0;
    u8 pad[4];
    u16 saved;

    saved = D_801CFDAC[arg0->unk90] = func_80152980(arg0->unk90, D_801CFDA8[arg0->unk90]);
    if (func_80126A0C(arg0, **D_80171CEC[saved], 0)) {
        func_8013B268(arg0, saved, 0, D_801CD0C4[arg0->unk90], func_801C8328, D_801CD0C0[arg0->unk90]);
    }
}


typedef struct func_801C8328_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801C8328_Inner;
typedef struct func_801C8328_Mid {
    u8 pad[0x2C];
    func_801C8328_Inner *unk2C;
} func_801C8328_Mid;
typedef struct func_801C8328_Src {
    u8 pad[0x50];
    f32 unk50;
} func_801C8328_Src;
typedef struct func_801C8328_Struct {
    u8 pad0[0x24];
    func_801C8328_Mid *unk24;
    u8 pad28[0x14];
    s16 unk3C;
    u8 pad3E[0x1E];
    func_801C8328_Src *unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801C8328_Struct;


void func_801C8328(func_801C8328_Struct *arg0, s32 arg1) {
    func_801C8328_Src *sp2C;
    f32 t;
    f32 v;
    func_801C8328_Struct *r;

    sp2C = arg0->unk5C;
    r = func_80005670((s32)arg0, D_801CD13C);
    if (r != NULL) {
        r->unk90 = arg0->unk90;
    }
    arg0->unk24->unk2C->unk4 = D_801CD094[0];
    arg0->unk24->unk2C->unk8 = D_801CD094[1];
    arg0->unk24->unk2C->unkC = D_801CD094[2];
    if (arg0->unk90 == 0) {
        arg0->unk24->unk2C->unk12 = 0;
    }
    if (func_801C5AD4(arg0->unk90) != 0) {
        func_8014753C(arg0, (s32)D_801CCC40 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0);
    } else {
        func_8014753C(arg0, (s32)D_801CCCA8 | 0x40000000);
        func_80147370(arg0, 0, 0, 0, 0xFF);
    }
    arg0->unk98 = 0;
    arg0->unk3C = 0;
    arg0->unk96 = arg0->unk98;
    arg0->unk94 = arg0->unk98;
    arg0->unk9A = arg0->unk98;
    t = sp2C->unk50 - 18.0f;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk34 = 6.0f + t;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk40 = 16.0f + t;
    if (D_801CFDAC[arg0->unk90] == 0xFA) {
        v = 2.0f;
    } else {
        v = 0.0f;
    }
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk44 = v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk38 = 25.0f + v;
    D_801BBBF0.unk28C[arg0->unk90]->unk2C->unk28 = (2.0f - 1.0f) * v + 50.0f;
    {
        extern void func_800058DC();
        func_800058DC(arg0, func_801C8568);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C896C.s")


typedef struct func_801C8B20_Inner {
    u8 pad[8];
    f32 unk8;
    u8 pad2[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C8B20_Inner;
typedef struct func_801C8B20_Outer {
    u8 pad[0x30];
    func_801C8B20_Inner *unk30;
} func_801C8B20_Outer;
typedef struct func_801C8B20_Arg {
    u8 pad[0x94];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8B20_Arg;

void func_801C8B20(func_801C8B20_Arg *arg0, func_801C8B20_Outer **arg1) {
    f32 sp24;
    func_801C8B20_Inner *t;

    t = (*arg1)->unk30;
    t->unk8 = (f32) ((f64) t->unk8 + D_801CF3B8);
    sp24 = (*arg1)->unk30->unk8;
    arg0->unk94 = arg0->unk94 + 0x64;
    arg0->unk96 = arg0->unk96 + 0x96;
    arg0->unk98 = arg0->unk98 + 0xC8;
    (*arg1)->unk30->unk48 = (u32) ((f64) ((func_8001EAD0(arg0->unk94) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk49 = (u32) ((f64) ((func_8001EAD0(arg0->unk96) + 1.0f) * 255.0f) * 0.5);
    (*arg1)->unk30->unk4A = (u32) ((f64) ((func_8001EAD0(arg0->unk98) + 1.0f) * 255.0f) * 0.5);
    if (sp24 > 30.0f) {
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8E20.s")



typedef struct func_801C909C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C909C_Inner;

typedef struct func_801C909C_Holder {
    u8 pad0[0x30];
    func_801C909C_Inner *unk30;
} func_801C909C_Holder;

typedef struct func_801C909C_Obj {
    func_801C909C_Holder *unk0;
    func_801C909C_Holder *unk4;
} func_801C909C_Obj;

void func_801C909C(s32 arg0, func_801C909C_Obj *arg1)
{
  func_801C909C_Inner *temp_a0;
  func_801C909C_Inner *temp_v1;
  s16 temp_v0;
  f32 k;
  f32 cmp;
  arg1->unk4->unk30->unk48 = func_8012C6B4(0x100);
  arg1->unk4->unk30->unk49 = func_8012C6B4(0x100);
  temp_v0 = func_8012C6B4(0x100);
  k = D_801CF3D4;
 goto dummy_label_48230; dummy_label_48230: ;
  arg1->unk4->unk30->unk4A = temp_v0;
  temp_a0 = arg1->unk0->unk30;
  temp_a0->unk8 = temp_a0->unk8 + k;
  temp_v1 = arg1->unk4->unk30;
  cmp = arg1->unk0->unk30->unk8;
  temp_v1->unk8 = arg1->unk4->unk30->unk8 + k;
  if (cmp > 60.0f)
  {
    func_80005700(arg0);
  }
}


typedef struct func_801C9154_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C9154_Struct;


void func_801C9154(s32 arg0, void *arg1) {
    u8 var_s1;
    u8 *temp_s2;
    func_801C9154_Struct *temp_v0;

    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        temp_s2 = &D_801CFD70 + var_s1;
        if (*temp_s2 == 0) {
            temp_v0 = func_80005670(arg0, &D_801CD164);
            if (temp_v0 != NULL) {
                temp_v0->unk90 = var_s1;
                temp_v0->unk91 = func_8012C6B4(0x28) + 0xA;
                temp_v0->unk94 = func_8012C6B4(0xFF);
                temp_v0->unk96 = func_8012C6B4(0xFF);
                temp_v0->unk98 = func_8012C6B4(0xFF);
            }
            *temp_s2 = 1;
        }
    }
}


typedef struct func_801C9234_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801C9234_Struct;

extern func_801C9234_Struct D_801CFD10[];
extern func_801C9234_Struct D_801CFD40[];

void func_801C9234(void *arg0, s32 arg1) {
    u8 temp_v1;
    func_801C9234_Struct *temp_a2;

    D_801CFD10[((u8 *)arg0)[0x90]].unk0 = 1000.0f;
    temp_v1 = ((u8 *)arg0)[0x90];
    D_801CFD10[temp_v1].unk4 = (f32) (temp_v1 * 0xA);
    temp_a2 = &D_801CFD10[((u8 *)arg0)[0x90]];
    temp_a2->unk8 = 300.0f - temp_a2->unk0;
    D_801CFD40[((u8 *)arg0)[0x90]].unk0 = -1.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk4 = 0.0f;
    D_801CFD40[((u8 *)arg0)[0x90]].unk8 = 1.0f;
    func_800058DC(arg0, func_801C9328, temp_a2, D_801CFD10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C9328.s")


typedef struct func_801C9678_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    u8 pad9A[2];
    f32 unk9C;
} func_801C9678_Struct;

typedef struct func_801C9678_Pair {
    u8 *unk0;
    u8 *unk4;
} func_801C9678_Pair;

extern func_801C9678_Pair D_801CD0A0[];

void func_801C9678(func_801C9678_Struct *arg0, s32 arg1)
{
  u8 *a;
  u8 *b;
  u8 buf[3];
  s32 new_var;
  a = D_801CD0A0[arg0->unk90].unk0;
  b = D_801CD0A0[arg0->unk90].unk4;
  new_var = 0;
  buf[0] = (u32) (arg0->unk9C * ((f32) arg0->unk94));
  buf[1] = (u32) (arg0->unk9C * ((f32) arg0->unk96));
  buf[2] = (u32) (arg0->unk9C * ((f32) arg0->unk98));
  new_var = new_var;
  do
  {
    u8 v = buf[new_var];
    b[new_var] = v;
    a[new_var] = v;
    new_var = (new_var + 1) & 0xFF;
  }
  while (new_var < 3);
  arg0->unk9C = arg0->unk9C - D_801CF3E0;
  if (arg0->unk9C < 0.0f)
  {
    *((&D_801CFD70) + arg0->unk90) = 0;
    func_80005700(arg0);
  }
}

