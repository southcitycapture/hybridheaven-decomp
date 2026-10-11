#include "common.h"

extern void func_800208C4(s32);

void func_801D73DC(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 1) {
        func_800208C4(0x1E);
        return;
    }
    func_800208C4(0x1C);
}
