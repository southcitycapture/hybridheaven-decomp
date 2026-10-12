#include "common.h"

s32 func_8020394C(u64 arg0);                          /* extern */
void func_800058DC(s32 arg0, void *arg1);            /* extern */
extern void func_80241AF0();

void func_80241AB8(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241AF0);
    }
}
