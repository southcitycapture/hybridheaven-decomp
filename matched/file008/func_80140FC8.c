#include "context.h"

void func_80140FC8(u8 arg0, s32 arg1, s32 arg2) {
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x800) && (D_801BEC01 > 0)) {
        if (D_801BEC00 == 1) {
            D_801BEC01 -= 1;
            D_801BEC00 = 0;
        } else {
            D_801BEC01 = D_801BEC01 - 1;
            func_80143AC4(1, 1, (D_801BEC01 * 8) + arg2, &D_801BEC01);
            D_801BEBFF = 1;
        }
    }
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x400) && (D_801BEC01 < ((u8)arg1 - 1))) {
        if (D_801BEC00 == 0) {
            D_801BEC00 = 1;
            D_801BEC01 += 1;
            return;
        }
        D_801BEC01 = D_801BEC01 + 1;
        func_80143AC4(1, 0, (D_801BEC01 * 8) + arg2, &D_801BEC01);
        D_801BEBFF = 1;
    }
}
