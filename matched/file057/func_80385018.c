#include "context.h"

extern void func_80385060(void);

void func_80385018(func_803828F0_Obj *arg0, s32 arg1) {
    arg0->unkB0 = arg0->unkB0 + 1;
    if (arg0->unkB0 >= 0x65) {
        arg0->unkB0 = 0;
        func_800058DC(arg0, func_80385060);
    }
}
