#include "context.h"

extern void func_80010550();
extern void func_800058DC();
extern void func_801C1E74();
extern s16 D_801BBD86;

void func_801C1E2C(void *arg0, s32 arg1) {
    void *var_a1;

    var_a1 = *(void **)((u8 *)arg0 + 0x5C);
    func_80010550(arg1, var_a1, arg1);
    D_801BBD86 = 1;
    func_800058DC(arg0, func_801C1E74);
}
