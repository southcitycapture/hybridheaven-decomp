#include "context.h"

extern void func_800308D0(void *, s32);
extern u8 D_8005CE70[];

void func_800025C8(s32 arg0) {
    s32 temp_a1;
    s32 *pad;

    pad = &arg0;
    temp_a1 = arg0 & 0xFF;
    func_800308D0(&D_8005CE70[temp_a1 * 0x68], temp_a1);
}
