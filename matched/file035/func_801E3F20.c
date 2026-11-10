#include "common.h"
extern s32 D_8038D8CC;
struct func_801E48F0_Struct2 {
    u8 pad[0x22];
    u8 unk22;
};
struct func_801E48F0_Struct1 {
    u8 pad[0xC];
    struct func_801E48F0_Struct2 *unkC;
};
extern struct func_801E48F0_Struct1 *D_8038D8D0;
typedef struct { s32 words[4]; } func_801E3CA4_Config;
extern void func_80005E44(s32, func_801E3CA4_Config *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 func_8012CF8C(s32, void *, s32, s32);


typedef struct func_801E3F20_StructT {
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
} func_801E3F20_StructT;

typedef struct func_801E3F20_StructM {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E3F20_StructT *unk30;
} func_801E3F20_StructM;

typedef struct func_801E3F20_StructG {
    func_801E3F20_StructM *unk0;
    func_801E3F20_StructM *unk4;
    func_801E3F20_StructM *unk8;
    func_801E3F20_StructM *unkC;
    func_801E3F20_StructM *unk10;
    func_801E3F20_StructM *unk14;
    func_801E3F20_StructM *unk18;
} func_801E3F20_StructG;

extern u8 D_8038D88C[];
extern u8 D_8038D89C[];
extern u8 D_801E8490[];
extern u8 D_801D9408[];
extern func_801E3CA4_Config D_801E84E8;
extern func_801E3CA4_Config D_801E84F8;

#define GG (*(func_801E3F20_StructG **)&D_8038D8D0)

s32 func_801E3F20(s32 arg0, s32 arg1) {
    s32 i;
    s32 padA[1];
    func_801E3CA4_Config c1;
    s32 padB[2];
    func_801E3CA4_Config c2;

    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, (func_801E3CA4_Config *)D_8038D88C);
    }
    for (i = 0; i <= 0; i++) {
        c1 = D_801E84E8;
        func_80005E44(D_8038D8CC, &c1);
    }
    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, (func_801E3CA4_Config *)D_8038D89C);
    }
    for (i = 0; i != 2; i++) {
        c2 = D_801E84F8;
        func_80005E44(D_8038D8CC, &c2);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x259, 0);
    func_8012C89C(D_8038D8CC, 1, 0x25D, 0);
    func_8012C89C(D_8038D8CC, 2, 0x43F, 0);
    func_8012C89C(D_8038D8CC, 3, 0xA4, 0);
    func_8012C89C(D_8038D8CC, 4, 0xA7, 0);
    func_8012C89C(D_8038D8CC, 5, 0xA7, 0);
    func_8012C89C(D_8038D8CC, 6, 0xA7, 0);
    GG->unk0->unk30->unk4 = 0.0f;
    GG->unk0->unk30->unk8 = 0.0f;
    GG->unk0->unk30->unkC = 900.0f;
    GG->unk0->unk30->unk12 = 0;
    GG->unk0->unk30->unk18 = 1.0f;
    GG->unk0->unk30->unk1C = 1.0f;
    GG->unk0->unk30->unk20 = 1.0f;
    GG->unk4->unk30->unk4 = 0.0f;
    GG->unk4->unk30->unk8 = 11.85f;
    GG->unk4->unk30->unkC = 983.67f;
    GG->unk4->unk30->unk12 = 0;
    GG->unk4->unk30->unk18 = 0.2f;
    GG->unk4->unk30->unk1C = 0.2f;
    GG->unk4->unk30->unk20 = 0.2f;
    GG->unk8->unk30->unk4 = 0.0f;
    GG->unk8->unk30->unk8 = 0.0f;
    GG->unk8->unk30->unkC = 0.0f;
    GG->unk8->unk30->unk12 = 0;
    GG->unk8->unk30->unk18 = 1.0f;
    GG->unk8->unk30->unk1C = 1.0f;
    GG->unk8->unk30->unk20 = 1.0f;
    GG->unkC->unk30->unk4 = 0.0f;
    GG->unkC->unk30->unk8 = 0.0f;
    GG->unkC->unk30->unkC = 0.0f;
    GG->unkC->unk30->unk12 = 0;
    GG->unkC->unk30->unk18 = 1.0f;
    GG->unkC->unk30->unk1C = 1.0f;
    GG->unkC->unk30->unk20 = 1.0f;
    GG->unkC->unk30->unk30 = (u32)D_801E8490 | 0x40000000;
    GG->unkC->unk22 = 0;
    GG->unk10->unk30->unk4 = -3.5f;
    GG->unk10->unk30->unk8 = 10.1f;
    GG->unk10->unk30->unkC = 6.0f;
    GG->unk10->unk30->unk10 = 0xE3;
    GG->unk10->unk30->unk12 = 0xF05;
    GG->unk10->unk30->unk14 = 0;
    GG->unk10->unk30->unk18 = 0.3f;
    GG->unk10->unk30->unk1C = 0.25f;
    GG->unk10->unk30->unk20 = 0.2f;
    GG->unk10->unk30->unk30 = (u32)D_801D9408 | 0x40000000;
    func_8012CF8C(D_8038D8CC, (u8 *)GG->unk10->unk30 + 0x40, 0x441, 0);
    GG->unk10->unk30->unk24 |= 0x100;
    GG->unk10->unk30->unk48 = 0x75;
    GG->unk10->unk30->unk49 = 0xC7;
    GG->unk10->unk30->unk4A = 0xE7;
    GG->unk10->unk30->unk4B = 0xFF;
    GG->unk10->unk22 = 0;
    GG->unk14->unk30->unk4 = 373.0f;
    GG->unk14->unk30->unk8 = 81.4f;
    GG->unk14->unk30->unkC = 495.3f;
    GG->unk14->unk30->unk12 = 0x800;
    GG->unk14->unk30->unk18 = 50.0f;
    GG->unk14->unk30->unk1C = 11.0f;
    GG->unk14->unk30->unk20 = 1.0f;
    GG->unk14->unk30->unk30 = (u32)D_801D9408 | 0x40000000;
    func_8012CF8C(D_8038D8CC, (u8 *)GG->unk14->unk30 + 0x40, 0x440, 0);
    GG->unk14->unk30->unk24 |= 0x100;
    GG->unk14->unk30->unk48 = 0xFF;
    GG->unk14->unk30->unk49 = 0xFF;
    GG->unk14->unk30->unk4A = 0xFF;
    GG->unk14->unk30->unk4B = 0xFF;
    GG->unk18->unk30->unk4 = 373.0f;
    GG->unk18->unk30->unk8 = 81.2f;
    GG->unk18->unk30->unkC = 413.1f;
    GG->unk18->unk30->unk12 = 0x800;
    GG->unk18->unk30->unk18 = 60.0f;
    GG->unk18->unk30->unk1C = 8.0f;
    GG->unk18->unk30->unk20 = 1.0f;
    GG->unk18->unk30->unk30 = (u32)D_801D9408 | 0x40000000;
    func_8012CF8C(D_8038D8CC, (u8 *)GG->unk18->unk30 + 0x40, 0x440, 0);
    GG->unk18->unk30->unk24 |= 0x100;
    GG->unk18->unk30->unk48 = 0xFF;
    GG->unk18->unk30->unk49 = 0xFF;
    GG->unk18->unk30->unk4A = 0xFF;
    GG->unk18->unk30->unk4B = 0xFF;
    return 2;
}
