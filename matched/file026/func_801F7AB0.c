#include "context.h"

extern void func_80005670(void *a, void *b);
extern void func_801CC530(void);
extern void func_801CFD28(s32 a);
extern void func_801CFD34(s32 a);
extern void func_801D03E0(s32 a);
extern void func_801D03EC(s32 a);
extern void func_801D048C(s32 a);
extern void func_801D0A68(s32 a);
extern u8 D_801DAFC4[];

s32 func_801F7AB0(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(func_801DAAF0.unk24, func_801DAE70 + 0x48);
    func_801D048C(1);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(func_801DAAF0.unk24->unk8, func_801DAEE8 + 0x1C);
    func_801D0A68(1);
    func_80005670(*(void **)((u8 *)func_801DAAF0.unk24->unk8 + 0x8), D_801DAFC4);
    func_801CC530();
    return 2;
}
