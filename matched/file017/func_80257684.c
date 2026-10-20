#include "context.h"

extern f64 D_8025DCB0;
extern f64 D_8025DCB8;

void func_80257684(func_80251820_Ctx *arg0, func_80251820_Args *arg1) {
    func_80251820_Inner *inner;

    arg0->unk90 = arg0->unk90 + 1;
    inner = arg1->unk0->unk30;
    if ((s32) inner->unk4B < 0xFC) {
        inner->unk4B = inner->unk4B + 4;
        inner = arg1->unk0->unk30;
    }
    inner->unk8 = (f32) (*(f32 *) (D_8025DE20 + 0x9C) + 45.0f);
    arg1->unk0->unk30->unk48 = D_801BBBF0[0x204];
    arg1->unk0->unk30->unk49 = D_801BBBF0[0x205];
    arg1->unk0->unk30->unk4A = D_801BBBF0[0x206];
    arg1->unk0->unk30->unk4C = D_801BBBF0[0x208];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0x209];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0x20A];
    inner = arg1->unk0->unk30;
    if ((f64) inner->unk18 < D_8025DCB0) {
        f64 step;
        step = D_8025DCB8;
        inner->unk18 = (f32) ((f64) inner->unk18 + step);
        inner = arg1->unk0->unk30;
        inner->unk1C = (f32) ((f64) inner->unk1C + step);
        inner = arg1->unk0->unk30;
        inner->unk20 = (f32) ((f64) inner->unk20 + step);
    }
}
