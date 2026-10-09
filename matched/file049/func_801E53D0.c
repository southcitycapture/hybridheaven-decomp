#include "context.h"

struct func_801E53D0_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E53D0_Struct {
    u8 pad0[0x8];
    struct func_801E53D0_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E53D0_Struct *unk24;
    u8 pad2[0x4];
    struct func_801E53D0_Struct3 *unk2C;
};

extern s32 func_801CEE30(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_801E7740;

s32 func_801E53D0(s32 arg0, s32 arg1) {
    struct func_801E53D0_Struct3 *temp_v0;

    if (func_801BF6B0(0)->unkC >= 0xF) {
        ((struct func_801E53D0_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 0x19;
    }
    if ((func_801CEE30(0x01B8001B, 0x18) != 0) || (func_801CEE30(0x01B8001B, 0x3C) != 0)) {
        temp_v0 = ((struct func_801E53D0_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67D, D_801E7740, 1.0f);
    }
    return 0x18;
}
