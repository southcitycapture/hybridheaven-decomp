#include "common.h"
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
extern void func_800058DC(void *arg0, s32 arg1);
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
typedef struct func_801CEB64_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801CEB64_StructC;


typedef struct func_801CECA4_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad0C[8];
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801CECA4_StructB;
typedef struct func_801CECA4_StructA {
    u8 pad0[0xC];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x30 - 0x10];
    func_801CECA4_StructB *unk30;
} func_801CECA4_StructA;
typedef struct func_801CECA4_Struct {
    u8 pad0[0xC];
    func_801CEB64_StructC *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801CECA4_Struct;
extern f64 D_801E3580;

void func_801CECA4(func_801CECA4_Struct *arg0, func_801CECA4_StructA **arg1) {
    f32 t;
    f32 v;
    f64 k;
    u8 i;
    s32 j;
    s32 old;
    s32 c;
    func_801CECA4_StructB *s;

    i = 0;
    if (arg0->unk94 > 0) {
        do {
            t = (f64)((arg0->unk92 + i) % 20) / 20.0;
            s = arg1[i]->unk30;
            if (t < 0.1) {
                func_801CE618((s32)arg0, (void *)s);
            }
            s->unk8 = (f64)s->unk8 + 0.5;
            s->unk14 = (f64)s->unk14 + 4096.0 * ((f64)(i - arg0->unk94 / 2) - 0.5);
            s->unk14 = s->unk14 & 0x1FFF;
            D_801CD5E0(arg0, s, t);
            D_801CD728(arg0, s, t);
            v = (f64)arg0->unk60 * (1.0 - (f64)t);
            s->unk20 = v;
            s->unk1C = v;
            s->unk18 = v;
            i++;
        } while (i < arg0->unk94);
    }
    old = arg0->unk92;
    c = arg0->unk90 < old;
    arg0->unk92 = old + 1;
    if (c || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
