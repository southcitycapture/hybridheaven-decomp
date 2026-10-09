#include "context.h"

extern void func_80032FB0(void *, void *, s32);
extern u8 D_8005CE20[];
extern u8 D_8005CE70[];

void func_8000257C(u8 arg0) {
    s32 temp_a2;

    temp_a2 = arg0;
    func_80032FB0(D_8005CE20, D_8005CE70 + temp_a2 * 0x68, temp_a2);
}
