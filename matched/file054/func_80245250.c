#include "context.h"

extern u8 D_80247F64[];
extern u8 D_80247244[];
extern f32 D_80248704;
extern f32 D_80248708;
extern f32 D_8024870C;
extern f32 D_80248710;
extern f32 D_80248714;

void func_8024541C(func_80244874_Obj *arg0, s32 arg1);
typedef struct func_80245250_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80245250_Struct;

void func_80245250(func_80245250_Struct *arg0, s32 arg1) {
    s32 sp5C;
    f64 d;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015122C(D_80248804, D_802468C4, 0x14);
    }
    func_8011AAF4(D_80247F64, 0x77C, arg0, 0, 1, 0.0f, FF(0x1E8), FF(0x1EC), FF(0x1F0), 0.0f, FF(0x1F4), FF(0x1F8), FF(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(sp5C % 2)) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    FF(0x1EC) = FF(0x1EC) + d;
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        FF(0x1E8) = 11.5f;
        FF(0x1EC) = D_80248704;
        FF(0x1F0) = D_80248708;
        FF(0x1F4) = D_8024870C;
        FF(0x1F8) = D_80248710;
        FF(0x1FC) = D_80248714;
        func_800179B0(D_80247244);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_8024541C);
    }
}
