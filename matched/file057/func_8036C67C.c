#include "context.h"

extern void func_800058DC(s32, void *);
extern s32 func_80224F5C(s32, s32);
extern void func_8036A5AC(s32, s32, s32, s32);
extern void func_8036C358(s32 *, s32, s32);
extern void func_8036C6E0(void);

void func_8036C67C(s32 arg0, s32 arg1) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;

    func_8036C358(&sp1C, arg0, arg1);
    if (func_80224F5C(arg0, arg1) == 0) {
        func_8036A5AC(arg0, arg1, sp1C, sp24);
        func_800058DC(arg0, func_8036C6E0);
    }
}
