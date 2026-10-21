#include "context.h"

extern u8 D_80247EEC[];
extern u8 D_80247188[];
extern f64 D_802486C0;
extern f64 D_802486C8;
extern f64 D_802486D0;
extern f32 D_802486D8;
extern f32 D_802486DC;
extern f32 D_802486E0;
extern f32 D_802486E4;
extern f32 D_802486E8;
void func_8024506C(func_80244874_Obj *arg0, s32 arg1);

void func_80244E08(func_80244874_Obj *arg0, s32 arg1) {
    s32 t;
    f64 d;

    t = arg0->unk3C++;
    func_8011AAF4(D_80247EEC, 0x72A, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 29.5f, -1, -1);
    F(0x1E8) = F(0x1E8) + D_802486C0;
    F(0x1EC) = F(0x1EC) + D_802486C8;
    F(0x1F0) = F(0x1F0) + D_802486D0;
    F(0x1F4) = (f64) F(0x1F4);
    F(0x1F8) = (f64) F(0x1F8);
    F(0x1FC) = (f64) F(0x1FC);
    if (t % 2 == 0) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    F(0x1EC) = F(0x1EC) + d;
    if (t % 2 == 0) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    F(0x1F8) = F(0x1F8) + d;
    if (t >= 0x2D) {
        F(0x1E8) = -2.5f;
        F(0x1EC) = D_802486D8;
        F(0x1F0) = D_802486DC;
        F(0x1F4) = D_802486E0;
        F(0x1F8) = D_802486E4;
        F(0x1FC) = D_802486E8;
        func_800179B0(D_80247188);
        func_8015115C(D_80248804, D_802468DC);
        arg0->unk90 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_8024506C);
    }
}
