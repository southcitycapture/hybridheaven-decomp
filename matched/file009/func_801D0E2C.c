#include "context.h"

typedef struct func_801D0E2C_Vec {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D0E2C_Vec;

typedef struct func_801D0E2C_Obj {
    u8 pad0[0x30];
    func_801D0E2C_Vec *unk30;
} func_801D0E2C_Obj;

typedef struct func_801D0E2C_Inner {
    u8 pad[0x4C];
    u16 unk4C;
} func_801D0E2C_Inner;

typedef struct func_801D0E2C_Struct {
    u8 pad0[0xC];
    func_801D0E2C_Inner *unkC;
    u8 pad10[0x50];
    f32 unk60;
    u8 pad64[0x2C];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D0E2C_Struct;

void func_801D0E2C(func_801D0E2C_Struct *arg0, func_801D0E2C_Obj **arg1) {
    s32 i;
    func_801D0E2C_Vec *v;
    f32 f;
    u32 t;

    func_801CD878(arg0, (void **)arg1);
    if (arg0->unk92 >= 0x15) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                v = arg1[i]->unk30;
                t = arg0->unk90;
                f = ((f64)(s32)(t - arg0->unk92) / ((f64)t - 20.0)) * arg0->unk60;
                i = (i + 1) & 0xFF;
                v->unk20 = f;
                v->unk1C = f;
                v->unk18 = f;
            } while (i < arg0->unk94);
        }
    }
    if (arg0->unk90 < arg0->unk92++ ||(arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
