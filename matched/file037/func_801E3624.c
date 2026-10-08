#include "common.h"

extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E3624(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x249);
        func_801C0D04(3, 0);
        return 3;
    }
    return 2;
}
