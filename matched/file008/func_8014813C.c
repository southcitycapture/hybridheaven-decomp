#include "context.h"
extern u8 *D_8008D8F8[];

void func_8014813C(s8 *arg0, u8 arg1, s16 arg2, s16 arg3) {
    s8 sp47;

    sp47 = 0;
    func_80146208(arg0, &sp47, 0x26, arg2, arg3, 5, 7, (arg1 % 10 & 0xFF) * 5, 0, 0xFF, 0x21C, 6);
    func_80146208(arg0, &sp47, 0x26, (s16)(arg2 - 4), arg3, 5, 7, (arg1 / 10 & 0xFF) * 5, 0, 0xFF, 0x21C, 6);
    if ((arg1 / 10 & 0xFF) == 0) {
        D_8008D8F8[99 + func_80006214(arg0)][0x22] = 0;
    }
}
