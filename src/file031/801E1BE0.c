#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1CEC.s")


void func_8038BD50(f32, f32, s32);
void D_8038BD88(f32, f32, s32);
extern f32 D_801E2E14;
extern f32 D_801E2E18;
extern f32 D_801E2E1C;
extern f32 D_801E2E20;

s32 func_801E1CFC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E2E14, D_801E2E18, 0xBF19999A);
    D_8038BD88(D_801E2E1C, D_801E2E20, 0xC228CCCD);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1E94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E1F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E210C.s")


struct func_801E2190_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E2190_StructC {
    u8 pad0[0x2C];
    struct func_801E2190_Struct2C *unk2C;
};

struct func_801E2190_StructB {
    u8 pad0[0x24];
    struct func_801E2190_StructC *unk24;
};

struct func_801E2190_StructA {
    u8 pad0[8];
    struct func_801E2190_StructB *unk8;
};

extern struct func_801E2190_StructA *D_801DAB14;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E2190(s32 arg0, s32 arg1) {
    struct func_801E2190_StructC *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 11.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -30.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1333;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2288.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2298.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E22A8.s")


struct func_801E22EC_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E22EC_Struct24 {
    u8 pad0[0x2C];
    struct func_801E22EC_Struct2C *unk2C;
};

struct func_801E22EC_Struct8 {
    u8 pad0[0x24];
    struct func_801E22EC_Struct24 *unk24;
};

struct func_801E22EC_StructA {
    u8 pad0[8];
    struct func_801E22EC_Struct8 *unk8;
};

struct func_801E22EC_StructB {
    u8 pad0[8];
    struct func_801E22EC_StructA *unk8;
};

s32 func_801E22EC(s32 arg0, s32 arg1) {
    struct func_801E22EC_Struct24 *temp_v0;

    temp_v0 = ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -45.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005C, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E23B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E23C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E23D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E23E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E23F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2408.s")


struct func_801E244C_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E244C_Struct2 {
    u8 pad0[0x2C];
    struct func_801E244C_Struct1 *unk2C;
};

struct func_801E244C_Struct0 {
    u8 pad0[8];
    struct func_801E244C_Struct0 *unk8;
    u8 pad1[0x18];
    struct func_801E244C_Struct2 *unk24;
};


s32 func_801E244C(s32 arg0, s32 arg1) {
    struct func_801E244C_Struct2 *temp_v0;
    struct func_801E244C_Struct0 **ptr;

    ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
    temp_v0 = (*ptr)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unkC = -39.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2554.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E25A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E26A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E26F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E27A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E27D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E27E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2894.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E28BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E28CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E28DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E28EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2950.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E29B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E29E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file031/801E1BE0/func_801E2A20.s")

