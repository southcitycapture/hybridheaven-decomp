#include "common.h"

extern s32 func_8038CBF0(void);

s32 func_801F1E38(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}
