#include "common.h"
typedef struct func_80242080_Struct3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} func_80242080_Struct3;
extern func_80242080_Struct3 D_80164F40;
void func_80005E44(void *, void *);
extern s32 D_80006214(void *);
#define func_80006214 D_80006214
extern s32 func_8001EF38(f32, f32);
void func_8012C89C(void *, s32, s32, s32);
void func_802467B0(f32 arg0, f32 arg1, s32 arg2, s32 arg3);


typedef struct func_80244CA8_StructB {
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
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244CA8_StructB;
typedef struct func_80244CA8_StructModel {
    u8 pad0[0x30];
    func_80244CA8_StructB *unk30;
} func_80244CA8_StructModel;
typedef struct func_80244CA8_StructObj {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x46];
    s16 unk92;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
    u8 padA0[2];
    s16 unkA2;
} func_80244CA8_StructObj;
typedef struct func_80244CA8_StructG {
    u8 pad0[0xE0];
    u8 **unkE0;
} func_80244CA8_StructG;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern f32 D_8024F054;
extern f64 D_8024F058;
extern f64 D_8024F060;
extern f32 func_8002FC20(f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

#define T ((func_80244CA8_StructB *)((func_80244CA8_StructG *)D_801BBBF0)->unkE0[0xB])
void func_80244CA8(func_80244CA8_StructObj *arg0, func_80244CA8_StructModel **arg1) {
    func_80242080_Struct3 sp30;
    f32 dx;
    f32 dz;
    f32 sp24;
    f32 k;
    sp30 = D_80164F40;
    sp30.unk4 = 0x80000900;
    func_80005E44(arg0, &sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0xD1, 0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk20 = D_8024F054;
    k = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = k;
    (*arg1)->unk30->unk18 = k;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    arg0->unkA2 = func_8001EF38(T->unk4 - arg0->unk94, T->unkC - arg0->unk9C);
    dx = T->unk4 - arg0->unk94;
    dz = T->unkC - arg0->unk9C;
    sp24 = func_8002FC20(dx * dx + dz * dz) * D_8024F058 * D_8024F060;
    arg0->unk40 = func_8001EAD0(arg0->unkA2) * sp24;
    arg0->unk48 = func_8001EB64(arg0->unkA2) * sp24;
    arg0->unk92 = 0;
    arg0->unk44 = 4.0f;
    func_802467B0(arg0->unk94, arg0->unk98, *(s32 *)&arg0->unk9C, 0x316);
}
