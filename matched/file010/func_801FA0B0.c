#include "context.h"

extern void func_80133980(s32);
extern void func_801339D0(s32);

void func_801FA0B0(u16 arg0, u8 arg1) {
    u8 i;

    arg0++;
    for (i = 0; i < 5; ) {
        if (arg1 & 1) {
            func_80133980(arg0);
        } else {
            func_801339D0(arg0);
        }
        i++;
        arg1 = (s32)arg1 >> 1;
        arg0++;
    }
}
