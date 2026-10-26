#include "common.h"


extern u16 D_800497A4[];
extern u8 D_800CBDD0;
extern u8 D_800CBDD8[];

void func_80026140(u8 arg0, u8 arg1, u8 arg2, s16 arg3) {
    u16 v;
    u8 *p;
    s32 n;

    v = D_800497A4[arg1];
    if (v != 0 && (n = D_800CBDD0) < 8) {
        p = D_800CBDD8 + n * 6;
        *(u16 *)p = v;
        p[3] = arg2;
        *(s16 *)(p + 4) = arg3;
        p[2] = arg0;
        D_800CBDD0 = n + 1;
    }
}
