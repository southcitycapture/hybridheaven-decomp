#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_802417E4();

void func_802417B0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_802417E4);
}
