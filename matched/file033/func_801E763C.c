#include "common.h"
#include "known.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801D58D0(s32);

s32 func_801E763C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_801D58D0(1);
        func_801CC4D8(2, 0x03200048, 0, 0, 15.0f);
        return 0x37;
    }
    return 0x36;
}
