#include "context.h"

struct func_801F0634_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801F0634_Struct3 {
    u8 pad0[0x2C];
    struct func_801F0634_Struct4 *unk2C;
};

struct func_801F0634_Struct2 {
    u8 pad0[0x24];
    struct func_801F0634_Struct3 *unk24;
};

struct func_801F0634_Struct1 {
    u8 pad0[8];
    struct func_801F0634_Struct2 *unk8;
};

extern s32 func_801CFE28(s32, s32);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_801F5A38;

s32 func_801F0634(s32 arg0, s32 arg1) {
    struct func_801F0634_Struct4 *temp_v0;

    if ((func_801CFE28(0x02A80016, 0xB4) != 0) || (func_801CFE28(0x02A80016, 0xD2) != 0) || (func_801CFE28(0x02A80016, 0xF9) != 0) || (func_801CFE28(0x02A80016, 0x126) != 0) || (func_801CFE28(0x02A80016, 0x147) != 0)) {
        temp_v0 = (*(struct func_801F0634_Struct1 **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x664, D_801F5A38, 1.0f);
    }
    return 0xA;
}
