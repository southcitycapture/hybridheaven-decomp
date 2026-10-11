#include "context.h"

extern void func_800208C4(s32 arg0);

typedef struct {
    u8 pad0[0x92];
    u8 unk92;
} func_801D7EE4_Struct;

void func_801D7EE4(func_801D7EE4_Struct *arg0, s32 arg1) {
    if (arg0->unk92 == 1) {
        func_800208C4(0x59);
    }
}
