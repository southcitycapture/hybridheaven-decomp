#include "common.h"

extern void func_80142570(void);
extern s32 func_8001B204();
extern void func_8001A804(s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern u8 D_8018F1BC[];
extern u8 D_8018F1D4[];
extern u8 D_8018F1E4[];

void func_80142778(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F1BC, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F1D4);
    func_8001A804(6, D_8018F1E4, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
}
