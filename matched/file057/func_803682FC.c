#include "context.h"

void func_803682FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4) {
    func_80368284_Struct sp1C;

    ((u8 *)arg3)[0x2FA] = 1;
    func_8013A334(&sp1C, arg1, arg2, arg4);
    func_80371A40(arg0, sp1C);
    func_802266CC(arg0, 0x3BB);
    func_802254F8(arg0, 0xF, 6);
}
