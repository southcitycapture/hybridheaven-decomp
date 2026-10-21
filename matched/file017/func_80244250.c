#include "context.h"

typedef struct func_80244250_StructIn {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0xE];
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
    u8 unk4F;
} func_80244250_StructIn;

typedef struct func_80244250_StructObj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80244250_StructIn *unk30;
} func_80244250_StructObj;

typedef struct func_80244250_StructA1 {
    func_80244250_StructObj *o[10];
} func_80244250_StructA1;

typedef struct func_80244250_StructA0 {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    u16 unk90;
    u8 unk92;
} func_80244250_StructA0;

typedef struct func_80244250_StructSp {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} func_80244250_StructSp;

extern func_80244250_StructSp D_80164F40;
extern u8 D_80258758[];
extern u8 D_802587F8[];
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern void func_80005E44();
extern void func_80006214();
extern void func_8012C89C();
extern void func_8012D918();
extern s32 func_8012C97C();
extern void func_80244E2C();
extern void func_800058DC();
extern s32 func_80133A24();
struct func_80244D1C_Struct;
void func_80244D1C(struct func_80244D1C_Struct *arg0, void *arg1);

void func_80244250(func_80244250_StructA0 *arg0, func_80244250_StructA1 *arg1) {
    func_80244250_StructSp sp40;
    s32 i;
    func_80244250_StructObj **p;
    s32 sp34;
    s32 sp30;
    s32 sp2C;

    sp40 = D_80164F40;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000900;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    func_80006214(arg0);
    func_8012C89C(arg0, 1, 0x2FB, 6);
    func_8012D918(arg0, 0x2F8, 0xA, 1, 0);
    arg1->o[1]->unk30->unk24 |= 0x4000;
    arg1->o[1]->unk30->unk30 = (u32)D_80258758 | 0x40000000;
    arg1->o[1]->unk30->unk4C = 0;
    arg1->o[1]->unk30->unk4D = 0;
    arg1->o[1]->unk30->unk4E = 0xFF;
    arg1->o[1]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 2, 0x306, 0);
    func_8012D918(arg0, 0x306, 4, 2, 0);
    arg1->o[2]->unk30->unk24 |= 0x4100;
    arg1->o[2]->unk30->unk30 = (u32)D_802587F8 | 0x40000000;
    arg1->o[2]->unk30->unk4 = -364.0f;
    arg1->o[2]->unk30->unk8 = 0.0f;
    arg1->o[2]->unk30->unkC = 0.0f;
    arg1->o[2]->unk30->unk48 = 0xFA;
    arg1->o[2]->unk30->unk49 = 2;
    arg1->o[2]->unk30->unk4A = 0x4F;
    arg1->o[2]->unk30->unk4B = 0xE6;
    arg1->o[2]->unk30->unk4C = 0;
    arg1->o[2]->unk30->unk4D = 0;
    arg1->o[2]->unk30->unk4E = 0xFF;
    arg1->o[2]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 3, 0x306, 1);
    func_8012D918(arg0, 0x306, 4, 3, 0);
    arg1->o[3]->unk30->unk24 |= 0x4100;
    arg1->o[3]->unk30->unk30 = (u32)D_802587F8 | 0x40000000;
    arg1->o[3]->unk30->unk4 = -374.0f;
    arg1->o[3]->unk30->unk8 = 0.0f;
    arg1->o[3]->unk30->unkC = 0.0f;
    arg1->o[3]->unk30->unk48 = 0x1B;
    arg1->o[3]->unk30->unk49 = 0xFA;
    arg1->o[3]->unk30->unk4A = 0;
    arg1->o[3]->unk30->unk4B = 0xE6;
    arg1->o[3]->unk30->unk4C = 0;
    arg1->o[3]->unk30->unk4D = 0;
    arg1->o[3]->unk30->unk4E = 0xFF;
    arg1->o[3]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 4, 0x306, 2);
    func_8012D918(arg0, 0x306, 4, 4, 0);
    arg1->o[4]->unk30->unk24 |= 0x4100;
    arg1->o[4]->unk30->unk30 = (u32)D_802587F8 | 0x40000000;
    arg1->o[4]->unk30->unk4 = -384.0f;
    arg1->o[4]->unk30->unk8 = 0.0f;
    arg1->o[4]->unk30->unkC = 0.0f;
    arg1->o[4]->unk30->unk48 = 0x3D;
    arg1->o[4]->unk30->unk49 = 5;
    arg1->o[4]->unk30->unk4A = 0xFE;
    arg1->o[4]->unk30->unk4B = 0xE6;
    arg1->o[4]->unk30->unk4C = 0;
    arg1->o[4]->unk30->unk4D = 0;
    arg1->o[4]->unk30->unk4E = 0xFF;
    arg1->o[4]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 5, 0x306, 3);
    func_8012D918(arg0, 0x306, 4, 5, 0);
    arg1->o[5]->unk30->unk24 |= 0x4100;
    arg1->o[5]->unk30->unk30 = (u32)D_802587F8 | 0x40000000;
    arg1->o[5]->unk30->unk4 = -394.0f;
    arg1->o[5]->unk30->unk8 = 0.0f;
    arg1->o[5]->unk30->unkC = 0.0f;
    arg1->o[5]->unk30->unk48 = 0xE2;
    arg1->o[5]->unk30->unk49 = 0xFE;
    arg1->o[5]->unk30->unk4A = 5;
    arg1->o[5]->unk30->unk4B = 0xE6;
    arg1->o[5]->unk30->unk4C = 0;
    arg1->o[5]->unk30->unk4D = 0;
    arg1->o[5]->unk30->unk4E = 0xFF;
    arg1->o[5]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 6, 0x2FB, 2);
    if (func_80133A24(0x117) != 0) {
        func_8012D918(arg0, 0x2F8, 1, 6, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 6, 0);
    }
    arg1->o[6]->unk30->unk24 |= 0x400;
    arg1->o[6]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
    arg1->o[6]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[6]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[6]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[6]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 7, 0x2FB, 3);
    if (func_80133A24(0x116) != 0) {
        func_8012D918(arg0, 0x2F8, 1, 7, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 7, 0);
    }
    arg1->o[7]->unk30->unk24 |= 0x400;
    arg1->o[7]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
    arg1->o[7]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[7]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[7]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[7]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 8, 0x2FB, 4);
    if (func_80133A24(0x115) != 0) {
        func_8012D918(arg0, 0x2F8, 1, 8, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 8, 0);
    }
    arg1->o[8]->unk30->unk24 |= 0x400;
    arg1->o[8]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
    arg1->o[8]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[8]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[8]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[8]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 9, 0x2FB, 5);
    if (func_80133A24(0x114) != 0) {
        func_8012D918(arg0, 0x2F8, 1, 9, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 9, 0);
    }
    arg1->o[9]->unk30->unk24 |= 0x400;
    arg1->o[9]->unk30->unk30 = (u32)D_8017AF90 | 0x40000000;
    arg1->o[9]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->o[9]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->o[9]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->o[9]->unk30->unk4F = D_801BBBF0[0xF35];
    sp2C = func_80133A24(0x11A) == 0;
    sp30 = func_80133A24(0x119) == 0;
    sp34 = func_80133A24(0x118) == 0;
    arg0->unk92 = (func_80133A24(0x11B) == 0) + sp34 + sp30 + sp2C;
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    if (arg0->unk92 != 0) {
        for (i = 0; i < 4 - arg0->unk92; i++) {
            arg1->o[i + 2]->unk22 = 0;
        }
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x306, 5);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = arg0->unk92 * 10 - 0x194;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg1->o[0]->unk30->unk4 = arg0->unk78;
        arg1->o[0]->unk30->unk8 = arg0->unk7C;
        arg1->o[0]->unk30->unkC = arg0->unk80;
        arg1->o[0]->unk30->unk10 = arg0->unk84;
        arg1->o[0]->unk30->unk12 = arg0->unk86;
        arg1->o[0]->unk30->unk14 = arg0->unk88;
    } else {
        p = &arg1->o[2];
        for (i = 0; i < 4; i++) {
            p[i]->unk22 = 0;
        }
    }
    arg0->unk3C = 0;
    if (func_80133A24(0x128) != 0 || func_80133A24(0x129) != 0 ||
        func_80133A24(0x12A) != 0 || func_80133A24(0x12B) != 0) {
        arg1->o[5 - arg0->unk92]->unk22 = 1;
        func_800058DC(arg0, func_80244E2C);
        return;
    }
    func_800058DC(arg0, func_80244D1C);
}
