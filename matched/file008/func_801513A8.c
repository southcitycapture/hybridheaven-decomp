#include "context.h"

s32 func_801513A8(func_801512CC_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    func_801512CC_Vec *temp_v1;

    if (func_801517CC() != 0) {
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unk4 = temp_v1->unk4 + arg1;
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unk8 = temp_v1->unk8 + arg2;
        temp_v1 = arg0->unk24->unk2C;
        temp_v1->unkC = temp_v1->unkC + arg3;
        return 1;
    }
    return 0;
}
