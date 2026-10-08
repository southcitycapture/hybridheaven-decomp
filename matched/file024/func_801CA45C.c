#include "context.h"

extern void func_80142570();
extern void func_8013EA94();
extern s8 D_801BBBF0;
extern void func_801CA4A4();

void func_801CA45C(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    D_801BBBF0 = 1;
    func_800058DC((void *) arg0, func_801CA4A4);
}
