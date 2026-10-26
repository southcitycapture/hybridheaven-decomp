#include "common.h"
#include "common.h"
typedef struct func_80251820_Ctx func_80251820_Ctx;
typedef struct func_80251820_Args func_80251820_Args;
typedef struct func_80251820_Node func_80251820_Node;
extern u8 D_801BBBF0[];
extern u8 *D_8025DE20;
typedef struct func_80256CB0_StructA {
    u8 pad0[0x90];
    u16 unk90;
} func_80256CB0_StructA;
typedef struct func_80256CB0_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256CB0_StructI;
typedef struct func_80256CB0_StructM {
    u8 pad0[0x30];
    func_80256CB0_StructI *unk30;
} func_80256CB0_StructM;


extern f64 D_8025DCB0;
extern f64 D_8025DCB8;

void func_80257684(func_80256CB0_StructA *arg0, func_80256CB0_StructM **arg1) {
    func_80256CB0_StructI *inner;

    arg0->unk90 = arg0->unk90 + 1;
    inner = (*arg1)->unk30;
    if ((s32) inner->unk4B < 0xFC) {
        inner->unk4B = inner->unk4B + 4;
        inner = (*arg1)->unk30;
    }
    inner->unk8 = (f32) (*(f32 *) (D_8025DE20 + 0x9C) + 45.0f);
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];
    inner = (*arg1)->unk30;
    if ((f64) inner->unk18 < D_8025DCB0) {
        f64 step;
        step = D_8025DCB8;
        inner->unk18 = (f32) ((f64) inner->unk18 + step);
        inner = (*arg1)->unk30;
        inner->unk1C = (f32) ((f64) inner->unk1C + step);
        inner = (*arg1)->unk30;
        inner->unk20 = (f32) ((f64) inner->unk20 + step);
    }
}
