#include "context.h"

#define FUNC_801F7074_NEXT(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801F7074_CHAIN() FUNC_801F7074_NEXT(FUNC_801F7074_NEXT((u8 *)D_801DAB14, 0x8), 0x24)

s32 func_801F7074(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FUNC_801F7074_CHAIN();
    if (temp_v0 != NULL) {
        *(f32 *)(FUNC_801F7074_NEXT(temp_v0, 0x2C) + 0x4) = 12.0f;
        *(f32 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0xC) = -1.0f;
        *(s16 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0x12) = 0x1871;
        func_801CC470(0, 0x0320001A, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
