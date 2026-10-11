#include "common.h"

s32 func_8038C9D8(void);

s32 func_801E6BE0(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 0x7;
    }
    return 0x8;
}
