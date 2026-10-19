#include "context.h"

struct func_80243D94_Sub {
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
    u32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80243D94_Obj {
    u8 pad[0x30];
    struct func_80243D94_Sub *unk30;
};
struct func_80243D94_Arg {
    u8 pad[0x3C];
    s16 unk3C;
    u8 pad3E[0x56];
    f32 unk94;
};
struct func_80243D94_Vec { s32 a, b, c, d; };
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8000C3B0(void *);
extern u8 func_80243F38[];
extern struct func_80243D94_Vec D_80164F40;
extern s32 D_801BBCCC;

void func_80243D94(struct func_80243D94_Arg *arg0, struct func_80243D94_Obj **arg1) {
    struct func_80243D94_Vec sp28;
    f32 t;

    if (D_801BBCCC != 0) {
        sp28 = D_80164F40;
        sp28.b = 0x80000600;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x294, 2);
        (*arg1)->unk30->unk24 |= 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk20 = 1.0f;
        t = (*arg1)->unk30->unk20;
        (*arg1)->unk30->unk1C = t;
        (*arg1)->unk30->unk18 = t;
        (*arg1)->unk30->unk4 = 0.0f;
        (*arg1)->unk30->unk8 = 20.0f;
        (*arg1)->unk30->unkC = 0.0f;
        (*arg1)->unk30->unk12 = 0;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        arg0->unk94 = 0.0f;
        func_801FBB30(&D_801BBBF0);
        func_80020718(0x1AD);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243F38);
    }
}
