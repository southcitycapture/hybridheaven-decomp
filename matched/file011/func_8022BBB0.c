#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC20;
struct func_8022F680_Ret {
    u8 pad0[0x90];
    u8 unk90;
};

extern u8 D_802176F0[];
extern struct func_8022F680_Ret *func_80005670();
struct func_8022BBB0_StructS {
    u8 pad0[0x40];
    s16 unk40;
    u8 pad42[0x9A - 0x42];
    u16 unk9A;
    u8 pad9C[0x2FA - 0x9C];
    u8 unk2FA;
};
struct func_8022BBB0_StructR {
    u8 pad0[0x94];
    u16 unk94;
    u8 unk96;
    u8 unk97;
};
s32 func_8022BBB0(void *arg0) {
    struct func_8022BBB0_StructR *r;
    struct func_8022BBB0_StructS *s;
    u16 v;
    if (D_801BCC20 == 0) {
        s = (struct func_8022BBB0_StructS *)D_801BC3D8;
    } else {
        s = (struct func_8022BBB0_StructS *)D_801BC03C;
    }
    if (s->unk2FA == 2) {
        s->unk2FA = 0;
        v = (u32)((f64)(((f32)s->unk9A * 3.0f) / 10.0f) + 0.5);
        s->unk40 = v;
        r = (struct func_8022BBB0_StructR *)func_80005670(arg0, D_802176F0);
        r->unk94 = v;
        if ((u32)s == (u32)D_801BBBF0 + 0x44C) {
            r->unk96 = 0;
        } else {
            r->unk96 = 1;
        }
        r->unk97 = 3;
        return 1;
    }
    return 0;
}
