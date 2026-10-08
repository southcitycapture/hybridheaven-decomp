#include "common.h"

extern u8 D_801BC3D8[];

void func_8038D9D8(u8 *arg0, s16 *arg1) {
    if (arg1[3] >= 0x64 && 13.0 < (f64) *(f32 *) &D_801BC3D8[0x3A8]) {
        arg0[0xA5] = 2;
        return;
    }
    arg0[0xA5] = 0;
}
