#include "context.h"

typedef struct func_801E3BAC_Struct2 {
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
} func_801E3BAC_Struct2;

typedef struct func_801E3BAC_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E3BAC_Struct2 *unk30;
} func_801E3BAC_Struct1;

extern s32 D_8038D8CC;
extern u8 D_8038D89C[];
extern u8 D_8038D88C[];
extern u8 D_801EB6D0[];
extern u8 D_801D9110[];
extern void func_8012CF8C(s32, void *, s32, s32);
extern struct func_801E5060_StructC *D_8038D8D0;

#define OBJ3BAC ((func_801E3BAC_Struct1 **)D_8038D8D0)

s32 func_801E3BAC(s32 arg0, s32 arg1) {
    s32 i;

    func_80005E44(D_8038D8CC, D_8038D88C);
    for (i = 0; i != 4; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    func_80005E44(D_8038D8CC, D_8038D88C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x48A, 0);
    func_8012C89C(D_8038D8CC, 1, 0x48A, 1);
    func_8012C89C(D_8038D8CC, 2, 0x48A, 2);
    func_8012CF8C(D_8038D8CC, (u8 *)OBJ3BAC[2]->unk30 + 0x40, 0x48A, 4);
    OBJ3BAC[2]->unk30->unk30 = (s32)D_801EB6D0 | 0x40000000;
    func_8012C89C(D_8038D8CC, 3, 0x48A, 3);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D2, 0);
    OBJ3BAC[0]->unk30->unk4 = 0.0f;
    OBJ3BAC[0]->unk30->unk8 = 0.0f;
    OBJ3BAC[0]->unk30->unkC = -42.0f;
    OBJ3BAC[0]->unk30->unk12 = 0;
    OBJ3BAC[0]->unk30->unk18 = 1.0f;
    OBJ3BAC[0]->unk30->unk1C = 1.0f;
    OBJ3BAC[0]->unk30->unk20 = 1.0f;
    OBJ3BAC[1]->unk30->unk4 = 0.0f;
    OBJ3BAC[1]->unk30->unk8 = 0.0f;
    OBJ3BAC[1]->unk30->unkC = -42.0f;
    OBJ3BAC[1]->unk30->unk12 = 0;
    OBJ3BAC[1]->unk30->unk18 = 1.0f;
    OBJ3BAC[1]->unk30->unk1C = 1.0f;
    OBJ3BAC[1]->unk30->unk20 = 1.0f;
    OBJ3BAC[1]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ3BAC[1]->unk30->unk24 = 0x100;
    OBJ3BAC[1]->unk30->unk48 = 0x66;
    OBJ3BAC[1]->unk30->unk49 = 0xE5;
    OBJ3BAC[1]->unk30->unk4A = 0xE5;
    OBJ3BAC[1]->unk30->unk4B = 0x7F;
    OBJ3BAC[2]->unk30->unk4 = 0.0f;
    OBJ3BAC[2]->unk30->unk8 = 0.0f;
    OBJ3BAC[2]->unk30->unkC = 0.0f;
    OBJ3BAC[2]->unk30->unk12 = 0;
    OBJ3BAC[2]->unk30->unk18 = 1.0f;
    OBJ3BAC[2]->unk30->unk1C = 1.0f;
    OBJ3BAC[2]->unk30->unk20 = 1.0f;
    OBJ3BAC[2]->unk22 = 0;
    OBJ3BAC[3]->unk30->unk4 = 0.0f;
    OBJ3BAC[3]->unk30->unk8 = 0.0f;
    OBJ3BAC[3]->unk30->unkC = 0.0f;
    OBJ3BAC[3]->unk30->unk12 = 0;
    OBJ3BAC[3]->unk30->unk18 = 1.0f;
    OBJ3BAC[3]->unk30->unk1C = 1.0f;
    OBJ3BAC[3]->unk30->unk20 = 1.0f;
    OBJ3BAC[3]->unk22 = 0;
    OBJ3BAC[4]->unk30->unk4 = 0.0f;
    OBJ3BAC[4]->unk30->unk8 = 15.0f;
    OBJ3BAC[4]->unk30->unkC = -41.0f;
    OBJ3BAC[4]->unk30->unk12 = 0;
    OBJ3BAC[4]->unk30->unk18 = 1.0f;
    OBJ3BAC[4]->unk30->unk1C = 1.0f;
    OBJ3BAC[4]->unk30->unk20 = 1.0f;
    OBJ3BAC[4]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ3BAC[4]->unk30->unk24 = 0x100;
    OBJ3BAC[4]->unk30->unk48 = 0x66;
    OBJ3BAC[4]->unk30->unk49 = 0xE5;
    OBJ3BAC[4]->unk30->unk4A = 0xE5;
    OBJ3BAC[4]->unk30->unk4B = 0x7F;
    OBJ3BAC[5]->unk30->unk4 = 0.0f;
    OBJ3BAC[5]->unk30->unk8 = 8.0f;
    OBJ3BAC[5]->unk30->unkC = -42.0f;
    OBJ3BAC[5]->unk30->unk12 = 0;
    OBJ3BAC[5]->unk30->unk18 = 1.0f;
    OBJ3BAC[5]->unk30->unk1C = 1.0f;
    OBJ3BAC[5]->unk30->unk20 = 1.0f;
    func_8038D28C(0x24E);
    return 2;
}
