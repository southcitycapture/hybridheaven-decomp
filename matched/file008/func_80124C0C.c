#include "common.h"


extern func_80124C0C_Struct D_801BBBF0;

void func_800058DC(s32 arg0, void *arg1);
extern void func_80124C54();

void func_80124C0C(s32 arg0, s32 arg1) {
    D_801BBBF0.unk17E = 7;
    if (D_801BBBF0.unk164 == 0) {
        D_801BBBF0.unk168 = 0;
        D_801BBBF0.unk17D = 0;
        func_800058DC(arg0, func_80124C54);
    }
}
