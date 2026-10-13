#include "context.h"

struct func_80007618_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
};

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_80007618(struct func_80007618_Struct *arg0, s16 arg1) {
    f32 sp24;
    f32 sp20;

    sp20 = func_8001EB64(arg1);
    sp24 = (arg0->unk4 * sp20) - (func_8001EAD0(arg1) * arg0->unk8);
    sp20 = func_8001EAD0(arg1);
    arg0->unk8 = (func_8001EB64(arg1) * arg0->unk8) + (arg0->unk4 * sp20);
    arg0->unk4 = sp24;
}
