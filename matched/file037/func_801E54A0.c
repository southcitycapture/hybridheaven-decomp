#include "context.h"

s32 func_801CEDD4(void);

s32 func_801E54A0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80032, 0, 0x100, 3.0f);
        return 5;
    }
    return 4;
}
