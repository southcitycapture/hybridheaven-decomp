#include "context.h"
extern void func_801CDC8C(s32 arg0, s32 arg1);
extern s32 D_801DAC48;
void func_801CDC8C(s32 arg0, s32 arg1);

void func_801CDE34(s32 arg0, s32 arg1) {
    s32 temp = D_801DAC48;

    func_800058DC(temp, (void *) func_801CDC8C);
}
