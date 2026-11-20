#include "context.h"

typedef struct func_8038150C_Struct {
    u8 pad0[0x30];
    union {
        struct {
            u32 b0 : 3;
            u32 b3 : 4;
            u32 b7 : 4;
            u32 b11 : 2;
            u32 rest : 19;
        } bits;
        struct {
            u8 pad[3];
            s8 f : 1;
        } flag;
    } unk30;
    u8 pad34[4];
    struct {
        u32 b0 : 1;
        u32 rest : 31;
    } unk38;
    u8 pad3C[0x9E - 0x3C];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[0x2BA - 0xA2];
    s16 unk2BA;
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
    u8 pad2C4[0x39C - 0x2C4];
} func_8038150C_Struct;

typedef struct func_8038150C_Globals {
    u8 pad0[0x44C];
    func_8038150C_Struct players[2];
} func_8038150C_Globals;
void func_80381E78();
extern void func_8001B204();

#define TBL(off) (*(s32 *)(D_803898E0 + (off)))

void func_8038150C(struct func_803813C0_Struct *arg0, s32 arg1) {
    func_8038150C_Struct *self;
    func_8038150C_Struct *other;

    self = (func_8038150C_Struct *)(arg0->unk90 == 0 ? D_801BC03C : D_801BC3D8);
    other = (func_8038150C_Struct *)(arg0->unk90 == 0 ? D_801BC3D8 : D_801BC03C);
    if (other->unk30.flag.f && other == &((func_8038150C_Globals *)&D_801BBBF0)->players[1] && other->unk30.bits.b11 == 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0x90));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0x94));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0x98));
    } else if (self->unk30.flag.f && self == &((func_8038150C_Globals *)&D_801BBBF0)->players[0] && self->unk30.bits.b11 == 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0x84));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0x88));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0x8C));
    } else if (self->unk9E != 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xA8));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xAC));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xB0));
    } else if (self->unk2BA < 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xB4));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xB8));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xBC));
    } else if (self->unk2BC < 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xC0));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xC4));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xC8));
    } else if (self->unk2BE < 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xCC));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xD0));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xD4));
    } else if (self->unk2C0 < 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xD8));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xDC));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xE0));
    } else if (self->unk2C2 < 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0xE4));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xE8));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xEC));
    } else if (self->unkA0 != 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0x9C));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0xA0));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0xA4));
    } else if (self->unk38.b0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(arg0->unk93 * 0xC + 0x54));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(arg0->unk93 * 0xC + 0x58));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(arg0->unk93 * 0xC + 0x5C));
    } else if (self->unk30.bits.b3 != 0) {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(0x78));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(0x7C));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(0x80));
    } else {
        func_8001B204(0x10, 0x1C, 0x9E, "%m%s", 4, TBL(arg0->unk92 * 0xC));
        func_8001B204(0x11, 0x1C, 0xAC, "%m%s", 4, TBL(arg0->unk92 * 0xC + 4));
        func_8001B204(0x12, 0x1C, 0xBA, "%m%s", 4, TBL(arg0->unk92 * 0xC + 8));
    }
    func_8001B204(0x13, 0xAA, 0xC8, "PRESS %pB %pTO EXIT", 2, 0);
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0xA0) & 0x4000) {
        func_800058DC(arg0, func_80381E78);
    }
}
