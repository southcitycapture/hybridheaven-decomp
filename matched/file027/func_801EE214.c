#include "common.h"

extern void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801F33A0[];

s32 func_801EE214(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038CB60(0.0f, D_801F33A0);
        return 1;
    }
    return 0;
}
