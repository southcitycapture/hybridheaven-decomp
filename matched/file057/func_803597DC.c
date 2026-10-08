#include "context.h"

extern void func_801DB6B8(void *, s32, s32);
extern s8 D_801BCC25;
extern u8 D_801E4070[];
extern void func_80359858();

void func_803597DC(void *arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0x5C);
    func_801DB6B8(arg0, arg1, 0);
    if (((u8 *)D_801E4070 == *(u8 **)(temp_v0 + 0x7C)) && (*(u16 *)(temp_v0 + 0x80) == 0)) {
        *(u16 *)((u8 *)D_8038CC10 + 0x4C) = *(u16 *)((u8 *)D_8038CC10 + 0x4C) | 0x8000;
        D_801BCC25 = 0;
        func_800058DC(arg0, func_80359858);
    }
}
