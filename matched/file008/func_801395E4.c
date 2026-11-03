#include "common.h"

extern f32 func_8002FC20(f32);
#define N(c, x, y) func_8002FC20(arg1->unk##c * arg1->unk##c + (arg1->unk##x * arg1->unk##x + arg1->unk##y * arg1->unk##y))

typedef struct func_801395E4_StructA {
    u8 pad0[0x50];
    f32 unk50, unk54, unk58, unk5C, unk60, unk64, unk68, unk6C, unk70;
} func_801395E4_StructA;

typedef struct func_801395E4_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 padC[4];
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    u8 pad1C[0x20];
    f32 unk3C;
    u8 pad40[0x14];
    f32 unk54, unk58, unk5C, unk60, unk64, unk68, unk6C, unk70, unk74, unk78, unk7C, unk80, unk84, unk88, unk8C;
    u8 pad90[0x6C];
    f32 unkFC, unk100, unk104, unk108, unk10C, unk110, unk114, unk118, unk11C;
    u8 pad120[0x10];
    f32 unk130;
    u8 pad134[8];
    f32 unk13C;
    u8 pad140[4];
    f32 unk144, unk148, unk14C, unk150, unk154, unk158;
    u8 pad15C[0x1C];
    f32 unk178;
} func_801395E4_StructB;

void func_801395E4(func_801395E4_StructA *arg0, func_801395E4_StructB *arg1) {
    f32 a, b;
    f32 v;
    f32 w;

    arg0->unk54 = (arg1->unk3C + (arg1->unk18 - arg1->unkC)) / 100.0f;
    a = N(8C, 84, 88);
    b = N(80, 78, 7C);
    arg0->unk58 = (N(158, 150, 154) + (b + a)) / 100.0f;
    a = N(68, 60, 64);
    b = N(5C, 54, 58);
    arg0->unk5C = (N(14C, 144, 148) + (b + a)) / 100.0f;
    arg0->unk60 = arg1->unk4 / 100.0f;
    arg0->unk50 = -arg1->unk178 / 100.0f + arg0->unk54 + arg0->unk60;
    a = N(110, 108, 10C);
    b = N(104, FC, 100);
    arg0->unk64 = (N(11C, 114, 118) + (b + a)) / 100.0f;
    arg0->unk68 = N(74, 6C, 70) / 100.0f;
    v = arg1->unk130;
    if (v < 0.0f) {
        b = -v;
    } else {
        b = v;
    }
    arg0->unk6C = b / 100.0f;
    w = arg1->unk13C;
    if (w < 0.0f) {
        b = -w;
    } else {
        b = w;
    }
    arg0->unk70 = b / 100.0f;
}
