#include "context.h"
extern struct func_8001EA48_Struct D_801BBBF0;

extern void func_80005700();
extern void func_801170DC(s32 arg0);
extern s16 D_80089354;
extern s32 D_801BBD50;

void func_8001E830(s32 arg0, s32 arg1) {
    u8 *base;

    D_80089354 = 2;
    base = (u8 *)&D_801BBBF0;
    base[0x15D] = 0;
    base[0x164] = 0;
    func_80005700(arg0);
    D_801BBD50 = 0;
    func_801170DC(4);
}
