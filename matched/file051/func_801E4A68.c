#include "context.h"
void *func_801BF6B0(s32 arg0);
void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E4A68(s32 arg0, s32 arg1) {
    if (((func_801E23C4_Struct *)func_801BF6B0(0))->unkC >= 0x16) {
        func_801CC4D8(0, 0x01B80026, 0, 0, 5.0f);
        return 0x12;
    }
    return 0x11;
}
