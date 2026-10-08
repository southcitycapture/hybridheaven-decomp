#include "common.h"

extern void func_800208C4(s32 arg0);
extern void func_801FC720(s32 arg0, s32 arg1, s32 arg2);

void func_801D7294(u8 *arg0, s32 arg1) {
    if (arg0[0x92] == 2) {
        func_801FC720(0x1F9, 3, 0);
        func_800208C4(0x23);
    }
}
