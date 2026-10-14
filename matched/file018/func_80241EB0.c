#include "context.h"

extern u8 D_80255FFC[];
extern void func_80241F08();

void func_80241EB0(s32 arg0, s32 arg1) {
    u8 *base;

    func_80203830(arg0, D_80255FFC);
    base = (u8 *) &D_801BBBF0;
    *(s32 *) (base + 0x1088) = arg0;
    *(s32 *) (base + 0x10A0) = *(s32 *) (base + 0x40);
    func_8020394C();
    func_800058DC(arg0, &func_80241F08);
}
