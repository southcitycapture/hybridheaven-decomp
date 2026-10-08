#include "context.h"

extern u16 D_801BBC1C;
void func_8013B570(void *arg0, u16 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_8013BE20(u8 *arg0, s32 arg1) {
    s32 var_v0;

    arg0[0x4C] = 0xA;
    arg0[0x4D] = 0x12;
    arg0[0x4E] = 0xA;
    arg0[0x3E] = 5;
    arg0[0x4F] = 1;
    if ((D_801BBC1C == 0xA) || (D_801BBC1C == 0xB)) {
        var_v0 = 1;
    } else {
        var_v0 = 3;
    }
    func_8013B570(arg0, *(u16 *)(arg0 + 0x36), 2, var_v0 & 0xFF, 0);
}
