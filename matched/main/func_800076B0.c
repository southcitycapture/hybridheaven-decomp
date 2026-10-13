#include "context.h"

struct func_800076B0_Struct {
    f32 unk0;
    f32 unk4;
};

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);

void func_800076B0(struct func_800076B0_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk0 * sp20) - (func_8001EAD0(arg1) * arg0->unk4);
    sp20 = func_8001EAD0(arg1);
    arg0->unk4 = (func_8001EB64(arg1) * arg0->unk4) + (arg0->unk0 * sp20);
    arg0->unk0 = sp24;
}
