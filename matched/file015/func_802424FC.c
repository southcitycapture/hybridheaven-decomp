#include "context.h"

extern u8 D_80258410[];
extern f32 D_802585D4;
extern f32 D_802585D8;
extern f32 D_802585DC;
extern f32 D_802585E0;
extern f32 D_802585E4;

void func_802424FC(func_8024236C_Struct *arg0, s32 arg1) {
    func_8024236C_StructLocal sp;

    if (func_801C3044() == 0) {
        G->f1E8 = -71.0f;
        G->f1EC = D_802585D4;
        G->f1F0 = D_802585D8;
        G->f1F4 = D_802585DC;
        G->f1F8 = D_802585E0;
        G->f1FC = D_802585E4;
        func_8011AAF4(D_80258410, 0x303, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
        sp.unk0 = 0;
        sp.unk4 = 0x0348007A;
        sp.unkC = 0x14;
        sp.unk8 = 1.0f;
        arg0->unk3C = 0;
        func_801C2F0C(3, &sp.unk0);
        func_800058DC(arg0, func_80242638);
    }
}
