#include "common.h"

extern u8 D_801DAB14[];
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 a4);

#define FUNC_801E5E40_BASE (*(u8 **)D_801DAB14)
#define FUNC_801E5E40_OBJ (*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(FUNC_801E5E40_BASE + 8) + 8) + 8) + 8))
#define FUNC_801E5E40_SUB (*(u8 **)(*(u8 **)(FUNC_801E5E40_OBJ + 0x24) + 0x2C))

s32 func_801E5E40(s32 arg0, s32 arg1) {
    u8 *v0;

    v0 = *(u8 **)(FUNC_801E5E40_OBJ + 0x24);
    if (v0 != NULL) {
        *(f32 *)(*(u8 **)(v0 + 0x2C) + 4) = 5120.0f;
        *(f32 *)(FUNC_801E5E40_SUB + 8) = 0.0f;
        *(f32 *)(FUNC_801E5E40_SUB + 0xC) = 95.0f;
        *(s16 *)(FUNC_801E5E40_SUB + 0x12) = 0x1000;
        func_801CC470(3, 0x0191009E, 0, 0x100, 4.0f);
        return 2;
    }
    return 1;
}
