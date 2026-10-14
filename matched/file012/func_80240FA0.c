#include "context.h"
void func_80240FE4(s32 arg0, s32 arg1);

s32 func_80374994();
extern u8 *D_801BCD08;

void func_80240FA0(s32 arg0, s32 arg1) {
    if (func_80374994() != 0) {
        *(s16 *)(D_801BCD08 + 0x5E) = 0;
        func_800058DC((void *)arg0, &func_80240FE4);
    }
}
