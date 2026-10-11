#include "common.h"

s32 func_801D3708(void);

s32 func_801E6680(s32 arg0, s32 arg1) {
    if (func_801D3708() != 0) {
        return 0xA;
    }
    return 0x9;
}
