#include "common.h"

extern void func_801C4A5C(void *, s32, u16);
extern s32 *D_801BBCCC;

void func_801E4F94(u16 arg0) {
    s32 *temp_a0;

    temp_a0 = D_801BBCCC;
    temp_a0[0x54 / 4] |= arg0;
    func_801C4A5C(temp_a0, 0, arg0);
}
