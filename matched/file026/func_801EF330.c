#include "context.h"

extern f32 D_801FC908;
extern f32 D_801FC90C;

#define FUNC_801EF330_DEREF8(x) (*(u8 **)((u8 *)(x) + 8))
#define FUNC_801EF330_X5 FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8(FUNC_801EF330_DEREF8((u8 *)D_801DAB14)))))
#define FUNC_801EF330_Q (*(u8 **)((u8 *)FUNC_801EF330_X5 + 0x24))
#define FUNC_801EF330_R (*(u8 **)((u8 *)FUNC_801EF330_Q + 0x2C))

s32 func_801EF330(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x05E5593A) != 0) {
        *(f32 *)((u8 *)FUNC_801EF330_R + 4) = D_801FC908;
        *(f32 *)((u8 *)FUNC_801EF330_R + 8) = 0.0f;
        *(f32 *)((u8 *)FUNC_801EF330_R + 0xC) = D_801FC90C;
        *(s16 *)((u8 *)FUNC_801EF330_R + 0x12) = 0x800;
        return 8;
    }
    return 7;
}
