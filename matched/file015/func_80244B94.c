#include "context.h"

extern s32 func_80126944(void);
extern void func_800208C4(s32 arg0);
extern void func_80244BF0(void);

void func_80244B94(s32 arg0, s32 arg1) {
    extern void func_800058DC();

    if (func_80126944() == 0) {
        func_800208C4(0x26);
        func_800208C4(0x27);
        func_800208C4(0x28);
        func_800208C4(0x29);
        func_800058DC(arg0, func_80244BF0);
    }
}
