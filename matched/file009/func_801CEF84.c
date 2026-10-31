#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern void D_801CD5E0(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
extern void D_801CD728(void *, void *, f32);
#define func_801CD728 D_801CD728
typedef struct func_801CE5B0_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_801CE5B0_Struct;
void func_801CE5B0(func_801CE5B0_Struct *arg0, s32 *arg1);
typedef struct func_801CE6F8_Struct {
    u8 pad0[0x8];
    f32 unk8;
} func_801CE6F8_Struct;
void func_801CE618(s32 arg0, struct func_801CE6F8_Struct *arg1);
extern void func_801CE898();


typedef struct func_801CEF84_StructE {
    u8 pad0[8];
    f32 unk8;
    u8 padC[8];
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CEF84_StructE;
typedef struct func_801CEF84_StructI {
    u8 pad0[0x30];
    func_801CEF84_StructE *unk30;
} func_801CEF84_StructI;
typedef struct func_801CEF84_StructQ {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CEF84_StructQ;
typedef struct func_801CEF84_StructP {
    u8 pad0[0xC];
    func_801CEF84_StructQ *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CEF84_StructP;

void func_801CEF84(func_801CEF84_StructP *arg0, func_801CEF84_StructI **arg1) {
    f32 t;
    f32 v;
    u8 i;
    func_801CEF84_StructE *e;

    for (i = 0; i < arg0->unk94; i++) {
        t = (f64)((arg0->unk92 + i) % 10) / 10.0;
        e = arg1[i]->unk30;
        if ((f64)t < 0.1) {
            func_801CE618((s32)arg0, (void *)e);
        }
        e->unk8 = (f64)e->unk8 + 0.5;
        e->unk14 = (f64)e->unk14 + 256.0 * ((f64)(i - arg0->unk94 / 2) - 0.5);
        e->unk14 = e->unk14 & 0x1FFF;
        func_801CD5E0((void *)arg0, (void *)e, t);
        func_801CD728((void *)arg0, (void *)e, t);
        v = (f64)arg0->unk60 * (1.0 - (f64)t);
        e->unk20 = v;
        e->unk1C = v;
        e->unk18 = v;
    }
    {
        s32 c = arg0->unk90 < arg0->unk92++;
        if (c || (arg0->unkC->unk4C & 0x8000)) {
            func_801CE5B0((void *)arg0, (void *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}
