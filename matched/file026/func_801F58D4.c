#include "context.h"

extern s32 D_8038D8CC;
extern u8 D_8038D88C[];
extern u8 D_8038D8AC[];
extern u8 D_801D9040[];
extern u8 D_801D9080[];
extern u8 D_801D90B8[];

typedef struct func_801F58D4_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801F58D4_Struct3;

typedef struct func_801F58D4_Struct2 {
    u8 pad0[0x30];
    func_801F58D4_Struct3 *unk30;
} func_801F58D4_Struct2;

#define OBJ ((func_801F58D4_Struct2 **)D_8038D8D0)

s32 func_801F58D4(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;

    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80005E44(D_8038D8CC, D_8038D8AC);
    func_80005E44(D_8038D8CC, D_8038D88C);
    func_80005E44(D_8038D8CC, D_8038D88C);
    for (i = 0; i != 12; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x264, 0);
    func_8012C89C(D_8038D8CC, 2, 0x266, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    func_8012C89C(D_8038D8CC, 4, 0x268, 0);
    func_8012C89C(D_8038D8CC, 5, 0x269, 0);
    func_8012C89C(D_8038D8CC, 6, 0x84, 0);
    func_8012C89C(D_8038D8CC, 7, 0x84, 2);
    for (i = 0; i != 12; i++) {
        func_8012C89C(D_8038D8CC, i + 8, 0x265, 0);
    }
    OBJ[0]->unk30->unk4 = 0.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = 0.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = 0.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = 0.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = 5120.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = 0.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = 0.0f;
    OBJ[3]->unk30->unk8 = 0.0f;
    OBJ[3]->unk30->unkC = 0.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0;
    OBJ[3]->unk30->unk49 = 0;
    OBJ[3]->unk30->unk4A = 0;
    OBJ[3]->unk30->unk4B = 0xFF;
    OBJ[4]->unk30->unk4 = 5120.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = 0.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk30 = (s32)D_801D9080 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0;
    OBJ[4]->unk30->unk49 = 0;
    OBJ[4]->unk30->unk4A = 0;
    OBJ[4]->unk30->unk4B = 0xFF;
    OBJ[5]->unk30->unk4 = 5120.0f;
    OBJ[5]->unk30->unk8 = 10.0f;
    OBJ[5]->unk30->unkC = 0.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk30 = (s32)D_801D90B8 | 0x40000000;
    OBJ[5]->unk30->unk24 = 0x100;
    OBJ[5]->unk30->unk48 = 0x42;
    OBJ[5]->unk30->unk49 = 0xDE;
    OBJ[5]->unk30->unk4A = 0xF8;
    OBJ[5]->unk30->unk4B = 0x3C;
    OBJ[6]->unk30->unk4 = 5120.0f;
    OBJ[6]->unk30->unk8 = 10.0f;
    OBJ[6]->unk30->unkC = 0.0f;
    OBJ[6]->unk30->unk12 = 0;
    OBJ[7]->unk30->unk4 = 5120.0f;
    OBJ[7]->unk30->unk8 = 10.0f;
    OBJ[7]->unk30->unkC = 0.0f;
    OBJ[7]->unk30->unk12 = 0;
    for (j = 0; j != 12; j++) {
        OBJ[j + 8]->unk30->unk4 = 5120.0f;
        OBJ[j + 8]->unk30->unk8 = 0.0f;
        OBJ[j + 8]->unk30->unkC = 0.0f;
        OBJ[j + 8]->unk30->unk12 = 0;
    }
    return 2;
}
