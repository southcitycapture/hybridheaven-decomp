#include "context.h"

extern void func_800173E4(s32);
extern s32 func_800174CC(s32);
extern void func_8001F540(s32);
extern s32 D_801BBC10;

s32 func_800172F4(void) {
    s32 temp_s0;

    temp_s0 = D_801BBC10;
    if (temp_s0 != 0) {
        func_800173E4(func_800174CC(temp_s0));
        func_8001F540(temp_s0);
    }
    D_801BBC10 = 0;
    return temp_s0;
}
