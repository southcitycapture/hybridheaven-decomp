#include "context.h"

void func_800208C4(u16);
s32 func_80020DAC(u16);

void func_801FCBA8(u16 arg0) {
    if (func_80020DAC(arg0) == 0) {
        func_800208C4(arg0);
    }
}
