#include "context.h"

extern void func_801C11BC(s32);
extern void func_801C5824();

void func_801C57D8(s32 arg0, s32 arg1) {
    D_801CC8BC = func_80005670(arg0, &D_80044090);
    func_801C11BC(0x64);
    func_800058DC(arg0, &func_801C5824);
}
