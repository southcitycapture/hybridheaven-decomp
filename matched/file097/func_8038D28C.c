#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038D2C0();

void func_8038D28C(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038D2C0);
}
