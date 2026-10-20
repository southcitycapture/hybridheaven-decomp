#include "context.h"

extern void func_801C7DE8(void *, s32, s32, s32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_801EB368;
extern f32 D_801EB36C;
extern f32 D_801EB370;
extern f32 D_801EB374;
extern f32 D_801EB378;
extern f32 D_801EB37C;
extern f32 D_801EB380;
extern u8 D_801EB3D0[];
extern u8 D_801EB3D4[];
extern u8 D_801EB3D8[];

s32 func_801E561C(s32 arg0, s32 arg1) {
    f32 k;
    if (D_801EA65C == 0) goto c0;
    if (D_801EA65C == 1) goto c1;
    if (D_801EA65C == 2) goto c2;
    if (D_801EA65C == 3) goto c3;
    return 5;
c0:
    if (func_801C0B8C(0x9A1D20) != 0) {
        func_8038D28C(0x256);
        k = D_801EB368;
        func_801C7DE8(D_801EB3D0, 0xC2800000, 0x41400000, 0x42780000, 0.0f, 163.0f, D_801EB36C, k, k, 2, 0);
        D_801EA65C = 1;
    }
    goto done;
c1:
    if (func_801C0B8C(0xA037A0) != 0) {
        k = D_801EB370;
        func_801C7DE8(D_801EB3D4, 0xC2800000, 0x41500000, 0x42800000, 6.0f, 171.0f, 274.0f, k, k, 2, 0);
        D_801EA65C = 2;
    }
    goto done;
c2:
    if (func_801C0B8C(0xA7D8C0) != 0) {
        k = D_801EB374;
        func_801C7DE8(D_801EB3D8, 0xC2820000, 0x41600000, 0x42820000, 0.0f, 175.0f, D_801EB378, k, k, 2, 1);
        D_801EA65C = 3;
    }
    goto done;
c3:
    if (func_801C0B8C(0xAF79E0) != 0) {
        k = D_801EB37C;
        func_801C7DE8(D_801EB3D0, 0xC2800000, 0x41400000, 0x42780000, 0.0f, 163.0f, D_801EB380, k, k, 2, 0);
        return 6;
    }
done:
    return 5;
}
