#include "context.h"

f32 func_80029280(f32);
f32 func_80032720(f32);

extern f32 D_801FC7F8;
extern f32 D_801FC7FC;
extern f32 D_801FC800;
extern f32 D_801FC804;

s32 func_801EA4DC(s32 arg0, s32 arg1) {
    s32 sp28[126];
    s8 sp27;
    s8 sp25[2];

    func_801BF628(3, sp28);
    if (sp28[3] >= 4) {
        func_801CCE0C(3);
        func_801CCE50(0x64, 0x64, 0x64);
        func_801CCE88(0, 0x64, 0x64, 0x64);
        func_801CCEC8(0, -0x64, 0, 0);
        func_801CCE88(1, 0, 0, 0);
        func_801CCE88(2, 0, 0, 0);
        return 5;
    }
    if (func_801C0B8C(0x81B320) != 0) {
        D_801FD4B0 += D_801FC7F8;
        if (D_801FC7FC < D_801FD4B0) {
            D_801FD4B0 = 0.0f;
        }
        func_801CCE0C(2);
        func_801CCE50(0x64, 0x64, 0x64);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0) * 80.0f);
        sp25[1] = (s8) (s32) (func_80029280(D_801FD4B0) * 80.0f);
        func_801CCE88(0, 0xBC, 0xBC, 0xBC);
        func_801CCEC8(0, sp27, 0x14, sp25[1]);
        func_801CCE88(1, 0xBC, 0xBC, 0xBC);
        sp27 = (s8) (s32) (func_80032720(D_801FD4B0 + D_801FC800) * 80.0f);
        func_801CCEC8(1, sp27, 0x14, (s8) (s32) (func_80029280(D_801FD4B0 + D_801FC804) * 80.0f));
    }
    return 4;
}
