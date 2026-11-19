#include "common.h"
#define ZPX(a, b) a##b
#define ZP(a, b) ZPX(a, b)
#define zD_216 D_80258DA4_unused
#define zD_631 D_80258D8C
struct func_80242FE0_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
    s16 unk10;
    s16 unk12;
};
struct func_80242FE0_Glob {
    u8 pad0[0x2C];
    struct func_80242FE0_Leaf *unk2C;
};
extern struct func_80242FE0_Glob *D_801BBCD0;
struct func_80242C60_Cfg {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_80242C60_Cfg D_80258D8C;
void func_800058DC(void *, void (*)());
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern s32 func_8012A94C(void *, s32);
extern s32 func_80242620();
struct func_80242714_Inner {
    u8 pad0[0x78];
    s16 unk78;
};

extern void func_80242E5C();

struct func_80243E0C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80243E0C_StructMid {
    u8 pad0[0x2C];
    struct func_80243E0C_StructSub *unk2C;
};
struct func_80243E0C_StructObj {
    u8 pad0[0x24];
    struct func_80243E0C_StructMid *unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x28];
    struct func_80242714_Inner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
};

void func_80243E0C(struct func_80243E0C_StructObj *arg0, s32 arg1) {
    s32 angle;
    struct func_80242714_Inner *sp20;
    struct func_80243E0C_StructSub *pos0;
    struct func_80243E0C_StructSub *pos1;

    sp20 = arg0->unk5C;
    if (arg0->unk30 & 0x88) {
        arg0->unk94 = 0;
    }
    if (func_80242620(arg0) == 0) {
        func_80010550(arg1, sp20);
        angle = arg0->unk94;
        if (angle != 0) {
            arg0->unk94 = angle - 1;
            return;
        }
        pos0 = (struct func_80243E0C_StructSub *)D_801BBCD0->unk2C;
        pos1 = arg0->unk24->unk2C;
        angle = (arg0->unk24->unk2C->unk12 - func_8001EF38(pos0->unk4 - pos1->unk4, pos0->unkC - pos1->unkC)) & 0x1FFF & 0xFFFF;
        if (angle < 0x200 || (angle >= 0x1E01 && angle < 0x1FFF)) {
            sp20->unk78 = 1;
            func_800058DC(arg0, func_80242E5C);
        }
        func_8012A94C(arg0, 0x40);
    }
}
