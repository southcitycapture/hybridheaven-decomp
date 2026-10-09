#include "context.h"

extern void func_80005700();
extern s32 D_801DA514;

void func_801C640C(s32 arg0, s32 arg1) {
    D_801DA514 = arg0 * 0;
    func_80005700();
}
