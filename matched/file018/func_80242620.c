#include "context.h"
struct func_80242620_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80242620_Mid {
    u8 pad0[0x2C];
    struct func_80242620_Leaf *unk2C;
};
struct func_80242620_Top {
    u8 pad0[0x24];
    struct func_80242620_Mid *unk24;
};
extern f32 D_8025BF58;
extern void D_80127430(f32, f32, f32, s32, f32, f32);

s32 func_80242620(arg)
struct func_80242620_Top *arg;
{
    extern void func_8037BB4C(s16, f32, f32, s16);
    struct func_80242620_Leaf *a = (*((struct func_80242620_Mid **)&D_8025C6E4 - 0x28285))->unk2C;
    struct func_80242620_Leaf *b = arg->unk24->unk2C;
    f32 dx, dz;
    if (a->unk4 < b->unk4) dx = -(a->unk4 - b->unk4); else dx = a->unk4 - b->unk4;
    if (a->unkC < b->unkC) dz = -(a->unkC - b->unkC); else dz = a->unkC - b->unkC;
    if (dz + dx < 10.0f) {
        D_80127430(b->unk4, b->unk8, b->unkC, 0x6BD, D_8025BF58, 1.0f);
        func_8037BB4C(arg->unk24->unk2C->unk12, 2.0f, 2.0f, D_8025C6E2);
    }
    return 0;
}
