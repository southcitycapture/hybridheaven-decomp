#include "context.h"

struct func_801D78A0_Struct {
    u8 pad0[0x92];
    u8 unk92;
};

void func_801D78A0(struct func_801D78A0_Struct *arg0, s32 arg1) {
    func_80133980(0x79);
    if (arg0->unk92 == 1) {
        func_800208C4(0x30);
        return;
    }
    func_800208C4(0x35);
}
