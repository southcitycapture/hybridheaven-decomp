#include "context.h"
extern s32 func_8001B204();
extern u16 D_80089474[];
extern s32 D_801D8DD8;
extern s32 D_801D8DDC;
extern u8 D_801DCF20[];
extern u8 D_801DCF3C[];

s32 func_801C1E94() {
    if (D_801D8DD4 != 0) {
        D_801D8DD8 = D_801D8DDC;
        if (D_80089474[1] & 0x1000) {
            D_801D8DDC = 1;
            func_8001B204(7, 0x14, 0x28, D_801DCF20);
        } else {
            D_801D8DDC = 0;
            func_8001B204(7, 0x14, 0x28, D_801DCF3C);
        }
        return (D_801D8DDC == 1) && (D_801D8DD8 == 0);
    }
    return 0;
}
