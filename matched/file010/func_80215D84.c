#include "context.h"

typedef struct {
    u8 pad0[8];
    f32 unk8;
    u8 padC[0x18 - 0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x4B - 0x24];
    u8 unk4B;
} func_80215D84_Inner;

typedef struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80215D84_Inner *unk30;
} func_80215D84_Outer;

extern void func_8012D918(void *, s32, s32, s32, s32);
extern u16 func_8012FF58(void);
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
extern f32 func_801FD780(u8);
extern f64 D_8021AF50;
extern f64 D_8021AF58;
extern f64 D_8021AF60;
extern f64 D_8021AF68;
extern f64 D_8021AF70;

s32 func_80215D84(func_8020FB98_Struct *arg0, func_80215D84_Outer **arg1) {
    s32 cnt;
    s32 pad;
    u16 r;
    f64 d;
    f64 k;

    cnt = arg0->unk3C++;
    if (cnt < 0x4B) {
        if (cnt == 0) {
            d = 12.0;
        } else {
            d = 3.0;
        }
        r = func_8012FF58();
        if (func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, d, arg0->unkA2, 1.0f, 1.0f,
                          func_801FD780(arg0->unk91) * ((r / 10) * 15 + 5)) != 0) {
            func_80380F94(arg0->unk94, arg0->unk98, arg0->unk9C, 0.0f, 0.0f, 0.0f, 2);
        }
    }
    if (arg1[0]->unk30->unk1C < D_8021AF50) {
        arg1[0]->unk30->unk1C += D_8021AF58;
    }
    k = D_8021AF60;
    arg1[0]->unk30->unk8 = arg1[0]->unk30->unk1C * 100.0f + arg0->unk98;
    arg1[0]->unk30->unk18 -= k;
    arg1[0]->unk30->unk20 -= k;
    if (cnt < 4) {
        arg1[0]->unk30->unk4B += 0x37;
    } else if (cnt >= 0x15) {
        arg1[0]->unk30->unk4B -= 4;
        if (arg1[0]->unk30->unk4B < 8) {
            return 0;
        }
    }
    func_8012D918(arg0, 0x4B5, 1, 1, 0);
    k = D_8021AF68;
    arg1[1]->unk30->unk18 += k;
    arg1[1]->unk30->unk1C += k;
    arg1[1]->unk30->unk20 += k;
    if (arg1[1]->unk22 != 0) {
        arg1[1]->unk30->unk4B -= 5;
        if (arg1[1]->unk30->unk4B < 0x14) {
            arg1[1]->unk22 = 0;
        }
    }
    k = D_8021AF70;
    arg1[2]->unk30->unk18 += k;
    arg1[2]->unk30->unk20 += k;
    if (arg1[2]->unk22 != 0) {
        if (cnt < 4) {
            arg1[2]->unk30->unk4B += 0x3C;
        } else if (cnt >= 5) {
            arg1[2]->unk30->unk4B -= 5;
            if (arg1[2]->unk30->unk4B < 5) {
                arg1[2]->unk22 = 0;
            }
        }
    }
    return 1;
}
