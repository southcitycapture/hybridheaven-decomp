#include "common.h"
extern s32 func_80108480(f32, f32, f32, f32, f32, f32);
void func_80225724(f32 *arg0, f32 *arg1);


struct func_802257F4_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
};
extern f32 D_8001EAD0(s16);
extern f32 D_8001EB64(s16);

#define arg0 ((struct func_802257F4_Struct *) arg0_)
s32 func_802257F4(s32 arg0_, s16 arg1, s16 arg2) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 t;

    sp4C = (f32) ((f64) arg0->unk8 + 10.0);
    sp48 = D_8001EAD0(arg0->unk12);
    sp44 = D_8001EB64(arg0->unk12);
    if (func_80108480(arg0->unk4 + sp44 * (f32) arg1, sp4C, arg0->unkC - sp48 * (f32) arg1, arg0->unk4 + sp44 * (f32) arg2, sp4C, arg0->unkC - sp48 * (f32) arg2)) {
        t = (f32) (s16) (arg1 - arg2);
        sp40 = t * sp44;
        sp3C = -sp48 * t;
        func_80225724(&sp40, &sp3C);
        arg0->unk4 = arg0->unk4 + sp40;
        arg0->unkC = arg0->unkC + sp3C;
        return 1;
    }
    return 0;
}
