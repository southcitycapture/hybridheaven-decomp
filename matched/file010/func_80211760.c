#include "common.h"
extern void func_801FC830(f32, f32, f32, f32, s32);
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x3C - 0x30];
    u16 unk3C;
    u8 pad3E[0x44 - 0x3E];
    f32 unk44;
    u8 pad48[0x74 - 0x48];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x90 - 0x8A];
    u8 unk90;
    u8 unk91;
    u8 pad92[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
    u8 padA6[0xAC - 0xA6];
    u8 unkAC;
    u8 padAD[0xB0 - 0xAD];
    u8 unkB0;
} func_8020FB98_Struct;
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u8 pad16[0x48 - 0x16];
    u8 unk48;
    u8 pad49;
    u8 unk4A;
} func_8020FB98_Inner;
typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8020FB98_Inner *unk30;
} func_8020FB98_Outer;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


extern f32 D_80217CD4[];

s32 func_80211760(func_8020FB98_Struct *arg0, func_8020FB98_Outer **arg1) {
    s32 ret;
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
    ret = 1;
    return ret;
}
