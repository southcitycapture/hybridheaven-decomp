#include "common.h"

void func_801CFD28();
void func_801CFD34();
void func_80005670();
void func_801D2094();
void func_801D20A0();
void func_801D2704();
void func_801D2710();
void func_801D048C();
void func_801D03E0();
void func_801D03EC();
void func_801CC530();

extern u8 func_801DAAF0[];
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];
extern u8 D_801DB184[];
extern u8 D_801DB244[];

s32 func_801ECAE8(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801D2094(0);
    func_801D20A0(0);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8), D_801DB184);
    func_801D2704(0);
    func_801D2710(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8) + 8), D_801DB244);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8) + 8) + 8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}
