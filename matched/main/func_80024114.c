#include "context.h"

typedef struct func_80024114_Struct {
    u8 pad[0x49];
    u8 unk49;
} func_80024114_Struct;

s32 func_80024114(s32 arg0, u8 arg1, s8 arg2) {
    if (((func_80024114_Struct *)D_800CBDA4)->unk49 >= 2) {
        if (arg0 < 0x200) {
            arg0 = (arg1 * arg0) >> 8;
        } else {
            if (arg2 <= 0) {
                arg2 = 1;
            }
            arg0 = arg1 * arg2 * 2;
        }
    }
    return arg0;
}
