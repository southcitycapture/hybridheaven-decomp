#include "common.h"

struct func_80131D00_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_800057DC(void *a0, void *a1);
extern void func_8001B204(s32 a0, s32 a1, s32 a2, void *a3);
extern void func_8012FE50(s32 a0, s32 a1, s32 a2, s32 a3, s32 stack);
extern u16 D_80089474[];
extern u8 D_80162FC0[];
extern u8 D_8018D6E0[];
extern u8 D_8018D6E8[];
extern s16 D_801BBBF4;
extern u16 D_801BBC20;

void func_80131D00(struct func_80131D00_Struct *arg0, s32 arg1) {
    u16 var_v0;

    if ((D_801BBC20 >> 4) & 1) {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E0);
    } else {
        func_8001B204(0, 0x8C, 0x50, D_8018D6E8);
    }
    if (D_80089474[2] & 0xF000) {
        D_801BBBF4 = 0x73;
        func_8012FE50(2, 0x73, 2, 2, 0);
    }
    if ((s32) arg0->unk3C >= 0x1771) {
        func_800057DC(arg0, D_80162FC0);
    }
    arg0->unk3C = (u16) (arg0->unk3C + 1);
}
