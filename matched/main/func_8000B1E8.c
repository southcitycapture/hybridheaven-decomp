#include "context.h"

struct func_8000B1E8_Sub {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_8000B1E8_Outer {
    u8 pad[0x2C];
    struct func_8000B1E8_Sub *unk2C;
    struct func_8000B1E8_Sub *unk30;
};

extern void func_8000AFE0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32);

void func_8000B1E8(s32 arg0, struct func_8000B1E8_Outer *arg1) {
    struct func_8000B1E8_Sub *var_v0;

    if (arg1->unk2C != NULL) {
        var_v0 = arg1->unk2C;
    } else {
        var_v0 = arg1->unk30;
    }
    func_8000AFE0(arg0, var_v0->unk4, var_v0->unk8, var_v0->unkC, var_v0->unk10, var_v0->unk12, var_v0->unk14, var_v0->unk18, var_v0->unk1C, var_v0->unk20);
}
