#include "context.h"
extern struct func_802441AC_Struct D_801BBBF0;

extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80243828(void);
extern u8 D_8017AD28[];

struct func_802436EC_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802436EC_Struct1 {
    u8 pad0[0x30];
    struct func_802436EC_Struct2 *unk30;
};

struct func_802436EC_Struct3 {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

struct func_802436EC_Struct0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

void func_802436EC(struct func_802436EC_Struct3 *arg0, struct func_802436EC_Struct1 **arg1) {
    struct func_802436EC_Struct0 sp20;

    sp20 = *(struct func_802436EC_Struct0 *) D_80164F40;
    sp20.unk4 = 0x80000900;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x2FA, 7);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x400;
    (*arg1)->unk30->unk30 = (s32) D_8017AD28 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk4C = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF32);
    (*arg1)->unk30->unk4D = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF33);
    (*arg1)->unk30->unk4E = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF34);
    (*arg1)->unk30->unk4F = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF35);
    func_800058DC(arg0, (void *) func_80243828);
}
