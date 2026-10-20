#include "context.h"

typedef struct func_801D3998_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
} func_801D3998_Struct2;
typedef struct func_801D3998_Struct1 {
    u8 pad0[0x30];
    func_801D3998_Struct2 *unk30;
} func_801D3998_Struct1;
typedef struct func_801D3998_Struct0 {
    u8 pad0[0xC];
    u8 *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 pad7C[0x14];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D3998_Struct0;

void func_801D3998(func_801D3998_Struct0 *arg0, func_801D3998_Struct1 **arg1) {
    s32 i;
    f64 t;
    f64 d;
    s32 c;
    func_801D3998_Struct2 *o;

    func_801CD878(arg0, (void **)arg1);
    i = 0;
    if (arg0->unk94 > 0) do {
        o = arg1[i]->unk30;
        d = (2.0 * (f64)(f32)(u32)arg0->unk92) / (f64)(u32)arg0->unk90;
        if (d < 1.0) {
            t = -(d - 1.0);
        } else {
            t = d - 1.0;
        }
        o->unk4B = (u32)((1.0 - t) * (f64)(u32)arg0->unk7B);
        i = (i + 1) & 0xFF;
    } while (i < arg0->unk94);
    {
        i = arg0->unk92;
        c = arg0->unk90 < i;
        arg0->unk92 = i + 1;
        if (c || (((u16 *)arg0->unkC)[0x4C / 2] & 0x8000)) {
            func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
            func_800058DC(arg0, (s32)func_801CE898);
        }
    }
}
