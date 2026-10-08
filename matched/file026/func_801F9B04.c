#include "common.h"

extern void func_8038D28C(s32 arg0);
extern s32 D_801FBB08;

s32 func_801F9B04(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x1E1);
        D_801FBB08 = 0;
        return 1;
    }
    return 0;
}
