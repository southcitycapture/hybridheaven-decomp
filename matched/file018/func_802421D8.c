#include "context.h"

extern s32 func_802039B0(void);
extern void func_800208C4(s32);
extern void func_80242218(void);

void func_802421D8(s32 arg0) {
    if (func_802039B0() != 0) {
        func_800208C4(0x4A);
        func_800058DC(arg0, func_80242218);
    }
}
