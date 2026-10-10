#include "context.h"
extern struct func_8024175C_Struct D_801BBBF0;
void func_8024175C(s32 arg0, s32 arg1);

void func_8024171C(s32 arg0, s32 arg1) {
    ((u8 *)&D_801BBBF0)[0xF26] = 0x10;
    ((u8 *)&D_801BBBF0)[0xF27] = 0;
    ((u8 *)&D_801BBBF0)[0xF28] = 0;
    func_800058DC((void *)arg0, (void *)func_8024175C);
}
