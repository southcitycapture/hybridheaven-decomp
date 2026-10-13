#include "context.h"

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

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80108590(f32, f32, f32, f32, f32, f32);
extern void func_801FC830(f32, f32, f32, f32, s32);
extern void func_801FCF98(func_8020FB98_Struct *);
extern s32 func_801FD68C(func_8020FB98_Struct *);
extern void func_801FDB3C(s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f32 D_801BBF74;
extern f32 D_80217CC8[];
extern f64 D_8021AC38;
extern f64 D_8021AC40;

s32 func_8020FB98(func_8020FB98_Struct *arg0, func_8020FB98_Outer **arg1) {
    s16 ang;
    s32 ret;
    s32 idx;
    s32 t;

    idx = arg0->unk91 - 0x18;
    t = arg0->unk3C++;
    if (arg0->unk90 == 7) {
        if (t == 0) {
            func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
            func_80380F94(arg0->unk94, D_80217CC8[idx] + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x13);
        }
        if (t >= 8) {
            arg0->unk90 = 0;
            arg0->unk2C &= ~0x800;
            arg0->unk74 = 0;
            func_801FCF98(arg0);
            arg1[0]->unk22 = 0;
            if (!(arg0->unkAC & 0x10)) {
                arg1[1]->unk22 = 0;
            }
            return 0;
        }
    }
    if (!(arg0->unkAC & 0x10)) {
        ang = (s16)(t * 50) & 0x1FFF;
        arg1[1]->unk30->unk48 = (u32)(func_8001EB64(ang) * 127.0f + 128.0f);
        arg1[1]->unk30->unk4A = (u32)(func_8001EAD0(ang) * 127.0f + 128.0f);
    }
    if (arg0->unk90 != 7 && arg0->unk90 != 0 && !(arg0->unkAC & 2)) {
        if (func_80108590(arg0->unk94, arg0->unk98 - arg0->unk44, arg0->unk9C, arg0->unk94, arg0->unk98 - D_8021AC38, arg0->unk9C) != 0) {
            if (arg0->unk44 <= -2.0) {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x1FE);
                func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x1F);
            }
            arg0->unk98 = D_801BBF74;
            arg0->unk44 = 0.0f;
        } else if (arg0->unk44 > -4.0) {
            arg0->unk44 -= D_8021AC40;
        }
        if (arg0->unk98 < -1000.0f) {
            arg1[0]->unk22 = 0;
            arg0->unk90 = 0;
            arg0->unk2C &= ~0x800;
        }
    }
    if (!(arg0->unkAC & 0x10)) {
        if (arg0->unk90 != 7 && arg0->unk90 != 0) {
            ret = func_801FD68C(arg0);
            if (ret != 0) {
                if (--arg0->unkB0 == 0) {
                    arg0->unk90 = 7;
                    arg0->unk3C = 0;
                } else {
                    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                    func_80380F94(arg0->unk94, D_80217CC8[idx] + arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x11);
                }
                func_801FDB3C(ret);
            }
        }
    }
    arg1[0]->unk30->unk4 = arg0->unk94;
    arg1[0]->unk30->unk8 = arg0->unk98;
    arg1[0]->unk30->unkC = arg0->unk9C;
    arg1[0]->unk30->unk10 = arg0->unkA0;
    arg1[0]->unk30->unk12 = arg0->unkA2;
    arg1[0]->unk30->unk14 = arg0->unkA4;
    if (!(arg0->unkAC & 0x10)) {
        arg1[1]->unk30->unk4 = arg0->unk94;
        arg1[1]->unk30->unk8 = arg0->unk98;
        arg1[1]->unk30->unkC = arg0->unk9C;
        arg1[1]->unk30->unk10 = arg0->unkA0;
        arg1[1]->unk30->unk12 = arg0->unkA2;
        arg1[1]->unk30->unk14 = arg0->unkA4;
    }
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk84 = arg0->unkA0;
    arg0->unk86 = arg0->unkA2;
    arg0->unk88 = arg0->unkA4;
    return 1;
}
