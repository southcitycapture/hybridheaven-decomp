#include "common.h"

s32 func_800178E8(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_80243020();

void func_80242FE8(u64 arg0) {
    if (func_800178E8(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80243020);
    }
}
