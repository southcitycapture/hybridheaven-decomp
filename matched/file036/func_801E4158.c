#include "context.h"

s32 func_801D6FC0(void);

s32 func_801E4158(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        func_801CC4D8(1, 0x01B8003D, 0, 0, 5.0f);
        return 6;
    }
    return 5;
}
