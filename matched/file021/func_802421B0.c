#include "common.h"

extern void func_80020744(s32 arg0);
extern void func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

void func_802421B0(s32 arg0, s32 arg1) {
    func_80020744(7);
    func_8012FE50(0xF, 0x5A, 6, 2, 2);
}
