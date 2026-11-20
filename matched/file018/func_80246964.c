#include "common.h"
typedef struct func_802474E4_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_802474E4_StructNode;
typedef struct func_802474E4_StructMid {
    u8 pad0[0x2C];
    func_802474E4_StructNode *unk2C;
} func_802474E4_StructMid;
extern struct func_802474E4_StructMid *D_801BBCD0;
typedef struct func_80246E60_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80246E60_StructGlobal;
extern func_80246E60_StructGlobal D_80258F3C;
extern u32 D_8025C708;
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern s32 func_8001EF38(f32, f32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_8012A94C(void *, s32);
extern s32 func_8012CE9C(s32, void *, func_80246E60_StructGlobal, s32);
typedef struct func_80244AB0_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80244AB0_Node;
typedef struct func_80244AB0_Mid {
    u8 pad0[0x2C];
    func_80244AB0_Node *unk2C;
} func_80244AB0_Mid;
typedef struct func_80244AB0_Struct {
    u8 pad0[0x24];
    func_80244AB0_Mid *unk24;
} func_80244AB0_Struct;
s32 func_80244AB0(func_80244AB0_Struct *arg0);
typedef struct func_80246964_StructNode {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80246964_StructNode;
typedef struct func_80246964_StructMid {
    u8 pad0[0x2C];
    func_80246964_StructNode *unk2C;
} func_80246964_StructMid;
typedef struct func_80246964_Struct {
    u8 pad0[0x24];
    func_80246964_StructMid *unk24;
    u8 pad28[0x34];
    u8 *unk5C;
} func_80246964_Struct;
typedef struct func_80246AA8_Struct func_80246AA8_Struct;
void func_80246AA8(func_80246AA8_Struct *arg0, s32 arg1);

extern f32 D_8025C5B0;

typedef struct func_80246964_StructEffect {
    f32 x;
    f32 y;
    s32 z;
    s32 effectId;
} func_80246964_StructEffect;

void func_80246964(func_80246964_Struct *arg0, s32 arg1) {
    func_80246964_StructEffect effect;
    u8 *sp2C;

    sp2C = arg0->unk5C;
    D_8025C708 = 0;
    if (func_80244AB0((func_80244AB0_Struct *)arg0) == 0) {
        if (func_8012CE9C(arg1, sp2C, D_80258F3C, 10) == 0) {
            u32 v;
            func_80010550(arg1, sp2C);
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(((func_80246964_StructMid *)D_801BBCD0)->unk2C->unk4 - arg0->unk24->unk2C->unk4, ((func_80246964_StructMid *)D_801BBCD0)->unk2C->unkC - arg0->unk24->unk2C->unkC)) & 0x1FFF;
            v &= 0xFFFF;
            if ((s32)v < 0x200 || ((s32)v >= 0x1E01 && (s32)v < 0x1FFF)) {
                *(s16 *)(sp2C + 0x78) = 1;
                effect.x = arg0->unk24->unk2C->unk4;
                effect.y = arg0->unk24->unk2C->unk8;
                effect.z = *(s32 *)((u8 *)arg0->unk24->unk2C + 0xC);
                effect.effectId = 0x66A;
                func_80127430(effect.x, effect.y, effect.z, effect.effectId, D_8025C5B0, 1.0f);
                func_800058DC(arg0, func_80246AA8);
            }
            func_8012A94C(arg0, 0x40);
        }
    }
}
