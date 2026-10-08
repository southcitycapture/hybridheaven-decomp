#include "common.h"

extern s32 func_8038D2D4(s32);
extern s32 func_8038D28C(s32);

s32 func_801E67A8(s32 arg0, s32 arg1) {
    if (func_8038D2D4(0x1CC) == 0) {
        func_8038D28C(0x1CD);
        return 0xA;
    }
    return 9;
}
