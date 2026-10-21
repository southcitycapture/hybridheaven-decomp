#include "context.h"

typedef struct func_80370AB4_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2C];
    u32 unk30;
    u8 pad34[0x2F8 - 0x34];
    u8 unk2F8;
} func_80370AB4_Struct;
typedef struct func_80370AB4_Obj {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x68 - 0x50];
    func_80370AB4_Struct *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 pad7A[0x88 - 0x7A];
    f32 unk88;
} func_80370AB4_Obj;
extern s32 D_801CE330(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, f32 a15, s32 a16);
extern void func_800058DC(void *a0, void *a1);
extern f32 D_8038B394;
extern f32 D_8038B398;
extern f32 D_8038B39C;
extern f32 D_8038B3A0;
extern f32 D_8038B3A4;
extern u8 func_80370E90[];

void func_80370AB4(func_80370AB4_Obj *arg0, s32 arg1) {
    func_80370AB4_Struct *s;
    u8 *p;
    f32 x;
    f32 y;
    f32 z;
    s32 unused1;
    u8 temp_a1;
    u8 a, b, b2, c, d, e;
    u8 sp60;
    s32 v;

    s = arg0->unk68;
    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    p = &arg0->unk79;
    temp_a1 = arg0->unk78;
    sp60 = 0;
    arg0->unk4C = 0;
    arg0->unk4E = 0;
    if ((s->unk2F8 != 0) || (++*p >= 5)) {
        v = temp_a1;
        if (temp_a1 == 0) {
            a = 0; b = 0xCF; c = 0; d = 0xCF; e = 0xFF;
        } else {
            a = 0xFF; b = 0xFF; c = 0xFF;
            if (v == 1) {
                d = 0; e = 0;
            } else {
                d = 0xFF; e = 0xFF;
                sp60 = v * 4;
            }
        }
        if (s->unk2 <= 0 || ((s->unk30 << 1) >> 30) != 0) {
            D_801CE330(arg0, 0, x, y, z, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0xA, 0xA, D_8038B394, 0);
        }
        if (v >= 4 || (v != 0 && arg0->unk88 == 1.0)) {
            D_801CE330(arg0, 0xF, x, y, z, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0, 0, 0xFF, 0x14, 0x14, D_8038B398, 1);
        }
        D_801CE330(arg0, 0xD, x, y, z, a, b, 0xFF, 0xFF, c, d, e, 0xFF, 1, 0x18, D_8038B39C, 1);
        if (v >= 2) {
            D_801CE330(arg0, 0x11, x, y, z, 0xFF, 0xE0, 0, 0xFF, 0xFF, 0xE0, 0, 0, sp60, 0x1E, D_8038B3A0, 1);
        }
        if (v >= 3) {
            D_801CE330(arg0, 0x10, x, y, z, 0xFF, 0x50, 0x50, 0x80, 0xFF, 0x50, 0x50, 0, 1, 0x1E, D_8038B3A4, 1);
        }
        func_800058DC(arg0, func_80370E90);
    }
}
