#include "context.h"
extern u8 D_801DB184[];
extern u8 D_801DB244[];
extern void func_80005670(s32, void *);
extern void func_801CC530(void);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
void func_801D03E0();
void func_801D03EC();
void func_801D048C();
void func_801D2094();
void func_801D20A0();
void func_801D2704();
void func_801D2710();
extern u8 func_801DAAF0[];
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];

extern void func_801D0A68();
extern u8 D_801DAFC4[];

s32 func_801E4EA4(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801D2094(1);
    func_801D20A0(1);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8), D_801DB184);
    func_801D2704(1);
    func_801D2710(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB244);
    func_801D048C(0);
    func_801D03E0(1);
    func_801D03EC(1);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801D0A68(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x8), D_801DAFC4);
    func_801CC530();
    return 2;
}
