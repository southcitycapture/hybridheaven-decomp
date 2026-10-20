#include "context.h"
void func_802421B0(s32 arg0, s32 arg1);

struct func_80242044_Inner {
    u8 pad0[0x30];
    f32 f[6];
};
struct func_80242044_Obj {
    u8 pad0[0x2C];
    struct func_80242044_Inner *unk2C;
};
struct func_80242044_G {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad1[0xE8 - 0x32];
    struct func_80242044_Obj *volatile unkE8;
    u8 pad2[0x104C - 0xEC];
    s32 v[6];
};
extern u16 D_801BBC20;
#define G (*(struct func_80242044_G *)&D_801BBBF0)

void func_80242044(s32 arg0, s32 arg1) {
    s32 v;

    G.v[0] = G.unkE8->unk2C->f[0] * 1000.0f;
    G.v[1] = G.unkE8->unk2C->f[1] * 1000.0f;
    G.v[2] = G.unkE8->unk2C->f[2] * 1000.0f;
    G.v[3] = G.unkE8->unk2C->f[3] * 1000.0f;
    G.v[4] = G.unkE8->unk2C->f[4] * 1000.0f;
    G.v[5] = G.unkE8->unk2C->f[5] * 1000.0f;
    if (func_80133A24(0x2A6) != 0) {
        v = G.unk30;
        if ((v % 10) == 0) {
            func_80020744(0x67B);
            v = D_801BBC20;
        }
        if (!(v % 8)) {
            func_80020744(0x6BE);
        }
    }
    if (func_802039B0(arg0, arg1) != 0) {
        func_800058DC((void *)arg0, (void *)func_802421B0);
    }
}
