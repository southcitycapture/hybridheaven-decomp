#include "context.h"

typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; } func_80257B10_V5;
typedef struct {
    u8 pad[0x24];
    u32 unk24;
    u8 pad2[8];
    u32 unk30;
    u8 pad3[0x17];
    u8 unk4B, unk4C, unk4D, unk4E, unk4F;
} func_80257B10_In;
typedef struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    func_80257B10_In *unk30;
} func_80257B10_Mid;
typedef struct {
    func_80257B10_Mid *unk0, *unk4, *unk8;
} func_80257B10_A1;
typedef struct {
    u8 pad[0x2C];
    s32 unk2C;
    u8 pad2[0xC];
    s16 unk3C;
    u8 pad3[0x74 - 0x3E];
    s32 unk74;
} func_80257B10_A0;

extern func_80257B10_V D_80164F40;
extern u8 D_8017AF38[];
extern u8 D_8025A1D8[];
extern u8 D_8025A228[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);

void func_80257B10(func_80257B10_A0 *arg0, func_80257B10_A1 *arg1) {
    extern void func_80257DA0();
    func_80257B10_V sp20;

    sp20 = D_80164F40;
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x80000900;
    func_80005E44(arg0, &sp20);
    sp20.b = 0x800002FF;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 0);
    arg1->unk0->unk30->unk24 |= 0x400;
    arg1->unk0->unk30->unk30 = (u32)D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xC);
    arg1->unk4->unk30->unk24 |= 0x400;
    arg1->unk4->unk30->unk30 = (u32)D_8025A1D8 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x302, 0xC);
    arg1->unk8->unk30->unk24 |= 0x500;
    arg1->unk8->unk30->unk30 = (u32)D_8025A228 | 0x40000000;
    arg1->unk8->unk30->unk4B = 0xFF;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 1);
    arg0->unk3C = 0;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_80257DA0);
}
