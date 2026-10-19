#include "context.h"
extern u8 D_80247FA0[];
extern u8 D_802472D4[];
extern u8 D_80246960[];
extern f32 D_80248718;
extern f32 D_8024871C;
extern f32 D_80248720;
extern f32 D_80248724;
extern void func_80245564(void);

void func_8024541C(func_80244874_Obj *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    func_8011AAF4(D_80247FA0, 0x799, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    if (func_800178E8() != 0) {
        F(0x1E8) = D_80248718;
        F(0x1EC) = D_8024871C;
        F(0x1F0) = 40.0f;
        F(0x1F4) = D_80248720;
        F(0x1F8) = D_80248724;
        F(0x1FC) = 52.5f;
        func_800179B0(D_802472D4);
        func_8015115C(D_80248804, D_80246960);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80245564);
    }
}
