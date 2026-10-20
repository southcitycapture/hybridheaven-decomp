#include "context.h"
extern void func_800024D0();
void func_801078E0(s32 arg0, s32 arg1);

void func_801078A4(s32 arg0, s32 arg1) {
    D_801BB600 = 0;
    func_800024D0();
    func_800058DC(arg0, func_801078E0);
}
