#include "common.h"

extern void func_800208C4(s32);

void func_801D7CEC(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_800208C4(0x50);
        return;
    }
    func_800208C4(0x4F);
}
