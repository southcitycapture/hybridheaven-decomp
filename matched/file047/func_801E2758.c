#include "context.h"

extern s32 D_8038D8CC;
extern u8 *D_8038D8D0;
extern u8 D_8038D89C[];
extern u8 D_801E3CB4[];
extern u8 D_801E3CC4[];
extern u8 D_801D9FE8[];
extern u8 D_801DA088[];
extern u8 D_801D9F00[];

typedef struct func_801E2758_Struct2 {
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
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2758_Struct2;

typedef struct func_801E2758_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_801E2758_Struct2 *unk30;
} func_801E2758_Struct1;

#define OBJ ((func_801E2758_Struct1 **)D_8038D8D0)

s32 func_801E2758(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC < 2) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_801E3CB4);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, D_801E3CC4);
    func_80005E44(D_8038D8CC, D_801E3CC4);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x466, 2);
    func_8012C89C(D_8038D8CC, 1, 0x466, 3);
    func_8012C89C(D_8038D8CC, 2, 0x466, 4);
    func_8012C89C(D_8038D8CC, 3, 0x466, 5);
    func_8012C89C(D_8038D8CC, 4, 0x465, 0);
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = 0.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[0]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    OBJ[0]->unk30->unk24 = 0x100;
    OBJ[0]->unk30->unk48 = 0xFF;
    OBJ[0]->unk30->unk49 = 0xFF;
    OBJ[0]->unk30->unk4A = 0xFF;
    OBJ[0]->unk30->unk4B = 0;
    OBJ[0]->unk22 = 1;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = 0.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[1]->unk30->unk24 = 0x300;
    OBJ[1]->unk30->unk48 = 0;
    OBJ[1]->unk30->unk49 = 0xFF;
    OBJ[1]->unk30->unk4A = 0xFF;
    OBJ[1]->unk30->unk4B = 0x7F;
    OBJ[1]->unk30->unk4C = 0xFF;
    OBJ[1]->unk30->unk4D = 0xFF;
    OBJ[1]->unk30->unk4E = 0xFF;
    OBJ[1]->unk30->unk4F = 0x7F;
    OBJ[1]->unk22 = 1;
    OBJ[2]->unk30->unk4 = 0.0f;
    OBJ[2]->unk30->unk8 = 190.0f;
    OBJ[2]->unk30->unkC = 0.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[2]->unk30->unk24 = 0x300;
    OBJ[2]->unk30->unk48 = 0;
    OBJ[2]->unk30->unk49 = 0xFF;
    OBJ[2]->unk30->unk4A = 0xFF;
    OBJ[2]->unk30->unk4B = 0x7F;
    OBJ[2]->unk30->unk4C = 0xFF;
    OBJ[2]->unk30->unk4D = 0xFF;
    OBJ[2]->unk30->unk4E = 0xFF;
    OBJ[2]->unk30->unk4F = 0x7F;
    OBJ[2]->unk22 = 1;
    OBJ[3]->unk30->unk4 = 0.0f;
    OBJ[3]->unk30->unk8 = 181.0f;
    OBJ[3]->unk30->unkC = 0.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9FE8 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x300;
    OBJ[3]->unk30->unk48 = 0;
    OBJ[3]->unk30->unk49 = 0xFF;
    OBJ[3]->unk30->unk4A = 0xFF;
    OBJ[3]->unk30->unk4B = 0x7F;
    OBJ[3]->unk30->unk4C = 0xFF;
    OBJ[3]->unk30->unk4D = 0xFF;
    OBJ[3]->unk30->unk4E = 0xFF;
    OBJ[3]->unk30->unk4F = 0x7F;
    OBJ[3]->unk22 = 1;
    OBJ[4]->unk30->unk4 = 0.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = 100.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk18 = 1.0f;
    OBJ[4]->unk30->unk1C = 1.0f;
    OBJ[4]->unk30->unk20 = 1.0f;
    OBJ[4]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x300;
    OBJ[4]->unk30->unk48 = 0;
    OBJ[4]->unk30->unk49 = 0xFF;
    OBJ[4]->unk30->unk4A = 0xFF;
    OBJ[4]->unk30->unk4B = 0;
    OBJ[4]->unk30->unk4C = 0xFF;
    OBJ[4]->unk30->unk4D = 0xFF;
    OBJ[4]->unk30->unk4E = 0xFF;
    OBJ[4]->unk30->unk4F = 0xFF;
    OBJ[4]->unk22 = 0;
    return 2;
}
