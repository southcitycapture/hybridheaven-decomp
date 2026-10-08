#include "context.h"

extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8001B204();
extern u8 D_8018F0F0[];
extern u8 D_8018F0F4[];
extern u8 D_8018F11C[];
extern u8 D_8018F144[];

void func_80142570(void) {
    s32 i;

    for (i = 0; i < 0x1C; i++) {
        func_8001B204(i & 0xFF, 0, 0, D_8018F0F0);
    }
    for (i = 0; i < 8; i++) {
        func_8001A804(i & 0xFF, D_8018F0F4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    func_8001A804(8, D_8018F11C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8001A804(9, D_8018F144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
