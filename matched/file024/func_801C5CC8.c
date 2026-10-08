#include "context.h"

void func_80147768(f32 *arg0, s32 arg1);

void func_801C5CC8(f32 *arg0, f32 *arg1, u8 *arg2) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    sp1C = arg1[0] - arg0[0];
    sp20 = arg1[1] - arg0[1];
    sp24 = arg1[2] - arg0[2];
    func_80147768(&sp1C, 0x42FA0000);
    arg2[8] = (s32) sp1C;
    arg2[9] = (s32) sp20;
    arg2[10] = (s32) sp24;
}
