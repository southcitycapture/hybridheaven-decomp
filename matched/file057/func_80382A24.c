#include "context.h"

typedef struct func_80382A24_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
} func_80382A24_Struct;

extern void func_80382A78();

void func_80382A24(func_80382A24_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if ((temp_v0 < 0) || (D_80089474[2] & 0x8000) || (D_80089474[2] & 0x2000)) {
        func_800058DC(arg0, func_80382A78);
    }
}
