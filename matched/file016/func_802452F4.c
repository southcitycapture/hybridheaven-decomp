#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f32 D_8024F090;
extern f32 D_8024F094;

typedef struct func_802452F4_StructB {
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
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802452F4_StructB;

typedef struct func_802452F4_StructA {
    func_802452F4_StructB *unk0;
} func_802452F4_StructA;

typedef struct func_802452F4_StructC {
    u8 pad0[0x30];
    func_802452F4_StructB *unk30;
} func_802452F4_StructC;

typedef struct func_802452F4_StructD {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x48];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    u16 unkA2;
} func_802452F4_StructD;

void func_802452F4(func_802452F4_StructD *arg0, func_802452F4_StructC **arg1) {
    func_80242080_Struct3 sp30;
    u8 pad[16];

    sp30 = D_80164F40;
    sp30.unk4 = 0x80000300;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xCF, 7);
    (*arg1)->unk30->unk24 |= 0x300;
    (*arg1)->unk30->unk30 = (s32)D_80249A58 | 0x40000000;
    (*arg1)->unk30->unk1C = D_8024F090;
    (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C;
    (*arg1)->unk30->unk20 = D_8024F094;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xC8;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk12 = arg0->unkA2;
    arg0->unk40 = func_8001EAD0((s16)arg0->unkA2) * 14.0f;
    arg0->unk48 = func_8001EB64((s16)arg0->unkA2) * 14.0f;
    arg0->unk44 = 0.0f;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x314);
}
