#include "context.h"

typedef struct func_8013581C_Sub {
    u8 pad0[0x8];
    f32 unk8;
} func_8013581C_Sub;

typedef struct func_8013581C_Mid {
    u8 pad0[0x30];
    func_8013581C_Sub *unk30;
} func_8013581C_Mid;

typedef struct func_8013581C_Inner {
    u8 pad0[0x8];
    s16 unk8;
    u8 padA[0x18 - 0xA];
    u32 unk18;
} func_8013581C_Inner;

typedef struct func_8013581C_Obj {
    u8 pad0[0x38];
    func_8013581C_Inner *unk38;
    u8 pad3C[0x5C - 0x3C];
    s16 unk5C;
} func_8013581C_Obj;

void func_8013581C(func_8013581C_Obj *arg0, func_8013581C_Mid **arg1) {
    s32 hi;
    f32 t;
    f32 r;
    f32 base;

    hi = (arg0->unk38->unk18 >> 16) & 0xFF;
    t = (f32)(arg0->unk38->unk18 & 0xFF);
    r = (arg0->unk5C + 1.0) / ((f64)(u32)hi + 1.0);
    base = (f32)arg0->unk38->unk8 / 10.0;
    (*arg1)->unk30->unk8 = (t - base) * r + base;
    arg0->unk5C = arg0->unk5C + 1;
    if (arg0->unk5C >= hi) {
        arg0->unk5C = 0;
    }
}
