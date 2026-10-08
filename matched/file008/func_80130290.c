#include "common.h"

s32 func_80130264();                                /* extern */
extern u8 D_801760B4;

s32 func_80130290(void) {
    if ((func_80130264() != 0) && (D_801760B4 == 0)) {
        return 1;
    }
    return 0;
}
