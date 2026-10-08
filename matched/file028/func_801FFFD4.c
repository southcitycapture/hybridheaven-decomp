#include "context.h"

extern f32 D_80208DE4;
extern f32 D_80208DE8;

s32 func_801FFFD4(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = *(void **)((u8 *)D_801DAB14->unk8 + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)((u8 *)temp_v0 + 0x2C) + 0x4) = D_80208DE4;
        *(f32 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0xC) = D_80208DE8;
        *(s16 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0x12) = 0x1F33;
        func_801CC470(0, 0x0320001A, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}
