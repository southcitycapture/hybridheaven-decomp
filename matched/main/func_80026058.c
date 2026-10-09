#include "context.h"

extern void func_80026140(s32, u8, s32, s32);
extern u8 *D_800CBDA0;

void func_80026058(void) {
    u8 temp_a1;

    temp_a1 = *D_800CBDA0;
    D_800CBDA0 += 1;
    func_80026140(0, temp_a1, 0, 0);
}
