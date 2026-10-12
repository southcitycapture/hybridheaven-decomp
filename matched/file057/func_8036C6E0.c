#include "context.h"

extern void func_800058DC(s32, void *);                    /* extern */
extern s32 func_80224AC4();
extern void func_8036C358(s32 *, s32, s32);
s32 func_8036A680(s32, s32, s32, s32);              /* extern */
extern void func_8036C744();

void func_8036C6E0(s32 arg0, s32 arg1) {
    s32 sp18[4];

    func_8036C358(&sp18[1], arg0, arg1);
    func_80224AC4(arg0, 0);
    if (func_8036A680(arg0, arg1, sp18[1], sp18[3]) != 0) {
        func_800058DC(arg0, func_8036C744);
    }
}
