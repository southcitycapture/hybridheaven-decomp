#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file079/8038CFC0/func_8038CFF4.s")

extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

struct func_8038D638_StructA { u8 pad[0x30]; u32 pre:11; u32 f:2; u32 post:19; };
struct func_8038D638_StructB { u8 pad[0x38]; u32 top:1; };
struct func_8038D638_StructC {
    u8 pad0[0x92]; u8 unk92; u8 unk93; u8 pad1[6]; s16 unk9A; u8 pad2[5]; u8 unkA1; u8 unkA2;
};
struct func_8038D638_StructD { u8 pad[0x2D8]; u8 unk2D8; u8 unk2D9; };

s32 func_8038D638(struct func_8038D638_StructC *a0, struct func_8038D638_StructD *a1, struct func_8038D638_StructA *a2) {
    u8 t, v;
    if (a2->f != 0) {
        func_802294BC(a1);
        a0->unk9A |= 8;
    } else if (((struct func_8038D638_StructB *)a1)->top) {
        a1->unk2D8 = 2;
        a0->unk9A |= 2;
        func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
    } else {
        v = a0->unk92;
        t = v;
        if (!v) {
            a1->unk2D8 = 1;
            func_80229CE0(a0, a1, 1);
            a0->unk93 = a0->unk92++;
        } else if (v == 1) {
            a1->unk2D8 = 2;
            func_80229CE0(a0, a1, func_8022B640(2) & 0xFF);
            a0->unk93 = a0->unk92++;
        } else {
            if (t == 2) {
                a1->unk2D8 = 1;
                func_80229CE0(a0, a1, 1);
                a0->unk93 = a0->unk92++;
            } else if (t == 3) {
                a1->unk2D8 = 1;
                func_80229CE0(a0, a1, 1);
                a0->unk93 = a0->unk92;
                a0->unk92 = 0;
            }
        }
    }
    a0->unkA1 = a1->unk2D8;
    a0->unkA2 = a1->unk2D9;
}


struct func_8038D7B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;
#define func_8038D830 func_8038D830__decl74
extern void func_8038D830(void);

void func_8038D7B8(struct func_8038D7B8_Struct *arg0, s32 arg1) {
    u8 *var_a1;
    u8 *var_a2;

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    func_8038D638(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038D830);
}
#undef func_8038D830


extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

struct func_8038D830_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D830_G D_801BBBF0;

struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D830_Obj {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[4];
    u32 b31:1;
    u32 bp:2;
    u32 b28:1;
    u32 brest:28;
    u8 pad2[0x390 - 0x3C];
    u8 unk390;
};

void func_8038D830(arg0, arg1)
struct func_8038D830_Struct *arg0;
s32 arg1;
{
    struct func_8038D830_Obj *a1;
    struct func_8038D830_Obj *a2;
    u32 a3;
    u32 v0;
    u32 v1;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC03C : (struct func_8038D830_Obj *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC3D8 : (struct func_8038D830_Obj *)&D_801BC03C;
    if (a1->unk390 != 1 || ((((a1->unk30 << 27) >> 30) & 3) == 0)) {
        if (arg0->unkA8 == 2) {
            func_8038D638(arg0, a1, a2);
            arg0->unkA8 = 0;
            return;
        }
        if ((((u16 *)&a1->unk30)[0] & 7) || D_801BBBF0.unk1031 == 6) {
            arg0->unkA8 = 1;
            return;
        }
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unkB0 = (void *)func_8038D830;
            func_800058DC((s32)arg0, func_8022B3E0);
            return;
        }
        if (((a1->unk30 << 27) >> 30) == 3) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (func_8022AB58(arg0, a1, a2) != 0) {
            arg0->unk91 = 0;
            func_8038D638(arg0, a1, a2);
            return;
        }
        a3 = (a2->unk30 << 11) >> 30;
        if (a3 != 0 && !(arg0->unk9A & 8)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a2->b31 == 0 && a3 == 0 && arg0->unk9A != 0) {
            arg0->unk9A = 0;
            func_8038D638(arg0, a1, a2);
        }
    }
}

void *func_8022AAA8(s32 arg0, struct func_8022AAA8_Struct *arg1);

void func_8038DA4C(s32 arg0, struct func_8022AAA8_Struct *arg1) {
    func_8022AAA8(arg0, arg1);
}

