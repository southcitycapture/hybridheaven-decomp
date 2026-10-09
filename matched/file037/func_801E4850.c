#include "context.h"
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
s32 func_801CE274();
extern void func_8038D28C(s32 arg0);

s32 func_801E4850(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_8038D28C(0x677);
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}
