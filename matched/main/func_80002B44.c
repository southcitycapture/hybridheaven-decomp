#include "context.h"

extern s32 func_80027A90(void *, s32, s32);
extern u32 D_80037780[];
extern u8 D_8005CE70[];

s32 func_80002B44(u8 arg0) {
    u32 temp_a2;

    temp_a2 = arg0 & 0xFF;
    if (D_80037780[temp_a2] != 0) {
        return func_80027A90(D_8005CE70 + temp_a2 * 0x68, 1, temp_a2) & 0xFF;
    }
    return 0xFF;
}
