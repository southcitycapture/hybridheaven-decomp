#include "common.h"
u16 func_80230500(s32 arg0, u8 arg1);
struct func_80231B28_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 pad1[0x2DB - 0x2D9];
    u8 unk2DB;
};


struct func_80230930_Inner {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad1[0x15 - 0xB];
    s8 unk15[1];
};
struct func_80230930_Ent {
    s16 a;
    u8 b;
    u8 c;
    s16 d;
};
struct func_80230930_Struct {
    u8 pad0[0x38];
    u32 unk38_hi : 6;
    u32 unk38 : 3;
    u32 unk38_lo : 23;
    u8 pad1[0x52 - 0x3C];
    u16 unk52;
    u16 unk54;
    s16 unk56;
    u8 pad2[0xAA - 0x58];
    struct func_80230930_Ent unkAA[1];
    u8 pad3[0x2D4 - 0xB0];
    struct func_80230930_Inner *unk2D4;
    u8 pad4[0x2DA - 0x2D8];
    u8 unk2DA;
    u8 unk2DB;
    u8 pad5[0x399 - 0x2DC];
    u8 unk399;
};
extern u32 func_80230494(void *);

#define P0 ((struct func_80230930_Struct *)arg0)
#define P1 ((struct func_80230930_Struct *)arg1)

void func_80230930(struct func_80231B28_Struct *arg0, struct func_80231B28_Struct *arg1) {
    s16 a1;
    s16 sp1C;
    u16 t1;
    s16 d52;
    s32 x;
    u32 r;

    t1 = func_80230500((s32)arg0, 2);
    a1 = P0->unkAA[P1->unk2D4->unkA].a;
    if (P0->unkAA[P1->unk2D4->unkA].a < 0) {
        a1 *= 2;
    }
    d52 = P0->unk52 - P1->unk52;
    sp1C = (P0->unk54 - P1->unk54) + ((P0->unk56 & 0x3F00) >> 8) + d52 + t1 + a1;
    sp1C = (sp1C * (f32)P0->unk399) / 100.0f + 0.5;
    r = func_80230494(arg1);
    x = P1->unkAA[P1->unk2D4->unkA].a * r + (P1->unk2D4->unk15[P1->unk38] + P1->unk2D4->unk4);
    x = (s16)x;
    x = (s16)((f32)(100 - P1->unkAA[P1->unk2D4->unkA].b * 10) * x / 100.0f);
    if (sp1C >= x) {
        P0->unk2DA = 1;
        P1->unk2DA = 0;
        P0->unk2DB = 1;
        if (P0->unk399 >= 0xB) {
            P0->unk399 -= 0xA;
        }
    } else {
        P0->unk2DA = 0;
        P1->unk2DA = 1;
        P0->unk2DB = 0;
        if (P0->unk399 < 0xD7) {
            P0->unk399 += 0x28;
            return;
        }
        P0->unk399 = 0xFF;
    }
}
