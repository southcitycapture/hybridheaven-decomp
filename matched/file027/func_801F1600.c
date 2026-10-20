#include "common.h"

extern s32 func_801D271C(s32);
extern s32 func_801D278C(void);

s32 func_801F1600(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 31;
    }
    return 30;
}
