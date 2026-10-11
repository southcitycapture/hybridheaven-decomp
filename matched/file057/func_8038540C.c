#include "context.h"

extern void func_800023EC(void);
extern u8 D_8038CB8C[];
extern u8 D_8038CB90[];
extern u8 D_8038CB94[];
extern u8 D_8038CB98[];

struct func_8038540C_Struct {
    u8 pad0[0xB0];
    s16 unkB0;
};

struct func_8038540C_Child {
    u8 pad0[0xA4];
    s16 unkA4;
};

struct func_8038540C_Parent {
    u8 pad0[0xC];
    struct func_8038540C_Child *unkC;
};

void func_8038540C(struct func_8038540C_Struct *arg0, s32 arg1) {
    s16 temp_v0;
    struct func_8038540C_Child *temp_v0_2;
    extern void func_80126E88();

    temp_v0 = arg0->unkB0;
    arg0->unkB0 = temp_v0 - 1;
    if (temp_v0 < 0) {
        temp_v0_2 = ((struct func_8038540C_Parent *) arg0)->unkC;
        temp_v0_2->unkA4 = temp_v0_2->unkA4 | 0x80;
        func_8001B204(0xA, 0, 0, D_8038CB8C);
        func_8001B204(0xB, 0, 0, D_8038CB90);
        func_8001B204(0xC, 0, 0, D_8038CB94);
        func_8001B204(0xD, 0, 0, D_8038CB98);
        func_80126E88(0x12F);
        func_800023EC();
        func_80005700(arg0);
    }
}
