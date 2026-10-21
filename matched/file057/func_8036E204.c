#include "context.h"

extern void D_802233B0(s32, s32, void *, void *);
extern f32 D_8038B138;
struct func_8036E39C_Arg;
void func_8036E39C(struct func_8036E39C_Arg *arg0, s32 arg1);

void func_8036E204(s32 arg0, s32 arg1) {
    s32 sp44;
    struct func_8036DF48_Struct *v0;
    struct func_8036DF48_Struct *a2;
    func_8036D9F8_Struct3 sp30;

    sp44 = ((func_8036C110_Arg *)arg0)->unk5C;
    if ((void *)arg0 == (void *)D_801BBBF0.unkDC) {
        v0 = (void *)D_801BC03C;
    } else {
        v0 = (void *)D_801BC3D8;
    }
    if ((void *)arg0 != (void *)D_801BBBF0.unkDC) {
        a2 = (void *)D_801BC03C;
    } else {
        a2 = (void *)D_801BC3D8;
    }
    if (*((u8 *)&D_801BBBF0 + 0x1031) != 0xF) {
        if ((v0->unk2 <= 0) || (v0->b != 0)) {
            D_802233B0(arg0, arg1, a2, &D_801BBBF0);
            return;
        }
        if ((*(u16 *)((u8 *)v0 + 0x30) & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        func_80224AC4(arg0, 0, a2, &D_801BBBF0);
        if ((a2->c == 0) || (a2->b != 0) || (a2->unk2 <= 0)) {
            func_80011198(arg1, sp44);
            func_800058DC(arg0, func_8021E59C);
            return;
        }
        sp30 = func_80225664(arg0, 0x019001C0);
        *(f32 *)&sp30.w[2] = D_8038B138;
        if (func_80011140(arg1, sp44, sp30, 5) != 0) {
            func_800058DC(arg0, func_8036E39C);
        }
    }
}
