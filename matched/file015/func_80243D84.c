#include "context.h"
extern u8 D_802586C0[];
extern f32 D_80258744;
extern f32 D_80258748;
extern f32 D_8025874C;
extern f32 D_80258750;

void func_80243D84(func_8024148C_StructArg *arg0, s32 arg1) {
    func_8024148C_StructLoc sp;
    s32 t;

    if (func_801C3044() != 0) {
        return;
    }
    t = arg0->unk3C++;
    if (t == 0) goto L0;
    if (t == 1) goto L1;
    if (t == 2) goto L2;
    if (t != 3) goto end;
    goto L3;
L0:
    sp.unk0 = 0x1000;
    sp.unk4 = 0x04100044;
    sp.unk8 = 6.0f;
    func_801C2F0C(4, &sp.unk0);
    return;
L1:
    sp.unk0 = 0x1000;
    sp.unk4 = 0x04100026;
    sp.unkC = 0xA;
    sp.unk8 = 1.0f;
    func_801C2F0C(3, &sp.unk0);
    return;
L2:
    sp.unk0 = 0x1000;
    sp.unk4 = 0x04100026;
    sp.unk8 = 6.0f;
    func_801C2F0C(4, &sp.unk0);
    return;
L3:
    G->f1E8 = -64.5f;
    G->f1EC = D_80258744;
    G->f1F0 = D_80258748;
    G->f1F4 = D_8025874C;
    G->f1F8 = 15.5f;
    G->f1FC = D_80258750;
    func_8011AAF4(D_802586C0, 0x26D, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
    func_80133980(0x73);
    func_800058DC(arg0, (void *)func_80243F64);
end:;
}
