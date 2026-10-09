#include "context.h"
extern u8 func_801DAAF0[];

extern void func_80005670(void *arg0, void *arg1);
extern void func_801D048C(s32 arg0);
extern void func_801D03E0(s32 arg0);
extern void func_801D03EC(s32 arg0);
extern void func_801CC530(void);
extern u8 D_801DADE8[];
extern u8 func_801DAC30[];
extern u8 func_801DAEE8[];

s32 func_801E4494(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DADE8);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}
