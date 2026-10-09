#include "context.h"

extern s32 D_801ED0FC;

s32 func_801EA484(s32 arg0, s32 arg1) {
    if (D_801ED0F8 >= 0x11) {
        D_801ED0F8 = 0;
        D_801ED0FC = 0;
        func_8038D28C(0x25C);
        return 0x23;
    }
    D_801ED0F8 += 1;
    return 0x22;
}
