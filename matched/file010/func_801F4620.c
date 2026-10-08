#include "context.h"

typedef struct func_801F4620_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} func_801F4620_Struct;

void func_801F4620(func_801F4620_Struct *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    arg0->unk0 = arg4 - arg1;
    arg0->unk4 = arg5 - arg2;
    arg0->unk8 = arg6 - arg3;
}
