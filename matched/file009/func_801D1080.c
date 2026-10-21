#include "context.h"

typedef struct func_801D1080_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D1080_StructB;
typedef struct func_801D1080_StructC {
    u8 pad0[0x30];
    func_801D1080_StructB *unk30;
} func_801D1080_StructC;
typedef struct func_801D1080_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D1080_StructD;
typedef struct func_801D1080_Struct {
    u8 pad0[0xC];
    func_801D1080_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1080_Struct;

void func_801D1080(func_801D1080_Struct *arg0, func_801D1080_StructC **arg1) {
    u8 i;
    f32 x, y, z;
    func_801D1080_StructB *v0;

    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    func_801CD878(arg0, (void **)arg1);
    for (i = 0; i < arg0->unk94;) {
        v0 = arg1[i]->unk30;
        v0->unk4 = v0->unk4 + (v0->unk4 - x) / ((f64)arg0->unk92 + 1.0);
        v0->unk8 = v0->unk8 + (v0->unk8 - y) / ((f64)arg0->unk92 + 1.0);
        v0->unkC = v0->unkC + (v0->unkC - z) / ((f64)arg0->unk92 + 1.0);
        v0->unk14 += (s16)((f32)((f64)(i++ % 8) - 3.5) * 16.0f);
        v0->unk14 = v0->unk14 & 0x1FFF;
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
