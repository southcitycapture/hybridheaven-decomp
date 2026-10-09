#include "context.h"

extern s32 func_80001EA0();
extern s32 func_80032BE0();
extern s32 D_8005CD98;
extern s32 D_8005CD9C;

void func_80001E70(void) {
    D_8005CD98 = func_80032BE0();
    D_8005CD9C = func_80001EA0();
}
