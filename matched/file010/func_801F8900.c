#include "common.h"
extern void (*D_80216D10[])(void *, s32);
void func_800058DC(void *, s32);                    /* extern */
extern s32 func_80010550();


extern u8 func_801F8974[];

void func_801F8900(u8 *arg0, s32 arg1) {
    u8 *temp_a3;

    temp_a3 = *(u8 **)(arg0 + 0x5C);
    func_80010550(arg1, temp_a3, arg0);
    if (*(s32 *)(arg0 + 0x30) & 4) {
        *(s16 *)(temp_a3 + 0x78) = 1;
        *(s16 *)(arg0 + 0x3C) = 0;
        *(f32 *)(arg0 + 0x40) = 0.0f;
        *(f32 *)(arg0 + 0x48) = 0.0f;
        func_800058DC(arg0, (s32)func_801F8974);
    }
}
