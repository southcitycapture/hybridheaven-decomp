#include "context.h"

extern s32 func_800266B0(void *, s32, s32);
extern void func_80028A90(s32, s32);
extern void func_800304F0(s32, void *, s32);
extern void func_80030640(s32, s32);
extern void func_800306C0(s32, s32);
extern u8 D_8005C268[];
extern u8 D_8005CD80[];

void func_80001F30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 == 0) {
        func_80028A90(arg2, arg4);
        func_800306C0(arg2, arg4);
        func_80030640(arg2, arg4);
    } else {
        func_80028A90(arg2, arg4);
    }
    *(D_8005CD80 + 2) = 0;
    *(void **)(D_8005CD80 + 4) = D_8005C268;
    *(s32 *)(D_8005CD80 + 8) = arg2;
    *(s32 *)(D_8005CD80 + 12) = arg3;
    *(s32 *)(D_8005CD80 + 16) = arg4;
    func_800304F0(arg0, D_8005CD80, arg1);
    func_800266B0(D_8005C268, 0, 1);
}
