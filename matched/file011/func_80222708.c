#include "context.h"

struct func_80222708_Struct {
    u8 pad0[0x30];
    u8 b30_7 : 1;
    u8 b30_m : 6;
    u8 b30_0 : 1;
    u8 b31_7 : 1;
    u8 b31_r : 7;
    u8 pad32[6];
    u8 b38_7 : 1;
    u8 b38_56 : 2;
    u8 b38_4 : 1;
    u8 b38_r : 4;
};

void func_80222708(s32 arg0, s32 arg1) {
    struct func_80222708_Struct *p;

    if (arg0 == D_801BBCCC) {
        p = (struct func_80222708_Struct *)&D_801BC03C;
    } else {
        p = (struct func_80222708_Struct *)&D_801BC3D8;
    }
    func_802237B0(arg0, 0);
    p->b30_7 = 0;
    p->b30_0 = 0;
    p->b31_7 = 0;
    p->b38_7 = 0;
    p->b38_4 = 0;
    p->b38_56 = 0;
    func_80222450(arg0, arg1, 6);
}
