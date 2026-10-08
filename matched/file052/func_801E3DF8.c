#include "common.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern u8 D_801DBAC0[];
extern u8 D_801DBB60[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];

s32 func_801E3DF8(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(((void **)*(void **)(func_801DAAF0 + 0x24))[2], D_801DBAC0);
    func_80005670(((void **)((void **)*(void **)(func_801DAAF0 + 0x24))[2])[2], D_801DBB60);
    func_801CC530();
    return 2;
}
