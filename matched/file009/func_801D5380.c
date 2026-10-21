#include "context.h"

typedef struct func_801D5380_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D5380_StructC;
typedef struct func_801D5380_StructA {
    u8 pad0[0xC];
    func_801D5380_StructC *unkC;
    u8 pad10[0x80];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5380_StructA;
typedef struct func_801D5380_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2B];
    u8 unk3B;
} func_801D5380_StructB;
typedef struct func_801D5380_StructE {
    u8 pad0[0x30];
    func_801D5380_StructB *unk30;
} func_801D5380_StructE;
extern void func_8012D40C(void *, s32);
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);

void func_801D5380(func_801D5380_StructA *arg0, func_801D5380_StructE **arg1) {
    s32 i;
    s32 t;
    s32 c;
    f32 sc;
    func_801D5380_StructB *s;

    if (D_801BCC21 != 6) {
        func_801CD878(arg0, (void **)arg1);
        for (i = 0; i < arg0->unk94; i = (i + 1) & 0xFF) {
            s = arg1[i]->unk30;
            s->unk4 = arg0->unkC->unk6C;
            s->unk8 = arg0->unkC->unk70;
            s->unkC = arg0->unkC->unk74;
            sc = (u32)s->unk3B * 0.125;
            D_801CD5E0(arg0, s, sc);
            D_801CD728(arg0, s, sc);
            func_8012D40C(arg0, i & 0xFF);
        }
        t = arg0->unk92;
        c = arg0->unk90 < t;
        arg0->unk92 = t + 1;
        if (c) {
            arg0->unk92 = 0;
        }
        if (arg0->unkC->unk4C & 0x8000) {
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}
