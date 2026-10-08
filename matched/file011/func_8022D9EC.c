#include "context.h"

extern f32 D_8023FA30;
extern f32 D_8023FA34;

void func_8022D9EC(u8 *arg0) {
    if (arg0 == D_801BBBF0 + 0x44C) {
        arg0[0x2D] = (s32) (func_8001EAD0(*(s16 *) (D_801BBBF0 + 0x30)) * D_8023FA30);
        return;
    }
    arg0[0x2D] = (s32) (func_8001EAD0((s16) (*(u16 *) (D_801BBBF0 + 0x30) + 0x1000)) * D_8023FA34);
}
