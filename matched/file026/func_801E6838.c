#include "common.h"

extern s32 func_8038D2D4(s32);
extern s32 func_8038D28C(s32);

s32 func_801E6838(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x3E0) == 0) {
        func_8038D28C(0x1CE);
        return 0xC;
    }
    return 11;
}
