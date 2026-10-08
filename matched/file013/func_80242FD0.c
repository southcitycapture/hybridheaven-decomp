#include "common.h"

typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;

typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;

typedef struct func_80242FD0_StructA {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
} func_80242FD0_StructA;

extern func_80242FD0_StructC *D_801BBCD0;

s32 func_80242FD0(func_80242FD0_StructA *arg0) {
    func_80242FD0_StructB *temp_v0;
    func_80242FD0_StructB *temp_v1;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 temp_fv0;
    f32 temp_fv1;

    temp_v0 = D_801BBCD0->unk2C;
    temp_v1 = arg0->unk24->unk2C;
    temp_fv0 = temp_v0->unk4;
    temp_fv1 = temp_v1->unk4;
    if (temp_fv0 < temp_fv1) {
        var_fa0 = -(temp_fv0 - temp_fv1);
    } else {
        var_fa0 = temp_fv0 - temp_fv1;
    }
    if (var_fa0 < 50.0f) {
        temp_fv0 = temp_v0->unkC;
        temp_fv1 = temp_v1->unkC;
        if (temp_fv0 < temp_fv1) {
            var_fa0_2 = -(temp_fv0 - temp_fv1);
        } else {
            var_fa0_2 = temp_fv0 - temp_fv1;
        }
        if (var_fa0_2 < 50.0f) {
            return 1;
        }
    }
    return 0;
}
