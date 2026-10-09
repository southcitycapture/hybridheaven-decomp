#include "context.h"

s32 func_801D0AF8();                                /* extern */
s32 func_801D1B04();                                /* extern */
s32 func_801D6A1C();                                /* extern */

s32 func_801C01F0(void) {
    if (func_801D1B04() != 0) {
        return 1;
    }
    if (func_801D0AF8() != 0) {
        return 1;
    }
    if (func_801D6A1C() != 0) {
        return 1;
    }
    return 0;
}
