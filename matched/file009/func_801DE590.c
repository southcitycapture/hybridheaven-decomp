#include "context.h"

extern void func_801DCCB0(s32, s32, s32);
extern void func_801DE464(s32, s32, s32);
extern s32 D_801BBCCC;

void func_801DE590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == D_801BBCCC) {
        func_801DCCB0(arg1, arg2, arg3);
        return;
    }
    func_801DE464(arg1, arg2, arg3);
}
