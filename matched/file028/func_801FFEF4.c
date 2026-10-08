#include "context.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801D2704(s32 a0);
extern void func_801D2710(s32 a0);
extern void func_801D048C(s32 a0);
extern void func_801D03E0(s32 a0);
extern void func_801D03EC(s32 a0);
extern void func_801CC530(void);
extern u8 D_801DB244[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 func_801DAC30[];
extern u8 func_801DAEE8[];

#define func_801FFEF4_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))

s32 func_801FFEF4(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), D_801DB300);
    func_80005670(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24)), D_801DB320);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24))), func_801DAC30 + 0x2C);
    func_801D2704(0);
    func_801D2710(0);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24)))), D_801DB244);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24))))), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}
