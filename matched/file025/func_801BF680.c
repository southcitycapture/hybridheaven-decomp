#include "common.h"

extern s32 D_801D8D04[];

s32 func_801BF680(s32 arg0, s32 *arg1) {
    s32 off;

    off = arg0 * 4;
    if (arg0 >= 9) {
        return 0;
    }
    *arg1 = *(s32 *)((u8 *)D_801D8D04 + off);
    return 1;
}
