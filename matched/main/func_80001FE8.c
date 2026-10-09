#include "context.h"

extern s32 func_80001F30(s32, s32, s32, s32, s32);
extern s32 D_8005CD98;

void func_80001FE8(s32 arg0, s32 arg1, s32 arg2) {
    func_80001F30(D_8005CD98, 0, arg1, arg0, arg2);
}
