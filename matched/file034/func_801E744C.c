#include "context.h"

s32 func_801E744C(s32 arg0, s32 arg1) {
    if (D_801E8E98 == 0) {
        goto case0;
    }
    if (D_801E8E98 == 1) {
        goto case1;
    }
    return 0x20;
case0:
    if (func_801D03F8() != 0) {
        goto tail;
    }
    func_801CC470(2, 0x02A80027, 0, 0x1000, 2.0f);
    D_801E8E98 = 1;
    goto tail;
case1:
    if (func_801D0408() == 0) {
        goto tail;
    }
    return 0x21;
tail:
    return 0x20;
}
