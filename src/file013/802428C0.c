#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_802428C0.s")


extern void func_80005700(s32 arg0);
extern s32 func_80133A24(s32 arg0);
extern s32 func_80126CC0(s32 arg0, void *arg1);
extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern void func_80127014(void);
extern void func_80242958();

void func_802428E8(s32 arg0, s32 arg1) {
    if (func_80133A24(8) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        func_8013B570(arg0, 0x51, 2, 3, func_80242958);
    }
}


extern void func_800058DC(void *, void *);
extern void func_802429A8(void);

typedef struct func_80242958_Struct04 {
    u8 pad0[0x4];
    f32 unk4;
} func_80242958_Struct04;

typedef struct func_80242958_Struct2C {
    u8 pad0[0x2C];
    func_80242958_Struct04 *unk2C;
} func_80242958_Struct2C;

typedef struct func_80242958_Struct5C {
    u8 pad0[0x78];
    s16 unk78;
} func_80242958_Struct5C;

typedef struct func_80242958_Struct0 {
    u8 pad0[0x24];
    func_80242958_Struct2C *unk24;
    u8 pad1[0x5C - 0x28];
    func_80242958_Struct5C *unk5C;
} func_80242958_Struct0;

void func_80242958(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct04 *temp_v0;
    func_80242958_Struct5C *temp_v1;
    func_80242958_Struct0 *temp_t7;

    temp_v1 = arg0->unk5C;
    temp_v1->unk78 = 1;
    temp_t7 = arg0;
    temp_v0 = temp_t7->unk24->unk2C;
    temp_v0->unk4 = temp_v0->unk4 - 800.0f;
    func_800058DC(arg0, func_802429A8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_802429A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_80242A3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_80242B00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_80242BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file013/802428C0/func_80242C58.s")

