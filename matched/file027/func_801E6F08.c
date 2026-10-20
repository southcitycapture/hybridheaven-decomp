#include "common.h"

extern s32 func_801D271C(s32);
extern s32 func_801D278C(void);

s32 func_801E6F08(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 29;
    }
    return 28;
}
