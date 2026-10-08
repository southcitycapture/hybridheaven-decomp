#include "common.h"

extern void func_80020718(s32);
extern void func_800208C4(s32);

void func_801D70BC(void *arg0, s32 arg1) {
    if (((u8 *)arg0)[0x92] == 1) {
        func_800208C4(0x1B);
        func_80020718(0x69C);
        return;
    }
    func_800208C4(0x1A);
}
