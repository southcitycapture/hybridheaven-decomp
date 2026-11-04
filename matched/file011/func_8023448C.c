#include "common.h"
u8 func_80006214();
extern void (*D_80216D10[])(void *, s32);
extern void func_80145310(s32, s32, s32);
void func_80146208(s32, s8 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
typedef struct func_80237004_Struct {
    u8 pad[0xA2];
    s8 unkA2;
    u8 pad2;
    s8 unkA4;
    u8 pad3[3];
    u8 unkA8;
    u8 unkA9;
} func_80237004_Struct;


s32 func_8023448C(func_80237004_Struct *arg0, s32 *arg1, u8 arg2, s16 arg3, s16 arg4, u8 arg5, u8 arg6) {
    s8 sp3F;
    u8 sp3E;
    u8 t;

    sp3F = 0;
    sp3E = func_80006214(arg0);
    t = arg2;
    if (arg2 == 2) {
        func_80146208((s32) arg0, &sp3F, 0xE6, (s16) (arg3 + 0x20), arg4 + 0x7A, 0x100, 0x10, 0, 0, 0xFF, 0x220, arg2);
    } else {
        if (arg3 * 0) {
            t = 0;
        }
        if (t == 1) {
            func_80146208((s32) arg0, &sp3F, 0x66, (s16) (arg3 + 0x60), arg4 + 0x7A, 0x80, 0x10, 0, 0, 0xFF, 0x220, arg2);
        }
    }
    func_80145310(arg1[sp3E], arg5, arg6);
    return arg1[sp3E];
}
