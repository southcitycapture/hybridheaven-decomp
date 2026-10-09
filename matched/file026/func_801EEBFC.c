#include "context.h"

extern f32 D_801FC8F8;

#define LW(p, off) (*(s32 *)((u8 *)(p) + (off)))
#define FUNC_801EEBFC_NODE LW(LW(LW(LW(LW(LW(ptr, 0), 8), 8), 8), 8), 0x24)

s32 func_801EEBFC(s32 arg0, s32 arg1) {
    s32 **ptr;

    if (func_801C0B8C(0x06670C5A) != 0) {
        ptr = (s32 **)&D_801DAB14;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 4) = -202.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 8) = 0.0f;
        *(f32 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 12) = D_801FC8F8;
        *(s16 *)((u8 *)LW(FUNC_801EEBFC_NODE, 0x2C) + 18) = 0x800;
        func_801CC470(3, 0x02A80006, 0, 0x100, 3.0f);
        return 0x14;
    }
    return 0x13;
}
