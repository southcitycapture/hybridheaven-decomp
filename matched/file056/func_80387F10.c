#include "common.h"

extern void func_800058DC(s32, void *);
extern u8 D_801BCC25;
extern void func_80387F48(void);

void func_80387F10(s32 arg1, s32 arg2) {
    if (D_801BCC25 == 1) {
        func_800058DC(arg1, func_80387F48);
    }
}
