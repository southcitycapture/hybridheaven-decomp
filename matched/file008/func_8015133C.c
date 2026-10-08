#include "context.h"

s32 func_8015133C(func_801512CC_Struct *arg0, f32 *arg1) {
    if (func_801517CC() != 0) {
        arg1[0] = arg0->unk24->unk2C->unk4;
        arg1[1] = arg0->unk24->unk2C->unk8;
        arg1[2] = arg0->unk24->unk2C->unkC;
        return 1;
    }
    return 0;
}
