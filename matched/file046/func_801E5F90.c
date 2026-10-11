#include "common.h"

s32 func_801CED5C(s32 arg0);
s32 func_801CEDE4(void);

s32 func_801E5F90(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 14;
    }
    return 13;
}
