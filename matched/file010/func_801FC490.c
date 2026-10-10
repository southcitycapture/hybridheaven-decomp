#include "context.h"

extern u16 D_801BBE08[];
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_801FC4C0();

void func_801FC490(s32 arg0, s32 arg1) {
    D_801BBE08[2] = 0;
    func_800058DC(arg0, func_801FC4C0);
}
