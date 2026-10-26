#include "context.h"

struct func_80246290_StructB {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad1[0x24 - 0x16];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
};
struct func_80246290_StructN {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_80246290_StructB *unk30;
};
struct func_80246290_StructA {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x3C - 0x30];
    s16 unk3C;
    u8 pad2[0x74 - 0x3E];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad3[0x90 - 0x8A];
    s16 unk90;
    u8 unk92;
};
struct func_80246290_Sq { u32 a, b, c, d; };
struct func_80246290_Glob { u8 pad[0xF32]; u8 unkF32, unkF33, unkF34, unkF35; };
extern struct func_80246290_Glob D_801BBBF0;
struct func_80246B40_StructObj;
void func_80246B40(struct func_80246B40_StructObj *arg0, s32 arg1);
extern void func_8012D918(s32, s32, s32, s32, s32);
extern void func_80005E44();
extern void func_80006214();
extern void func_8012C89C();
extern s32 func_8012C97C(s32, s32);
extern void func_80241854(f32, f32, f32, s32, s32, s32, s32);
extern u8 D_80258918[];
extern u8 D_802589B8[];
extern u8 D_8017AF90[];
extern u8 func_80246C0C[];

void func_80246290(struct func_80246290_StructA *arg0, struct func_80246290_StructN **arg1) {
    struct func_80246290_Sq sp;
    u32 sp30;

    sp = *(struct func_80246290_Sq *)D_80164F40;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000900;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000C00;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000C00;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    sp.b = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 1, 0x2FD, 6);
    func_8012D918((s32)arg0, 0x2F8, 0xA, 1, 0);
    arg1[1]->unk30->unk24 |= 0x4000;
    arg1[1]->unk30->unk30 = (u32)D_80258918 | 0x40000000;
    arg1[1]->unk30->unk4C = 0;
    arg1[1]->unk30->unk4D = 0;
    arg1[1]->unk30->unk4E = 0xFF;
    arg1[1]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 2, 0x306, 0);
    func_8012D918((s32)arg0, 0x306, 4, 2, 0);
    sp30 = (u32)D_802589B8 | 0x40000000;
    arg1[2]->unk30->unk24 |= 0x4100;
    arg1[2]->unk30->unk30 = sp30;
    arg1[2]->unk30->unk4 = 364.0f;
    arg1[2]->unk30->unk8 = -100.0f;
    arg1[2]->unk30->unkC = 0.0f;
    arg1[2]->unk30->unk12 = 0x1000;
    arg1[2]->unk30->unk48 = 0xFA;
    arg1[2]->unk30->unk49 = 2;
    arg1[2]->unk30->unk4A = 0x4F;
    arg1[2]->unk30->unk4B = 0xE6;
    arg1[2]->unk30->unk4C = 0;
    arg1[2]->unk30->unk4D = 0;
    arg1[2]->unk30->unk4E = 0xFF;
    arg1[2]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 3, 0x306, 1);
    func_8012D918((s32)arg0, 0x306, 4, 3, 0);
    arg1[3]->unk30->unk24 |= 0x4100;
    arg1[3]->unk30->unk30 = sp30;
    arg1[3]->unk30->unk4 = 374.0f;
    arg1[3]->unk30->unk8 = -100.0f;
    arg1[3]->unk30->unkC = 0.0f;
    arg1[3]->unk30->unk12 = 0x1000;
    arg1[3]->unk30->unk48 = 0x1B;
    arg1[3]->unk30->unk49 = 0xFA;
    arg1[3]->unk30->unk4A = 0;
    arg1[3]->unk30->unk4B = 0xE6;
    arg1[3]->unk30->unk4C = 0;
    arg1[3]->unk30->unk4D = 0;
    arg1[3]->unk30->unk4E = 0xFF;
    arg1[3]->unk30->unk4F = 0xFF;
    func_8012C89C(arg0, 4, 0x2FD, 2);
    func_8012D918((s32)arg0, 0x2F8, 1, 4, 0);
    sp30 = (u32)D_8017AF90 | 0x40000000;
    arg1[4]->unk30->unk24 |= 0x400;
    arg1[4]->unk30->unk30 = sp30;
    arg1[4]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[4]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[4]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[4]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 5, 0x2FD, 3);
    func_8012D918((s32)arg0, 0x2F8, 1, 5, 0);
    arg1[5]->unk30->unk24 |= 0x400;
    arg1[5]->unk30->unk30 = sp30;
    arg1[5]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[5]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[5]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[5]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 6, 0x2FD, 4);
    if (func_80133A24(0x11E) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 6, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 6, 0);
    }
    arg1[6]->unk30->unk24 |= 0x400;
    arg1[6]->unk30->unk30 = sp30;
    arg1[6]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[6]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[6]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[6]->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 7, 0x2FD, 5);
    if (func_80133A24(0x11F) != 0) {
        func_8012D918((s32)arg0, 0x2F8, 1, 7, 0);
    } else {
        func_8012D918((s32)arg0, 0x2F8, 0, 7, 0);
    }
    arg1[7]->unk30->unk24 |= 0x400;
    arg1[7]->unk30->unk30 = sp30;
    arg1[7]->unk30->unk4C = D_801BBBF0.unkF32;
    arg1[7]->unk30->unk4D = D_801BBBF0.unkF33;
    arg1[7]->unk30->unk4E = D_801BBBF0.unkF34;
    arg1[7]->unk30->unk4F = D_801BBBF0.unkF35;
    func_80241854(390.0f, -100.0f, 20.0f, 0x1000, 0x2FD, 8, 0x11C);
    func_80241854(390.0f, -100.0f, -20.0f, 0, 0x2FD, 9, 0x11D);
    arg0->unk92 = !func_80133A24(0x120) + !func_80133A24(0x121);
    arg0->unk3C = 0;
    arg0->unk90 = 0;
    if (arg0->unk92 != 0) {
        for (sp30 = 0; (s32)sp30 < 2 - arg0->unk92; sp30++) {
            arg1[2 + sp30]->unk22 = 0;
        }
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8012C97C(0x306, 5);
        arg0->unk78 = (f32)(0x180 - arg0->unk92 * 10);
        arg0->unk84 = 0;
        arg0->unk86 = 0x1000;
        arg0->unk88 = 0;
        arg0->unk7C = -100.0f;
        arg0->unk80 = 0.0f;
        arg1[0]->unk30->unk4 = arg0->unk78;
        arg1[0]->unk30->unk8 = arg0->unk7C;
        arg1[0]->unk30->unkC = arg0->unk80;
        arg1[0]->unk30->unk10 = arg0->unk84;
        arg1[0]->unk30->unk12 = arg0->unk86;
        arg1[0]->unk30->unk14 = arg0->unk88;
    } else {
        for (sp30 = 2; sp30 != 4; sp30++) {
            arg1[sp30]->unk22 = 0;
        }
    }
    if (func_80133A24(0x128) != 0 || func_80133A24(0x129) != 0) {
        arg1[3 - arg0->unk92]->unk22 = 1;
        func_800058DC(arg0, func_80246C0C);
        return;
    }
    func_800058DC(arg0, (void *)func_80246B40);
}
