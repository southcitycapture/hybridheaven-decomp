#include "context.h"

typedef struct func_801D2AA4_Inner {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D2AA4_Inner;

typedef struct func_801D2AA4_Obj {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D2AA4_Obj;

typedef struct func_801D2AA4_Struct {
    u8 pad0[0xC];
    func_801D2AA4_Inner *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D2AA4_Struct;

extern f64 D_801E3638;
extern f64 D_801E3640;

void func_801D2AA4(func_801D2AA4_Struct *arg0, s32 **arg1) {
    s32 i;
    u16 t;
    func_801D2AA4_Obj *o;
    f64 k1;
    f64 k9;
    f32 x;
    f32 z;

    func_801CD878(arg0, arg1);
    i = 0;
    if (arg0->unk94 > 0) {
        k9 = D_801E3638;
        k1 = D_801E3640;
        do {
            o = *(func_801D2AA4_Obj **)((u8 *)arg1[i] + 0x30);
            i = (i + 1) & 0xFF;
            x = o->unk4;
            z = o->unkC;
            goto l;
        l:
            o->unk4 = x + (x - arg0->unk6C) * k1;
            o->unkC = z + (z - arg0->unk74) * k1;
            o->unk20 = o->unk20 * k9;
            o->unk1C = o->unk20;
            goto m;
        m:
            o->unk18 = o->unk20;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ ||(arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((func_801CE5B0_Struct *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)&func_801CE898);
    }
}
