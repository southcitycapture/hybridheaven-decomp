#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);
extern void func_802459C8(void);

void func_80245988(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = ((u16 *)arg0)[0x3C / 2];
    ((u16 *)arg0)[0x3C / 2] = temp_v0 + 1;
    if (temp_v0 == 0xA0) {
        ((u16 *)arg0)[0x3C / 2] = 0;
        func_800058DC(arg0, func_802459C8);
    }
}
