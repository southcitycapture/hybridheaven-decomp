#include "common.h"

s32 func_800058B8(u32);
void func_800057DC(s32, void *);
extern u8 D_80162FC0[];

void func_80107968(s32 arg0, s32 arg1) {
    if (func_800058B8(0x30000010) == 0) {
        func_800057DC(arg0, D_80162FC0);
    }
}
