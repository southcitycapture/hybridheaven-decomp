#include "context.h"

extern void func_80002364();
extern void func_8001A804();
extern void func_80116E80();
extern void func_80126930();
extern u8 D_801CF624[];
extern s16 D_801CFDE4;
extern s8 D_801CFDE0;
extern s8 D_801CFDE1;
extern s8 D_801CFDE2;
extern void func_801CA874();

void func_801CA7A4(s32 arg0, s32 arg1) {
    func_80126930(0);
    D_801CFDE4 = 0;
    D_801CFDE0 = 0;
    D_801CFDE1 = 0;
    D_801CFDE2 = 0;
    func_80116E80(0x100);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_8001A804(0, D_801CF624, 8, 8, 0x130, 0xE0, 8, 0, 0, 0, 0xFF, 0, 0, 0, 0xFF);
    func_800058DC(arg0, func_801CA874);
}
