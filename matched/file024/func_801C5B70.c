#include "context.h"
extern u32 D_80171CF0[];

void func_801C5B70(u8 *arg0, u16 arg1, u16 arg2) {
    u32 *temp_v0;

    temp_v0 = &D_80171CF0[arg1];
    *(u16 *)(*(u8 **)(arg0 + 0x30) + 0x18) = *(u16 *)*(u8 **)temp_v0[-1];
    *(u32 *)(*(u8 **)(arg0 + 0x30) + 0x1C) = *(u32 *)(*(u8 **)(temp_v0[-1] + 4) + arg2 * 4);
}
