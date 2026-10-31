#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
void func_801CD878(void *arg0, void **arg1);
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
extern void func_801CE898();


typedef struct func_801D0C1C_StructB {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D0C1C_StructB;

typedef struct func_801D0C1C_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801D0C1C_StructC;

typedef struct func_801D0C1C_StructD {
    u8 pad0[0x30];
    func_801D0C1C_StructC *unk30;
} func_801D0C1C_StructD;

typedef struct func_801D0C1C_StructA {
    u8 pad0[0xC];
    func_801D0C1C_StructB *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D0C1C_StructA;

extern f64 D_801E35E8;

void func_801D0C1C(func_801D0C1C_StructA *arg0, func_801D0C1C_StructD **arg1) {
    func_801D0C1C_StructB *b = arg0->unkC;
    f32 x = b->unk6C;
    f32 y = b->unk70;
    f32 z = b->unk74;
    u8 i;
    u16 t;
    func_801D0C1C_StructC *p;

    func_801CD878(arg0, (void **)arg1);
    i = 0;
    if (arg0->unk94 > 0) do {
        p = arg1[i]->unk30;
        p->unk4 = p->unk4 + ((p->unk4 - x) / ((u32)arg0->unk92 + 1.0)) * 0.8;
        p->unk8 = p->unk8 + ((p->unk8 - y) / ((u32)arg0->unk92 + 1.0)) * 0.8;
        p->unkC = p->unkC + ((p->unkC - z) / ((u32)arg0->unk92 + 1.0)) * 0.8;
        i++;
    } while (i < arg0->unk94);
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
