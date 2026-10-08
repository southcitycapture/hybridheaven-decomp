#include "common.h"

extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_800179B0(void *p);
extern void func_8013E700(void *p);
extern void func_801426B0(void);
extern void func_8014307C(s32 a0, s32 a1, void *p);
extern u8 D_80180458[];
extern u8 D_801BEB80[];
extern u8 D_801BEB84[];
extern s8 D_801BEBCC;
extern s8 D_801BEC02;
extern s8 D_801BEC03;
extern s8 D_801BEC04;
extern s8 D_801BEC05;

void func_8013E7C0(void) {
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC02 = 1;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_8013E700(D_801BEB80);
    func_80002364(0x0C000C0C, 0xA, 2, 0);
    func_800179B0(D_80180458);
    func_801426B0();
    func_8014307C(0, 0xFF, D_801BEB84);
}
