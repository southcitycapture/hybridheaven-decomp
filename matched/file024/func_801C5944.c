#include "context.h"

extern s32 func_8013EFF0();
extern void func_80142570();
extern void func_800179B0(s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_801C59F4();

void func_801C5944(s32 arg0, s32 arg1) {
    s32 sp24;

    sp24 = func_8013EFF0();
    if (sp24 == 1) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x20, 0xC0, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
    if (sp24 == 2) {
        func_80142570();
        func_800179B0(0);
        func_8012FE50(0x17, 0x73, 1, 1, 0);
        func_800058DC(arg0, func_801C59F4);
    }
}
