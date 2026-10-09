#include "context.h"
s32 func_801C0B8C(u64 time);
extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E4394(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x03480012, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}
