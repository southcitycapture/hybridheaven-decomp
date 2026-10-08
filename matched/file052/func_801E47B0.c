#include "common.h"

struct func_801E47B0_Struct {
    u8 pad[0x24];
    s32 unk24;
};

struct func_801E47B0_Struct *func_801BF6B0(s32 arg0);
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E47B0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(4)->unk24 >= 6) {
        func_801CC470(2, 0x03480066, 0, 0, 4.0f);
        return 5;
    }
    return 4;
}
