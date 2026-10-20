#include "context.h"
extern u8 D_800692B0[];
extern void func_80143AC4(s32 a0, s32 a1, s32 a2, void *a3);

void func_80140E88(u8 arg0, u8 arg1, s32 arg2) {
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x800) && ((u8)D_801BEC05 > 0)) {
        if ((u8)D_801BEC04 == 1) {
            D_801BEC05 = (u8)D_801BEC05 - 1;
            D_801BEC04 = 0;
        } else {
            D_801BEC05 = (u8)D_801BEC05 - 1;
            func_80143AC4(0, 1, ((u8)D_801BEC05) * 8 + arg2, &D_801BEC05);
            D_801BEC03 = 1;
        }
    }
    if ((*(u16 *)(D_800692B0 + 0x20000 + (arg0 << 5) + 0x1D0) & 0x400) && ((u8)D_801BEC05 < arg1 - 1)) {
        if ((u8)D_801BEC04 == 0) {
            D_801BEC04 = 1;
            D_801BEC05 = (u8)D_801BEC05 + 1;
            return;
        }
        D_801BEC05 = (u8)D_801BEC05 + 1;
        func_80143AC4(0, 0, ((u8)D_801BEC05) * 8 + arg2, &D_801BEC05);
        D_801BEC03 = 1;
    }
}
