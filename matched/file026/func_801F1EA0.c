#include "context.h"

struct func_801F1EA0_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_801F1EA0_Struct2 {
    u8 pad[0x2C];
    struct func_801F1EA0_Struct3 *unk2C;
};
struct func_801F1EA0_Struct1 {
    u8 pad[0xE8];
    struct func_801F1EA0_Struct2 *unkE8;
};
extern f32 D_801FCE68;
extern f32 D_801FCE6C;
extern f32 D_801FCE70;
extern f32 D_801FCE74;
extern f32 D_801FCE78;
extern f32 D_801FCE7C;
extern f32 D_801FCE80;

s32 func_801F1EA0(s32 arg0, s32 arg1) {
    u32 base = (u32)&D_801BBBF0;
    struct func_801F1EA0_Struct1 *p;

    if (func_801C0B8C(0x01BC07DF) != 0) {
        func_8038BD50(5.0f, D_801FCE68, -20.7f);
        D_8038BD88(-2.0f, D_801FCE6C, -1.2f);
        return 9;
    }
    p = (struct func_801F1EA0_Struct1 *)base;
    p->unkE8->unk2C->unk30 = p->unkE8->unk2C->unk30;
    p->unkE8->unk2C->unk34 = p->unkE8->unk2C->unk34 + D_801FCE70;
    p->unkE8->unk2C->unk38 = p->unkE8->unk2C->unk38 + D_801FCE74;
    p->unkE8->unk2C->unk3C = p->unkE8->unk2C->unk3C + D_801FCE78;
    p->unkE8->unk2C->unk40 = p->unkE8->unk2C->unk40 + D_801FCE7C;
    p->unkE8->unk2C->unk44 = p->unkE8->unk2C->unk44 + D_801FCE80;
    return 8;
}
