#include "common.h"

extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern void func_8013DC60();

void func_8013DC38(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_8013DC60);
}
