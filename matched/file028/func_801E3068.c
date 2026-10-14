#include "context.h"

typedef struct func_801E3068_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
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
} func_801E3068_Struct2;

typedef struct func_801E3068_Struct1 {
    u8 pad0[0x30];
    func_801E3068_Struct2 *unk30;
} func_801E3068_Struct1;

extern s32 D_8038D8CC;
extern u8 D_8038D89C[];
extern u8 D_801D9110[];
extern struct func_801FCB44_Struct *D_8038D8D0;

#define OBJ ((func_801E3068_Struct1 **)D_8038D8D0)

s32 func_801E3068(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 3; i++) {
        func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    }
    for (i = 0; i != 3; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 2, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 3, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D7, 0);
    OBJ[0]->unk30->unk4 = -100.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = -28.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = -79.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = -28.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = -58.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = -28.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = -100.0f;
    OBJ[3]->unk30->unk8 = -2.0f;
    OBJ[3]->unk30->unkC = -29.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0x66;
    OBJ[3]->unk30->unk49 = 0xE5;
    OBJ[3]->unk30->unk4A = 0xE5;
    OBJ[3]->unk30->unk4B = 0x7F;
    OBJ[4]->unk30->unk4 = -79.0f;
    OBJ[4]->unk30->unk8 = -2.0f;
    OBJ[4]->unk30->unkC = -29.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0x66;
    OBJ[4]->unk30->unk49 = 0xE5;
    OBJ[4]->unk30->unk4A = 0xE5;
    OBJ[4]->unk30->unk4B = 0x7F;
    OBJ[5]->unk30->unk4 = -58.0f;
    OBJ[5]->unk30->unk8 = -2.0f;
    OBJ[5]->unk30->unkC = -29.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[5]->unk30->unk24 = 0x100;
    OBJ[5]->unk30->unk48 = 0x66;
    OBJ[5]->unk30->unk49 = 0xE5;
    OBJ[5]->unk30->unk4A = 0xE5;
    OBJ[5]->unk30->unk4B = 0x7F;
    return 2;
}
