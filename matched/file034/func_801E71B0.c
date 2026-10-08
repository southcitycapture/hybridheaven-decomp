#include "common.h"

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E71B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_801CC470(2, 0x02A80026, 0, 0x1000, 1.5f);
        return 0x1A;
    }
    return 0x19;
}
