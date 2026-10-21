#include "context.h"
extern u8 D_80246894[];
extern u8 D_802468A0[];
extern u8 D_8024712C[];
extern u8 D_80247E74[];
extern f64 D_80248638;
extern f64 D_80248640;
extern f64 D_80248648;
extern f64 D_80248650;
extern f32 D_80248658;
extern f32 D_8024865C;
extern f32 D_80248660;
extern f32 D_80248664;
extern f32 D_80248668;
void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
void func_80244874();

void func_802445C8(struct func_8024421C_Arg0 *arg0, s32 arg1) {
    s32 sp5C;
    f64 k1;
    f64 k2;

    sp5C = arg0->unk3C++;
    func_8011AAF4(D_80247E74, 0x69E, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    k1 = D_80248638;
    k2 = D_80248640;
    F(0x1E8) = F(0x1E8) + D_80248648;
    F(0x1EC) = F(0x1EC) + k1;
    F(0x1F0) = F(0x1F0) + k2;
    F(0x1F4) = F(0x1F4) + D_80248650;
    F(0x1F8) = F(0x1F8) + k1;
    F(0x1FC) = F(0x1FC) + k2;
    if (sp5C == 0x1E) {
        func_8015115C(D_80248800, D_802468A0);
    }
    if (sp5C == 0x41) {
        F(0x1E8) = D_80248658;
        F(0x1EC) = D_8024865C;
        F(0x1F0) = D_80248660;
        F(0x1F4) = D_80248664;
        F(0x1F8) = 17.5f;
        F(0x1FC) = D_80248668;
        func_800179B0(D_8024712C);
        func_8015115C(D_80248800, D_80246894);
        func_80246694(3.0f, 19.0f, 85.0f, 0.4f);
        func_80246694(-18.0f, 21.0f, 86.0f, 0.4f);
        func_80246694(1.0f, 31.0f, 88.0f, 0.4f);
        func_80246694(23.0f, 23.0f, 89.0f, 0.4f);
        func_80246694(-10.0f, 46.0f, 90.0f, 0.4f);
        ((u8 *)arg0)[0x90] = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_80244874);
    }
}
