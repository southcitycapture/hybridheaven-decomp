#include "common.h"


extern s32 func_800058DC(s32, void *);
extern s32 func_80229500();
extern void func_8038CFF4();

void func_8038CFC0(s32 arg0, s32 arg1) {
    func_80229500();
    func_800058DC(arg0, &func_8038CFF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file087/8038CFC0/func_8038CFF4.s")

extern u8 D_801BC3D8[];
struct func_8038D8A0_S0 { u8 pad0[0x9A]; s16 unk9A; u8 pad1[4]; u8 unkA0; u8 unkA1; u8 unkA2; };
struct func_8038D8A0_S1 { s16 unk0; s16 unk2; u8 pad0[0x34]; u32 f38:1; u32 pad38:31; u8 pad1[0x6A]; u8 unkA6; u8 pad2[0x231]; u8 unk2D8; u8 unk2D9; };
struct func_8038D8A0_S2 { u8 pad0[0x30]; u32 padb:11; u32 f30:2; u32 padc:19; };
extern void func_80229404();
extern void func_80229CE0();
extern s32 func_8022B640();

s32 func_8038D8A0(struct func_8038D8A0_S0 *arg0, struct func_8038D8A0_S1 *arg1, struct func_8038D8A0_S2 *arg2) {
    s32 r;
    if ((arg1->unk2 < (arg1->unk0 / 5)) && (arg0->unkA0 != 0)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 3;
        arg0->unkA0 = arg0->unkA0 - 1;
        arg0->unk9A |= 0x20;
    } else if ((*(f32 *)(D_801BC3D8 + 0x3A8) > 25.0) && !(arg1->unkA6 & 0x10)) {
        arg1->unk2D8 = 0xB;
        arg1->unk2D9 = 0x20;
        arg0->unk9A |= 0x100;
    } else if (arg2->f30 != 0) {
        func_80229404(arg1);
        arg0->unk9A |= 8;
    } else if (arg1->f38 != 0) {
        arg1->unk2D8 = 2;
        arg0->unk9A |= 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    } else {
        r = func_8022B640(3);
        if (r == 0) goto c0;
        if (r != 1) goto cd;
        goto c1;
c0:
        arg1->unk2D8 = 0;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
        goto end;
c1:
        arg1->unk2D8 = 1;
        func_80229CE0(arg0, arg1, 1);
        goto end;
cd:
        arg1->unk2D8 = 2;
        func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    }
end:
    arg0->unkA1 = arg1->unk2D8;
    arg0->unkA2 = arg1->unk2D9;
}


struct func_8038DA74_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x82];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    s16 unk98;
    u8 pad3[6];
    u8 unkA0;
};

extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern void func_8038DAF8();

void func_8038DA74(struct func_8038DA74_Struct *arg0, s32 arg1) {
    void *var_a1;
    void *var_a2;

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
    arg0->unk92 = 0;
    arg0->unk93 = 0;
    arg0->unkA0 = 5;
    arg0->unk98 = 0;
    func_8038D8A0(arg0, var_a1, var_a2);
    func_800058DC(arg0, (void *)func_8038DAF8);
}


typedef struct func_8038DAF8_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x91 - 0x10];
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 pad94[4];
    s16 unk98;
    s16 unk9A;
    u8 pad9C[4];
    u8 unkA0;
    u8 padA1[7];
    u8 unkA8;
    u8 padA9[7];
    void *unkB0;
} func_8038DAF8_Struct;

typedef struct func_8038DAF8_S1 {
    s16 unk0;
    s16 unk2;
    u8 pad4[0x2C];
    u16 unk30;
    u8 pad32[6];
    u32 b38_31:1;
    u32 pad38:2;
    u32 b38_28:1;
    u32 pad38b:28;
    u8 pad3C[0x6A];
    u8 unkA6;
} func_8038DAF8_S1;

typedef struct func_8038DAF8_S2 {
    u8 pad0[0x30];
    u32 pad30a:3;
    u32 f30_4:4;
    u32 pad30b:4;
    u32 f30_2:2;
    u32 pad30c:19;
} func_8038DAF8_S2;

extern s32 func_8022AB58();
extern u8 D_801BBBF0[];
typedef struct func_8038DAF8_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0xB90 - 0xE0];
    f32 unkB90;
    u8 padB94[0x1031 - 0xB94];
    u8 unk1031;
} func_8038DAF8_G;
#define G (*(func_8038DAF8_G *)D_801BBBF0)
extern u8 func_8022B3E0[];
extern u8 D_8038DAF8[];

#define CALL() func_8038D8A0((struct func_8038D8A0_S0 *)arg0, (struct func_8038D8A0_S1 *)a1, (struct func_8038D8A0_S2 *)a2)

void func_8038DAF8(func_8038DAF8_Struct *arg0, s32 arg1) {
    func_8038DAF8_S1 *a1;
    func_8038DAF8_S2 *a2;
    s16 v;
    s32 d;

    if (arg0->unkC == (d = G.unkDC)) {
        a1 = (func_8038DAF8_S1 *)D_801BC03C;
    } else {
        a1 = (func_8038DAF8_S1 *)D_801BC3D8;
    }
    if (d == arg0->unkC) {
        a2 = (func_8038DAF8_S2 *)D_801BC3D8;
    } else {
        a2 = (func_8038DAF8_S2 *)D_801BC03C;
    }
    if (arg0->unkA8 == 2) {
        CALL();
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30 & 7) || D_801BBBF0[0x1031] == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0[0x1031] == 7) {
        arg0->unkB0 = (void *)D_8038DAF8;
        func_800058DC((s32)arg0, func_8022B3E0);
        return;
    }
    if (a1->unk2 < a1->unk0 / 5 && arg0->unkA0 != 0 && !(arg0->unk9A & 0x20)) {
        CALL();
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) > 25.0f && arg0->unk98 == 0 && arg0->unk9A == 0 && !(a1->unkA6 & 0x10)) {
        CALL();
        return;
    }
    if (*(f32 *)(D_801BBBF0 + 0xB90) <= 20.0f) {
        v = arg0->unk9A;
        if (v & 0x100) {
            arg0->unk9A = v ^ 0x100;
            CALL();
            return;
        }
    }
    if (a2->f30_2 != 0 || a2->f30_4 == 2) {
        CALL();
        return;
    }
    if (a2->f30_2 == 0) {
        v = arg0->unk9A;
        if (v & 8) {
            arg0->unk9A = v ^ 8;
            arg0->unk92 = arg0->unk93;
            CALL();
            return;
        }
    }
    if (a1->b38_31 != 0 && !a1->b38_28 && !(arg0->unk9A & 2)) {
        CALL();
        return;
    }
    if (a1->b38_31 != 0 && a1->b38_28 && !(arg0->unk9A & 4)) {
        CALL();
        return;
    }
    if (a1->b38_31 == 0 && (arg0->unk9A & 6)) {
        arg0->unk9A = 0;
        arg0->unk92 = arg0->unk93;
        CALL();
    }
}


extern void func_8022A834();

void func_8038DDD4(u8 *arg0) {
    if (*(f32 *)&D_801BC3D8[0x3A8] < 15.0) {
        arg0[0xA5] = 0;
        return;
    }
    func_8022A834();
}

