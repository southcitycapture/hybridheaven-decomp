#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_8020394C();
extern void func_80242344();

void func_80242310(s32 arg0, s32 arg1) {
    func_8020394C();
    func_800058DC(arg0, &func_80242344);
}
