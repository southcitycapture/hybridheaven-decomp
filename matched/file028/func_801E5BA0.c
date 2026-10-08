#include "context.h"

extern f32 D_80208858;

#define func_801E5BA0_NEXT(p, off) (*(void **)((u8 *)(p) + (off)))
#define func_801E5BA0_BASE func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(D_801DAB14, 0x8), 0x8), 0x8), 0x8), 0x8)
#define func_801E5BA0_OBJ func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_BASE, 0x24), 0x2C)

s32 func_801E5BA0(s32 arg0, s32 arg1) {
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 4) = -100.0f;
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 8) = 0.0f;
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 0xC) = D_80208858;
    *(s16 *)((u8 *)func_801E5BA0_OBJ + 0x12) = 0;

    func_801CC470(4, 0x0320002C, 0, 0x1100, 6.0f);
    return 5;
}
