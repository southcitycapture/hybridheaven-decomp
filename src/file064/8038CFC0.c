#include "common.h"


extern void *func_800058DC(void *, void *);
extern s16 func_80228C20(void *);
extern void func_80229500(void);
extern void func_8038D000();

void func_8038CFC0(void *arg0, void *arg1) {
    func_80229500();
    *(s16 *)((u8 *)arg0 + 0x96) = func_80228C20(arg0);
    func_800058DC(arg0, func_8038D000);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file064/8038CFC0/func_8038D000.s")

extern u8 D_801BC3D8[];

typedef struct func_8038D77C_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x6A];
    u16 unk9E;
} func_8038D77C_StructA;
typedef struct func_8038D77C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D77C_StructB;
typedef struct func_8038D77C_StructC {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D77C_StructC;
extern void func_802294BC(void *);
extern void func_80229CE0(void *, void *, s32);
extern s32 func_8022B640(s32);

s32 func_8038D77C(func_8038D77C_StructC *arg0, func_8038D77C_StructB *arg1, func_8038D77C_StructA *arg2) {
    if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 20.0f) && (arg2->unk9E == 0)) {
        arg1->unk2D8 = 0x13;
        arg1->unk2D9 = 7;
    } else if (((arg2->unk30 << 11) >> 30) != 0) {
        func_802294BC(arg1);
        arg0->unk9A = 8;
    } else if ((arg1->unk38 >> 31) != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else if ((func_8022B640(2) == 0) && (arg1->unk2 < (arg1->unk0 / 5))) {
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, 2);
    } else {
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


typedef struct func_8038D8B8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x88];
    s16 unk98;
} func_8038D8B8_Struct;

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
#define func_8038D948 func_8038D948__decl76
extern void func_8038D948(void);

void func_8038D8B8(func_8038D8B8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;

    extern void func_80229500();

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = D_801BC03C;
    } else {
        var_a1 = D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = D_801BC3D8;
    } else {
        var_a2 = D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    arg0->unk98 = 3;
    func_8038D77C(arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D948);
}
#undef func_8038D948

#define D_801BBBF0 D_801BBBF0__func_8038D948
#define D_8038D948 D_8038D948__func_8038D948
#define func_8022AB58 func_8022AB58__func_8038D948
#define func_8022B3E0 func_8022B3E0__func_8038D948
#define func_8038D77C_StructA func_8038D77C_StructA__func_8038D948
#define func_8038D77C_StructB func_8038D77C_StructB__func_8038D948
#define func_8038D77C_StructC func_8038D77C_StructC__func_8038D948
#define func_8038D948 D_8038D948
typedef struct func_8038D77C_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad34[0x6A];
    u16 unk9E;
} func_8038D77C_StructA;
typedef struct func_8038D77C_StructB {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x34];
    u32 unk38;
    u8 pad3C[0x29C];
    u8 unk2D8;
    u8 unk2D9;
} func_8038D77C_StructB;
typedef struct func_8038D77C_StructC {
    u8 pad0[0x9A];
    s16 unk9A;
    u8 pad9C[5];
    u8 unkA1;
    u8 unkA2;
} func_8038D77C_StructC;
#undef func_8038D948
extern void D_8038D948(void);

typedef struct func_8038D948_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x81];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[0xC];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038D948_Struct;

typedef struct func_8038D948_StructP {
    u8 pad0[0x30];
    union {
        u16 h;
        struct {
            u32 pad0 : 11;
            u32 b11 : 2;
            u32 pad13 : 19;
        } bf;
    } u30;
    u8 pad34[4];
    struct {
        u32 b31 : 1;
        u32 pad : 2;
        u32 b28 : 1;
        u32 rest : 28;
    } u38;
    u8 pad3C[0x62];
    u16 unk9E;
} func_8038D948_StructP;

typedef struct func_8038D948_StructG {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038D948_StructG;

extern func_8038D948_StructG D_801BBBF0;
extern s32 func_8022AB58();
extern void func_8022B3E0();

void func_8038D948(func_8038D948_Struct *arg0, s32 arg1) {
    func_8038D948_StructP *a1;
    func_8038D948_StructP *a2;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC03C : (func_8038D948_StructP *)D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (func_8038D948_StructP *)D_801BC3D8 : (func_8038D948_StructP *)D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->u30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = D_8038D948;
        func_800058DC(arg0, func_8022B3E0);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 > 20.0f && arg0->unk9A == 0 && a2->unk9E == 0 && arg0->unk98 != 0) {
        arg0->unk9A |= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (D_801BBBF0.unkB90 <= 20.0f && (arg0->unk9A & 0x100)) {
        arg0->unk9A ^= 0x100;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 != 0 && !(arg0->unk9A & 8)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a2->u30.bf.b11 == 0 && (arg0->unk9A & 8)) {
        arg0->unk9A ^= 8;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && !a1->u38.b28 && !(arg0->unk9A & 2)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (a1->u38.b31 && a1->u38.b28 && !(arg0->unk9A & 4)) {
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
        return;
    }
    if (!a1->u38.b31 && (arg0->unk9A & 6)) {
        arg0->unk92 = arg0->unk93;
        arg0->unk9A = 0;
        func_8038D77C((func_8038D77C_StructC *)arg0, (func_8038D77C_StructB *)a1, (func_8038D77C_StructA *)a2);
    }
}
#undef D_801BBBF0
#undef D_8038D948
#undef func_8022AB58
#undef func_8022B3E0
#undef func_8038D77C_StructA
#undef func_8038D77C_StructB
#undef func_8038D77C_StructC

void *func_8022A834(s32 arg0, struct func_8022A834_Struct *arg1);

void func_8038DBC4(s32 arg0, struct func_8022A834_Struct *arg1) {
    func_8022A834(arg0, arg1);
}

