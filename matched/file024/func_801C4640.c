#include "common.h"

extern s32 func_800058DC(s32, void *);
extern s32 func_80140368();
extern void func_801C4674();

void func_801C4640(s32 arg0, s32 arg1) {
    func_80140368();
    func_800058DC(arg0, &func_801C4674);
}
