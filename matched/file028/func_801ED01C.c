#include "context.h"

extern f32 D_802089E0;

#define FUNC_801ED01C_N8(p) (*(void **)((u8 *)(p) + 0x8))
#define FUNC_801ED01C_N24(p) (*(void **)((u8 *)(p) + 0x24))
#define FUNC_801ED01C_N2C(p) (*(void **)((u8 *)(p) + 0x2C))
#define FUNC_801ED01C_OBJ FUNC_801ED01C_N2C(FUNC_801ED01C_N24(FUNC_801ED01C_N8(FUNC_801ED01C_N8(FUNC_801ED01C_N8(*(void **)&D_801DAB14)))))

s32 func_801ED01C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = (s32)FUNC_801ED01C_N24(FUNC_801ED01C_N8(FUNC_801ED01C_N8(FUNC_801ED01C_N8(*(void **)&D_801DAB14))));
    if (temp_v0 != 0) {
        *(f32 *)((u8 *)FUNC_801ED01C_N2C((void *)temp_v0) + 0x4) = 7.0f;
        *(f32 *)((u8 *)FUNC_801ED01C_OBJ + 0x8) = 0.0f;
        *(f32 *)((u8 *)FUNC_801ED01C_OBJ + 0xC) = D_802089E0;
        *(u16 *)((u8 *)FUNC_801ED01C_OBJ + 0x12) = 0x1E38;
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
