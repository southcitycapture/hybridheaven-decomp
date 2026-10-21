#include "context.h"
extern s32 func_8001EF38(f32, f32);
extern void func_8022038C(s32, s32, s16);
extern void func_8021FF78(s32, s32);
extern void func_8021ECD4(s32, s32);

void func_8021FE14(s32 arg0, s32 arg1) {
    struct func_8021F9C8_Struct *v;
    func_8021E59C_Struct68 *p;
    f32 x;
    f32 y;
    s32 pad;
    s16 a;

    if (arg0 == DEV->unkDC) {
        v = &D_801BC03C;
    } else {
        v = &D_801BC3D8;
    }
    p = A->unk68;
    a = (s16)(0x2800 -*(s16 *)((u8 *)&D_801BBBF0 + 0x232)) & 0x1FFF;
    v->unk392 = 0;
    x = (f32)((f64)-p->unk6 / 20.0);
    y = (f32)((f64)p->unk8 / 20.0);
    if ((f64)(x * x + y * y) > 1.0) {
        func_802237B0(arg0, 1);
        func_8022038C(arg0, arg1, (s16)(func_8001EF38(x, y) + a));
        return;
    }
    func_802237B0(arg0, 0);
    if (((func_8021E59C_Player *)v)->unk390 == 4) {
        func_8021FF78(arg0, arg1);
        return;
    }
    func_8021ECD4(arg0, arg1);
    func_800058DC(arg0, func_8021E59C);
}
