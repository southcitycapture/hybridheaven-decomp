#include "context.h"

typedef struct func_80371A40_Sub {
    u8 pad0[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[1];
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad8C[0x10];
    u8 unk9C;
} func_80371A40_Sub;

typedef struct func_80371A40_Struct {
    u8 pad0[0x5C];
    func_80371A40_Sub *unk5C;
} func_80371A40_Struct;

extern void *func_80005670(void *a0, void *a1, void *a2);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387BEC[];

void func_80371A40(func_80371A40_Struct *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *var_a2;
    func_80371A40_Sub *temp_v0;
    func_80371A40_Sub *temp_v0_2;

    if ((s32) arg0 == D_801BBCCC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    temp_v0 = arg0->unk5C;
    if ((temp_v0->unk9C == 1) || (temp_v0->unk9C == 2)) {
        temp_v0->unk9C = 3;
    }
    temp_v0_2 = func_80005670(arg0, D_80387BEC, var_a2);
    if (temp_v0_2 != NULL) {
        temp_v0_2->unk68 = var_a2;
        temp_v0_2->unk6C = *(f32 *) &arg1;
        temp_v0_2->unk70 = *(f32 *) &arg2;
        temp_v0_2->unk74 = *(f32 *) &arg3;
        temp_v0_2->unk79 = 0;
        temp_v0_2->unk7A = 0;
        temp_v0_2->unk7C = 0.0f;
        temp_v0_2->unk80 = 0.0f;
        temp_v0_2->unk84 = 0.0f;
        temp_v0_2->unk88 = 0.0f;
    }
}
