#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
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
struct func_80241358_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
void func_80241358(struct func_80241358_Struct *arg0, void *arg1);
extern void func_80241784(s32, s32);


extern s32 D_80006214(void *);

struct func_802411F8_Struct { s32 a[4]; };
struct func_802411F8_StructQ { u8 pad24[0x24]; s32 unk24; s32 unk28; s32 unk2C; s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; };
struct func_802411F8_StructR { u8 pad[0x30]; struct func_802411F8_StructQ *unk30; };
struct func_802411F8_StructP { u8 pad9E[0x9E]; u16 unk9E; u16 unkA0; u16 unkA2; };

void func_802411F8(struct func_802411F8_StructP *arg0, struct func_802411F8_StructR **arg1) {
    struct func_802411F8_Struct sp28;

    sp28 = *(struct func_802411F8_Struct *)D_80164F40;
    sp28.a[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    D_80006214(arg0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4C = D_801BBBF0.unkF32;
    (*arg1)->unk30->unk4D = D_801BBBF0.unkF33;
    (*arg1)->unk30->unk4E = D_801BBBF0.unkF34;
    (*arg1)->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 0, arg0->unk9E, arg0->unkA0);
    if (func_80133A24(arg0->unkA2) == 0) {
        func_8012D918(arg0, 0x2F8, 0x10, 0, 0);
        func_800058DC(arg0, func_80241358);
        return;
    }
    func_8012D918(arg0, 0x2F8, 9, 0, 0);
    func_800058DC(arg0, func_80241784);
}
