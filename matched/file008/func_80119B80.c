#include "common.h"

extern void func_800058DC();
extern u16 D_801BBC8E;
extern void func_80119BB8();

void func_80119B80(s32 arg0, s32 arg1) {
    if (!(D_801BBC8E & 4)) {
        func_800058DC(arg0, func_80119BB8);
    }
}
