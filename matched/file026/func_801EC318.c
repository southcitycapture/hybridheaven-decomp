#include "context.h"
struct func_801EC668_StructA;
extern struct func_801EC668_StructA func_801DAAF0;
extern void func_80005670(void *a, void *b);
extern void func_801CC530(void);
extern void func_801CFD28(s32 a);
extern void func_801CFD34(s32 arg0);
extern void func_801D03E0(s32 a);
extern void func_801D03EC(s32 a);
extern void func_801D048C(s32 a);
extern void func_801D0A68(s32 a);
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];
extern u8 D_801DAFC4[];

struct func_801EC318_Node {
    u8 pad0[8];
    struct func_801EC318_Node *unk8;
};

extern void func_801D11AC(s32 a);
extern void func_801D11B8(s32 a);
extern u8 D_801DB150[];
extern u8 D_801DB070[];
extern s32 D_801FB4C0;

#define FUNC_801EC318_P (*(struct func_801EC318_Node **)((u8 *)&func_801DAAF0 + 0x24))

s32 func_801EC318(s32 arg0, s32 arg1) {
    func_80005670(FUNC_801EC318_P, D_801DB150);
    func_801D11AC(1);
    func_801D11B8(1);
    func_80005670(FUNC_801EC318_P->unk8, D_801DB070);
    func_801CFD28(1);
    func_801CFD34(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8, func_801DAE70 + 0x48);
    func_801D048C(1);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8->unk8, func_801DAEE8 + 0x1C);
    func_801D0A68(0);
    func_80005670(FUNC_801EC318_P->unk8->unk8->unk8->unk8, D_801DAFC4);
    func_801CC530();
    D_801FB4C0 = 0;
    return 2;
}
