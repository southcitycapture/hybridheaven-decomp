#include "context.h"

typedef struct func_803794DC_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    u8 padC[0xC];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_803794DC_StructB;
typedef struct func_803794DC_StructA {
    u8 pad0[0x30];
    func_803794DC_StructB *unk30;
} func_803794DC_StructA;
typedef struct func_803794DC_StructG {
    u8 pad0[0x2C];
    s32 unk2C;
} func_803794DC_StructG;

extern s32 func_80126A0C(s32, s32, s32);
extern void func_80116E80(s32);
extern func_803794DC_StructA *func_801494A4(s32, u8, s32, s32, f32, s32);
extern void func_80149580(s32, void *, u8);
extern s32 func_80005670(s32, void *);
extern s32 func_8013D5F4(u8);
extern void func_80130E34(s32, s32, s32, s32, f32 *, f32 *);
extern func_803794DC_StructG *D_801BBCD8;
extern u8 D_80388968[];
extern s16 D_803889B4;
extern u8 D_803894F0[];
extern f32 D_80389510;
extern func_803794DC_StructA *D_8038A910;
extern u8 func_80379690[];

void func_803794DC(s32 arg0, s32 arg1) {
    f32 sp44;
    f32 sp40;
    u8 sp3F;

    if (func_80126A0C(arg0, 0xC1, 0) != 0) {
        func_80116E80(0x10);
        D_803889B4 = 0;
        sp3F = *(u16 *)&D_8038A918 & 0xFF;
        D_8038A910 = func_801494A4(arg0, sp3F, 0x43610000, 0x42A00000, 0.0f, 1);
        func_80130E34(D_801BBCD8->unk2C, *(s32 *)&D_8038A918.unk4, *(s32 *)&D_8038A918.unk8, *(s32 *)&D_8038A918.unkC, &sp44, &sp40);
        if (sp44 < 0.0f) {
            sp44 = 0.0f;
        }
        if (sp40 < 0.0f) {
            sp40 = 0.0f;
        }
        D_8038A910->unk30->unk4 = sp44;
        D_8038A910->unk30->unk8 = sp40;
        D_8038A910->unk30->unk20 = D_80389510;
        D_8038A910->unk30->unk18 = D_8038A910->unk30->unk1C = D_8038A910->unk30->unk20;
        func_80149580(arg0, D_8038A910, sp3F);
        D_8038A90C = func_80005670(arg0, D_80388968);
        {
            extern void func_8001B204();
            func_8001B204(0xF, 0x7D0, 0xB0, D_803894F0, 4, 0, func_8013D5F4(sp3F));
        }
        func_800058DC(arg0, func_80379690);
    }
}
