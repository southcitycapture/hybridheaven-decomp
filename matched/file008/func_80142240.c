#include "common.h"

s32 func_80002DBC(u8, s32, u8 *);
u8 func_80002EF0(u8, s32, s32);
void func_8000303C(u8, u8);
u8 func_800032E0(u8, s32, s32, s32, s32);
s32 func_8001F430(s32);
void func_8001F540(s32);
void func_801419A4(s32);

u8 func_80142240(u8 arg0) {
    u8 pad[4];
    u8 sp2B;
    u8 sp2A;
    s32 sp24;

    sp2B = func_80002EF0(arg0, 0, 0x3500);
    if ((sp2B == 0) || (sp2B == 0xC)) {
        sp24 = func_8001F430(0x100);
        func_801419A4(sp24);
        sp2B = func_800032E0(arg0, 0, 0, 0x100, sp24);
        if ((sp2B != 0) && (func_80002DBC(arg0, 0, &sp2A) == 0)) {
            func_8000303C(arg0, sp2A);
        }
        func_8001F540(sp24);
    }
    return sp2B;
}
