#include "common.h"

extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038D28C(s32);

s32 func_801E67D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801CC470(0, 0x03480070, 0, 0, 10.0f);
        func_8038D28C(0x23B);
        return 0x1B;
    }
    return 0x1A;
}
