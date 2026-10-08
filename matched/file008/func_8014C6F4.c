#include "common.h"

s32 func_801C3D90(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_8014C72C();

void func_8014C6F4(u64 arg0) {
    if (func_801C3D90(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_8014C72C);
    }
}
