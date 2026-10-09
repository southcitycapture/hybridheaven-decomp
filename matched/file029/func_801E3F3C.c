#include "context.h"
extern void *D_801DAB14;
extern s32 func_801C0B8C(u64);

extern s32 D_801E625C;

s32 func_801E3F3C(s32 arg0, s32 arg1) {
    f32 zero = 0.0f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)D_801DAB14 + 0x0 + 0x8) + 0x24) + 0x2C) + 0x8) = zero;
    if (func_801C0B8C(0x4C4B40) != 0) {
        D_801E625C = 0;
        return 0x17;
    }
    return 0x16;
}
