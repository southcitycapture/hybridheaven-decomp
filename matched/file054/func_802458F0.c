#include "context.h"

extern u8 D_80248054[];
extern f64 D_80248750;
extern f64 D_80248758;
extern f64 D_80248760;
extern f64 D_80248768;
extern f64 D_80248770;
extern f64 D_80248778;
extern f32 D_80248780;
extern f32 D_80248784;
extern f32 D_80248788;
extern f32 D_8024878C;
extern void func_80245AF4();

void func_802458F0(func_80244874_Obj *arg0, s32 arg1) {
    s32 t;

    t = arg0->unk3C++;
    func_8011AAF4(D_80248054, 0x7F6, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + D_80248750;
    F(0x1EC) = F(0x1EC) + D_80248758;
    F(0x1F0) = F(0x1F0) + D_80248760;
    F(0x1F4) = F(0x1F4) + D_80248768;
    F(0x1F8) = F(0x1F8) + D_80248770;
    F(0x1FC) = F(0x1FC) + D_80248778;
    if (t >= 0xF) {
        F(0x1E8) = 3.5f;
        F(0x1EC) = D_80248780;
        F(0x1F0) = -55.5f;
        F(0x1F4) = D_80248784;
        F(0x1F8) = D_80248788;
        F(0x1FC) = 48.5f;
        func_8015115C(D_80248804, D_802468C4);
        *(f32 *)((u8 *)arg0 + 0x98) = D_8024878C;
        *(f32 *)((u8 *)arg0 + 0x9C) = 0.0f;
        arg0->unk3C = 0;
        func_80020718(0x19E);
        func_800058DC(arg0, func_80245AF4);
    }
}
