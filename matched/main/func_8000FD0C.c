#include "common.h"
typedef struct func_8000FCD0_Struct {
    s32 x;
    s32 y;
    s32 z;
} func_8000FCD0_Struct;
void func_8000FCD0(u16 *arg0, func_8000FCD0_Struct *arg1, func_8000FCD0_Struct *arg2);

extern void func_800279F0(void *, s32);
extern u16 func_8000FC60(func_8000FCD0_Struct *, u16, void *);

u16 func_8000FD0C(u32 **arg0, u16 arg1, void *arg2, u16 *arg3, u32 arg4) {
    func_8000FCD0_Struct *p;
    u16 sp5A;
    s32 i;
    s32 j;
    u32 m;

    sp5A = 0;
    func_800279F0(arg2, 0x240);
    for (i = 0; i < 0x30; i++) {
        arg3[i] = 0xFFFF;
    }
    j = 1;
    m = arg4;
    if (arg1 >= 2 && m != 0) {
        do {
            if (m & 1) {
                p = (func_8000FCD0_Struct *)(arg0[j][0x2C / 4] + 0x5C);
                arg3[j] = func_8000FC60(p, sp5A, arg2);
                if (sp5A == arg3[j]) {
                    func_8000FCD0(&sp5A, p, arg2);
                }
            }
            j++;
            m >>= 1;
        } while (j < arg1 && m != 0);
    }
    return sp5A;
}
