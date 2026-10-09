#include "context.h"

s32 func_801EDF64(s32 arg0, s32 arg1) {
    struct func_801E1D84_StructA *a;

    if (func_801D03F8() == 0) {
        a = func_801BF6B0(7);
        if (a->unkC >= 0x26) {
            func_8038D28C(0x15E);
            func_801CC470(3, 0x02A80004, 0, 0x1100, 1.0f);
            return 6;
        }
    }
    return 5;
}
