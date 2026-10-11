#include "context.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801EA1FC;

#define FUNC_801E42BC_NEXT(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E42BC_CHAIN() FUNC_801E42BC_NEXT(FUNC_801E42BC_NEXT((u8 *)D_801DAB14, 0x8), 0x24)

s32 func_801E42BC(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FUNC_801E42BC_CHAIN();
    if (temp_v0 != NULL) {
        *(f32 *)(FUNC_801E42BC_NEXT(temp_v0, 0x2C) + 0x4) = D_801EA1FC;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0xC) = 164.0f;
        *(s16 *)(FUNC_801E42BC_NEXT(FUNC_801E42BC_CHAIN(), 0x2C) + 0x12) = 0x1127;
        func_801CC470(0, 0x03480012, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}
