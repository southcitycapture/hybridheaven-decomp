#include "context.h"
void func_800058DC(void *, s32);                    /* extern */
void func_801F3B5C(s32 a0);
extern void (*D_80216D10[])(void *, s32);

extern void func_80127014();

void func_801FA074(s32 arg0, s32 arg1) {
    func_801F3B5C(0);
    func_800058DC(arg0, func_80127014);
}
