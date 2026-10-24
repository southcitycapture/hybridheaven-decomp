#include "context.h"

typedef struct func_801D1918_Struct {
    u8 pad0[0xC];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x7B - 0x10];
    u8 unk7B;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 pad80[0x10];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D1918_Struct;

extern f64 D_801E3608;
extern void func_801CE898();

void func_801D1918(func_801D1918_Struct *arg0, func_801CEB64_StructOuter **arg1) {
    f32 r;
    u8 v;
    s32 i;
    u16 t;
    f64 k;
    func_801CEB64_StructInner *p;

    r = (f64)(arg0->unk92 + 1.0) / (f64)(arg0->unk90 + 1.0);
    v = D_801CD500(arg0->unk7B, arg0->unk7F, r);
    i = 0;
    if (arg0->unk94 > 0) {
        k = D_801E3608;
        do {
            p = arg1[i]->unk30;
            i = (i + 1) & 0xFF;
            p->unk48 = arg0->unk7C;
            p->unk49 = arg0->unk7D;
            p->unk4A = arg0->unk7E;
            p->unk4B = v;
            ((f32 *)p)[8] = ((f32 *)p)[8] * k;
            ((f32 *)p)[7] = ((f32 *)p)[8];
            ((f32 *)p)[6] = ((f32 *)p)[8];
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
