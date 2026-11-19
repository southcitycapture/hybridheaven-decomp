#include "common.h"
#ifndef func_8036EA3C
extern void func_80011258__f528();
#endif
void func_8036EA3C(void *arg0, void *arg1);
typedef struct func_8036F528_Vec {
    s32 x;
    s32 y;
    f32 z;
} func_8036F528_Vec;


typedef struct func_8036F528_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad1[0x33 - 0x14];
    u8 unk33;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8036F528_Struct;


typedef struct func_8036F528_Frame {
    s32 head;
    func_8036F528_Vec v;
    s32 tail;
} func_8036F528_Frame;
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern func_8036F528_Vec D_80387B7C;
extern void func_8013A2E0();
void func_800058DC(s32, void *);
extern void func_8036F5E8();

void func_8036F528(s32 arg0, s32 arg1) {
    func_8036F528_Struct *var_v0;
    func_8036F528_Frame fr;

    if (arg0 == D_801BBCCC) {
        var_v0 = (func_8036F528_Struct *) D_801BC03C;
    } else {
        var_v0 = (func_8036F528_Struct *) D_801BC3D8;
    }
    fr.v = D_80387B7C;
    fr.v.z = var_v0->unk10;
    func_8013A2E0(arg1, fr.v);
    var_v0->unk390 = 2;
    var_v0->unk33 = (u8) ((var_v0->unk33 & 0xFFE7) | 0x10);
    func_800058DC(arg0, &func_8036F5E8);
}
