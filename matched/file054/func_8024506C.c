#include "context.h"
extern u8 D_80247F28[];
extern u8 D_80247208[];
extern u8 D_802468DC[];
extern f32 D_802486EC;
extern f32 D_802486F0;
extern f32 D_802486F4;
extern f32 D_802486F8;
extern f32 D_802486FC;
extern f32 D_80248700;
extern void func_80245250(void);

void func_8024506C(func_80244874_Obj *arg0, s32 arg1) {
    s32 sp5C;
    f64 k;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015122C(D_80248804, D_802468C4, 0x14);
    }
    func_8011AAF4(D_80247F28, 0x757, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(sp5C % 2)) {
        k = 0.5;
    } else {
        k = -0.5;
    }
    F(0x1EC) = F(0x1EC) + k;
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        F(0x1E8) = D_802486EC;
        F(0x1EC) = D_802486F0;
        F(0x1F0) = D_802486F4;
        F(0x1F4) = D_802486F8;
        F(0x1F8) = D_802486FC;
        F(0x1FC) = D_80248700;
        func_800179B0(D_80247208);
        func_8015115C(D_80248804, D_802468DC);
        arg0->unk90 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80245250);
    }
}
