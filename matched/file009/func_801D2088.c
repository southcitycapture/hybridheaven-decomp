#include "context.h"

typedef struct func_801D2088_Struct {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_801D2088_Struct;

void func_801D2088(s32 arg0, s32 arg1, s32 arg2) {
    func_801D2088_Struct *p = (func_801D2088_Struct *)arg0;
    f64 d;
    f64 e;

    p->unk4 += (func_8012C6B4(60) - 30.0) / 100.0;
    d = *(f32 *)&arg1;
    if (p->unk4 > d + 1.0) p->unk4 = d + 1.0;
    if (p->unk4 < d - 1.0) p->unk4 = d - 1.0;
    p->unkC += (func_8012C6B4(60) - 30.0) / 100.0;
    e = *(f32 *)&arg2;
    if (p->unkC > e + 1.0) p->unkC = e + 1.0;
    if (p->unkC < e - 1.0) p->unkC = e - 1.0;
}
