#include "common.h"

typedef struct func_8012C1BC_Struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_8012C1BC_Struct;

typedef struct func_8012C1BC_Mid {
    u8 pad0[0x2C];
    func_8012C1BC_Struct *unk2C;
} func_8012C1BC_Mid;

typedef struct func_8012C1BC_Outer {
    u8 pad0[0x24];
    func_8012C1BC_Mid *unk24;
} func_8012C1BC_Outer;

extern void func_8012C148(f32, f32, s32, void *, void *, void *);

void func_8012C1BC(func_8012C1BC_Outer *arg0) {
    func_8012C1BC_Struct *temp_v0;

    temp_v0 = arg0->unk24->unk2C;
    temp_v0->unk8 = temp_v0->unk8 - 20.0f;
    temp_v0 = arg0->unk24->unk2C;
    func_8012C148(temp_v0->unk4, temp_v0->unk8 + 40.0f, temp_v0->unkC, &temp_v0->unk4, &temp_v0->unk8, &temp_v0->unkC);
}
