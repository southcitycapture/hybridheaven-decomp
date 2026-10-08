#include "common.h"

extern s32 func_801C1000(s32, s32);
extern s32 func_8038D28C(s32);

s32 func_801E34F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x61A800) != 0) {
        func_8038D28C(0x200);
        func_801C1000(3, 0);
        return 3;
    }
    return 2;
}
