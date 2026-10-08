#include "common.h"

extern void func_800058DC(s32 arg0, void (*arg1)());
extern void func_80203830(s32 arg0, void *arg1);
extern void func_8020394C();
extern s32 D_801BCC78;
extern u8 D_80245E78[];
extern void func_80242E90();

void func_80242E44(s32 arg0, s32 arg1) {
    func_80203830(arg0, D_80245E78);
    D_801BCC78 = arg0;
    func_8020394C();
    func_800058DC(arg0, func_80242E90);
}
