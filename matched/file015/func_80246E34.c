#include "context.h"

extern void func_80246EB8();

typedef struct func_80246E34_Struct {
    u8 pad0[0x5C];
    s32 f5C;
    u8 pad60[0x30];
    u16 f90;
} func_80246E34_Struct;

void func_80246E34(func_80246E34_Struct *arg0, s32 arg1) {
    s32 a3 = arg0->f5C;

    if (arg0->f90++ >= 5) {
        if (func_80010550(arg1, a3) != 0) {
            func_80133980(0x73);
            func_80011198(arg1, a3);
            func_80020718(0x667);
            func_800058DC(arg0, func_80246EB8);
        }
    }
}
