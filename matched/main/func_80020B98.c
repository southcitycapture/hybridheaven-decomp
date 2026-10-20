#include "context.h"

void func_80020B98(u8 arg0, u8 arg1) {
    if (arg1 >= 0x15) {
        arg1 = 0x14;
    }
    if (arg0 <= 0) {
        D_800CBAD0[arg0] = arg1;
    } else {
        D_800CBAD0[0] = arg1;
        D_800CBAD0[1] = arg1;
    }
}
