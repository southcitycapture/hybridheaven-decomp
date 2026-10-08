#include "common.h"

extern s32 func_801D3688(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern s32 func_8038D28C(s32 arg0);

s32 func_801E7044(s32 arg0, s32 arg1) {
    func_801D3688(1, 2, 0x40200000, 0xFF, 0, 1, 1);
    func_8038D28C(0x206);
    return 0x2C;
}
