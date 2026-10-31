#include "common.h"
#define HH_PASTE2(a, b) a##b
#define HH_PASTE(a, b) HH_PASTE2(a, b)
typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_80257B10_V;
extern func_80257B10_V D_80164F40;
extern u8 *D_8025DE20;
extern void func_800058DC();
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D814(void *, s32, s32, s32, s32);
typedef struct func_802564DC_StructB {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x3F];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802564DC_StructB;
typedef struct func_802564DC_StructA {
    u8 pad0[0x30];
    func_802564DC_StructB *unk30;
} func_802564DC_StructA;
void func_802564DC(s32 arg0, func_802564DC_StructA **arg1);


typedef struct func_80256314_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80256314_StructB;
typedef struct func_80256314_StructA {
    u8 pad0[0x30];
    func_80256314_StructB *unk30;
} func_80256314_StructA;
typedef struct func_80256314_Obj {
    u8 pad0[0x90];
    u16 unk90;
} func_80256314_Obj;

extern u8 D_80175C58[];
extern f32 D_8025DC48;

void func_80256314(func_80256314_Obj *arg0, func_80256314_StructA **arg1) {
    func_80257B10_V sp28;

    sp28 = D_80164F40;
    sp28.b = 0x80000300;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D814(arg0, 0x4B1, 0, 0x3F800000, 1);
    (*arg1)->unk30->unk24 |= 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80175C58 | 0x40000000;
    (*arg1)->unk30->unk4 = *(f32 *)(D_8025DE20 + 0x98);
    (*arg1)->unk30->unk8 = *(f32 *)(D_8025DE20 + 0x9C) + 43.0f;
    (*arg1)->unk30->unkC = *(f32 *)(D_8025DE20 + 0xA0);
    (*arg1)->unk30->unk18 = 0.23999999463558197f;
    (*arg1)->unk30->unk1C = 0.23999999463558197f;
    (*arg1)->unk30->unk20 = 0.23999999463558197f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0xFF;
    (*arg1)->unk30->unk4D = 0x1A;
    (*arg1)->unk30->unk4E = 0x40;
    arg0->unk90 = 0;
    func_800058DC(arg0, func_802564DC, &D_8025DE20);
}
