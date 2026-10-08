#include "context.h"

extern s32 func_801CFD28(s32);
extern s32 func_801CFD34(s32);
extern s32 func_801D11AC(s32);
extern s32 func_801D11B8(s32);
extern s32 func_801CC530(void);
extern s32 func_80005670(void *, void *);
extern u8 func_801DAAF0[];
extern u8 func_801DAAC30[];
extern u8 func_801DAC30[];
extern u8 func_801DAE70[];
extern u8 D_801DB070[];

s32 func_801F4728(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), func_801DAC30 + 0x2C);
    func_801D11AC(0);
    func_801D11B8(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB070);
    func_801CC530();
    return 2;
}
