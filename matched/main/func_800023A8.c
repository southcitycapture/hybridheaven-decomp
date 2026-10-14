#include "context.h"

extern u8 D_800692B0[];

void func_800023A8(s32 arg0) {
    u8 *temp_v0;
    s32 *temp_p;

    temp_p = &arg0;
    arg0 &= 0xFF;
    temp_v0 = (arg0 << 5) + 0x20000 + D_800692B0;
    *(s32 *)(temp_v0 + 0x1D8) = 0;
    *(s32 *)(temp_v0 + 0x1D4) = 0;
    *(s16 *)(temp_v0 + 0x1DC) = 0xA;
    *(s16 *)(temp_v0 + 0x1DE) = 2;
    *(s16 *)(temp_v0 + 0x1D2) = 0;
    *(u8 *)(temp_v0 + 0x1E0) = 0;
}
