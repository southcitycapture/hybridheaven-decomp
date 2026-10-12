#include "common.h"

extern void func_800058DC(s32 arg0, void (*arg1)(void));
extern void func_802428E8();

void func_802428C0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_802428E8);
}
