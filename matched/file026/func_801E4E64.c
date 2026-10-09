#include "context.h"
s32 func_801C0B8C(u64 time);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4E64(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x071BEA70) != 0) {
        if (func_801C0B8C(0x08DAFF90) != 0) {
            func_801CC470(0, 0x01B80015, 0, 0x1000, 1.5f);
            return 9;
        }
    }
    return 8;
}
