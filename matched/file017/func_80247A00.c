#include "context.h"

typedef struct func_80247A00_StructT {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0xC];
    u8 unk22;
    u8 pad23;
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
} func_80247A00_StructT;
typedef struct func_80247A00_StructN {
    u8 pad[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80247A00_StructT *unk30;
} func_80247A00_StructN;
typedef struct func_80247A00_StructA {
    func_80247A00_StructN *n[8];
} func_80247A00_StructA;
typedef struct func_80247A00_StructO {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0xC];
    s16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
    u8 pad8A[6];
    s16 unk90;
    u8 unk92;
} func_80247A00_StructO;
typedef struct func_80247A00_StructV {
    s32 a, b, c, d;
} func_80247A00_StructV;

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern void func_80241854(f32, f32, f32, s32, s32, s32, s32);
extern func_80247A00_StructV D_80164F40;
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern u8 D_80258AA8[];
extern u8 D_80258B48[];
extern f32 D_8025CABC;
extern f32 D_8025CAC0;
extern u8 D_801BBBF0[];
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8012D918(s32, s32, s32, s32, s32);
extern s32 func_80133A24(s32);
struct func_802482A0_StructObj;
void func_802482A0(struct func_802482A0_StructObj *arg0, s32 arg1);
struct func_8024836C_Struct;
void func_8024836C(struct func_8024836C_Struct *arg0, s32 *arg1);

void func_80247A00(func_80247A00_StructO *arg0, func_80247A00_StructA *arg1) {
    func_80247A00_StructV sp40;
    s32 t;
    s32 i;
    s32 sp34;

    sp40 = D_80164F40;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000900;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000C00;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000C00;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    sp40.b = 0x80000600;
    func_80005E44(arg0, &sp40);
    func_80006214(arg0);
    func_8012C89C(arg0, 1, 0x2FF, 6);
    func_8012D918((s32)arg0, 0x2F8, 0xA, 1, 0);
    arg1->n[1]->unk30->unk24 |= 0x4000;
    arg1->n[1]->unk30->unk30 = (u32)D_80258AA8 | 0x40000000;
    arg1->n[1]->unk30->unk4C = 0;
    arg1->n[1]->unk30->unk4D = 0;
    arg1->n[1]->unk30->unk4E = 0xFF;
    arg1->n[1]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 2, 0x306, 0);
    func_8012D918((s32)arg0, 0x306, 4, 2, 0);
    arg1->n[2]->unk30->unk24 |= 0x4100;
#define sp30 ((u32)D_80258B48 | 0x40000000)
    arg1->n[2]->unk30->unk30 = sp30;
    arg1->n[2]->unk30->unk4 = -360.0f;
    arg1->n[2]->unk30->unk8 = -200.0f;
    arg1->n[2]->unk30->unkC = 0.0f;
    arg1->n[2]->unk30->unk12 = 0;
    arg1->n[2]->unk30->unk48 = 0xFA;
    arg1->n[2]->unk30->unk49 = 2;
    arg1->n[2]->unk30->unk4A = 0x4F;
    arg1->n[2]->unk30->unk4B = 0xE6;
    arg1->n[2]->unk30->unk4C = 0;
    arg1->n[2]->unk30->unk4D = 0;
    arg1->n[2]->unk30->unk4E = 0xFF;
    arg1->n[2]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 3, 0x306, 1);
    func_8012D918((s32)arg0, 0x306, 4, 3, 0);
    arg1->n[3]->unk30->unk24 |= 0x4100;
    arg1->n[3]->unk30->unk30 = sp30;
    arg1->n[3]->unk30->unk4 = -370.0f;
    arg1->n[3]->unk30->unk8 = -200.0f;
    arg1->n[3]->unk30->unkC = 0.0f;
    arg1->n[3]->unk30->unk12 = 0;
    arg1->n[3]->unk30->unk48 = 0x1B;
    arg1->n[3]->unk30->unk49 = 0xFA;
    arg1->n[3]->unk30->unk4A = 0;
    arg1->n[3]->unk30->unk4B = 0xE6;
    arg1->n[3]->unk30->unk4C = 0;
    arg1->n[3]->unk30->unk4D = 0;
    arg1->n[3]->unk30->unk4E = 0xFF;
    arg1->n[3]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 4, 0x2FF, 2);
    func_8012D918((s32)arg0, 0x2F8, 1, 4, 0);
    arg1->n[4]->unk30->unk24 |= 0x400;
#undef sp30
#define sp30 ((u32)D_8017AF90 | 0x40000000)
    arg1->n[4]->unk30->unk30 = sp30;
    arg1->n[4]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->n[4]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->n[4]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->n[4]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 5, 0x2FF, 3);
    func_8012D918((s32)arg0, 0x2F8, 1, 5, 0);
    arg1->n[5]->unk30->unk24 |= 0x400;
    arg1->n[5]->unk30->unk30 = sp30;
    arg1->n[5]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->n[5]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->n[5]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->n[5]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 6, 0x2FF, 4);
    if (func_80133A24(0x125) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 6, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 6, 0);
    }
    arg1->n[6]->unk30->unk24 |= 0x400;
    arg1->n[6]->unk30->unk30 = sp30;
    arg1->n[6]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->n[6]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->n[6]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->n[6]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 7, 0x2FF, 5);
    if (func_80133A24(0x124) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 7, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 7, 0);
    }
    arg1->n[7]->unk30->unk24 |= 0x400;
    arg1->n[7]->unk30->unk30 = sp30;
    arg1->n[7]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->n[7]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->n[7]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->n[7]->unk30->unk4F = D_801BBBF0[0xF35];
    func_80241854(D_8025CABC, -200.0f, 20.0f, 0x1000, 0x2FF, 9, 0x122);
    func_80241854(D_8025CAC0, -200.0f, -20.0f, 0, 0x2FF, 8, 0x123);
    sp34 = func_80133A24(0x126) == 0;
    t = (func_80133A24(0x127) == 0) + sp34;
    arg0->unk92 = t;
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    if (arg0->unk92 != 0) {
        for (i = 0; i < 2 - arg0->unk92; i++) {
            arg1->n[i + 2]->unk22 = 0;
        }
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x306, 5);
        arg0->unk78 = (f32)(arg0->unk92 * 10 - 0x17C);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk7C = -200.0f;
        arg0->unk80 = 0.0f;
        arg1->n[0]->unk30->unk4 = arg0->unk78;
        arg1->n[0]->unk30->unk8 = arg0->unk7C;
        arg1->n[0]->unk30->unkC = arg0->unk80;
        arg1->n[0]->unk30->unk10 = arg0->unk84;
        arg1->n[0]->unk30->unk12 = arg0->unk86;
        arg1->n[0]->unk30->unk14 = arg0->unk88;
    } else {
        for (i = 2; i < 4; i++) {
            arg1->n[i]->unk22 = 0;
        }
    }
    if (func_80133A24(0x128) != 0 || func_80133A24(0x129) != 0) {
        arg1->n[3 - arg0->unk92]->unk22 = 1;
        func_800058DC(arg0, (void *)func_8024836C);
        return;
    }
    func_800058DC(arg0, (void *)func_802482A0);
}
