#include "common.h"

s32 func_8020394C(u64 arg0);                          /* extern */
extern void func_800058DC(void *, void *);
extern void func_80241374(s32 arg0);

void func_8024133C(u64 arg0) {
    if (func_8020394C(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80241374);
    }
}
