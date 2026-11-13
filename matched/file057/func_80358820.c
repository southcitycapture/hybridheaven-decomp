#include "common.h"
typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;
typedef struct func_80358964_StructArg {
    u8 pad0[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358964_StructArg;
typedef struct func_80358B50_StructArg {
    u8 pad[0x6C];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
} func_80358B50_StructArg;
typedef struct func_80358C6C_Vec6 {
    s32 w[3];
} func_80358C6C_Vec6;
typedef struct func_80358C6C_Obj {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x50 - 0x10];
    f32 unk50;
    u8 pad2[0xC8 - 0x54];
    func_80358C6C_Vec6 unkC8;
    func_80358C6C_Vec6 unkD4;
} func_80358C6C_Obj;
typedef struct func_80358C6C_Holder {
    u8 pad0[0x5C];
    func_80358C6C_Obj *unk5C;
} func_80358C6C_Holder;
typedef struct func_80358C6C_Arg {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x6C - 0x10];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x8C - 0x7D];
    func_80358C6C_Holder *unk8C;
} func_80358C6C_Arg;
typedef struct func_803591DC_StructD {
    u8 pad[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad2[0x4C - 0x37];
    u16 unk4C;
    u16 unk4E;
    u8 pad3[0x6C - 0x50];
    s32 unk6C;
    s32 unk70;
    f32 unk74;
    u8 pad4[0x7C - 0x78];
    u8 unk7C;
} func_803591DC_StructD;


typedef struct func_80358820_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    s16 unk12;
} func_80358820_Pos;

typedef struct func_80358820_Mid {
    u8 pad0[0x2C];
    func_80358820_Pos *unk2C;
} func_80358820_Mid;

typedef struct func_80358820_Other {
    u8 pad0[0xE];
    u16 unkE;
} func_80358820_Other;

typedef struct func_80358820_Holder {
    u8 pad0[0x24];
    func_80358820_Mid *unk24;
    u8 pad1[0x5C - 0x28];
    func_80358820_Other *unk5C;
} func_80358820_Holder;

typedef struct func_80358820_Arg {
    u8 pad0[0xC];
    func_80358820_Holder *unkC;
    u8 pad1[0x6C - 0x10];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    s16 unk78;
    u16 unk7A;
    u8 unk7C;
    u8 pad2[0x8C - 0x7D];
    func_80358820_Holder *unk8C;
} func_80358820_Arg;

typedef struct func_80358820_G {
    u8 pad0[0xDC];
    func_80358820_Holder *unkDC;
    u8 pad1[0x1035 - 0xE0];
    u8 unk1035;
} func_80358820_G;

extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern func_80358964_StructA *D_8038CC10;
void func_800058DC(void *arg0, void *arg1);
void func_80358964(func_80358964_StructArg *arg0, s32 arg1);
void func_80358A80(void *arg0, s32 arg1);
void func_80358B50(func_80358B50_StructArg *arg0, s32 arg1);
void func_80358C6C(func_80358C6C_Arg *arg0, s32 arg1);
void func_803591DC(func_803591DC_StructD *arg0, s32 arg1);

void func_80358820(func_80358820_Arg *arg0, s32 arg1) {
    func_80358820_Other *sp2C;
    func_80358820_Pos *sp30;
    u8 *sp34;

    sp30 = arg0->unkC->unk24->unk2C;
    sp34 = (arg0->unkC != ((func_80358820_G *) D_801BBBF0)->unkDC) ? D_801BC03C : D_801BC3D8;
    sp2C = arg0->unkC->unk5C;
    D_8038CC10->unk4C = 0;
    if (((func_80358820_G *) D_801BBBF0)->unk1035 == 1) {
        arg0->unk6C = sp30->unk4;
        arg0->unk70 = sp30->unk8;
        arg0->unk74 = sp30->unkC;
        arg0->unk78 = sp30->unk12;
        arg0->unk7A = sp2C->unkE;
        arg0->unk7C = sp34[0x2DA];
        arg0->unk8C = arg0->unkC;
        switch (D_8038CC10->unk30) {
        case 13:
        case 14:
            func_800058DC(arg0, func_80358964);
            break;
        case 15:
            func_800058DC(arg0, func_80358A80);
            break;
        case 33:
        case 34:
            func_800058DC(arg0, func_80358B50);
            break;
        case 19:
            func_800058DC(arg0, func_80358C6C);
            break;
        case 35:
        case 36:
        case 37:
            func_800058DC(arg0, func_803591DC);
            break;
        default:
            func_800058DC(arg0, func_80358A80);
            break;
        }
    }
}
