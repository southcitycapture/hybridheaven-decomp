#include "context.h"

typedef struct func_80244240_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
} func_80244240_Struct;

extern void func_802442A0(void);

void func_80244240(func_80244240_Struct *arg0, s32 arg1) {
    s32 tmp;

    tmp = arg0->unk5C;
    if ((func_80010550(arg1, tmp, arg1) != 0) && (func_800178E8() != 0)) {
        func_80133980(0x77);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802442A0);
    }
}
