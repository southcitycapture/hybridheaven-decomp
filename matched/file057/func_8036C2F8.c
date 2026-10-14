#include "context.h"

struct func_8036C2F8_Struct {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0xC - 0x8];
    f32 unkC;
};

f32 func_8036C2F8(struct func_8036C2F8_Struct *arg0, struct func_8036C2F8_Struct *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_ft4;
    f32 temp_fv1;

    temp_fv1 = (arg1->unk4 + ((arg4 * arg3) + (arg5 * arg2))) - arg0->unk4;
    temp_ft4 = (arg1->unkC + ((arg5 * arg3) - (arg4 * arg2))) - arg0->unkC;
    return (temp_fv1 * temp_fv1) + (temp_ft4 * temp_ft4);
}
