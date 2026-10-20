#include "context.h"

extern f64 D_801E3658;
extern f64 D_801E3660;

typedef struct func_801D3B78_StructA {
    u8 pad0[0x60];
    f32 unk60;
    u8 pad64[8];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D3B78_StructA;

typedef struct func_801D3B78_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D3B78_StructB;

void func_801D3B78(func_801D3B78_StructA *arg0, func_801D3B78_StructB *arg1) {
    f32 t;

    arg1->unk8 = (f32) (((f64) func_8012C6B4(0xC8) / 10.0) + (f64) arg0->unk70);
    arg1->unk4 = (f32) ((((f64) func_8012C6B4(0x64) - D_801E3658) / 10.0) + (f64) arg0->unk6C);
    arg1->unkC = (f32) ((((f64) func_8012C6B4(0x64) - D_801E3660) / 10.0) + (f64) arg0->unk74);
    arg1->unk10 = func_8012C6B4(0x2000);
    arg1->unk12 = func_8012C6B4(0x2000);
    arg1->unk14 = func_8012C6B4(0x2000);
    t = (f32) ((f64) ((f32) (func_8012C6B4(0x32) + 0x32) * arg0->unk60) / 100.0);
    arg1->unk20 = t;
    arg1->unk1C = t;
    arg1->unk18 = t;
}
