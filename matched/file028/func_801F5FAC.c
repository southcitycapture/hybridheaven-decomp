#include "context.h"

typedef struct func_801F5FAC_StructB {
    u8 pad0[0x22];
    u8 unk22;
} func_801F5FAC_StructB;

typedef struct func_801F5FAC_StructA {
    u8 pad0[0x30];
    func_801E3068_Struct2 *unk30;
} func_801F5FAC_StructA;

#undef OBJ
#define OBJ ((func_801E3068_Struct1 **)D_8038D8D0)

s32 func_801F5FAC(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D9, 4);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 5);
    OBJ[0]->unk30->unk4 = 22.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = -28.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = 22.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = -28.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = -22.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = -28.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = -22.0f;
    OBJ[3]->unk30->unk8 = -23.0f;
    OBJ[3]->unk30->unkC = -28.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk4 = -22.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = -28.0f;
    OBJ[4]->unk30->unk12 = 0x200;
    OBJ[4]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0x66;
    OBJ[4]->unk30->unk49 = 0xE5;
    OBJ[4]->unk30->unk4A = 0xE5;
    OBJ[4]->unk30->unk4B = 0x7F;
    OBJ[5]->unk30->unk4 = 0.0f;
    OBJ[5]->unk30->unk8 = 0.0f;
    OBJ[5]->unk30->unkC = 0.0f;
    OBJ[5]->unk30->unk12 = 0;
    ((func_801F5FAC_StructB *)OBJ[5])->unk22 = 1;
    OBJ[6]->unk30->unk4 = 0.0f;
    OBJ[6]->unk30->unk8 = 0.0f;
    OBJ[6]->unk30->unkC = 0.0f;
    OBJ[6]->unk30->unk12 = 0;
    ((func_801F5FAC_StructB *)OBJ[6])->unk22 = 0;
    return 2;
}
