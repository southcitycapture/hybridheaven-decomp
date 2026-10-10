#include "context.h"

extern void func_801D04F8();

#ifndef FN_GET
#define FN_GET(p, off) (*(u8 **)((u8 *)(p) + (off)))
#endif
#ifndef FN_CHAIN5
#define FN_CHAIN5(p) FN_GET(FN_GET(FN_GET(FN_GET(FN_GET(p, 8), 8), 8), 8), 8)
#endif
#define FN_OBJ_BASE FN_GET(FN_GET(FN_CHAIN5(D_801DAB14), 0x24), 0x2C)

s32 func_801E754C(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FN_GET(FN_CHAIN5(D_801DAB14), 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(FN_GET(temp_v0, 0x2C) + 4) = 5120.0f;
        *(f32 *)(FN_OBJ_BASE + 8) = 0.0f;
        *(f32 *)(FN_OBJ_BASE + 0xC) = -45.0f;
        *(s16 *)(FN_OBJ_BASE + 0x12) = 0;
        func_801D04F8();
        func_801CC470(4, 0x03480090, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
