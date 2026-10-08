#include "common.h"

extern void func_80142570(void);
extern void func_8001B204(s32 a0, s32 a1, s32 a2, void *a3, s32 a4);
extern void func_8001A804(s32 a0, void *a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6);

extern u8 D_8018F2F4[];
extern u8 D_8018F30C[];
extern u8 D_8018F33C[];

void func_80142A58(void) {
    func_80142570();
    func_8001B204(7, 0x7D0, 0x1C, D_8018F2F4, 3);
    func_8001B204(0xB, 0x26, 0x30, D_8018F30C, 1);
    func_8001A804(6, D_8018F33C, 0x20, 0x42, 0x7A, 0x5C, 1, 0x40, 0x40, 0x40, 0x80, 0x90, 0x90, 0x90, 0x80);
}
