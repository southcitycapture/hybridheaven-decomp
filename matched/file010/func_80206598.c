#include "context.h"

struct func_80206598_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80206598_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80206598_Outer {
    u8 pad0[0x30];
    struct func_80206598_Inner *unk30;
};
struct func_80206598_Arg0 {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0xA2 - 0x4C];
    s16 unkA2;
};
extern struct func_802070F4_Local D_80164F40;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8000C3B0(void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8012C6B4();
extern f32 D_8021A7C8;
extern f32 D_8021A7CC;
extern f64 D_8021A7D0;
extern f64 D_8021A7D8;

void func_80206598(struct func_80206598_Arg0 *arg0, struct func_80206598_Outer **arg1) {
    struct func_80206598_Local loc;
    u8 pad[4];

    loc = *(struct func_80206598_Local *)&D_80164F40;
    loc.unk4 = 0x80000900;
    func_80005E44(arg0, &loc);
    func_80005E44(arg0, &loc);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 2);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = D_8021A7C8;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0xCF, 3);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = D_8021A7CC;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[1]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[1]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[1]->unk30->unk4F = D_801BBBF0[0xF35];
    arg0->unk3C = func_8012C6B4(0x3C) + 10;
    arg0->unk44 = 0.0f;
    arg0->unk40 = func_8001EAD0(arg0->unkA2) * D_8021A7D0;
    arg0->unk48 = func_8001EB64(arg0->unkA2) * D_8021A7D8;
}
