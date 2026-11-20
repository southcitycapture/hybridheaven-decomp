#include "common.h"
extern u16 D_800CBACA;
extern s8 D_800CBACC;
extern void (*D_80047E0C[])(void);


void func_80022C2C(void)
{
    u16 *slot = &D_800CBACA;

    D_800CBACC = *slot = 0;
}
