#include "common.h"

typedef struct func_801C8060_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801C8060_Struct;

typedef struct func_801C8060_Mid {
    u8 pad0[0x2C];
    func_801C8060_Struct *unk2C;
} func_801C8060_Mid;

typedef struct func_801C8060_Outer {
    u8 pad0[0x24];
    func_801C8060_Mid *unk24;
} func_801C8060_Outer;

extern void func_801C7FEC(f32, f32, s32, void *, void *, void *);

void func_801C8060(func_801C8060_Outer *arg0) {
    func_801C8060_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_801C7FEC(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}
