#include "context.h"

typedef struct func_801D5664_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
    u8 pad4E[0x1E];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_801D5664_StructC;

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

extern u8 D_801BCC21;
extern void D_801CD5E0(void *, void *, f32);
extern void D_801CD728(void *, void *, f32);
#define func_801CD5E0 D_801CD5E0
#define func_801CD728 D_801CD728

void func_801D5664(func_801D5664_Struct *arg0, func_801D5664_StructObj **arg1) {
    f32 t;
    f32 r;
    f32 q;
    s32 i;
    func_801D5664_StructObj *o;
    s16 *s3;

    if (D_801BCC21 != 6) {
        {
            extern void func_801CD878();
            func_801CD878();
        }
        q = (f32)((f64)(f32)((f64)arg0->unk92 + 1.0) / ((f64)arg0->unk90 + 1.0));
        i = 0;
        s3 = *(s16 **)(*(s32 *)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0xC) + 0x24) + 0x2C);
        if (arg0->unk94 > 0) {
            do {
                t = (f32)(((f64)(u32)i + 1.0) / ((f64)(u32)arg0->unk94 + 1.0) + (f64)q);
                t = t - (f32)(s32)t;
                o = *(func_801D5664_StructObj **)((u8 *)arg1[i] + 0x30);
                o->unk18 = o->unk1C = o->unk20 = (f32)((f64)arg0->unk60 * (1.0 - (f64)t));
                func_801CD5E0(arg0, o, t);
                func_801CD728(arg0, o, t);
                i = (i + 1) & 0xFF;
                o->unk12 = s3[9];
                o->unk4 = arg0->unkC->unk6C;
                o->unk8 = arg0->unkC->unk70;
                o->unkC = arg0->unkC->unk74;
            } while (i < arg0->unk94);
        }
        if (arg0->unk90 < arg0->unk92++) {
            arg0->unk92 = 0;
        }
        if (arg0->unkC->unk4C & 0x8000) {
            func_801CE5B0((void *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}
