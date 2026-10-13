#include "context.h"

typedef struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
    u8 pad91[0x94 - 0x91];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[0xA8 - 0xA0];
    s32 unkA8;
    u8 padAC[0xB0 - 0xAC];
    u8 unkB0;
} func_802119A8_Struct;

typedef struct {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_802119A8_Inner;

typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_802119A8_Inner *unk30;
} func_802119A8_Outer;

extern u8 D_802179D8[];
extern f64 D_8021ACC8;
extern f64 D_8021ACD0;
extern f64 D_8021ACD8;
extern f64 D_8021ACE0;
extern f64 D_8021ACE8;
extern f64 D_8021ACF0;

s32 func_802119A8(func_802119A8_Struct *arg0, func_802119A8_Outer **arg1) {
    s32 v;
    s32 ret;
    s32 t;
    s32 ang;

    t = arg0->unk3C++;
    v = arg0->unk90;
    if (v == 0) {
        goto c0;
    }
    if (v != 7) {
        goto block;
    }
    goto c7;
c0:
    return 1;
c7:
    if (t == 0) {
        func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x116);
        func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x12);
    }
    if (t >= 8) {
        arg0->unk90 = 0;
        arg1[0]->unk22 = 0;
        arg1[1]->unk22 = 0;
        func_801FCF98((func_8020FB98_Struct *)arg0);
        return 0;
    }
block:
    ang = (s16)(t * 150) & 0x1FFF;
    arg1[1]->unk30->unk48 = (func_8001EAD0(ang) * D_8021ACC8 + D_8021ACD0) * (u32)D_802179D8[arg0->unkA8 * 4];
    arg1[1]->unk30->unk49 = (func_8001EAD0(ang) * D_8021ACD8 + D_8021ACE0) * (u32)D_802179D8[arg0->unkA8 * 4 + 1];
    arg1[1]->unk30->unk4A = (func_8001EAD0(ang) * D_8021ACE8 + D_8021ACF0) * (u32)D_802179D8[arg0->unkA8 * 4 + 2];
    if (arg0->unk90 != 7 && arg0->unk90 != 0) {
        ret = func_801FD68C((func_8020FB98_Struct *)arg0);
        if (ret != 0) {
            if (--arg0->unkB0 == 0) {
                arg0->unk90 = 7;
                arg0->unk3C = 0;
            } else {
                func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x3A9);
                func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 0x10);
            }
            func_801FDB3C(ret);
        }
    }
    return 1;
}
