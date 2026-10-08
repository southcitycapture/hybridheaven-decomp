#include "context.h"

extern void func_8014F400();
extern void func_800179B0(void *arg0);
extern void func_8012FFC0();
extern void func_80150734();
extern u8 D_801826E0[];

void func_801506EC(s32 arg0, s32 arg1) {
    func_8014F400();
    func_800179B0(D_801826E0);
    func_8012FFC0();
    func_800058DC(arg0, func_80150734);
}
