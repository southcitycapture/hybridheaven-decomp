#include "context.h"

extern void func_80005670(void *, void *);
extern void func_801CC530(void);
extern void func_801CEDBC(s32);
extern void func_801CEDC8(s32);
extern void func_801D03E0(s32);
extern void func_801D03EC(s32);
extern void func_801D048C(s32);
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];
extern u8 func_801DB868[];
extern u8 D_801DAD14[];
extern u8 func_801DB788[];
extern u8 func_801DAEE8[];

s32 func_801E5818(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), func_801DB868 + 0x20);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DAD14);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), func_801DB788 + 0x5C);
    func_801D048C(1);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}
