#include "context.h"

typedef struct func_803709D0_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0x1038 - 0xE0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_803709D0_StructGlobal;

typedef struct func_803709D0_StructObj {
    u8 pad[0x68];
    void *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    f32 unk7C;
    f32 unk80;
    f32 unk84;
    f32 unk88;
} func_803709D0_StructObj;

extern func_803709D0_StructGlobal D_801BBBF0;
extern u8 D_80387BB0[];
extern void *func_80005670(void *a0, void *a1, void *a2);

void func_803709D0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, u8 arg4) {
    u8 *var_v1;
    u8 *var_a2;
    func_803709D0_StructObj *temp_v0;

    if (arg0 == D_801BBBF0.unkDC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    if (arg0 != D_801BBBF0.unkDC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    if (arg4 < 6) {
        temp_v0 = func_80005670((void *)arg0, D_80387BB0, var_a2);
        if (temp_v0 != NULL) {
            temp_v0->unk68 = var_v1;
            temp_v0->unk6C = arg1;
            temp_v0->unk70 = arg2;
            temp_v0->unk74 = arg3;
            temp_v0->unk78 = arg4;
            temp_v0->unk79 = 0;
            temp_v0->unk7A = 0;
            temp_v0->unk7B = 0;
            temp_v0->unk7C = D_801BBBF0.unk1038;
            temp_v0->unk80 = D_801BBBF0.unk103C;
            temp_v0->unk84 = D_801BBBF0.unk1040;
            temp_v0->unk88 = *(f32 *)(var_a2 + 0x2F4);
        }
    }
}
