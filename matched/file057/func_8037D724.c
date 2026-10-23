#include "context.h"

struct func_8037D724_StructC {
    u8 pad[0x98];
    u8 unk98;
    u8 pad99[0xAE - 0x99];
    u8 unkAE;
};
struct func_8037D724_Struct {
    u8 pad0[0xC];
    struct func_8037D724_StructC *unkC;
    u8 pad10[0x90 - 0x10];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 pad96;
    u8 unk97;
    u8 pad98[0xA9 - 0x98];
    u8 unkA9;
    u8 unkAA;
    u8 unkAB;
    u8 unkAC;
    u8 unkAD;
    u8 padAE[2];
    s16 unkB0;
};
struct func_8037D724_StructT {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA;
    u8 unk2DB;
    u8 pad2DC;
    u8 unk2DD;
    u8 pad2DE[0x375 - 0x2DE];
    u8 unk375;
};
extern void func_8037D218(void *, s16, s16, u8, u8 *);
void func_8037D93C(void *arg0, s32 arg1);

void func_8037D724(struct func_8037D724_Struct *arg0, s32 arg1) {
    struct func_8037D724_StructT *a;
    struct func_8037D724_StructT *b;
    u8 sp37;
    s16 sp34;
    s16 sp32;
    s16 var_a2;
    s16 sp2E;
    u8 v;
    u8 t;
    s32 pad[2];

    var_a2 = D_801BBBF0[0x1030];
    if (var_a2 == 0) {
        a = (struct func_8037D724_StructT *)D_801BC3D8;
    } else {
        a = (struct func_8037D724_StructT *)D_801BC03C;
    }
    if (var_a2 == 0) {
        b = (struct func_8037D724_StructT *)D_801BC03C;
    } else {
        b = (struct func_8037D724_StructT *)D_801BC3D8;
    }
    sp37 = 0;
    arg0->unk90 = var_a2;
    arg0->unk91 = a->unk2D8;
    arg0->unk92 = a->unk2D9;
    arg0->unk93 = b->unk2D8;
    arg0->unk94 = b->unk2D9;
    arg0->unk95 = b->unk2DD;
    arg0->unkC->unkAE = 0;
    arg0->unkAC = a->unk2DB;
    arg0->unkAD = arg0->unkC->unk98;
    arg0->unkB0 = 0;
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        sp2E = 0xC6;
    } else {
        sp2E = 0xAA;
    }
    if (b->unk2D8 == 0xA) {
        if ((s32)b == (s32)D_801BBBF0 + 0x44C) {
            t = b->unk375;
            sp34 = t * 8 - 0x14;
            sp32 = 0x3C;
            var_a2 = t * 4 + 0x3C;
        } else {
            sp34 = -0x14;
            t = b->unk375;
            sp32 = 0x3C - t * 8;
            var_a2 = 0x3C;
            sp2E -= t * 4;
        }
        arg0->unk97 = t;
        if (arg0->unk90 == 0) {
            if (arg0->unk97 == 0) {
                arg0->unkA9 = 0xD;
            } else {
                arg0->unkA9 = arg0->unk97;
            }
            arg0->unkAA = 0xE;
        } else {
            v = arg0->unk97;
            arg0->unkA9 = 0xD;
            if (v == 0) {
                arg0->unkAA = 0xE;
            } else {
                arg0->unkAA = v;
            }
        }
    } else {
        sp34 = -0x14;
        sp32 = 0x3C;
        var_a2 = 0x3C;
        arg0->unk97 = 0;
        arg0->unkA9 = 0xD;
        arg0->unkAA = 0xE;
    }
    func_8037D218(arg0, sp34, var_a2, arg0->unk90, &sp37);
    func_8037D218(arg0, sp32, sp2E, arg0->unk90 ^ 1, &sp37);
    arg0->unkAB = func_80006214(arg0);
    func_800058DC(arg0, func_8037D93C);
}
