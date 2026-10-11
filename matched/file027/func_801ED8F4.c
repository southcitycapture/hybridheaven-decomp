#include "common.h"

s32 func_801D271C(s32 arg0);
s32 func_801D278C(void);

s32 func_801ED8F4(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 20;
    }
    return 19;
}
