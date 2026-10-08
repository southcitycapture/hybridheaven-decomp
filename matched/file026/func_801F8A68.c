#include "context.h"

extern s32 D_801FB9D0;

s32 func_801F8A68(s32 arg0, s32 arg1) {
    if (D_801FB9D0 >= 0x10) {
        func_8038D28C(0x81);
        return 0x1D;
    }
    D_801FB9D0 += 1;
    return 0x1C;
}
