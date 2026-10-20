#include "context.h"
extern void func_8001E978(u8 *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
void func_80244B4C(s32 arg0, s32 arg1);
struct func_80244AC0_S { u8 pad[0x3C]; u16 f; };

void func_80244AC0(struct func_80244AC0_S *arg0, s32 arg1) {
    if ((s32)(arg0->f++) >= 4) {
        D_80089354 = 2;
        D_801BBBF0[0x164] = 0;
        D_801BBBF0[0x15D] = 0;
        func_8001E978((u8 *)arg0, 0, 0, 0, 0xF, 0, 2, 0);
        {
            extern void func_800058DC();
            func_800058DC(arg0, func_80244B4C);
        }
    }
}
