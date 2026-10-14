#include "context.h"

s32 func_80126A0C(void *arg0, u16 arg1, s32 arg2);

void func_801FF52C(void *arg0, s32 arg1) {
    if (func_80126A0C(arg0, D_8021774C[((u8 *) arg0)[0x9F]], 0) != 0) {
        *(u16 *) ((u8 *) arg0 + 0xA8) = *(u16 *) ((u8 *) arg0 + 0xA8) & 0xFFFB;
        func_800058DC(arg0, &func_801FF588);
    }
}
