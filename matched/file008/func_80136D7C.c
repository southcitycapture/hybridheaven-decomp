#include "context.h"

s32 func_80150584();

void func_80136D7C(s32 arg0, s32 arg1) {
    u8 *base;

    if (func_80150584() != 0) {
        base = (u8 *) &D_801BBBF0;
        *(f32 *) (base + 0x29C) = *(f32 *) (base + 0x2A4);
        *(f32 *) (base + 0x2A0) = *(f32 *) (base + 0x2A8);
        *(u8 *) (base + 0xF35) = *(u8 *) (base + 0xF48);
    }
}
