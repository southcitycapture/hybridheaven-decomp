#include "context.h"

extern f32 D_801FC820;
extern f32 D_801FC824;
extern f32 D_801FC828;
extern f32 D_801FC82C;

s32 func_801EB2E8(s32 arg0, s32 arg1) {
    s8 sp27;
    s8 sp26;
    s8 sp25;

    D_801FD4B0 += D_801FC820;
    if (D_801FC824 < D_801FD4B0) {
        D_801FD4B0 = 0.0f;
    }
    func_801CCE0C(2);
    func_801CCE50(0x64, 0x64, 0x64);
    sp27 = (s32) (func_80032720(D_801FD4B0) * 80.0f);
    sp25 = (s32) (func_80029280(D_801FD4B0) * 80.0f);
    func_801CCE88(0, 0xBC, 0xBC, 0xBC);
    func_801CCEC8(0, sp27, 0x14, sp25);
    func_801CCE88(1, 0xBC, 0xBC, 0xBC);
    sp27 = (s32) (func_80032720(D_801FD4B0 + D_801FC828) * 80.0f);
    func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + D_801FC82C) * 80.0f));
    return 9;
}
