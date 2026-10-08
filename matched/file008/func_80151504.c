#include "context.h"

typedef struct func_80151504_Struct {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80151504_Struct;

s32 func_80151504(func_80151504_Struct *arg0, f32 arg1, f32 arg2, f32 arg3) {
    if (func_801517CC() != 0) {
        arg0->unk40 = arg1;
        arg0->unk44 = arg2;
        arg0->unk48 = arg3;
        return 1;
    }
    return 0;
}
