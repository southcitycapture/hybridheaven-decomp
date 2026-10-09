#include "context.h"

#define FUNC_801EE680_NX(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EE680_OBJ (*(u8 **)(FUNC_801EE680_NX(FUNC_801EE680_NX(FUNC_801EE680_NX(FUNC_801EE680_NX((u8 *)D_801DAB14)))) + 0x24))

s32 func_801EE680(s32 arg0, s32 arg1) {
    if (FUNC_801EE680_OBJ != NULL) {
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x4) = 5120.0f;
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x8) = 3.0f;
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0xC) = -28.0f;
        *(s16 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x12) = 0;
        func_801CC470(3, 0x03480011, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
