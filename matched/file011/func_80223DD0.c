#include "context.h"

s16 func_8001EF38(f32, f32);
f32 func_8002FC20(f32, f32);
f32 func_80223D0C(void *, s16);

struct func_80223DD0_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80223DD0_Struct2 {
    f32 unk0;
    f32 unk4;
};

s32 func_80223DD0(struct func_80223DD0_Struct *arg0, struct func_80223DD0_Struct *arg1, struct func_80223DD0_Struct2 *arg2, struct func_80223DD0_Struct2 *arg3, f32 arg4, f32 arg5) {
    f32 sp2C;
    u8 pad[4];
    f32 temp_fv0;
    f32 temp_fa1;
    f32 sp1C;
    s16 temp_v0;
    f32 t2;

    temp_fv0 = (arg1->unk4 + arg3->unk0) - (arg0->unk4 + arg2->unk0);
    temp_fa1 = (arg1->unkC + arg3->unk4) - (arg0->unkC + arg2->unk4);
    sp1C = func_8002FC20((temp_fv0 * temp_fv0) + (temp_fa1 * temp_fa1), temp_fa1);
    temp_v0 = func_8001EF38(temp_fv0, temp_fa1);
    sp2C = func_80223D0C(arg2, (s16) (temp_v0 - arg0->unk12));
    t2 = func_80223D0C(arg3, (s16) ((temp_v0 - arg1->unk12) + 0x1000));
    if (((sp2C * arg4) + (t2 * arg5)) < sp1C) {
        return 0;
    }
    return 1;
}
