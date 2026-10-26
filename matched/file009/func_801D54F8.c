#include "common.h"
extern void func_800058DC(void *arg0, s32 arg1);
extern void D_801CD5E0(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
extern void D_801CD728(void *, void *, f32);
#define func_801CD728 D_801CD728
s32 func_801CE0E8(void *arg0, s8 *a1);
typedef struct func_801CEAF8_StructD {
    u8 pad0[0x12];
    s16 unk12;
} func_801CEAF8_StructD;
typedef struct func_801CEAF8_StructC {
    u8 pad0[0x2C];
    func_801CEAF8_StructD *unk2C;
} func_801CEAF8_StructC;
typedef struct func_801CEAF8_StructB {
    u8 pad0[0x24];
    func_801CEAF8_StructC *unk24;
} func_801CEAF8_StructB;
typedef struct func_801CEAF8_StructA {
    u8 pad0[0xC];
    func_801CEAF8_StructB *unkC;
} func_801CEAF8_StructA;
typedef struct func_801CEAF8_StructTop {
    u8 pad0[0xC];
    func_801CEAF8_StructA *unkC;
    u8 pad10[0x94 - 0x10];
    u8 unk94;
} func_801CEAF8_StructTop;
typedef struct func_801D5664_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D5664_StructC;
typedef struct func_801D5664_Struct {
    u8 pad0[0xC];
    func_801D5664_StructC *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5664_Struct;
typedef struct func_801D5664_StructObj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D5664_StructObj;
void func_801D5664(func_801D5664_Struct *arg0, func_801D5664_StructObj **arg1);


typedef struct func_801D54F8_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D54F8_StructB;
typedef struct func_801D54F8_StructE {
    u8 pad0[0x30];
    func_801D54F8_StructB *unk30;
} func_801D54F8_StructE;

void func_801D54F8(func_801D5664_Struct *arg0, func_801D54F8_StructE **arg1) {
    f32 t;
    f32 v;
    s32 i;
    func_801D54F8_StructE **p;
    s8 sp57;
    func_801D54F8_StructB *s;
    func_801CEAF8_StructD *s4;
    s32 pad;

    sp57 = 0;
    if (func_801CE0E8(arg0, &sp57) == 0) {
        i = 0;
        p = arg1;
        s4 = ((func_801CEAF8_StructTop *)arg0)->unkC->unkC->unk24->unk2C;
        if (arg0->unk94 > 0) {
            do {
                t = (f32)i / (f32)(u32)arg0->unk94;
                s = (*p)->unk30;
                s->unk10 = 0x800;
                s->unk12 = s4->unk12;
                v = (f32)((f64)arg0->unk60 * (1.0 - (f64)t));
                s->unk20 = v;
                s->unk1C = v;
                s->unk18 = v;
                func_801CD5E0(arg0, s, t);
                func_801CD728(arg0, s, t);
                i += 1;
                p += 1;
                s->unk4 = arg0->unkC->unk6C;
                s->unk8 = arg0->unkC->unk70;
                s->unkC = arg0->unkC->unk74;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D5664);
    }
}
