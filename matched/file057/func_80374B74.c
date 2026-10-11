#include "common.h"

s32 func_80374994(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_80374BAC();

void func_80374B74(u64 arg0) {
    if (func_80374994(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80374BAC);
    }
}
