#include "common.h"

extern void func_8012CF8C(void *arg0, void *arg1, u16 arg2, s32 arg3);

void func_8012D844(void *arg0, u16 arg1, s32 arg2) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(((u8 *)arg0) + 0x24);
    if (*(void **)(temp_v0 + 0x2C) != NULL) {
        func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x2C) + 0x40, arg1, arg2);
        return;
    }
    func_8012CF8C(arg0, *(u8 **)(temp_v0 + 0x30) + 0x40, arg1, arg2);
}
