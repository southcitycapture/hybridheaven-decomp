#include "context.h"

#define func_801F9818_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define func_801F9818_CHAIN func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT((u8 *)D_801DAB14)))))))

s32 func_801F9818(s32 arg0, s32 arg1) {
    u8 *obj;

    obj = *(u8 **)((u8 *)func_801F9818_CHAIN + 0x24);
    if (obj != NULL) {
        *(f32 *)(*(u8 **)(obj + 0x2C) + 0x4) = -22.0f;
        *(f32 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0x8) = 3.0f;
        *(f32 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0xC) = -28.0f;
        *(s16 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(6, 0x03480023, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}
