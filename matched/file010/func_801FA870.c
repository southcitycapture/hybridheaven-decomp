#include "common.h"

extern void func_800058DC(s32 arg0, void *arg1);
extern s32 D_802170B0;
extern void func_80126EAC(void);

void func_801FA870(s32 arg0, s32 arg1) {
    D_802170B0 = 0;
    func_800058DC(arg0, func_80126EAC);
}
