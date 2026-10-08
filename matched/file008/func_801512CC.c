#include "common.h"

typedef struct func_801512CC_Vec {
    s32 pad0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801512CC_Vec;

typedef struct func_801512CC_Mid {
    u8 pad0[0x2C];
    func_801512CC_Vec *unk2C;
} func_801512CC_Mid;

typedef struct func_801512CC_Struct {
    u8 pad0[0x24];
    func_801512CC_Mid *unk24;
} func_801512CC_Struct;

s32 func_801517CC(void);

s32 func_801512CC(func_801512CC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (func_801517CC() != 0) {
        arg0->unk24->unk2C->unk4 = arg1;
        arg0->unk24->unk2C->unk8 = arg2;
        arg0->unk24->unk2C->unkC = arg3;
        return 1;
    }
    return 0;
}
