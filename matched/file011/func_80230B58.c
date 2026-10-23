#include "context.h"

struct func_80230B58_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[0xA - 5];
    u8 unkA;
    u8 pad1[0x15 - 0xB];
    s8 unk15[5];
    u8 unk1A;
};
struct func_80230B58_Ent {
    u8 unk0;
    u8 pad1;
    s16 unk2;
    u8 unk4;
    u8 pad5;
};
struct func_80230B58_Struct {
    u8 pad0[0x38];
    u32 unk38;
    u8 pad3C[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad58[0xA8 - 0x58];
    struct func_80230B58_Ent ent[1];
    u8 pad2[0x2D4 - 0xAE];
    struct func_80230B58_Inner *unk2D4;
    u8 pad2D8[0x2D9 - 0x2D8];
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};
extern s32 func_80230494(void *);

s32 func_80230B58(struct func_80230B58_Struct *arg0, struct func_80230B58_Struct *arg1) {
    s16 pad;
    s16 s;
    s16 x;
    s16 v;
    u16 t;
    s32 r;
    u8 k;
    s16 d;
    struct func_80230B58_Inner *in;
    struct func_80230B58_Ent *e;

    s = 0;
    t = func_80230500((s32)arg0, 3);
    in = arg1->unk2D4;
    v = arg0->ent[in->unkA].unk2;
    if (v < 0) {
        v *= 3;
    }
    d = arg0->unk52 - arg1->unk52;
    s = arg0->ent[in->unk1A].unk0 * arg0->ent[in->unk1A].unk2 + (u32)(arg0->unk54 - arg1->unk54) +((arg0->unk56 & 0x3F00) >> 8) + d + t + v;
    s = (s32)((f32)s * (f32)arg0->unk399 / 100.0f + 0.5);
    r = func_80230494(arg1);
    in = arg1->unk2D4;
    x = arg1->ent[in->unkA].unk2 * r + (u32)(in->unk15[(arg1->unk38 << 6) >> 29] + in->unk4);
    x = (f32)(100 - arg1->ent[in->unkA].unk4 * 10) * (f32)x / 100.0f;
    if (x < s) {
        arg0->unk2DA = 1;
        arg0->unk2D9 = arg1->unk2D4->unk1A;
        arg0->unk2D4 = (void *)(D_801842A0 + arg0->unk2D9 * 0x1C);
        arg1->unk2DA = 0;
        arg0->unk2DB = 1;
        arg1->unk2DB = 0;
        if (arg0->unk399 >= 0x15) {
            arg0->unk399 -= 0x14;
        }
    } else {
        arg0->unk2DA = 0;
        arg1->unk2DA = 1;
        arg0->unk2DB = 0;
        if (arg0->unk399 < 0xAF) {
            arg0->unk399 += 0x50;
        } else {
            arg0->unk399 = 0xFF;
        }
    }
}
