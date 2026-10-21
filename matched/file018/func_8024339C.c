#include "context.h"

struct func_8024339C_Inner { u8 pad0[0x78]; s16 unk78; };
struct func_8024339C_Leaf { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_8024339C_Mid { u8 pad0[0x2C]; struct func_8024339C_Leaf *unk2C; };
struct func_8024339C_Struct {
    u8 pad0[0x24];
    struct func_8024339C_Mid *unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x5C - 0x34];
    struct func_8024339C_Inner *unk5C;
    u8 pad60[0x94 - 0x60];
    s16 unk94;
    u8 pad96[6];
    s32 unk9C;
};
struct func_8024339C_Cfg { s32 a; s32 b; s32 c; };
struct func_8024339C_Node { u8 pad0[0x18]; struct { u8 pad0[0x2C]; struct { u8 pad0[0x6A]; u8 unk6A; } *unk2C; } *unk18; };
extern void func_80010454(void *, void *, s32);
extern s32 func_8012CF10(void *, void *, struct func_8024339C_Cfg, s32, s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern struct func_8024339C_Cfg D_80258DC8;
extern f32 D_8025BF68;
extern f32 D_8025BF6C;
extern s16 D_8025C6E2;
extern void func_8024368C();
extern void func_80243C54();
extern void func_8013A334();
extern s32 D_80242714(void *);
extern void D_80243B94();

void func_8024339C(struct func_8024339C_Struct *arg0, void *arg1) {
    struct func_8024339C_Inner *sp54;
    f32 v[3];
    struct func_8024339C_Leaf *l;
    struct func_8024339C_Leaf *q;
    f32 dy, dx, dz;

    sp54 = arg0->unk5C;
    if (func_80242620() != 0) return;
    if (D_80242714(arg0) != 0) return;
    if (!(arg0->unk9C & 8)) {
        if (arg0->unk30 & 0x10) {
            sp54->unk78 = 1;
            l = arg0->unk24->unk2C;
            func_80127430(l->unk4, l->unk8, *(s32 *)&l->unkC, 0x337, D_8025BF68, 1.0f);
            func_800058DC(arg0, func_80243C54);
            arg0->unk9C = arg0->unk30;
            return;
        }
        if (arg0->unk30 & 0x80) {
            sp54->unk78 = 1;
            func_800058DC(arg0, D_80243B94);
            arg0->unk9C = arg0->unk30;
            return;
        }
    }
    arg0->unk9C = arg0->unk30;
    func_8013A334(v, arg1, sp54, 0xC);
    if (arg0->unk94 != 0) {
        q = (*((struct func_8024339C_Mid **)&D_8025C6E4 - 0x28285))->unk2C;
        if (q->unk8 < v[1]) dy = -(q->unk8 - v[1]); else dy = q->unk8 - v[1];
        if (q->unk4 < v[0]) dx = -(q->unk4 - v[0]); else dx = q->unk4 - v[0];
        if (q->unkC < v[2]) dz = -(q->unkC - v[2]); else dz = q->unkC - v[2];
        if (dz * 1.0f + (dx + dy) < 30.0f) {
            arg0->unk94 = 0;
            l = arg0->unk24->unk2C;
            func_80127430(l->unk4, l->unk8, *(s32 *)&l->unkC, 0x6BD, D_8025BF6C, 1.0f);
            func_8037BB4C(arg0->unk24->unk2C->unk12 + 0x800, 2.0f, 2.0f, D_8025C6E2);
        }
    }
    func_80010454(arg1, sp54, 0xE3F001);
    if (func_8012CF10(arg1, sp54, D_80258DC8, 0xA, 0x1C0FFE) == 0) {
        func_80010454(arg1, sp54, 0x1C0FFE);
        func_80010550(arg1, sp54);
        if (((struct func_8024339C_Node *)arg1)->unk18->unk2C->unk6A != 0) {
            sp54->unk78 = 1;
            arg0->unk94 = func_8012C6B4(0x40) + 0x10;
            func_800058DC(arg0, func_8024368C);
        }
    }
}
