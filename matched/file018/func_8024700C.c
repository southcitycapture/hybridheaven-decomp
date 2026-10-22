#include "context.h"

typedef struct func_8024700C_StructA {
    u8 pad0[0x24];
    func_802474E4_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_8024700C_StructA;
typedef struct func_8024700C_StructB {
    u8 pad0[0x18];
    func_80244F28_StructMid *unk18;
} func_8024700C_StructB;
extern void func_80010454(void *, void *, s32);
extern s32 func_8012CF10(void *, void *, func_80246E60_StructGlobal, s32, s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern func_80246E60_StructGlobal D_80258F60;
extern f32 D_8025C5BC;
extern s16 D_8025C7E6;
extern s32 D_8013A334(f32 *, s32, s32, s32);

#define AD(x, y) (((x) < (y)) ? -((x) - (y)) : ((x) - (y)))

void func_8024700C(func_8024700C_StructA *arg0, func_8024700C_StructB *arg1) {
    struct {
        f32 v[3];
        u8 *p;
    } l;
    func_802474E4_StructNode *p;
    func_802474E4_StructNode *q;

    l.p = arg0->unk5C;
    if (func_80244AB0(arg0) != 0) {
        return;
    }
    D_8013A334(l.v, (s32)arg1, (s32)l.p, 0xC);
    q = D_801BBCD0->unk2C;
    if (AD(q->unk4, l.v[0]) + AD(((f32 *)q)[2], l.v[1]) + AD(q->unkC, l.v[2]) < 40.0f) {
        func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 2.0f, 2.0f, D_8025C7E6);
    }
    func_80010454(arg1, l.p, 0xE3F001);
    if (func_8012CF10(arg1, l.p, D_80258F60, 0xA, 0x1C0FFE) != 0) {
        return;
    }
    func_80010454(arg1, l.p, 0x1C0FFE);
    func_80010550(arg1, l.p);
    if (arg1->unk18->unk2C[0x6A] != 0) {
        *(s16 *)(l.p + 0x78) = 1;
        q = (void *)arg0;
        ((func_8024700C_StructA *)q)->unk94 = 0x40;
        p = ((func_8024700C_StructA *)q)->unk24->unk2C;
        func_80127430(p->unk4, ((f32 *)p)[2], *(s32 *)&p->unkC, 0x668, D_8025C5BC, 1.0f);
        func_800058DC(arg0, func_80247224);
    }
}
