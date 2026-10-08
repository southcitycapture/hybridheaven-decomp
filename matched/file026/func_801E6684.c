#include "common.h"

extern s32 func_8038D2B0(s32);
extern s32 func_8038D2D4(s32);

s32 func_801E6684(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x01399170) != 0) && (func_8038D2D4(0x1CB) == 0)) {
        func_8038D2B0(0x609);
        func_8038D2B0(0x60A);
        func_8038D2B0(0x60B);
        return 5;
    }
    return 4;
}
