#include "context.h"

typedef struct func_801D1428_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0x24];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801D1428_StructB;
typedef struct func_801D1428_StructC {
    u8 pad0[0x30];
    func_801D1428_StructB *unk30;
} func_801D1428_StructC;
typedef struct func_801D1428_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D1428_StructD;
typedef struct func_801D1428_Struct {
    u8 pad0[0xC];
    func_801D1428_StructD *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 pad80[0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1428_Struct;
extern f64 D_801E3600;
extern u8 D_801CD500(s32, u8, f32);

void func_801D1428(func_801D1428_Struct *arg0, func_801D1428_StructC **arg1) {
    u8 temp_v0;
    u8 i;
    func_801D1428_StructB *v1;
    f32 f;
    f64 k;
    f32 r;

    r = ((f64)(u32)arg0->unk92 + 1.0) / ((f64)(u32)arg0->unk90 + 1.0);
    temp_v0 = D_801CD500(arg0->unk7B, arg0->unk7F, r);
    i = 0;
    if (i < arg0->unk94) {
        k = D_801E3600;
        do {
        v1 = arg1[i]->unk30;
        i++;
        v1->unk48 = arg0->unk7C;
        v1->unk49 = arg0->unk7D;
        v1->unk4A = arg0->unk7E;
        v1->unk4B = temp_v0;
        v1->unk20 = (f32)((f64)v1->unk20 * k);
        f = v1->unk20;
        v1->unk1C = f;
        v1->unk18 = f;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
