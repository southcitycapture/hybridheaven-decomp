#include "context.h"

void func_80029EE8(f32 mf[4][4], s32 *m) {
    s32 i, j;
    u32 e1, e2;
    u32 *ai, *af;
    s32 q1, q2;

    ai = (u32 *)m;
    af = (u32 *)m + 8;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 2; j++) {
            e1 = (*ai & 0xffff0000) | ((*af >> 16) & 0xffff);
            e2 = ((*(ai++) << 16) & 0xffff0000) | (*(af++) & 0xffff);
            q1 = *((s32 *)&e1);
            q2 = *((s32 *)&e2);
            mf[i][j * 2] = ((f32)(q1) * (1.0f / (f32)0x00010000));
            mf[i][j * 2 + 1] = ((f32)(q2) * (1.0f / (f32)0x00010000));
        }
}
