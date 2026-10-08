#include "context.h"

extern s32 D_802170BC;
extern void func_801FA624(s32);

void func_801FAE34(s32 arg0, s32 arg1) {
    D_802170BC = 0;
    func_80005700(arg0);
    func_801FA624(0x12C);
}
