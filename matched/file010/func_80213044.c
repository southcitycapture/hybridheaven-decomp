#include "common.h"
struct func_802070F4_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
extern struct func_802070F4_Local D_80164F40;
extern u8 D_80217CE0[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_801FC830(f32, f32, f32, f32, s32);


typedef struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80213044_Inner;

typedef struct {
    u8 pad0[0x30];
    func_80213044_Inner *unk30;
} func_80213044_Outer;

typedef struct {
    func_80213044_Outer *unk0;
    func_80213044_Outer *unk4;
    func_80213044_Outer *unk8;
} func_80213044_Arg1;

typedef struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x92 - 0x3E];
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_80213044_Arg0;

void func_80213044(func_80213044_Arg0 *arg0, func_80213044_Arg1 *arg1) {
    struct func_802070F4_Local sp38;

    *(struct func_802070F4_Local *) (s32) &sp38 = D_80164F40;
    sp38.unk4 = 0x80000300;
    func_80005E44(arg0, (void *) (s32) &sp38);
    func_80005E44(arg0, (void *) (s32) &sp38);
    func_80005E44(arg0, (void *) (s32) &sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4B2, 0);
    func_8012D8C8(arg0, 0x4B2, 1, 0x3F800000, 1, 0);
    arg1->unk0->unk30->unk24 |= 0x60300;
    arg1->unk0->unk30->unk30 = (s32) D_80217CE0 | 0x40000000;
    arg1->unk0->unk30->unk4 = arg0->unk94;
    arg1->unk0->unk30->unk8 = arg0->unk98;
    arg1->unk0->unk30->unkC = arg0->unk9C;
    arg1->unk0->unk30->unk18 = 0.1f;
    arg1->unk0->unk30->unk1C = 0.0001f;
    arg1->unk0->unk30->unk20 = 0.1f;
    arg1->unk0->unk30->unk48 = 0xFF;
    arg1->unk0->unk30->unk49 = 0xE6;
    arg1->unk0->unk30->unk4A = 0;
    arg1->unk0->unk30->unk4B = 0;
    arg1->unk0->unk30->unk4C = 0xFF;
    arg1->unk0->unk30->unk4D = 0;
    arg1->unk0->unk30->unk4E = 0;
    func_8012C89C(arg0, 1, 0x4B5, 0);
    func_8012D918(arg0, 0x4B5, 1, 1, 0);
    arg1->unk4->unk30->unk24 |= 0x300;
    arg1->unk4->unk30->unk30 = (s32) D_80217CE0 | 0x40000000;
    arg1->unk4->unk30->unk4 = arg0->unk94;
    arg1->unk4->unk30->unk8 = arg0->unk98;
    arg1->unk4->unk30->unkC = arg0->unk9C;
    arg1->unk4->unk30->unk18 = 0.002f;
    arg1->unk4->unk30->unk1C = 0.002f;
    arg1->unk4->unk30->unk20 = 0.002f;
    arg1->unk4->unk30->unk48 = 0xFF;
    arg1->unk4->unk30->unk49 = 0xFF;
    arg1->unk4->unk30->unk4A = 0xFF;
    arg1->unk4->unk30->unk4B = 0xF0;
    arg1->unk4->unk30->unk4C = 0x66;
    arg1->unk4->unk30->unk4D = 0xCD;
    arg1->unk4->unk30->unk4E = 0x4C;
    func_8012C89C(arg0, 2, 3, 3);
    arg1->unk8->unk30->unk24 |= 0x300;
    arg1->unk8->unk30->unk30 = (s32) D_80217CE0 | 0x40000000;
    arg1->unk8->unk30->unk4 = arg0->unk94;
    arg1->unk8->unk30->unk8 = arg0->unk98;
    arg1->unk8->unk30->unkC = arg0->unk9C;
    arg1->unk8->unk30->unk18 = 0.002f;
    arg1->unk8->unk30->unk1C = 0.002f;
    arg1->unk8->unk30->unk20 = 0.002f;
    arg1->unk8->unk30->unk48 = 0xFF;
    arg1->unk8->unk30->unk49 = 0xFF;
    arg1->unk8->unk30->unk4A = 0xFF;
    arg1->unk8->unk30->unk4B = 0;
    arg1->unk8->unk30->unk4C = 0x66;
    arg1->unk8->unk30->unk4D = 0xCD;
    arg1->unk8->unk30->unk4E = 0x4C;
    arg0->unk3C = 0;
    arg0->unk92 = 0;
    func_801FC830(arg0->unk94, arg0->unk98, arg0->unk9C, 400.0f, 0x317);
}
