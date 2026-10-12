#include "common.h"

extern void func_800058DC(s32, void *);
extern u8 D_801BCC21;
extern void func_80127014();

void func_8035A038(s32 arg1, s32 arg2) {
    if (D_801BCC21 == 14) {
        func_800058DC(arg1, func_80127014);
    }
}
