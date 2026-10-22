#include "common.h"

s32 func_80002A94(u8);
s32 func_80002B44(u8);
s32 func_80002BAC(u8);
s32 func_802253B8(s32 arg0);

u8 func_80225450(s32 arg0, u8 arg1) {
    u8 s0;
    u8 ret;

    s0 = arg0 = func_802253B8(arg0);
    ret = 0;
    if (!(arg0 & 0x80)) {
        if (arg1 == 1) {
            ret = arg0 = func_80002B44(s0);
        } else {
            ret = arg0 = func_80002BAC(s0);
        }
        if (arg0 != 0) {
            ret = arg0 = func_80002A94(s0);
            if (arg0 == 0) {
                if (arg1 == 1) {
                    ret = func_80002B44(s0);
                } else {
                    ret = func_80002BAC(s0);
                }
            }
        }
    }
    return ret;
}
