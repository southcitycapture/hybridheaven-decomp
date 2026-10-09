#include "common.h"


extern s32 func_80005670(void *, void *);
extern void func_800058DC(void *, void *);
extern u8 D_8016372C[];
extern u8 D_80163718[];
extern s32 D_801BBE3C;
extern s32 D_801BBE40;
extern u8 func_8010DD4C[];

void func_8010DCF0(void *arg0, s32 arg1) {
    D_801BBE3C = func_80005670(arg0, D_8016372C);
    D_801BBE40 = func_80005670(arg0, D_80163718);
    func_800058DC(arg0, func_8010DD4C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/8010DCF0/func_8010DD4C.s")


void func_8010E668(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

