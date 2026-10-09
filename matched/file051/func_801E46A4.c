#include "context.h"
extern u8 D_801DAB14[];
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

extern f32 D_801E7904;
extern f32 D_801E7908;

#define FUNC_801E46A4_BASE (*(u8 **)D_801DAB14)
#define FUNC_801E46A4_OBJ (*(u8 **)(FUNC_801E46A4_BASE + 8))
#define FUNC_801E46A4_SUB (*(u8 **)(*(u8 **)(FUNC_801E46A4_OBJ + 0x24) + 0x2C))

s32 func_801E46A4(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(FUNC_801E46A4_OBJ + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 4) = D_801E7904;
        *(f32 *)(FUNC_801E46A4_SUB + 8) = 0.0f;
        *(f32 *)(FUNC_801E46A4_SUB + 0xC) = D_801E7908;
        *(s16 *)(FUNC_801E46A4_SUB + 0x12) = 0x400;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}
