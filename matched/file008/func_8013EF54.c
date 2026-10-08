#include "common.h"

extern void func_80002364(u32 a0, s32 a1, s32 a2, s32 a3);
extern void func_800179B0(void *p);
extern void func_80142840(void);
extern u8 D_801812A0[];
extern u8 D_801BEBCC;
extern u8 D_801BEBCD;
extern u8 D_801BEBFF;
extern u8 D_801BEC00;
extern u8 D_801BEC01;
extern u8 D_801BEC03;
extern u8 D_801BEC04;
extern u8 D_801BEC05;

void func_8013EF54(void) {
    D_801BEBCD = 0;
    D_801BEBFF = 0;
    D_801BEC00 = 0;
    D_801BEC01 = 0;
    D_801BEBCC = 0;
    D_801BEC03 = 0;
    D_801BEC04 = 0;
    D_801BEC05 = 0;
    func_80002364(0x0C000C0C, 10, 2, 0);
    func_80002364(0x0C000C0C, 10, 2, 1);
    func_800179B0(D_801812A0);
    func_80142840();
}
