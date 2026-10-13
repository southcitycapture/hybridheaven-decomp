#include "context.h"

typedef struct func_801E3114_Struct2 {
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
} func_801E3114_Struct2;

typedef struct func_801E3114_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E3114_Struct2 *unk30;
} func_801E3114_Struct1;

extern s32 D_8038D8CC;
extern u8 D_8038D89C[];
extern u8 D_801E8248[];
extern u8 D_801D9040[];
extern u8 D_801DA198[];
extern void **D_8038D8D0;
extern void func_8038D28C(s32 a0);

#define OBJ ((func_801E3114_Struct1 **)D_8038D8D0)

s32 func_801E3114(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 2; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    for (i = 0; i != 5; i++) {
        func_80005E44(D_8038D8CC, D_801E8248);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x267, 0);
    func_8012C89C(D_8038D8CC, 2, 0x263, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    func_8012C89C(D_8038D8CC, 4, 0x444, 1);
    func_8012C89C(D_8038D8CC, 5, 0x444, 2);
    func_8012C89C(D_8038D8CC, 6, 0x444, 0);
    OBJ[0]->unk30->unk4 = -49.0f;
    OBJ[0]->unk30->unk8 = 145.0f;
    OBJ[0]->unk30->unkC = 49.0f;
    OBJ[0]->unk30->unk12 = 0x1000;
    OBJ[0]->unk30->unk18 = 1.0f;
    OBJ[0]->unk30->unk1C = 1.0f;
    OBJ[0]->unk30->unk20 = 1.0f;
    OBJ[0]->unk22 = 0;
    OBJ[1]->unk30->unk4 = -49.0f;
    OBJ[1]->unk30->unk8 = 145.0f;
    OBJ[1]->unk30->unkC = 49.0f;
    OBJ[1]->unk30->unk12 = 0x1000;
    OBJ[1]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ[1]->unk30->unk24 = 0x100;
    OBJ[1]->unk30->unk48 = 0;
    OBJ[1]->unk30->unk49 = 0;
    OBJ[1]->unk30->unk4A = 0;
    OBJ[1]->unk30->unk4B = 0xFF;
    OBJ[1]->unk22 = 0;
    OBJ[2]->unk30->unk4 = -49.0f;
    OBJ[2]->unk30->unk8 = 97.0f;
    OBJ[2]->unk30->unkC = -49.0f;
    OBJ[2]->unk30->unk12 = 0x800;
    OBJ[2]->unk30->unk18 = 1.0f;
    OBJ[2]->unk30->unk1C = 1.0f;
    OBJ[2]->unk30->unk20 = 1.0f;
    OBJ[3]->unk30->unk4 = -49.0f;
    OBJ[3]->unk30->unk8 = 97.0f;
    OBJ[3]->unk30->unkC = -49.0f;
    OBJ[3]->unk30->unk12 = 0x800;
    OBJ[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0;
    OBJ[3]->unk30->unk49 = 0;
    OBJ[3]->unk30->unk4A = 0;
    OBJ[3]->unk30->unk4B = 0xFF;
    OBJ[4]->unk30->unk4 = -5.0f;
    OBJ[4]->unk30->unk8 = 5.0f;
    OBJ[4]->unk30->unkC = -77.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk18 = 1.0f;
    OBJ[4]->unk30->unk1C = 1.0f;
    OBJ[4]->unk30->unk20 = 1.0f;
    OBJ[5]->unk30->unk4 = 20.0f;
    OBJ[5]->unk30->unk8 = 5.0f;
    OBJ[5]->unk30->unkC = -77.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk18 = 1.0f;
    OBJ[5]->unk30->unk1C = 1.0f;
    OBJ[5]->unk30->unk20 = 1.0f;
    OBJ[6]->unk30->unk4 = 0.0f;
    OBJ[6]->unk30->unk8 = 0.0f;
    OBJ[6]->unk30->unkC = 0.0f;
    OBJ[6]->unk30->unk12 = 0;
    OBJ[6]->unk30->unk30 = (s32)D_801DA198 | 0x40000000;
    OBJ[6]->unk30->unk24 = 0x100;
    OBJ[6]->unk30->unk48 = 0;
    OBJ[6]->unk30->unk49 = 0;
    OBJ[6]->unk30->unk4A = 0;
    OBJ[6]->unk30->unk4B = 0xFF;
    func_8038D28C(0x6B7);
    return 2;
}
