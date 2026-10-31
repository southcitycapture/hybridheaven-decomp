#include "common.h"
extern s32 D_80006214(void *);
extern u8 D_80164F40[];
extern u8 D_8017AF90[];
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern s32 func_80133A24(u16);
struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_80240AA8(struct func_80240AA8_Struct *arg0, void *arg1);
void func_802411EC(s32 arg0, s32 arg1);



typedef struct func_802408F0_StructQ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_StructQ;

typedef struct func_802408F0_StructR {
    u8 pad[0x30];
    func_802408F0_StructQ *unk30;
} func_802408F0_StructR;

typedef struct func_802408F0_StructP {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
} func_802408F0_StructP;

typedef struct func_802408F0_Struct4 {
    s32 a[4];
} func_802408F0_Struct4;

void func_802408F0(func_802408F0_StructP *arg0, func_802408F0_StructR **arg1) {
    func_802408F0_Struct4 sp28;

    sp28 = *(func_802408F0_Struct4 *)D_80164F40;
    sp28.a[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    D_80006214(arg0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk12 = arg0->unk9C;
    (*arg1)->unk30->unk4C = D_801BBBF0.unkF32;
    (*arg1)->unk30->unk4D = D_801BBBF0.unkF33;
    (*arg1)->unk30->unk4E = D_801BBBF0.unkF34;
    (*arg1)->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 0, 0x305, 0);
    if (func_80133A24(arg0->unk9E) == 0) {
        func_8012D918(arg0, 0x2F8, 0x10, 0, 0);
        func_800058DC(arg0, (void *)func_80240AA8);
        return;
    }
    func_8012D918(arg0, 0x2F8, 9, 0, 0);
    (*arg1)->unk30->unk12 = (s16)((*arg1)->unk30->unk12 + 0x1000) & 0x1FFF;
    func_800058DC(arg0, (void *)func_802411EC);
}
