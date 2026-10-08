#include "context.h"

struct func_801D769C_Struct {
    u8 pad0[0x92];
    u8 unk92;
};

s32 func_8012FF58();

void func_801D769C(struct func_801D769C_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_800208C4(0x27);
        func_800208C4(0x2C);
        return;
    }
    if (func_8012FF58() < 0x46) {
        func_800208C4(0x2D);
        return;
    }
    func_800208C4(0x34);
}
