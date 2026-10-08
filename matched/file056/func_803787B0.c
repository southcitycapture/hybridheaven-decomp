#include "common.h"

extern void func_800058DC(s32, void *);
extern s32 func_8014C0A8(u16);
extern u8 D_801BBE22[];
extern u8 func_8037890C[];

void func_803787B0(s32 arg0, s32 arg1) {
    if (func_8014C0A8(*(u16 *)&D_801BBE22[0x12]) == 0) {
        func_800058DC(arg0, func_8037890C);
    }
}
