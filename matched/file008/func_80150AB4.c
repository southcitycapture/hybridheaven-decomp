#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif
#include "context.h"

extern void func_801C3B5C();
extern s32 D_8012FFC0();

void func_80150AB4(func_8014C2B0_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_80020718(0x3DE);
        if (D_8012FFC0() >= (s32)arg0->unkA6) {
            func_801C3B5C();
            func_800058DC(arg0, func_8014CDA0);
            return;
        }
        func_800058DC(arg0, func_80150B30);
    }
}
