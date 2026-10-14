#include "common.h"


extern s32 D_801CD0CC;

s32 func_801C5AB0(void) {
    if (D_801CD0CC != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5AD4.s")


extern s32 D_801CFDB8[];

s32 func_801C5B38(void) {
    if (D_801CFDB8[0] == 1 && D_801CFDB8[1] == 1) {
        return 1;
    }
    return 0;
}

extern u32 D_80171CF0[];

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


extern void func_8001B204(s32, s32, s32, void *);
extern s32 D_801CF2A0;

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

extern void func_801477C4(void *arg0, f32 arg1);
extern void func_80147734(void *arg0, void *arg1, void *arg2);

void func_801C5C70(void *arg0, func_801C5C70_Struct *arg1, f32 arg2) {
    func_801C5C70_Struct sp1C;

    sp1C = *arg1;
    func_801477C4(&sp1C, arg2);
    func_80147734(arg0, &sp1C, arg0);
}


void func_80147768(f32 *arg0, s32 arg1);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C5F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C63CC.s")


extern void func_801C63CC(s32);

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

extern void *func_80005670(s32, void *);
extern u8 D_801CFD70;
extern s32 func_80001060(s32);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern void func_800208C4(s32);
extern void func_80116E80(s32);
extern func_801C659C_Ret *func_8012C4D0(s32, func_801C659C_Arg20, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_80145348(s32, s32, s32);
extern void func_80146208(s32, s16 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_80147250(void *, s32, s32, s32, s32);
extern u8 func_80152890(u8);
extern func_801C659C_Struct16 D_80164F30;
extern func_801C659C_Struct16 D_80164F40;
extern func_801C659C_Glob D_801BBBF0;
extern u8 D_801CCBB0[];
extern u8 D_801CCBF8[];
extern u8 D_801CCD10[];
extern func_801C659C_Copy16 D_801CCF28[];
extern func_801C659C_Copy16 D_801CCF48[];
extern u8 D_801CD100[];
extern func_801C659C_Arg20 D_801CD114;
extern u8 D_801CD150[];
extern void *D_801CFD78[];
extern u8 D_801CFDA8[];
extern u8 D_801CFDB0[];
extern void func_801C6C6C();

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
extern u8 D_801CD0E4[];
extern void *D_801CFDA0;
extern u8 D_801CFDC0;
extern void func_801C70E8();

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

extern u8 D_80089474[];
extern void func_801C5D64(void *arg0, s32 arg1);
extern void func_801C5F04(void *arg0);
extern void func_801C7D5C();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C81C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C896C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C8E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C909C.s")


typedef struct func_801C9154_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C9154_Struct;

extern s16 func_8012C6B4(s32);
extern u8 D_801CD164;

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

extern void func_800058DC(void *, void *, void *, void *);
extern func_801C9234_Struct D_801CFD10[];
extern func_801C9234_Struct D_801CFD40[];
extern u8 func_801C9328[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C5AB0/func_801C9678.s")

