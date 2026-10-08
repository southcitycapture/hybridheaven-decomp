#include "context.h"

extern u32 D_801BBFAC[];
extern void func_80126EAC(void);

void func_8014D204(void *arg0, s32 arg1) {
    *((u32 *) ((u8 *) arg0 + 0x2C)) &= 0xFFFF7FFF;
    D_801BBFAC[*((u8 *) arg0 + 0x9C)] = 0;
    func_800058DC((s32) arg0, func_80126EAC);
}
