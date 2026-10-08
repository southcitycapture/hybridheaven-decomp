#include "context.h"

extern s16 func_80020EA0(s32);
extern s16 D_801BBBFE;
extern s16 D_801BBC00;
extern s16 D_801BBC02;
extern s16 D_801BBC04;

s32 func_80126968(void) {
    D_801BBBFE = func_80020EA0(0);
    D_801BBC00 = func_80020EA0(1);
    D_801BBC02 = func_80020EA0(2);
    D_801BBC04 = func_80020EA0(3);
    return 1;
}
