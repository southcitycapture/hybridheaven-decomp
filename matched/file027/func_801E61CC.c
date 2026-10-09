#include "context.h"

extern s32 func_801D2108(s32 a0, s32 a1);
extern f64 D_801F5898;

s32 func_801E61CC(s32 arg0, s32 arg1) {
    if (D_801F5898 < (f64) *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC)) {
        return 0x22;
    }
    if ((func_801D2108(0x01680003, 0x14) != 0) || (func_801D2108(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x663);
    }
    return 0x21;
}
