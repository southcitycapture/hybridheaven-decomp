#include "common.h"
struct func_80225F58_B { u8 pad[0x2C]; s32 unk2C; };
struct func_80225F58_A { u8 pad[0x24]; struct func_80225F58_B *unk24; u8 pad2[0x4C-0x28]; u8 unk4C; u8 pad3; u8 unk4E; };


struct func_80225CB4_Inner {
    u8 pad0[0x50];
    f32 unk50;
    u8 pad54[0x60 - 0x54];
    f32 unk60;
};
struct func_80225CB4_Struct {
    u8 pad0[0x5C];
    struct func_80225CB4_Inner *unk5C;
};
extern f64 D_8023EFF8;
extern f64 D_8023F000;
extern u8 D_80225A68(void *, u8);

u8 func_80225CB4(struct func_80225F58_A *arg0, f32 arg1) {
    struct func_80225CB4_Inner *p;
    f32 a;
    u8 ret;
    u8 v;
    s32 r;

    p = ((struct func_80225CB4_Struct *)arg0)->unk5C;
    a = p->unk60;
    if (p->unk50 - a < a) {
        v = (u32)((f64)a + D_8023EFF8);
    } else {
        v = (u32)((f64)(p->unk50 - a) + D_8023F000);
    }
    r = D_80225A68(arg0, v) & 0xFF;
    if (arg1 <= 0.0) {
        arg1 = 0.0f;
    } else if (arg1 >= 1.0) {
        arg1 = 1.0f;
    }
    ret = (u32)((f32)(v - r) * arg1 + (f32)(u32)r);
    return ret;
}
