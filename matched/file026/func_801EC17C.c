#include "common.h"
#include "functions.h"

s32 func_801C2C90(f32 a0, f32 a1, s32 a2, s32 a3, s32 t0, s32 t1, s32 t2, void *t3, s32 t4);

extern u8 D_801D8F00[];
extern f32 D_801FC85C;

s32 func_801EC17C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x050384BA) != 0) {
        func_801C2C90(D_801FC85C, 15.0f, 0xC0C00000, 0xB0, 0xB0, 0xB0, 0x80, D_801D8F00, 9);
        return 2;
    }
    return 1;
}
