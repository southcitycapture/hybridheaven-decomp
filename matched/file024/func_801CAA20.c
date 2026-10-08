#include "common.h"

extern void func_800058DC();
extern u8 D_801BBBF0[];
extern void func_801CAA68();

void func_801CAA20(s32 arg0, s32 arg1) {
    if (D_801BBBF0[0x164] == 0 && D_801BBBF0[0x17E] == 8) {
        func_800058DC(arg0, func_801CAA68);
    }
}
