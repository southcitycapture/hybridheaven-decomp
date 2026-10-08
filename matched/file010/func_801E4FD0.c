#include "context.h"

void func_801E4FD0(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 &= ~temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}
