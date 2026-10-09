#include "context.h"
void func_800058DC(s32, void *);                    /* extern */
extern s32 func_80224F5C(s32, s32);
s32 func_80369C7C(struct func_80369C7C_Obj1 *arg0);
void func_80369F54(s32 *, s32, s32);                /* extern */
extern void func_8036A5AC(s32, s32, s32, s32);
void func_8036A8EC(s32 arg0, s32 arg1);

extern s8 D_8038CC60;

void func_8036A874(s32 arg0, s32 arg1) {
    s32 sp24[3];

    if (func_80224F5C(arg0, arg1) == 0) {
        D_8038CC60 = func_80369C7C(arg0);
        func_80369F54(sp24, arg0, arg1);
        func_8036A5AC(arg0, arg1, sp24[0], sp24[2]);
        func_800058DC(arg0, func_8036A8EC);
    }
}
