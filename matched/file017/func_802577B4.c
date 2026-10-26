#include "common.h"
#define ZQ(a, b) a##b
#define ZP(a, b) ZQ(a, b)
extern void func_8012CF8C(void *, void *, s32, s32);
extern s32 func_80133A24(s32);


extern f64 D_8025DCC0;
extern f64 D_8025DCC8;

typedef struct func_802577B4_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x8];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
} func_802577B4_Inner;

typedef struct func_802577B4_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802577B4_Inner *unk30;
} func_802577B4_Node;

typedef struct func_802577B4_Arg1 {
    u8 pad0[0x10];
    func_802577B4_Node *unk10;
    func_802577B4_Node *unk14;
    func_802577B4_Node *unk18;
    func_802577B4_Node *unk1C;
    func_802577B4_Node *unk20;
    func_802577B4_Node *unk24;
} func_802577B4_Arg1;

typedef struct func_802577B4_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad92[2];
    s16 unk94;
} func_802577B4_Arg0;

void func_802577B4(func_802577B4_Arg0 *arg0, func_802577B4_Arg1 *arg1) {
    func_802577B4_Inner *p;
    u8 v;
    f64 lim;
    f64 d;
    s32 m;

    p = arg1->unk10->unk30;
    p->unk12 = (s16)(p->unk12 + 0x5B) & 0x1FFF;
    if (func_80133A24(0x138) != 0) {
        p = arg1->unk10->unk30;
        d = p->unk1C;
        lim = D_8025DCC0;
        if (lim <= d) {
            p->unk1C = d * D_8025DCC8;
            if (arg1->unk10->unk30->unk1C < lim) {
                arg1->unk10->unk22 = 0;
            }
        }
    }
    p = arg1->unk14->unk30;
    p->unk12 = (s16)(p->unk12 + 0x5B) & 0x1FFF;
    arg1->unk18->unk30->unk4D++;
    if (func_80133A24(0x137) != 0) {
        arg1->unk18->unk30->unk4B += arg0->unk94;
        v = arg1->unk18->unk30->unk4B;
        if (v >= 0xF0 || v < 9) {
            arg0->unk94 = -arg0->unk94;
        }
    }
    p = arg1->unk1C->unk30;
    p->unk12 = (s16)(p->unk12 - 0x44) & 0x1FFF;
    m = arg0->unk90 % 90;
    if (!(m % 2)) {
        func_8012CF8C(arg0, &arg1->unk20->unk30->unk4C - 0xC, 0x2F8, 0xF);
    } else {
        func_8012CF8C(arg0, &arg1->unk20->unk30->unk4C - 0xC, 0x2F8, 0xE);
    }
    arg1->unk24->unk30->unk4C++;
    arg1->unk24->unk30->unk4D++;
}
