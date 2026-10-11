#include "common.h"

s32 func_8038C9D8(void);

s32 func_801E6F88(s32 arg0, s32 arg1) {
    if (func_8038C9D8() != 0) {
        return 0x11;
    }
    return 0x12;
}
