#include "common.h"

extern void func_80229404(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

void func_8038D670(u8 *arg0, u8 *arg1, u8 *arg2) {
    if (((*(u32 *) (arg2 + 0x30)) << 11) >> 30 != 0) {
        func_80229404(arg1);
        *(s16 *) (arg0 + 0x9A) = *(s16 *) (arg0 + 0x9A) | 8;
    } else if ((*(u32 *) (arg1 + 0x38)) >> 31 != 0) {
        arg1[0x2D8] = 2;
        *(s16 *) (arg0 + 0x9A) = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if (func_8022B640(2) == 0) {
        arg1[0x2D8] = 0;
        func_80229CE0(arg0, arg1, 1);
    } else {
        arg1[0x2D8] = 1;
        func_80229CE0(arg0, arg1, 0);
    }
    arg0[0xA1] = arg1[0x2D8];
    arg0[0xA2] = arg1[0x2D9];
}
