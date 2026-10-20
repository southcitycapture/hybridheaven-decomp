#include "context.h"

typedef struct func_801CB22C_StructB {
    s16 unk0;
    u8 pad2[2];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801CB22C_StructB;

typedef struct func_801CB22C_StructA {
    u8 pad[0x30];
    func_801CB22C_StructB *unk30;
} func_801CB22C_StructA;

typedef struct func_801CB22C_StructP {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
} func_801CB22C_StructP;

extern u8 D_801D9B60[];
extern u8 D_801DA9F0[];
extern f32 D_801DD2FC;
extern u8 func_801CB450[];

void func_801CB22C(func_801CB22C_StructP *arg0, func_801CB22C_StructA **arg1) {
    f32 k;

    func_80005E44((s32)arg0, D_801DA9F0);
    func_80006214((s32)arg0);
    (*arg1)->unk30->unk30 = 0;
    (*arg1)->unk30->unk28 = D_801D9B60;
    (*arg1)->unk30->unk0 = 0;
    (*arg1)->unk30->unk2C = 0;
    func_8012CF8C(arg0, (*arg1)->unk30->unk40, 0x372, 0);
    k = D_801DD2FC;
    (*arg1)->unk30->unk4 =arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk18 = arg0->unk9C * k;
    (*arg1)->unk30->unk1C = arg0->unkA0 * k;
    (*arg1)->unk30->unk20 = arg0->unkA4 * k;
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = (u32)(arg0->unkA8 * 255.0f);
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4F = 0xFF;
    func_800058DC((s32)arg0, (void (*)(void))func_801CB450);
}
