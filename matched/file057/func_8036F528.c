#include "common.h"

typedef struct func_8036F528_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x33 - 0x14];
    u8 unk33;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8036F528_Struct;

typedef struct func_8036F528_Vec {
    s32 x;
    s32 y;
    f32 z;
} func_8036F528_Vec;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern func_8036F528_Vec D_80387B7C;
void func_8013A2E0(s32, func_8036F528_Vec);
void func_800058DC(s32, void *);
void func_8036F5E8(void);

void func_8036F528(s32 arg0, s32 arg1) {
    func_8036F528_Struct *var_v0;
    s32 sp28;
    func_8036F528_Vec sp1C;
    s32 sp18;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_8036F528_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F528_Struct *) D_801BC3D8;
    }
    sp1C = D_80387B7C;
    sp1C.z = var_v0->unk10;
    func_8013A2E0(arg1, sp1C);
    var_v0->unk390 = 2;
    var_v0->unk33 = (u8) ((var_v0->unk33 & 0xFFE7) | 0x10);
    func_800058DC(arg0, &func_8036F5E8);
}
