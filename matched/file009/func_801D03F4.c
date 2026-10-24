#include "context.h"

typedef struct func_801D03F4_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D03F4_StructB;
typedef struct func_801D03F4_StructC {
    u8 pad0[0x30];
    func_801D03F4_StructB *unk30;
} func_801D03F4_StructC;
extern void func_801D0594();

void func_801D03F4(func_801CEC10_StructOuter *arg0, func_801D03F4_StructC **arg1) {
    f64 d;
    s16 k;
    s8 sp75;
    f32 t;
    s32 i;
    s32 n;
    func_801D03F4_StructB *p;

    sp75 = 0;
    if (func_801CE0E8(arg0, &sp75) == 0) {
        i = 0;
        n = 0;
        if (arg0->unk94 > 0) {
            do {
                k = n % 20;
                d = (f32)k;
                if (d < 10.0) {
                    d = -(d - 10.0);
                } else {
                    d = d - 10.0;
                }
                p = arg1[i]->unk30;
                func_801CE6F8((s32)arg0, (func_801CE6F8_Struct *)p);
                t = d / 10.0;
                D_801CD5E0(arg0, p, t);
                D_801CD728(arg0, p, t);
                i = (i + 1) & 0xFF;
                n = i;
                p->unk20 = p->unk20 * (1.0 - t);
                t = p->unk20;
                p->unk1C = t;
                p->unk18 = t;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D0594);
    }
}
