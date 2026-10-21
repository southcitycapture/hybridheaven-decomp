#include "context.h"

s32 func_8000FF80(s32 arg0, u16 arg1, func_8000FCD0_Struct *arg2, u16 *arg3, func_8000FCD0_Struct arg4) {
    s32 i;
    u16 sp32;
    s32 j;

    sp32 = 0;
    func_800279F0(arg2, 0x240);
    for (i = 0; i < 0x30; i++) {
        arg3[i] = 0xFFFF;
    }
    func_8000FCD0(&sp32, &arg4, arg2);
    for (j = 1; j < arg1; j++) {
        arg3[j] = 0;
    }
    return 1;
}
