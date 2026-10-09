#include "context.h"

extern void func_80026140(s32, u8, u8, s32);
extern u8 *D_800CBDA0;

void func_80026098(void) {
    u8 temp_a1;
    u8 temp_a2;

    temp_a1 = *D_800CBDA0++;
    temp_a2 = *D_800CBDA0++;
    func_80026140(1, temp_a1, temp_a2, 0);
}
