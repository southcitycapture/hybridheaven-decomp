#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1C78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E1D74.s")


extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E3C2C;
extern s32 D_801E3C30;

s32 func_801E2280(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0x50, 0x46, 0x5A);
    func_801CCEC8(0, -0x40, -0x40, 0xF);
    func_801CCE88(1, 0x50, 0x46, 0x5A);
    func_801CCEC8(1, 0x40, 0x40, 0xF);
    func_801CCE88(2, 0, 0, 0);
    func_801CCEC8(2, 0, 0x40, -0x20);
    func_801CCE50(0x28, 0x28, 0x28);
    D_801E3C2C = 0;
    D_801E3C30 = 0;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2340.s")


struct func_801E2368_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E2368_Struct *func_801BF6B0(s32);
extern s32 D_801E3C4C;
extern s32 D_801E3C50;

s32 func_801E2368(s32 arg0, s32 arg1) {
    if (func_801BF6B0(1)->unkC >= 2) {
        D_801E3C4C = 0;
        D_801E3C50 = 0;
        return 1;
    }
    return 0;
}


extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E23B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x602160) != 0) {
        func_801C1000(1, 1);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E25B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E25C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E25FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E26F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2E8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2ED8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E2F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3074.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E309C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E30E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3240.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E328C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E32D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E33B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E33D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E34D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E37D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E37E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E37F4.s")


extern void func_801C2420(s32 arg0, void *arg1);
extern void func_801CC318(void);
extern void func_801CC458(s32 arg0, void *arg1);
extern void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E3804(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    return 1;
}


extern s32 func_80005670(s32, void *);
extern s32 func_801CC530();
extern s32 func_801DAAF0[];

s32 func_801E3860(s32 arg0, s32 arg1) {
    func_80005670(((s32 *)func_801DAAF0)[9], func_801DAC30 + 0x2C);
    func_801CC530();
    return 2;
}


extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E38A0_StructS {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E38A0_StructS;

typedef struct func_801E38A0_StructR {
    u8 pad0[0x2C];
    func_801E38A0_StructS *unk2C;
} func_801E38A0_StructR;

typedef struct func_801E38A0_StructQ {
    u8 pad0[0x24];
    func_801E38A0_StructR *unk24;
} func_801E38A0_StructQ;

typedef struct func_801E38A0_StructP {
    u8 pad0[0x8];
    func_801E38A0_StructQ *unk8;
} func_801E38A0_StructP;

extern func_801E38A0_StructP *D_801DAB14;

s32 func_801E38A0(s32 arg0, s32 arg1) {
    func_801E38A0_StructR *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 100.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480062, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}



s32 func_801E395C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801CC470(0, 0x03480062, 0, 0x100, 6.0f);
        return 4;
    }
    return 3;
}


extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E39C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6F63A0) != 0) {
        func_801CC4D8(0, 0x03480051, 0, 0, 10.0f);
        return 5;
    }
    return 4;
}


extern s32 func_801CE274(void);

s32 func_801E3A24(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480051, 0, 0, 8.0f);
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3A9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3ABC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3ACC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3B08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3B18.s")


extern s32 func_801C0B8C(u64 time);
extern void func_8038C97C();
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E3B28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8DE820) != 0) {
        D_80089354 = 0;
        func_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file047/801E1BE0/func_801E3BC4.s")

