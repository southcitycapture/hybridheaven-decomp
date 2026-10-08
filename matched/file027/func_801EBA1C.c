#include "common.h"

extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
extern void func_80005670(s32, void *);
extern void func_801CC530(void);
extern u8 func_801DAAF0[];
extern u8 func_801DAE70[];

s32 func_801EBA1C(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801CC530();
    return 2;
}
