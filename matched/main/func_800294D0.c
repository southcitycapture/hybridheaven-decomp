#include "context.h"

s32 func_80028A10(s32);                             /* extern */
void func_80028A90(s32, s32);                       /* extern */
void func_800306C0(s32, s32);                       /* extern */

s32 func_800294D0(s32 arg0, s32 arg1) {
    if (*(volatile s32 *)0xA4800018 & 3) {
        return -1;
    }
    if (arg0 == 1) {
        func_80028A90(arg1, 0x40);
    }
    *(volatile s32 *)0xA4800000 = func_80028A10(arg1);
    if (arg0 == 0) {
        *(volatile s32 *)0xA4800004 = 0x1FC007C0;
    } else {
        *(volatile s32 *)0xA4800010 = 0x1FC007C0;
    }
    if (arg0 == 0) {
        func_800306C0(arg1, 0x40);
    }
    return 0;
}
