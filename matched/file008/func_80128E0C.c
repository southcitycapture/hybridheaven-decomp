#include "common.h"

extern void func_80005700(void *);
extern f64 D_8018CD20;
extern f32 D_8018CD28;

typedef struct func_80128E0C_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad1[0x4B - 0x24];
    u8 unk4B;
} func_80128E0C_StructB;

typedef struct func_80128E0C_StructA {
    u8 pad0[0x30];
    func_80128E0C_StructB *unk30;
} func_80128E0C_StructA;

typedef struct func_80128E0C_Arg0 {
    u8 pad0[0x24];
    func_80128E0C_StructA *unk24;
} func_80128E0C_Arg0;

void func_80128E0C(func_80128E0C_Arg0 *arg0, func_80128E0C_StructA **arg1) {
    s32 var_v1;
    f64 temp_f0;
    func_80128E0C_StructB *temp_a2;
    func_80128E0C_StructB *temp_v0;

    temp_f0 = D_8018CD20;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 + temp_f0);
    (*arg1)->unk30->unk1C = D_8018CD28;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk20 = (f32) ((f64) temp_v0->unk20 + temp_f0);
    temp_a2 = arg0->unk24->unk30;
    var_v1 = temp_a2->unk4B;
    if (var_v1 != 0) {
        temp_a2->unk4B = (u8) (var_v1 - 0xF);
        var_v1 = arg0->unk24->unk30->unk4B;
    }
    if (var_v1 < 0xF) {
        func_80005700(arg0);
    }
}
