#include "context.h"

typedef struct func_801E30F0_Struct2 {
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
} func_801E30F0_Struct2;

typedef struct func_801E30F0_Struct1 {
    u8 pad0[0x30];
    func_801E30F0_Struct2 *unk30;
} func_801E30F0_Struct1;

extern s32 D_8038D8CC;
extern u8 D_801E6978[];
extern u8 D_801D9040[];
extern u8 D_801DA198[];
extern void *D_8038D8D0;

#define OBJ801E30F0 ((func_801E30F0_Struct1 **)D_8038D8D0)

s32 func_801E30F0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 7; i++) {
        func_80005E44(D_8038D8CC, D_801E6978);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x444, 1);
    func_8012C89C(D_8038D8CC, 1, 0x444, 2);
    func_8012C89C(D_8038D8CC, 2, 0x263, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    func_8012C89C(D_8038D8CC, 4, 0x263, 0);
    func_8012C89C(D_8038D8CC, 5, 0x267, 0);
    func_8012C89C(D_8038D8CC, 6, 0x444, 0);
    OBJ801E30F0[0]->unk30->unk4 = -25.0f;
    OBJ801E30F0[0]->unk30->unk8 = 5.0f;
    OBJ801E30F0[0]->unk30->unkC = -77.0f;
    OBJ801E30F0[0]->unk30->unk12 = 0;
    OBJ801E30F0[0]->unk30->unk18 = 1.0f;
    OBJ801E30F0[0]->unk30->unk1C = 1.0f;
    OBJ801E30F0[0]->unk30->unk20 = 1.0f;
    OBJ801E30F0[1]->unk30->unk4 = 40.0f;
    OBJ801E30F0[1]->unk30->unk8 = 5.0f;
    OBJ801E30F0[1]->unk30->unkC = -77.0f;
    OBJ801E30F0[1]->unk30->unk12 = 0;
    OBJ801E30F0[1]->unk30->unk18 = 1.0f;
    OBJ801E30F0[1]->unk30->unk1C = 1.0f;
    OBJ801E30F0[1]->unk30->unk20 = 1.0f;
    OBJ801E30F0[2]->unk30->unk4 = -49.0f;
    OBJ801E30F0[2]->unk30->unk8 = 9.0f;
    OBJ801E30F0[2]->unk30->unkC = 49.0f;
    OBJ801E30F0[2]->unk30->unk12 = 0x1000;
    OBJ801E30F0[2]->unk30->unk18 = 1.0f;
    OBJ801E30F0[2]->unk30->unk1C = 1.0f;
    OBJ801E30F0[2]->unk30->unk20 = 1.0f;
    OBJ801E30F0[3]->unk30->unk4 = -49.0f;
    OBJ801E30F0[3]->unk30->unk8 = 9.0f;
    OBJ801E30F0[3]->unk30->unkC = 49.0f;
    OBJ801E30F0[3]->unk30->unk12 = 0x1000;
    OBJ801E30F0[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ801E30F0[3]->unk30->unk24 = 0x100;
    OBJ801E30F0[3]->unk30->unk48 = 0;
    OBJ801E30F0[3]->unk30->unk49 = 0;
    OBJ801E30F0[3]->unk30->unk4A = 0;
    OBJ801E30F0[3]->unk30->unk4B = 0xFF;
    OBJ801E30F0[4]->unk30->unk4 = -49.0f;
    OBJ801E30F0[4]->unk30->unk8 = 97.0f;
    OBJ801E30F0[4]->unk30->unkC = -49.0f;
    OBJ801E30F0[4]->unk30->unk12 = 0x800;
    OBJ801E30F0[4]->unk30->unk18 = 1.0f;
    OBJ801E30F0[4]->unk30->unk1C = 1.0f;
    OBJ801E30F0[4]->unk30->unk20 = 1.0f;
    OBJ801E30F0[5]->unk30->unk4 = -49.0f;
    OBJ801E30F0[5]->unk30->unk8 = 97.0f;
    OBJ801E30F0[5]->unk30->unkC = -49.0f;
    OBJ801E30F0[5]->unk30->unk12 = 0x800;
    OBJ801E30F0[5]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ801E30F0[5]->unk30->unk24 = 0x100;
    OBJ801E30F0[5]->unk30->unk48 = 0;
    OBJ801E30F0[5]->unk30->unk49 = 0;
    OBJ801E30F0[5]->unk30->unk4A = 0;
    OBJ801E30F0[5]->unk30->unk4B = 0xFF;
    OBJ801E30F0[6]->unk30->unk4 = 0.0f;
    OBJ801E30F0[6]->unk30->unk8 = 0.0f;
    OBJ801E30F0[6]->unk30->unkC = 0.0f;
    OBJ801E30F0[6]->unk30->unk12 = 0;
    OBJ801E30F0[6]->unk30->unk30 = (s32)D_801DA198 | 0x40000000;
    OBJ801E30F0[6]->unk30->unk24 = 0x100;
    OBJ801E30F0[6]->unk30->unk48 = 0;
    OBJ801E30F0[6]->unk30->unk49 = 0;
    OBJ801E30F0[6]->unk30->unk4A = 0;
    OBJ801E30F0[6]->unk30->unk4B = 0xFF;
    func_8038D28C(0x6B6);
    return 2;
}
