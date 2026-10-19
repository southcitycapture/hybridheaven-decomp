#include "context.h"

typedef struct func_801D2530_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2530_StructC;
typedef struct func_801D2530_Struct {
    u8 pad0[0xC];
    func_801D2530_StructC *unkC;
    u8 pad10[0x6C - 0x10];
    s32 unk6C;
    u8 pad70[4];
    s32 unk74;
    u8 pad78[0x88 - 0x78];
    f32 unk88;
    u8 pad8C[0x92 - 0x8C];
    u16 unk92;
    u8 unk94;
} func_801D2530_Struct;
typedef struct func_801D2530_Elem {
    u8 pad0[0x30];
    s32 unk30;
} func_801D2530_Elem;
extern void func_801D2088(s32, s32, s32);
extern void func_80020718(s32);
extern u8 func_801D2638[];
extern u8 func_801D277C[];

void func_801D2530(func_801D2530_Struct *arg0, func_801D2530_Elem **arg1) {
    u16 i;
    s32 v;

    for (i = 0; i < arg0->unk94; i++) {
        func_801D2088(arg1[i]->unk30, arg0->unk6C, arg0->unk74);
    }
    v = arg0->unkC->unk4C;
    if (v & 0x8000) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
        return;
    }
    if (v >= 3) {
        arg0->unk92 = 0;
        if (arg0->unk88 == 1.0f) {
            func_80020718(0x10E);
            func_800058DC(arg0, (s32)func_801D2638);
        } else {
            func_80020718(0x10F);
            func_800058DC(arg0, (s32)func_801D277C);
        }
    }
}
