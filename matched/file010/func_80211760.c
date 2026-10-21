#include "context.h"

extern f32 D_80217CD4[];

s32 func_80211760(func_8020FB98_Struct *arg0, func_8020FB98_Outer **arg1) {
    s32 pad;
    s32 sp40;
    s32 sp3C;
    s32 t;
    f32 *sp30;

    sp3C = arg0->unk91 - 0x23;
    t = arg0->unk3C++;
    if (arg0->unk90 == 0) goto ret1;
    if (arg0->unk90 != 7) goto dflt;
    goto case7;
ret1:
    return 1;
case7:
    if (t == 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
        func_80380F94(arg0->unk94, D_80217CD4[sp3C] + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x13);
    }
    if (t >= 8) {
        arg0->unk90 = 0;
        arg0->unk2C &= ~0x800;
        func_801FCF98(arg0);
        (*arg1)->unk22 = 0;
        return 0;
    }
dflt:
    if (arg0->unk90 != 7 && arg0->unk90 != 0) {
        sp40 = func_801FD68C(arg0);
        if (sp40 != 0) {
            arg0->unkB0 = arg0->unkB0 - 1;
            if (arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk3C = 0;
            } else {
                sp30 = &D_80217CD4[sp3C];
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                func_80380F94(arg0->unk94, *sp30 + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x11);
            }
            func_801FDB3C(sp40);
        }
    }
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk10 = 0;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    (*arg1)->unk30->unk14 = 0;
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
    return 1;
}
