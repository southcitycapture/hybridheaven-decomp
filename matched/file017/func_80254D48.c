#include "context.h"
void func_802550A8(void *arg0);

typedef struct func_80254D48_Struct {
    u8 pad0[0x90];
    s16 unk90;
    s16 unk92;
    u8 pad94[4];
    f32 unk98;
    f32 unk9C;
    f32 unkA0;
} func_80254D48_Struct;

extern u8 D_80175C58[];
extern u8 D_80259920[];
extern u8 D_80259978[];
extern f32 D_8025DBF8;
extern f32 D_8025DBFC;
extern f32 D_8025DC00;

void func_80254D48(func_80254D48_Struct *arg0, func_80251820_Args *arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(func_80257B10_V *)&sp20 = D_80164F40;
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    sp20.a[1] = 0x80000300;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (u8 *)arg1->unk0->unk30 + 0x40, 0x375, 0);
    k = D_8025DBF8;
    arg1->unk0->unk30->unk24 |= 0x60300;
    arg1->unk0->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    arg1->unk0->unk30->unk18 = k;
    arg1->unk0->unk30->unk1C = k;
    arg1->unk0->unk30->unk20 = k;
    arg1->unk0->unk30->unk48 = 0xFF;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0xFF;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = 0x1A;
    arg1->unk0->unk30->unk4D = 0xFF;
    arg1->unk0->unk30->unk4E = 0x66;
    arg1->unk0->unk22 = 0;
    func_8012C89C(arg0, 1, 0x4D9, 0);
    k = D_8025DBFC;
    arg1->unk4->unk30->unk24 |= 0x500;
    arg1->unk4->unk30->unk30 = (u32)D_80259920 | 0x40000000;
    arg1->unk4->unk30->unk18 = k;
    arg1->unk4->unk30->unk1C = k;
    arg1->unk4->unk30->unk20 = k;
    arg1->unk4->unk30->unk48 = 0;
    arg1->unk4->unk30->unk49 = 0;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk4B = 0xFF;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 2, 0x4D9, 0);
    k = D_8025DC00;
    arg1->unk8->unk30->unk24 |= 0x100;
    arg1->unk8->unk30->unk30 = (u32)D_80259978 | 0x40000000;
    arg1->unk8->unk30->unk18 = k;
    arg1->unk8->unk30->unk1C = k;
    arg1->unk8->unk30->unk20 = k;
    arg1->unk8->unk30->unk48 = 0;
    arg1->unk8->unk30->unk49 = 0;
    arg1->unk8->unk30->unk4A = 0;
    arg1->unk8->unk30->unk4B = 0;
    arg1->unk8->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk98 = 0.0f;
    arg0->unk9C = 0.0f;
    arg0->unkA0 = 0.0f;
    func_8001F74C(arg0);
    func_800058DC(arg0, func_802550A8);
}
