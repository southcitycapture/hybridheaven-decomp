#include "context.h"
extern s8 D_801BBBF0[];
extern void func_800058DC(s32 arg0, void *arg1, s32 arg2);
extern s32 func_80126944(void);
void func_80244B94(s32 arg0, s32 arg1);

void func_80244B4C(s32 arg0, s32 arg1) {
    extern void func_800058DC();

    if (func_80126944() != 0) {
        D_801BBBF0[0xBA2] = 0;
        D_801BBBF0[0xBA4] = 0;
        func_800058DC(arg0, &func_80244B94);
    }
}
