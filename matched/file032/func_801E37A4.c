#include "context.h"

struct func_801E37A4_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[4];
    s32 unk2C;
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801E37A4_StructB {
    u8 pad0[0x30];
    struct func_801E37A4_StructC *unk30;
};
struct func_801E37A4_StructA {
    struct func_801E37A4_StructB *unk0;
    struct func_801E37A4_StructB *unk4;
};
extern s32 D_8038D8CC;
extern struct func_801E3AC8_StructA *D_8038D8D0;
extern u8 D_801BBBF0[];
extern u8 D_801DA0E8[];

#define P ((struct func_801E37A4_StructA **)&D_8038D8D0)

s32 func_801E37A4(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x43A, 2);
    func_8012C89C(D_8038D8CC, 1, 0x43A, 1);
    P[0]->unk0->unk30->unk4 = 0.0f;
    P[0]->unk0->unk30->unk8 = 0.0f;
    P[0]->unk0->unk30->unkC = 65.0f;
    P[0]->unk0->unk30->unk12 = 0;
    P[0]->unk0->unk30->unk18 = 1.0f;
    P[0]->unk0->unk30->unk1C = 1.0f;
    P[0]->unk0->unk30->unk20 = 1.0f;
    P[0]->unk0->unk30->unk24 = 0x400;
    P[0]->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    P[0]->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    P[0]->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    P[0]->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    P[0]->unk0->unk30->unk30 = (s32)D_801DA0E8 | 0x40000000;
    P[0]->unk4->unk30->unk4 = 5120.0f;
    P[0]->unk4->unk30->unk8 = 0.0f;
    P[0]->unk4->unk30->unkC = 0.0f;
    P[0]->unk4->unk30->unk12 = 0;
    P[0]->unk4->unk30->unk18 = 1.0f;
    P[0]->unk4->unk30->unk1C = 1.0f;
    P[0]->unk4->unk30->unk20 = 1.0f;
    return 2;
}
