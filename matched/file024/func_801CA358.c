#include "context.h"
extern u8 D_80089474[];
extern u8 D_801BBBFC[];
struct func_801CA398_Struct;
void func_801CA398(struct func_801CA398_Struct *arg0, s32 arg1);

void func_801CA358(u8 *arg0, s32 arg1) {
    if (*(u16 *)(D_80089474 + 4) & 0xF000) {
        *(u16 *)(arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_801CA398);
    }
    *(u16 *)D_801BBBFC = 0;
}
