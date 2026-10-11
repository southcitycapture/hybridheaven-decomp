#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_8013E770();
extern void func_801C3BD8();

void func_801C3BA4(s32 arg0, s32 arg1) {
    func_8013E770();
    func_800058DC(arg0, &func_801C3BD8);
}
