#include "common.h"

s32 func_80133A24(s32);
s32 func_80126CC0(s32, void *);
void func_800058DC(s32, void *);
extern void func_80127014(void);
extern void func_802409B4(void);

void func_80240964(s32 arg0, s32 arg1) {
    if ((func_80133A24(0x147) == 0) && (func_80126CC0(arg0, func_80127014) != 0)) {
        func_800058DC(arg0, func_802409B4);
    }
}
