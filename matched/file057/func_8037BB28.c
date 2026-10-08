#include "common.h"

extern void func_80005700(void *);
extern s32 func_80236BA4(s32, void *);
extern u8 *D_8008DA88;
extern u8 D_801BCC21;

void func_8037BB28(u8 *arg0, u8 *arg1) {
    u8 *var_v0;
    u8 *temp_v0;
    s32 temp_v1;
    s32 temp_a0;

    arg1 = arg0;
    if (arg0[0x90] == 0) {
        var_v0 = *(u8 **)(arg0 + 0xA4) + 0x9E;
    } else {
        var_v0 = *(u8 **)(arg1 + 0xA4) + 0xA0;
    }
    if ((*(u16 *)var_v0 == 0) || (temp_v0 = *(u8 **)(D_8008DA88 + 0x30), temp_a0 = temp_v0[0xB]-- == 0, temp_a0 != 0) || (((s32) D_801BCC21 >= 0xA) && (D_801BCC21 != 0xF)) || (func_80236BA4(temp_a0, arg1) == 0)) {
        func_80005700(arg1);
    }
}
