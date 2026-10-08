#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);
extern void func_802426D8(void);

void func_80242690(u8 *arg0, void **arg1) {
    u8 *temp_v0;
    s32 temp_v1;

    temp_v0 = *(u8 **)((u8 *)*arg1 + 0x30);
    temp_v0[0x4B] = temp_v0[0x4B] + 1;
    temp_v1 = *(u16 *)(arg0 + 0x92);
    *(u16 *)(arg0 + 0x92) = temp_v1 - 1;
    if (temp_v1 == 0) {
        func_800058DC(arg0, func_802426D8);
    }
}
