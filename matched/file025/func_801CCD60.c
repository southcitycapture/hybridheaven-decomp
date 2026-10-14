#include "context.h"
void func_801CCDAC(s32 arg0, s32 arg1);

extern void func_801CD71C();
extern s32 func_801BF968();

void func_801CCD60(s32 arg0, s32 arg1) {
    D_801E0C38 = 1;
    func_801CD71C();
    if (func_801BF968() != 0) {
        func_800058DC(arg0, &func_801CCDAC);
    }
}
