#include "context.h"

typedef struct {
    u8 pad0[0x92];
    u8 unk92;
} func_801D7D30_Struct;

void func_801D7D30(func_801D7D30_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_80020718(0x6B9);
        func_800208C4(0x53);
        return;
    }
    func_800208C4(0x52);
}
