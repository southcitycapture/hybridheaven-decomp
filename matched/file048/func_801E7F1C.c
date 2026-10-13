#include "context.h"

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern u8 D_801DB300[];

s32 func_801E7F1C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}
