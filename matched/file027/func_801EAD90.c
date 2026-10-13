#include "context.h"

typedef struct func_801EAD90_Struct3 {
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
} func_801EAD90_Struct3;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_801C2FE0(func_801E390C_Struct2 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, s32);
extern u8 D_8038D88C[];
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
extern u8 D_801D8FA0[];
extern u8 D_801D9110[];
extern f32 D_801F593C;

#define OBJ(i) ((func_801EAD90_Struct3 *)((func_801E390C_Struct2 **)D_8038D8D0)[i]->unk30)

s32 func_801EAD90(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    f32 y;
    f32 s;

    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80005E44(D_8038D8CC, D_8038D89C);
    for (i = 0; i != 12; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D2, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D4, 0);
    func_8012C89C(D_8038D8CC, 2, 0x2D4, 1);
    func_8012C89C(D_8038D8CC, 3, 0x2D4, 5);
    func_8012C89C(D_8038D8CC, 4, 0x2D4, 6);
    func_8012C89C(D_8038D8CC, 5, 0x2D4, 7);
    for (i = 0; i != 12; i++) {
        func_8012C89C(D_8038D8CC, i + 6, 0x2D4, 4);
    }
    s = D_801F593C;
    OBJ(0)->unk4 = 0.0f;
    OBJ(0)->unk8 = 0.0f;
    OBJ(0)->unkC = 0.0f;
    OBJ(0)->unk12 = 0;
    OBJ(1)->unk4 = 0.0f;
    OBJ(1)->unk8 = 0.0f;
    OBJ(1)->unkC = 0.0f;
    OBJ(1)->unk12 = 0;
    OBJ(2)->unk4 = 0.0f;
    OBJ(2)->unk8 = 0.0f;
    OBJ(2)->unkC = 0.0f;
    OBJ(2)->unk12 = 0;
    OBJ(3)->unk4 = 0.0f;
    OBJ(3)->unk8 = -8.0f;
    OBJ(3)->unkC = 0.0f;
    OBJ(3)->unk12 = 0x1000;
    OBJ(4)->unk4 = 0.0f;
    OBJ(4)->unk8 = 11.0f;
    OBJ(4)->unkC = 0.0f;
    OBJ(4)->unk12 = 0x1000;
    OBJ(5)->unk4 = 0.0f;
    OBJ(5)->unk8 = 34.0f;
    OBJ(5)->unkC = 0.0f;
    OBJ(5)->unk18 = s;
    OBJ(5)->unk1C = s;
    OBJ(5)->unk20 = s;
    OBJ(5)->unk12 = 0;
    OBJ(5)->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ(5)->unk24 = 0x100;
    OBJ(5)->unk48 = 0x66;
    OBJ(5)->unk49 = 0xE5;
    OBJ(5)->unk4A = 0xE5;
    OBJ(5)->unk4B = 0x7F;
    y = -420.0f;
    for (j = 0; j < 12; j++) {
        OBJ(j + 6)->unk4 = 0.0f;
        OBJ(j + 6)->unk8 = y;
        y += 70.0f;
        OBJ(j + 6)->unkC = 0.0f;
        OBJ(j + 6)->unk12 = 0;
    }
    func_801C2FE0(D_8038D8D0->unk0, 10, 0x2D, 0, 0xFE, 0xF4, 0xC5, 0xFF, 0xD0, 0x6C, 0, 0xFF, D_801D8FA0, 0x64);
    func_801C2FE0(D_8038D8D0->unk0, 10, 0x12, 0, 0xFE, 0xF4, 0xC5, 0xFF, 0xD0, 0x6C, 0, 0xFF, D_801D8FA0, 0x64);
    func_801C2FE0(D_8038D8D0->unk0, -10, 0x2D, 0, 0xFE, 0xF4, 0xC5, 0xFF, 0xD0, 0x6C, 0, 0xFF, D_801D8FA0, 0x64);
    func_801C2FE0(D_8038D8D0->unk0, -10, 0x12, 0, 0xFE, 0xF4, 0xC5, 0xFF, 0xD0, 0x6C, 0, 0xFF, D_801D8FA0, 0x64);
    return 2;
}
