#include "context.h"
extern u8 func_801DAAF0[];

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801CC530(void);
extern u8 func_801DAC30[];
extern u8 D_801DAD14[];

s32 func_801E460C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 8), D_801DAD14);
    func_801CC530();
    return 2;
}
