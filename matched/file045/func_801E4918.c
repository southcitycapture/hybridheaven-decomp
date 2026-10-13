#include "context.h"

extern u8 D_801E83A0[];
extern u8 D_801E83B0[];
extern u8 D_801E83C0[];
extern u8 D_801D9F00[];

typedef struct func_801E4918_Struct2 {
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
} func_801E4918_Struct2;

typedef struct func_801E4918_Struct1 {
    u8 pad0[0x30];
    func_801E4918_Struct2 *unk30;
} func_801E4918_Struct1;

#define OBJ4918 ((func_801E4918_Struct1 **)D_8038D8D0)

s32 func_801E4918(s32 arg0, s32 arg1) {
    s32 i;

    if (*(s32 *)((u8 *)func_801BF6B0(2) + 0xC) < 2) {
        return 1;
    }
    func_80005E44(D_8038D8CC, D_801E83A0);
    func_80005E44(D_8038D8CC, D_801E83A0);
    func_80005E44(D_8038D8CC, D_801E83B0);
    func_80005E44(D_8038D8CC, D_801E83C0);
    for (i = 0; i != 2; i++) {
        func_80005E44(D_8038D8CC, D_801E83A0);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x463, 2);
    func_8012C89C(D_8038D8CC, 1, 0x463, 3);
    func_8012C89C(D_8038D8CC, 2, 0x463, 4);
    func_8012C89C(D_8038D8CC, 3, 0x463, 5);
    func_8012C89C(D_8038D8CC, 4, 0x464, 0);
    func_8012C89C(D_8038D8CC, 5, 0x464, 2);
    OBJ4918[0]->unk30->unk4 = 0.0f;
    OBJ4918[0]->unk30->unk8 = 0.0f;
    OBJ4918[0]->unk30->unkC = 0.0f;
    OBJ4918[0]->unk30->unk12 = 0;
    OBJ4918[0]->unk30->unk18 = 1.0f;
    OBJ4918[0]->unk30->unk1C = 1.0f;
    OBJ4918[0]->unk30->unk20 = 1.0f;
    OBJ4918[1]->unk30->unk4 = 0.0f;
    OBJ4918[1]->unk30->unk8 = 0.0f;
    OBJ4918[1]->unk30->unkC = 0.0f;
    OBJ4918[1]->unk30->unk12 = 0;
    OBJ4918[1]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ4918[1]->unk30->unk24 = 0x300;
    OBJ4918[1]->unk30->unk48 = 0;
    OBJ4918[1]->unk30->unk49 = 0xFF;
    OBJ4918[1]->unk30->unk4A = 0xFF;
    OBJ4918[1]->unk30->unk4B = 0xFF;
    OBJ4918[1]->unk30->unk4C = 0xFF;
    OBJ4918[1]->unk30->unk4D = 0xFF;
    OBJ4918[1]->unk30->unk4E = 0xFF;
    OBJ4918[1]->unk30->unk4F = 0xFF;
    OBJ4918[2]->unk30->unk4 = 0.0f;
    OBJ4918[2]->unk30->unk8 = 0.0f;
    OBJ4918[2]->unk30->unkC = 0.0f;
    OBJ4918[2]->unk30->unk12 = 0;
    OBJ4918[2]->unk30->unk30 = (s32)D_801D9F00 | 0x40000000;
    OBJ4918[2]->unk30->unk24 = 0x300;
    OBJ4918[2]->unk30->unk48 = 0;
    OBJ4918[2]->unk30->unk49 = 0xFF;
    OBJ4918[2]->unk30->unk4A = 0xFF;
    OBJ4918[2]->unk30->unk4B = 0;
    OBJ4918[2]->unk30->unk4C = 0xFF;
    OBJ4918[2]->unk30->unk4D = 0xFF;
    OBJ4918[2]->unk30->unk4E = 0xFF;
    OBJ4918[2]->unk30->unk4F = 0xFF;
    OBJ4918[3]->unk30->unk4 = 0.0f;
    OBJ4918[3]->unk30->unk8 = 0.0f;
    OBJ4918[3]->unk30->unkC = 0.0f;
    OBJ4918[3]->unk30->unk12 = 0;
    OBJ4918[3]->unk30->unk30 = (s32)D_801DA088 | 0x40000000;
    OBJ4918[3]->unk30->unk24 = 0x100;
    OBJ4918[3]->unk30->unk48 = 0xFF;
    OBJ4918[3]->unk30->unk49 = 0xFF;
    OBJ4918[3]->unk30->unk4A = 0xFF;
    OBJ4918[3]->unk30->unk4B = 0x7F;
    OBJ4918[4]->unk30->unk4 = -145.0f;
    OBJ4918[4]->unk30->unk8 = 0.0f;
    OBJ4918[4]->unk30->unkC = 0.0f;
    OBJ4918[4]->unk30->unk12 = 0;
    OBJ4918[4]->unk30->unk18 = 1.0f;
    OBJ4918[4]->unk30->unk1C = 1.0f;
    OBJ4918[4]->unk30->unk20 = 1.0f;
    OBJ4918[5]->unk30->unk4 = 0.0f;
    OBJ4918[5]->unk30->unk8 = 0.0f;
    OBJ4918[5]->unk30->unkC = 0.0f;
    OBJ4918[5]->unk30->unk12 = 0;
    OBJ4918[5]->unk30->unk18 = 1.0f;
    OBJ4918[5]->unk30->unk1C = 1.0f;
    OBJ4918[5]->unk30->unk20 = 1.0f;
    return 2;
}
