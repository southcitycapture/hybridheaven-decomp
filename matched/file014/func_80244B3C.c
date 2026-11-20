#include "common.h"
extern void func_800058DC(void *, void *);
extern void func_80010550(s32, void *);
extern void func_8012A94C(void *, s32);
struct func_80242890_Struct_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_80242890_Struct_Mid {
    u8 pad0[0x2C];
    struct func_80242890_Struct_Sub *unk2C;
};
struct func_80242890_Struct_Obj {
    u8 pad0[0x24];
    struct func_80242890_Struct_Mid *unk24;
};
s32 func_80242890(struct func_80242890_Struct_Obj *arg0);
struct func_802438E4_Child {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_802438E4_Obj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_802438E4_Child *unk5C;
};
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_802455D8_Sub;
typedef struct {
    u8 pad0[0x2C];
    func_802455D8_Sub *unk2C;
} func_802455D8_Mid;
struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};

void func_802438E4(struct func_802438E4_Obj *arg0, s32 arg1);
extern func_802455D8_Mid *D_801BBCD0;

struct func_80244B3C_StructSub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_80244B3C_StructMid {
    u8 pad0[0x2C];
    struct func_80244B3C_StructSub *unk2C;
};
struct func_80244B3C_StructObj {
    u8 pad0[0x24];
    struct func_80244B3C_StructMid *unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad60[0x34];
    s16 unk94;
};
extern s32 func_8001EF38(f32, f32);

void func_80244B3C(struct func_80244B3C_StructObj *arg0, s32 arg1) {
    s32 direction;
    struct func_80246478_Child *sp20;
    s32 angle;
    func_802455D8_Sub *pos0;
    struct func_80244B3C_StructSub *pos1;

    sp20 = arg0->unk5C;
    if (arg0->unk30 & 0x88) {
        arg0->unk94 = 0;
    }
    if (func_80242890(arg0) == 0) {
        func_80010550(arg1, sp20);
        angle = arg0->unk94;
        if (angle != 0) {
            arg0->unk94 = angle - 1;
            return;
        }
        pos0 = D_801BBCD0->unk2C;
        pos1 = arg0->unk24->unk2C;
        direction = func_8001EF38(pos0->unk4 - pos1->unk4, pos0->unkC - pos1->unkC);
        angle = (arg0->unk24->unk2C->unk12 - direction) & 0x1FFF & 0xFFFF;
        if (angle < 0x200 || (angle >= 0x1E01 && angle < 0x1FFF)) {
            sp20->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
        func_8012A94C(arg0, 0x40);
    }
}
