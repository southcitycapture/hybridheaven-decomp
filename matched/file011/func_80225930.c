#include "common.h"


f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
s32 func_80108480(f32, f32, f32, f32, f32, f32);
void func_80225724(f32 *, f32 *);
typedef struct func_80225930_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_80225930_Struct;

s32 func_80225930(s32 a0, s16 arg1, s16 arg2) {
#define arg0 ((func_80225930_Struct *)a0)
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 d;

    sp4C = (f32) ((f64) arg0->unk8 + 10.0);
    sp48 = func_8001EAD0(arg0->unk12);
    sp44 = func_8001EB64(arg0->unk12);
    if (func_80108480(arg0->unk4 + sp48 * (f32) arg1, sp4C, arg0->unkC + sp44 * (f32) arg1, arg0->unk4 + sp48 * (f32) arg2, sp4C, arg0->unkC + sp44 * (f32) arg2) != 0) {
        d = (s16) (arg1 - arg2);
        sp40 = d * sp48;
        sp3C = d * sp44;
        func_80225724(&sp40, &sp3C);
        arg0->unk4 = arg0->unk4 + sp40;
        arg0->unkC = arg0->unkC + sp3C;
        return 1;
    }
    return 0;
}
#undef arg0
