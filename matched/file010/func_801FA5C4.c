#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 D_802170C0;
extern s32 func_801FB13C(void);

s32 func_801FA5C4(void) {
    if (D_802170C0 != 0) {
        func_800058DC(D_802170C0, func_801FB13C);
        return 1;
    }
    return 0;
}
