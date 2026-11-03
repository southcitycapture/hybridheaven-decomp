#include "common.h"


void func_8000B5AC(f32 mf[4][4], s32 *m) {
    s32 i;
    s32 e1, e2;
    s32 *ai, *af;

    ai = m;
    af = m + 8;

    for (i = 0; i != 4; i++) {
        e1 = (s32)(mf[i][0] * (f32)0x00010000);
        e2 = (s32)(mf[i][1] * (f32)0x00010000);
        *(ai++) = (e1 & 0xffff0000) | ((e2 >> 16) & 0xffff);
        *(af++) = ((e1 << 16) & 0xffff0000) | (e2 & 0xffff);
        e1 = (s32)(mf[i][2] * (f32)0x00010000);
        e2 = (s32)(mf[i][3] * (f32)0x00010000);
        *(ai++) = (e1 & 0xffff0000) | ((e2 >> 16) & 0xffff);
        *(af++) = ((e1 << 16) & 0xffff0000) | (e2 & 0xffff);
    }
    for (i = 0; i < 0; i++) {
    }
}
