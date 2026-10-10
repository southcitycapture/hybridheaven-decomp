#include "context.h"

extern void func_8024224C(void);
extern u8 D_80245AD0[];

void func_802421DC(struct func_80242064_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_80017990(D_80245AD0);
        func_80020744(0x3DF);
        D_801BBBF0.unk194 = 1;
        D_801BBBF0.unkF10 = 0x02A80003;
        arg0->unk94 = 0xF;
        func_800058DC(arg0, func_8024224C);
    }
}
