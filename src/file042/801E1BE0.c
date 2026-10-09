#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1C34.s")


extern void D_8038C158(void);
extern s32 func_801C0B8C(u64);

s32 func_801E1CF8(s32 arg0, s32 arg1) {
    s32 temp;

    temp = func_801C0B8C(0x1E8480);
    if (temp != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1E64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E1F8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E20CC.s")


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 D_801E4E14;

s32 func_801E2124(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE88(1, 0xFF, 0, 0);
    func_801CCEC8(1, 0x3C, -0x3F, 1);
    func_801CCE50(0x5C, 0x2B, 6);
    D_801E4E14 = 0x10;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E21B8.s")


extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD8[];
extern u8 D_8038DDF0[];
extern u8 D_8038DF70[];

s32 func_801E21E0(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x264, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x449, D_8038DDD8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDF0);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E22A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E25F8.s")


extern s32 func_801C0DE4(s32 a0, s32 a1, s32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern void func_8038D28C(s32 a0);
extern f64 func_80034C24(u64 time);
extern f64 D_801E5010;

typedef struct func_801E2644_Struct3 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2644_Struct3;

typedef struct func_801E2644_Struct2 {
    u8 pad0[0x30];
    func_801E2644_Struct3 *unk30;
} func_801E2644_Struct2;

typedef struct func_801E2644_Struct1 {
    func_801E2644_Struct2 *unk0;
} func_801E2644_Struct1;

extern func_801E2644_Struct1 *D_8038D8D0;

s32 func_801E2644(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x40200000) != 0) {
        func_801C0EB0(3, 0);
        func_8038D28C(0x253);
        return 4;
    }
    temp_ret = func_801C0F18(3, 0);
    D_8038D8D0->unk0->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E5010)) / 2.5f) * 13.0f + -32.0f);
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E26F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2708.s")


extern void func_801C0D04(s32 arg0, s32 arg1);

s32 func_801E274C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A120) != 0) {
        func_801C0D04(3, 1);
        return 2;
    }
    return 1;
}


typedef struct func_801E2798_Struct30 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2798_Struct30;

typedef struct func_801E2798_Struct4 {
    u8 pad0[0x30];
    func_801E2798_Struct30 *unk30;
} func_801E2798_Struct4;

typedef struct func_801E2798_Struct0 {
    u8 pad0[0x4];
    func_801E2798_Struct4 *unk4;
} func_801E2798_Struct0;

extern f64 D_801E5018;

s32 func_801E2798(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40200000) != 0) {
        func_801C0EB0(3, 1);
        return 3;
    }
    temp_ret = func_801C0F18(3, 1);
    ((func_801E2798_Struct0 *) D_8038D8D0)->unk4->unk30->unk8 = (f32) ((f32) (func_80034C24(temp_ret) / D_801E5018) / 2.5f * 13.0f + -32.0f);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E28A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E28EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E28FC.s")


extern s32 D_801E4E70;

s32 func_801E2940(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E4E70 = 0;
        func_8038D28C(0x254);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E2990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3108.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E323C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3288.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3338.s")

void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
s32 func_801CE274();


s32 func_801E340C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480066, 0, 0, 3.0f);
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3464.s")


typedef struct func_801E3474_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3474_Struct2C;

typedef struct func_801E3474_Struct24 {
    u8 pad0[0x2C];
    func_801E3474_Struct2C *unk2C;
} func_801E3474_Struct24;

typedef struct func_801E3474_Struct8 {
    u8 pad0[0x24];
    func_801E3474_Struct24 *unk24;
} func_801E3474_Struct8;

typedef struct func_801E3474_Struct0 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3474_Struct0;

typedef struct func_801E3474_Global {
    u8 pad0[0x24];
    func_801E3474_Struct0 *unk24;
} func_801E3474_Global;

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);
extern f32 D_801E5058;
extern func_801E3474_Global func_801DAAF0;

s32 func_801E3474(s32 arg0, s32 arg1) {
    func_801E3474_Struct0 **pp;

    if (func_801C0B8C(0x4F587F) != 0) {
        pp = (func_801E3474_Struct0 **) &func_801DAAF0;
        pp += 9;
        (*pp)->unk8->unk24->unk2C->unk4 = D_801E5058;
        (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk24->unk2C->unkC = -7.0f;
        (*pp)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(0, 0x01680040, 0, 0, 5.0f);
        return 9;
    }
    return 8;
}


extern s32 D_801E4E9C;

s32 func_801E3548(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        D_801E4E9C = 0;
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E38B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3990.s")


extern f64 D_801E5080;

s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 1, 0x40200000) != 0) {
        func_801C0EB0(4, 1);
        return 4;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *) func_801DAAF0.unk24 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = (f32) ((((f32) (func_80034C24(func_801C0F18(4, 1)) / D_801E5080) / 2.5f) * 13.0f) + -32.0f);
    return 3;
}


extern func_801E3474_Struct0 *D_801DAB14;

s32 func_801E3A90(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D400) != 0) {
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = -7.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 212.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1638;
        func_801CC4D8(1, 0x02A80035, 0, 0, 5.0f);
        return 5;
    }
    return 4;
}


s32 func_801CEDD4(void);

s32 func_801E3B74(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80035, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3BCC.s")


extern f32 D_801E5088;

typedef struct func_801E3BDC_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3BDC_Struct8;

s32 func_801E3BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = D_801E5088;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 10.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(1, 0x01680040, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3FA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E3FB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E403C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E406C.s")


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E40A8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0xF, 0, 1);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E4114.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file042/801E1BE0/func_801E413C.s")

