#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_800201D0();
extern void func_80107864();

void func_80107830(s32 arg0, s32 arg1) {
    func_800201D0();
    func_800058DC(arg0, &func_80107864);
}


extern void func_80016DF0(void);
extern void func_80004310(void *);
extern u8 D_80162DE4[];
extern void func_801078A4(void);

void func_80107864(s32 arg0, s32 arg1) {
    func_80016DF0();
    func_80004310(D_80162DE4);
    func_800058DC(arg0, func_801078A4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80107830/func_801078A4.s")

void func_80107968(s32 arg0, s32 arg1);

extern void func_80005624(void *);
extern u16 D_80089474[];
extern u8 D_80163504[];
extern u8 D_801BB600;

void func_801078E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (D_80089474[1] & 0x1000) {
        var_v0 = 1;
        D_801BB600 += 1;
    }
    if (var_v0 == 1) {
        if (D_801BB600 >= 0xB) {
            func_80005624(D_80163504);
        }
    } else {
        func_800058DC(arg0, (void *) func_80107968);
    }
}


s32 func_800058B8(u32);
void func_800057DC(s32, void *);
extern u8 D_80162FC0[];

void func_80107968(s32 arg0, s32 arg1) {
    if (func_800058B8(0x30000010) == 0) {
        func_800057DC(arg0, D_80162FC0);
    }
}

