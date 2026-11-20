#include "common.h"
extern u8 D_801842A0[];
u16 func_80230500(s32 arg0, u8 arg1);


struct func_80230B58_StructInner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[0xA - 5];
    u8 unkA;
    u8 pad1[0x15 - 0xB];
    s8 unk15[5];
    u8 unk1A;
};
struct func_80230B58_StructEnt {
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
    struct func_80230B58_StructEnt ent[1];
    u8 pad2[0x2D4 - 0xAE];
    struct func_80230B58_StructInner *unk2D4;
    u8 pad2D8[0x2D9 - 0x2D8];
    u8 unk2D9;
    u8 unk2DA;
    u8 unk2DB;
    u8 pad2DC[0x399 - 0x2DC];
    u8 unk399;
};

s32 func_80230B58(struct func_80230B58_Struct *source, struct func_80230B58_Struct *target) {
    s16 v;
    s16 s;
    s16 x;
    u16 t;
    s32 r;
    s16 d;
    struct func_80230B58_StructInner *in;

    s = 0;
    t = func_80230500((s32)source, 3);
    in = target->unk2D4;
    v = source->ent[in->unkA].unk2;
    if (v < 0) {
        v *= 3;
    }
    d = source->unk52 - target->unk52;
    s = source->ent[in->unk1A].unk0 * source->ent[in->unk1A].unk2 + (u32)(source->unk54 - target->unk54) + ((source->unk56 & 0x3F00) >> 8) + d + t + v;
    s = (s32)((f32)s * (f32)source->unk399 / 100.0f + 0.5);
    r = func_80230494__func_80230930(target);
    in = target->unk2D4;
    x = target->ent[in->unkA].unk2 * r + (u32)(in->unk15[(target->unk38 << 6) >> 29] + in->unk4);
    x = (f32)(100 - target->ent[in->unkA].unk4 * 10) * (f32)x / 100.0f;
    if (x < s) {
        source->unk2DA = 1;
        source->unk2D9 = target->unk2D4->unk1A;
        source->unk2D4 = (void *)(D_801842A0 + source->unk2D9 * 0x1C);
        target->unk2DA = 0;
        source->unk2DB = 1;
        target->unk2DB = 0;
        if (source->unk399 >= 0x15) {
            source->unk399 -= 0x14;
        }
    } else {
        source->unk2DA = 0;
        target->unk2DA = 1;
        source->unk2DB = 0;
        if (source->unk399 < 0xAF) {
            source->unk399 += 0x50;
        } else {
            source->unk399 = 0xFF;
        }
    }
}
