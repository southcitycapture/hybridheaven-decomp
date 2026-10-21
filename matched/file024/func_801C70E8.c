#include "context.h"

extern u8 D_800892B0[];
extern u8 D_801CF2F4[];
extern void (*D_801CCB04)(void *, s32, u8);
extern void func_80020718(s32);
extern void func_80020744(s32);
extern void func_801C72F8();
extern void D_800058DC(void *, void *);
extern void D_8001B204(s32, s32, s32, void *, s32);

void func_801C70E8(void *arg0, s32 arg1) {
    u16 temp_a1;
    u16 temp_a3;
    s32 var_a2;

    temp_a1 = *(u16 *)&D_800892B0[0x1D0] | *(u16 *)&D_800892B0[0x1F0];
    temp_a3 = *(u16 *)&D_800892B0[0x1C8] | *(u16 *)&D_800892B0[0x1E8];
    var_a2 = 0;
    if (temp_a1 & 0x100) {
        if (D_801CFDC0 == 7) {
            D_801CFDC0 = 0;
        } else {
            D_801CFDC0 += 1;
        }
        var_a2 = 1;
    } else if (temp_a1 & 0x200) {
        if (D_801CFDC0 == 0) {
            D_801CFDC0 = 7;
        } else {
            D_801CFDC0 -= 1;
        }
        var_a2 = 1;
    } else if (temp_a3 & 0x8000) {
        func_80020744(0x104);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0x14;
        func_80020718(7);
        D_800058DC(arg0, func_801C72F8);
        return;
    }
    if (var_a2 != 0) {
        func_80020744(0x300);
        D_801CCB04(D_801CFDA0, 0x229, D_801CD0E4[D_801CFDC0]);
        D_800058DC(arg0, func_801C7264);
    }
    D_8001B204(1, 0x7D0, 0xCD, D_801CF2F4, D_801CFDC0 + 1);
}
