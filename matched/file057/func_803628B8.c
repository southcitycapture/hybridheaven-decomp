#include "common.h"
extern u8 D_801842A0[];
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u16 func_80011590();
typedef struct func_80360EF8_Struct { int unk0; int unk4; int unk8; } func_80360EF8_Struct;
extern void func_8013A28C(s32, func_80360EF8_Struct);
void func_803602D4(s32 arg0, s32 arg1);
u8 func_803626E0(s32 arg0);
typedef struct func_80362758_Struct {
    u8 pad[0x2BC];
    s16 unk2BC;
    s16 unk2BE;
    s16 unk2C0;
    s16 unk2C2;
} func_80362758_Struct;
u16 func_80362820(func_80362758_Struct *arg0, u8 arg1);
typedef struct func_80362A54_Actor {
    u8 pad[0x36];
    u16 f36;
    u8 pad2[0x24];
    void *f5C;
} func_80362A54_Actor;
void func_80362A54(func_80362A54_Actor *arg0, void **arg1);

extern void func_800058DC(void *arg0, void *arg1);
extern void func_802237B0(void *arg0, s32 arg1);

typedef struct func_803628B8_StructNode {
    s32 unk0;
    u16 unk4;
    u8 pad6[6];
    u16 unkC;
} func_803628B8_StructNode;

typedef struct func_803628B8_StructOut {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_803628B8_StructOut;

typedef struct func_803628B8_StructSub {
    u8 pad0[0x1C];
    func_803628B8_StructOut unk1C;
    u8 pad28[0x7C - 0x28];
    func_803628B8_StructNode *unk7C;
} func_803628B8_StructSub;

typedef struct func_803628B8_StructArg {
    u8 pad0[0x5C];
    func_803628B8_StructSub *unk5C;
} func_803628B8_StructArg;

typedef struct func_803628B8_StructState {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x1C];
    u32 pad30 : 9;
    u32 f : 2;
    u32 pad31 : 21;
    u8 pad34[0x2D4 - 0x34];
    void *unk2D4;
    u8 pad2D8;
    u8 unk2D9;
    u8 pad2DA[2];
    u8 unk2DC;
    u8 pad2DD;
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[3];
    f32 unk2EC;
} func_803628B8_StructState;

extern func_803628B8_StructNode *D_80385E50[];

typedef struct func_803628B8_StructSelection {
    func_803628B8_StructOut *out;
    u8 form;
    func_803628B8_StructNode *node;
} func_803628B8_StructSelection;

void func_803628B8(func_803628B8_StructArg *arg0, s32 arg1) {
    func_803628B8_StructState *s;

    {
    s32 g;

    g = D_801BBCCC;
    if ((s32)arg0 == g) {
        s = (func_803628B8_StructState *)D_801BC03C;
    } else {
        s = (func_803628B8_StructState *)D_801BC3D8;
    }
    }
    {
    func_803628B8_StructSub *sub[1];
    s32 a;
    u8 b;
    func_803628B8_StructSelection selection;

    sub[0] = arg0->unk5C;
    s->unk2E8 = 0;
    s->unk2DE = 0;
    s->unk2DC = 0;
    s->unk2EC = 1.0f;
    func_803602D4((s32)arg0, arg1);
    selection.form = func_803626E0((s32)arg0);
        a = selection.form & 0xF;
        b = a;
        if (((a & 0xFF) < 4) && (s->f == 3)) {
            b = (a & 0xFF) ^ 1;
        }
        sub[0]->unk7C = D_80385E50[b];
    s->unk2D9 = func_80362820((func_80362758_Struct *)s, selection.form);
    s->unk2D4 = &D_801842A0[s->unk2D9 * 0x1C];
    {
        selection.node = sub[0]->unk7C;
        selection.out = &sub[0]->unk1C;
        selection.out->unk0 = selection.node->unk0;
        selection.out->unk4 = func_80011590(selection.node->unkC);
        selection.out->unk6 = selection.node->unk4;
        selection.out->unk8 = s->unk10;
        if (s->f == 3) {
            selection.out->unk6 |= 0x10;
        }
        func_8013A28C(arg1, *(func_80360EF8_Struct *)selection.out);
    }
    func_802237B0(arg0, 1);
    func_800058DC(arg0, func_80362A54);
    }
}
