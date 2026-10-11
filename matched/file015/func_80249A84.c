#include "context.h"
extern void func_800179B0(void *arg0);
extern void func_801C2F0C(s32 arg0, void *arg1);

typedef struct func_80249A84_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x9C - 0x60];
    s16 unk9C;
} func_80249A84_Struct;

typedef struct func_80249A84_Locals {
    s16 unk28;
    s32 unk2C;
    f32 unk30;
    s16 unk34;
    u8 pad36[0x10];
} func_80249A84_Locals;

extern s32 func_80010550(s32, s32);
void func_801C3C60(void *, s32);
extern func_8024AA38_Struct D_8025307C;
extern u8 D_802530C4[];
extern void func_80249B54(void);

void func_80249A84(func_80249A84_Struct *arg0, s32 arg1) {
    func_80249A84_Locals sp;
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp) != 0) {
        sp.unk28 = 0x1000;
        sp.unk2C = 0x01680041;
        sp.unk34 = 0xF;
        sp.unk30 = 1.0f;
        func_801C2F0C(3, &sp.unk28);
        func_800179B0(D_802530C4);
        func_8013A1B4(arg1, D_8025307C, 0xFFFFFF);
        arg0->unk9C = 0;
        func_800058DC(arg0, func_80249B54);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}
