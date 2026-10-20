#include "context.h"
extern void func_8038D28C(s32 a0);
typedef struct func_801E2644_Struct3 {
    u8 pad0[0x8];
    f32 unk8;
} func_801E2644_Struct3;
typedef struct func_801E2644_Struct2 {
    u8 pad0[0x30];
    func_801E2644_Struct3 *unk30;
} func_801E2644_Struct2;
typedef struct func_801E2644_Struct1 {
    func_801E2644_Struct2 *unk0;
} func_801E2644_Struct1;
extern func_801E2644_Struct1 *D_8038D8D0;

typedef struct func_801E22A4_Struct1 {
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
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801E22A4_Struct1;
typedef struct func_801E22A4_Struct2 {
    u8 pad0[0x30];
    func_801E22A4_Struct1 *unk30;
} func_801E22A4_Struct2;
typedef struct func_801E22A4_Struct3 {
    func_801E22A4_Struct2 *a[4];
} func_801E22A4_Struct3;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
extern u8 D_801D9040[];
extern u8 D_801E4E2C[];

s32 func_801E22A4(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_801E4E2C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x267, 0);
    func_8012C89C(D_8038D8CC, 2, 0x264, 0);
    func_8012C89C(D_8038D8CC, 3, 0x449, 0);
#define S(n) ((func_801E22A4_Struct3 *)D_8038D8D0)->a[n]->unk30
    S(0)->unk4 = 0.0f;
    S(0)->unk8 = -32.0f;
    S(0)->unkC = -200.0f;
    S(0)->unk12 = 0;
    S(0)->unk18 = 1.0f;
    S(0)->unk1C = 1.0f;
    S(0)->unk20 = 1.0f;
    S(1)->unk4 = 0.0f;
    S(1)->unk8 = -32.0f;
    S(1)->unkC = -200.0f;
    S(1)->unk12 = 0;
    S(1)->unk18 = 1.0f;
    S(1)->unk1C = 1.0f;
    S(1)->unk20 = 1.0f;
    S(1)->unk30 = (s32)D_801D9040 | 0x40000000;
    S(1)->unk24 = 0x100;
    S(1)->unk48 = 0;
    S(1)->unk49 = 0;
    S(1)->unk4A = 0;
    S(1)->unk4B = 0xFF;
    S(2)->unk4 = 0.0f;
    S(2)->unk8 = 0.0f;
    S(2)->unkC = -200.0f;
    S(2)->unk12 = 0;
    S(2)->unk18 = 1.0f;
    S(2)->unk1C = 1.0f;
    S(2)->unk20 = 1.0f;
    S(3)->unk4 = 0.0f;
    S(3)->unk8 = 0.0f;
    S(3)->unkC = 0.0f;
    S(3)->unk12 = 0;
    S(3)->unk18 = 1.0f;
    S(3)->unk1C = 1.0f;
    S(3)->unk20 = 1.0f;
    func_8038D28C(0x588);
    return 2;
}
