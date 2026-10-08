#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F19A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F1D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F1FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2438.s")


extern void func_800058DC(s32, void *);
extern void func_80020718(s32);
extern void func_801518D4(s32, s32, s32);
extern void func_801F290C(void);

void func_801F28C4(s32 arg0, s32 arg1) {
    func_80020718(0x1FC);
    func_801518D4(0, 7, 6);
    func_800058DC(arg0, func_801F290C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F290C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2C74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F2FF0.s")


extern u16 D_801BBBF4;
extern void func_801F34FC(void);

void func_801F3430(void *arg0, void *arg1) {
    if (D_801BBBF4 == 0xD) {
        if ((f64)*(f32 *)(*(u8 **)(*(u8 **)((u8 *)arg0 + 0x24) + 0x30) + 8) == ((f64)(f32)*(s16 *)(*(u8 **)((u8 *)arg0 + 0x38) + 8) / 10.0 + 0.5)) {
            func_80020718(0x1FC);
            func_801518D4(0, 7, 6);
        }
    } else {
        func_80020718(0x1FC);
        func_801518D4(0, 7, 6);
    }
    func_800058DC(arg0, func_801F34FC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F34FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801F19A0/func_801F3610.s")


struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};

struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};

struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};

struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};

struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};

extern struct func_801F38B8_Base D_801BBBF0;

void func_801F38B8(f32 arg0) {
    struct func_801F38B8_Lo *temp_v0;

    temp_v0 = D_801BBBF0.unkDC->unk64;
    if (temp_v0 != NULL) {
        temp_v0->unk24->unk30->unk8 = D_801BBBF0.unkE0->unk2C->unk8;
    }
}

