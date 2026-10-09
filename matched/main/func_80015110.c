#include "context.h"

struct func_80015110_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    s32 unk18;
    s32 unk1C;
    f32 unk20;
};

struct func_80015110_Local {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    u8 pad3C[4];
};

extern void func_80014B88(void *, s16, s16, s16);
extern void func_80014E14(void *, void *, s32, s32, f32);
extern void func_80029D30(void *, s32);

void func_80015110(s32 arg0, struct func_80015110_Struct *arg1) {
    struct func_80015110_Local sp28;

    func_80014B88(&sp28, arg1->unk10, arg1->unk12, arg1->unk14);
    func_80014E14(&sp28, &sp28, arg1->unk18, arg1->unk1C, arg1->unk20);
    sp28.unk30 = arg1->unk4;
    sp28.unk34 = arg1->unk8;
    sp28.unk38 = arg1->unkC;
    func_80029D30(&sp28, arg0);
}
