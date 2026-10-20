#include "context.h"

extern u8 D_80163870;
extern u8 D_80163874;
extern u8 D_80163878;
extern void func_8010FABC();

void func_80119BB8(s32 arg0, s32 arg1) {
    if (D_801BBBF0.unk1DC == 1) {
        *(u16 *)((u8 *)&D_801BBBF0 + 0x1DA) = 2;
        D_80163870 = D_80163874 = D_80163878 = 0;
        func_800058DC(arg0, func_8010FABC, &D_801BBBF0);
    }
}
