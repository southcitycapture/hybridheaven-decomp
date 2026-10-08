#include "context.h"

s32 func_80001060();                                /* extern */

s32 func_80130264(void) {
    if (func_80001060() != 0) {
        return 1;
    }
    return 0;
}
