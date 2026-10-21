#include "context.h"

extern f32 D_80208DAC;

s32 func_801FC710(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        *(s16 *)((u8 *)O(2) + 0x10) += (s16)((2048.0f * D_80208DAC) / 90.0f);
    }
    return 2;
}
