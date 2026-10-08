#include "context.h"

extern void func_80005670(void *, void *);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
extern void func_801CC530(void);
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];
extern u8 func_801DAAF0[];
extern u8 func_801DAE70[];

s32 func_801F3244(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), D_801DB300);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB320);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB340);
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), func_801DAE70 + 0x48);
    func_801CC530();
    return 2;
}
