#include "common.h"

extern s32 func_80010550(s32, s32);
extern s32 func_80011198(s32, s32);
extern s32 func_800058DC(void *, void *);
extern void func_802472D4(void);

void func_80247284(void *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550(arg1, temp_a1) != 0) {
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_802472D4);
    }
}
