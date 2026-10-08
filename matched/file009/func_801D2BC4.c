#include "context.h"

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
