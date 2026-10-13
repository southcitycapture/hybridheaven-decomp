#include "context.h"

typedef struct func_801E32D4_Struct1 {
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
} func_801E32D4_Struct1;

typedef struct func_801E32D4_Struct0 {
    u8 pad0[0x30];
    func_801E32D4_Struct1 *unk30;
} func_801E32D4_Struct0;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8038D88C[];
extern u8 D_8038D89C[];
extern s32 D_8038D8CC;
extern u8 D_801D9110[];
extern f32 D_801F5804;
extern struct func_801E390C_Struct1 *D_8038D8D0;

#define O(i) (((func_801E32D4_Struct0 **)D_8038D8D0)[i]->unk30)

s32 func_801E32D4(s32 arg0, s32 arg1) {
    s32 i;
    f32 s;

    for (i = 0; i < 7; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    func_80005E44(D_8038D8CC, D_8038D88C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D2, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D4, 0);
    func_8012C89C(D_8038D8CC, 2, 0x2D4, 1);
    func_8012C89C(D_8038D8CC, 3, 0x2D4, 2);
    func_8012C89C(D_8038D8CC, 4, 0x2D4, 3);
    func_8012C89C(D_8038D8CC, 5, 0x2D4, 5);
    func_8012C89C(D_8038D8CC, 6, 0x2D4, 6);
    func_8012C89C(D_8038D8CC, 7, 0x2D4, 7);
    func_8012C89C(D_8038D8CC, 8, 0x2D4, 8);
    func_8012C89C(D_8038D8CC, 9, 0x2D3, 2);
    s = D_801F5804;
    O(0)->unk4 = 0.0f;
    O(0)->unk8 = 0.0f;
    O(0)->unkC = -42.0f;
    O(0)->unk12 = 0;
    O(1)->unk4 = 2.5f;
    O(1)->unk8 = 0.0f;
    O(1)->unkC = -42.0f;
    O(1)->unk12 = 0;
    O(2)->unk4 = -2.5f;
    O(2)->unk8 = 0.0f;
    O(2)->unkC = -42.0f;
    O(2)->unk12 = 0;
    O(3)->unk4 = 0.0f;
    O(3)->unk8 = 0.0f;
    O(3)->unkC = 0.0f;
    O(3)->unk12 = 0;
    O(4)->unk4 = 0.0f;
    O(4)->unk8 = 0.0f;
    O(4)->unkC = 0.0f;
    O(4)->unk12 = 0;
    O(5)->unk4 = 0.0f;
    O(5)->unk8 = -8.0f;
    O(5)->unkC = -42.0f;
    O(5)->unk12 = 0;
    O(6)->unk4 = 0.0f;
    O(6)->unk8 = 11.0f;
    O(6)->unkC = -42.0f;
    O(6)->unk12 = 0;
    O(7)->unk4 = 500.0f;
    O(7)->unk8 = 0.0f;
    O(7)->unkC = -42.0f;
    O(7)->unk18 = s;
    O(7)->unk1C = s;
    O(7)->unk20 = s;
    O(7)->unk12 = 0;
    O(7)->unk30 = (s32)D_801D9110 | 0x40000000;
    O(7)->unk24 = 0x100;
    O(7)->unk48 = 0x66;
    O(7)->unk49 = 0xE5;
    O(7)->unk4A = 0xE5;
    O(7)->unk4B = 0x7F;
    O(8)->unk4 = 5120.0f;
    O(8)->unk8 = 0.0f;
    O(8)->unkC = -42.0f;
    O(8)->unk12 = 0;
    O(8)->unk30 = (s32)D_801D9110 | 0x40000000;
    O(8)->unk24 = 0x100;
    O(8)->unk48 = 0x66;
    O(8)->unk49 = 0xE5;
    O(8)->unk4A = 0xE5;
    O(8)->unk4B = 0x7F;
    O(9)->unk4 = 0.0f;
    O(9)->unk8 = 0.0f;
    O(9)->unkC = 43.0f;
    O(9)->unk12 = 0;
    return 2;
}
