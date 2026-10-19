#include "context.h"
extern void func_80011198();
extern void func_800058DC();
struct func_8036F898_StructA;
extern struct func_8036F898_StructA D_801BBBF0;
typedef struct func_8036EA80_Vec { s32 x; s32 y; s32 z; } func_8036EA80_Vec;
typedef struct func_8036EA80_StructS {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 6;
    u32 b7 : 2;
    u32 b11 : 2;
    u32 b13 : 3;
    u32 b16 : 3;
    u32 b19 : 8;
    u32 b27 : 2;
    u32 b29 : 3;
    u8 pad2[0x392 - 0x34];
    u8 unk392;
} func_8036EA80_StructS;
typedef struct func_8036EA80_Actor {
    u8 pad0[0x5C];
    void *unk5C;
} func_8036EA80_Actor;
extern void func_80225664(func_8036EA80_Vec *, void *, s32);
extern s32 func_80011140(s32, void *, func_8036EA80_Vec, s32);
extern void func_8036EBB8();
typedef struct func_8036EA80_StructD {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036EA80_StructD;
#define DA ((func_8036EA80_StructD *)&D_801BBBF0)

void func_8036EA80(void *arg0, s32 arg1) {
    void *sp3C;
    u8 pad[4];
    func_8036EA80_Vec sp2C;
    func_8036EA80_StructS *s;

    sp3C = ((func_8036EA80_Actor *)arg0)->unk5C;
    if (arg0 == DA->unkDC) {
        s = (func_8036EA80_StructS *)D_801BC03C;
    } else {
        s = (func_8036EA80_StructS *)D_801BC3D8;
    }
    s->unk392 = 0;
    if ((s->unk2 <= 0) || (s->b1 != 0)) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (DA->unk1031 != 0xF) {
        if (s->b13 == 5) {
            func_8022397C(arg0);
            return;
        }
        s->b27 = 1;
        s->b16 = 1;
        func_80225664(&sp2C, arg0, 0x190013C);
        if (func_80011140(arg1, sp3C, sp2C, 6) != 0) {
            func_800058DC((s32)arg0, func_8036EBB8);
        }
    }
}
