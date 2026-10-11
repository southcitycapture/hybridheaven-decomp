#include "common.h"

s32 func_801D271C(s32 arg0);
s32 func_801D278C(void);

s32 func_801E6C04(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 22;
    }
    return 21;
}
