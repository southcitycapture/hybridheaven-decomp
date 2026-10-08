#include "common.h"

extern s32 func_801CE284();
extern s32 func_801CE2D0(s32, s32);
extern s32 func_8038D28C(s32);

s32 func_801E5D78(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x14;
    }
    if (func_801CE2D0(0x03480024, 0x42) != 0) {
        func_8038D28C(0x250);
    }
    return 0x13;
}
