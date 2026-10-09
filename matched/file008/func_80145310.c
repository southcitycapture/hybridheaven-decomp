#include "context.h"

extern void func_80145268(s32 arg0, u8 arg1);

void func_80145310(func_801451C0_StructA *arg0, u8 arg1, u8 arg2) {
    func_801451C0(arg0, arg1);
    func_80145268((s32)arg0, arg2);
}
