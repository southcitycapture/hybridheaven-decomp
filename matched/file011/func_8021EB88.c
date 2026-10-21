#include "context.h"

extern s32 func_8001EF38(f32, f32);
extern void func_8021ECD4(void *, s32);
extern void func_8021F184(void *, s32, s16, f32);
extern void func_802237B0(s32, s32);

void func_8021EB88(s32 arg0, s32 arg1) {
    func_8021E59C_Struct68 *t = ((func_8021E59C_Actor *)arg0)->unk68;
    struct func_8021F9C8_Struct *sp38;
    f32 a;
    f32 b;
    s32 pad;
    s16 sp2A;

    if (arg0 == ((func_8021E59C_Dev *)&D_801BBBF0)->unkDC) {
        sp38 = &D_801BC03C;
    } else {
        sp38 = &D_801BC3D8;
    }
    sp2A = (s16)(0x2800 - *(s16 *)((u8 *)&D_801BBBF0 + 0x232)) & 0x1FFF;
    a = -t->unk6 / 20.0;
    b = t->unk8 / 20.0;
    if (a * a + b * b > 1.0) {
        func_802237B0(arg0, 1);
        pad = func_8001EF38(a, b) + sp2A;
        func_8021F184((void *)arg0, arg1, pad, a * a + b * b);
        func_80224AC4(arg0, 0);
    } else {
        func_802237B0(arg0, 0);
        func_8021ECD4((void *)arg0, arg1);
    }
    sp38->unk392 = 0;
}
