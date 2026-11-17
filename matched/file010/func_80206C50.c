#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8012CF8C(void *, void *, s32, s32);


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
    u8 pad14[4];
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
} func_80206C50_Inner;
typedef struct {
    u8 pad0[0x30];
    func_80206C50_Inner *unk30;
} func_80206C50_Outer;
typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    u16 unk84;
    u16 unk86;
    u16 unk88;
    u8 pad8A[0x94 - 0x8A];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
} func_80206C50_Arg0;
typedef struct {
    func_80206C50_Outer *unk0;
    func_80206C50_Outer *unk4;
} func_80206C50_Arg1;


#define SETUP(o) o->unk30->unk24 |= 0x400; o->unk30->unk30 = (s32) D_8017AF90 | 0x40000000; o->unk30->unk18 = 0.01f; o->unk30->unk1C = 0.01f; o->unk30->unk20 = 0.01f; o->unk30->unk4C = D_801BBBF0[0xF32]; o->unk30->unk4D = D_801BBBF0[0xF33]; o->unk30->unk4E = D_801BBBF0[0xF34]; o->unk30->unk4F = D_801BBBF0[0xF35]; o->unk30->unk4 = arg0->unk94; o->unk30->unk8 = arg0->unk98; o->unk30->unkC = arg0->unk9C; o->unk30->unk12 = arg0->unkA2;
void func_80206C50(func_80206C50_Arg0 *arg0, func_80206C50_Arg1 *arg1)
{
    struct func_802070F4_Local sp28;

    sp28 = D_80164F40;
    sp28.unk4 = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD2, 0);
    func_8012CF8C(arg0, ((u8 *) arg1->unk0->unk30) + 0x40, 0xD2, 3);
    SETUP(arg1->unk0)
    func_8012C89C(arg0, 1, 0xD2, 1);
    SETUP(arg1->unk4)
    arg0->unk2C |= 0x800;
    arg0->unk74 = func_8012C97C(0xD2, 2);
    arg0->unk84 = 0;
    arg0->unk88 = 0;
    arg0->unk78 = arg0->unk94;
    arg0->unk7C = arg0->unk98;
    arg0->unk80 = arg0->unk9C;
    arg0->unk86 = arg0->unkA2;
}
