#include "context.h"

extern void func_80136000(void);

void func_801364B4(s32 arg0, s32 arg1) {
    *(u16 *)((u8 *)&D_801BBBF0 + 0x194) = 2;
    if (*(u16 *)((u8 *)&D_801BBBF0 + 0x18E) == 0) {
        func_800058DC((void *)arg0, (void *)func_80136000);
    }
}
