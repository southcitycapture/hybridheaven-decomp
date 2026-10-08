#include "context.h"

extern void func_800208C4(u16);
extern u16 D_801BBBFE;
extern u16 D_801BBC00;
extern u16 D_801BBC02;
extern u16 D_801BBC04;

s32 func_801269C0(void) {
    func_800208C4(D_801BBBFE);
    func_800208C4(D_801BBC00);
    func_800208C4(D_801BBC02);
    func_800208C4(D_801BBC04);
    return 1;
}
