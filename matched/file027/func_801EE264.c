#include "common.h"

extern s32 func_8038CBF0();
extern u8 *func_801BF6B0();

s32 func_801EE264(s32 arg0, s32 arg1) {
    u8 *obj;

    if (func_8038CBF0() != 0) {
        obj = func_801BF6B0(4);
        if (*(s32 *)(obj + 0x54) >= 4) {
            return 2;
        }
    }
    return 1;
}
