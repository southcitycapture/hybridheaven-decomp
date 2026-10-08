#include "common.h"

extern void func_80002364(u32, s32, s32, s32);
extern void func_800179B0(void *);
extern void func_80142A58(void);
extern void func_8014307C(s32, s32, void *);
extern u8 D_80180B38[];
extern s8 D_801BEBCC;
extern s8 D_801BEBCD;
extern u8 D_801BEBD8[];
extern u8 D_801BEBDC[];
extern s8 D_801BEBFF;
extern s8 D_801BEC03;

void func_80140600(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEBCD = 0;
    D_801BEBFF = 0;
    D_801BEBD8[4] = 3;
    D_801BEBD8[12] = 4;
    func_800179B0(D_80180B38);
    func_8014307C(0, 0xFF, D_801BEBDC);
    func_8014307C(1, 0xFF, D_801BEBDC);
    func_80142A58();
    func_80002364(0x0C000C0C, 0xA, 2, 0);
}
