#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD500.s")


typedef struct func_801CD5E0_StructIn {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
} func_801CD5E0_StructIn;

typedef struct func_801CD5E0_StructOut {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801CD5E0_StructOut;

void func_801CD5E0(func_801CD5E0_StructIn *arg0, func_801CD5E0_StructOut *arg1, s32 arg2) {
    arg1->unk48 = func_801CD500(arg0->unk78, arg0->unk7C, arg2);
    arg1->unk49 = func_801CD500(arg0->unk79, arg0->unk7D, arg2);
    arg1->unk4A = func_801CD500(arg0->unk7A, arg0->unk7E, arg2);
    arg1->unk4B = func_801CD500(arg0->unk7B, arg0->unk7F, arg2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD7B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CD994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CDA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CDCE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CDE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CDF5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE0E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE1C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE3F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE4D4.s")


extern s32 func_80006088(s32);

typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;

void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0->unk94 > 0) {
        do {
            func_80006088(arg1[var_s0]);
            var_s0 = (var_s0 + 1) & 0xFFFF;
        } while (var_s0 < arg0->unk94);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE618.s")


typedef struct func_801CE6F8_Struct {
    u8 pad0[0x8];
    f32 unk8;
} func_801CE6F8_Struct;

extern void func_801CE618(s32 arg0, func_801CE6F8_Struct *arg1);

void func_801CE6F8(s32 arg0, func_801CE6F8_Struct *arg1) {
    func_801CE618(arg0, arg1);
    arg1->unk8 = (f32) ((f64) arg1->unk8 + 18.0);
}


extern void func_800058DC(void *arg0, s32 arg1);

typedef struct func_801CE73C_Struct {
    u8 pad[0x8C];
    s32 unk8C;
} func_801CE73C_Struct;

void func_801CE73C(func_801CE73C_Struct *arg0, s32 arg1) {
    func_800058DC(arg0, arg0->unk8C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE7A8.s")


extern void func_80005700(void);

typedef struct func_801CE898_StructInner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CE898_StructInner;

typedef struct func_801CE898_StructOuter {
    u8 pad0[0xC];
    func_801CE898_StructInner *unkC;
} func_801CE898_StructOuter;

void func_801CE898(func_801CE898_StructOuter *arg0, s32 arg1) {
    func_801CE898_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    func_80005700();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CE9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEAF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEB64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEC10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CECA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEEF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CEF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF2D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF758.s")


extern s32 func_801CE0E8(void *, s8 *);
extern void func_801CF894(void);

void func_801CF824(void *arg0, void **arg1) {
    s32 i;
    s8 sp23;
    void **p;

    sp23 = 0;
    if (func_801CE0E8(arg0, &sp23) == 0) {
        i = 0;
        p = arg1;
        if (((u8 *) arg0)[0x94] > 0) {
            do {
                ((u8 *) *p)[0x22] = 0;
                i++;
                p++;
            } while (i < (s32) ((u8 *) arg0)[0x94]);
        }
        func_800058DC(arg0, func_801CF894);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CF894.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CFCA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CFD44.s")


typedef struct func_801CFF50_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x18 - 0x12];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CFF50_StructInner;

typedef struct func_801CFF50_StructOuter {
    u8 pad0[0x30];
    func_801CFF50_StructInner *unk30;
} func_801CFF50_StructOuter;

typedef struct func_801CFF50_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x94 - 0x7B];
    u8 unk94;
} func_801CFF50_Struct;

extern f64 D_801E35B8;
extern void func_801CFFF4(void);

void func_801CFF50(func_801CFF50_Struct *arg0, func_801CFF50_StructOuter **arg1) {
    func_801CFF50_StructInner *temp_v0;
    s8 sp2B;
    f32 temp_fv0;

    sp2B = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp2B) == 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = 0x800;
        temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 * D_801E35B8);
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        temp_v0->unk18 = temp_fv0;
        func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0x3F4CCCCD);
        func_800058DC(arg0, (s32) &func_801CFFF4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801CFFF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D01DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D03F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0594.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D080C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D09F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0C1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0DE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0E2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D0F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D12A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D12FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D13CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D16BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D18BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1C44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D1E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D22B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D277C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2AA4.s")


typedef struct func_801D2BC4_StructInner {
    u8 pad0[0x80];
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_801D2BC4_StructInner;

typedef struct func_801D2BC4_Struct {
    u8 pad0[0xC];
    func_801D2BC4_StructInner *unkC;
    u8 pad10[0x54 - 0x10];
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    u8 pad60[0x94 - 0x60];
    u8 unk94;
} func_801D2BC4_Struct;

extern void func_801D2C28(void);

void func_801D2BC4(func_801D2BC4_Struct *arg0, s32 arg1) {
    s8 sp1F;
    func_801D2BC4_StructInner *temp_v0;

    sp1F = 0;
    temp_v0 = arg0->unkC;
    arg0->unk54 = temp_v0->unk80;
    arg0->unk58 = temp_v0->unk84;
    arg0->unk5C = temp_v0->unk88;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp1F) == 0) {
        func_800058DC(arg0, (s32) func_801D2C28);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D2FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D337C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D35BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D36C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D3FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D42BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D4618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D47E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D49F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D4B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D4D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D4F88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D51C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D52FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D54F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D58B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D59A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D5ED0.s")


typedef struct func_801D5FE0_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0x63 - 0x28];
    u8 unk63;
} func_801D5FE0_StructInner;

typedef struct func_801D5FE0_StructOuter {
    u8 pad0[0xC];
    func_801D5FE0_StructInner *unkC;
} func_801D5FE0_StructOuter;

extern void func_801D6024(void);

void func_801D5FE0(func_801D5FE0_StructOuter *arg0, s32 arg1) {
    func_801D5FE0_StructInner *temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0->unk63 != 0 && temp_v0->unk24 != 0) {
        func_800058DC(arg0, func_801D6024);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D6024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CD500/func_801D6280.s")

