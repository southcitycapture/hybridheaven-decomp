#include "common.h"


extern s32 D_8038D850;
extern s32 D_8038D854;
extern s32 D_8038DD60;

void func_801BF6C4(s32 arg0);
void func_800058DC(s32 arg0, void *arg1);
void func_8038B838(void);
void func_8038B8FC(void);

void func_8038B7E0(s32 arg0, s32 arg1) {
    D_8038DD60 = 0;
    D_8038D850 = 0;
    D_8038D854 = 0;
    func_801BF6C4(2);
    func_8038B8FC();
    func_800058DC(arg0, func_8038B838);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B87C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B8C0.s")

extern u8 D_8038DD68[];
void func_801C250C(void *);

s32 func_8038B8CC(void) {
    func_801C250C(D_8038DD68);
    func_8038B8FC();
    return 1;
}


void func_801C2608(s32 arg0, void *arg1);

void func_8038B8FC(void) {
    func_801C2608(1, D_8038DD68);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038B9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BA64.s")


extern s32 D_8038D870;

s32 func_8038BA70(void) {
    return ++D_8038D870 < 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BA8C.s")


void func_801C25B0(void *);
void func_8038BB6C(void);
extern s32 D_8038D874;
extern u8 D_8038DD90[];
extern u8 D_8038DF70[];

s32 func_8038BAA8(void) {
    s32 i;
    u8 *p;

    if (D_8038D870 != 0) {
        i = 0;
        if (D_8038D870 > 0) {
            p = D_8038DD90;
            do {
                func_801C250C(p);
                i += 1;
                p += 0x18;
            } while (i < D_8038D870);
        }
        D_8038D870 = 0;
    }
    if (D_8038D874 != 0) {
        i = 0;
        if (D_8038D874 > 0) {
            p = D_8038DF70;
            do {
                func_801C25B0(p);
                i += 1;
                p += 0xC;
            } while (i < D_8038D874);
        }
        D_8038D874 = 0;
    }
    func_8038BB6C();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BB6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BBB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BBC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BBF4.s")

extern struct func_8038BDC0_Glob D_801BBBF0;
extern s32 D_8038DB50;
extern s32 D_8038DB54;
void func_8038BE98(f32 arg0);
s32 func_8038C548(s32 arg0, s32 arg1);

extern s32 D_8038D8EC;
extern s32 D_8038D8F0;
extern s32 D_8038DB48;
extern s32 D_8038DB4C;
extern f32 D_8038DCF0;
extern s32 D_8038E070;

void func_8038BC00(void) {
    s32 *var_v0;
    s32 i;

    D_8038D8EC = 0;
    D_8038DB48 = 0;
    D_8038DB4C = 0;
    func_8038C548(D_8038DB50, D_8038DB54);
    func_801BF6C4(0);
    D_8038D8F0 = 0;
    for (i = 0; i < 2; i++) {
        var_v0 = &D_8038E070 + i * 16;
        var_v0[4] = 0;
        var_v0[5] = 0;
        var_v0[6] = 0;
        var_v0[7] = 0;
        var_v0[8] = 0;
        var_v0[9] = 0;
        var_v0[10] = 0;
        var_v0[11] = 0;
        var_v0[12] = 0;
        var_v0[13] = 0;
        var_v0[14] = 0;
        var_v0[15] = 0;
        var_v0[0] = 0;
        var_v0[1] = 0;
        var_v0[2] = 0;
        var_v0[3] = 0;
    }
    *(f32 *)((u8 *)&D_801BBBF0 + 0x29C) = 10.0f;
    *(f32 *)((u8 *)&D_801BBBF0 + 0x2A0) = 2000.0f;
    func_8038BE98(D_8038DCF0);
    D_8038D8EC = 1;
}


s32 func_801BF968(void);
void func_801BF850(void *arg0, s32 arg1, void *arg2);
void func_8038C5D4(void);
void func_8038C600(void);
extern u8 D_8038D8E0[];
extern u8 D_8038E0F0[];

void func_8038BCE0(void) {
    if (func_801BF968() != 0) {
        D_8038DB50 = 0;
        D_8038DB54 = 0;
        func_801BF850(D_8038D8E0, 0, D_8038E0F0);
        func_8038C600();
        func_8038C5D4();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BD3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BD48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BD50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BD88.s")


struct func_8038BDC0_Inner {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

struct func_8038BDC0_Outer {
    u8 pad[0x2C];
    struct func_8038BDC0_Inner *unk2C;
};

struct func_8038BDC0_Glob {
    u8 pad[0xE8];
    struct func_8038BDC0_Outer *unkE8;
};


void func_8038BDC0(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8038BDC0_Inner *temp_v0;

    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk30 = temp_v0->unk30 + arg0;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk34 = temp_v0->unk34 + arg1;
    temp_v0 = D_801BBBF0.unkE8->unk2C;
    temp_v0->unk38 = temp_v0->unk38 + arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BE10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BE60.s")


struct func_8038BE98_Inner {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_8038BE98_Outer {
    u8 pad[0x2C];
    struct func_8038BE98_Inner *unk2C;
};

extern struct func_8038BE98_Outer *D_801BBCD8;

void func_8038BE98(f32 arg0) {
    D_801BBCD8->unk2C->unk1C = arg0;
}


struct func_8038BEAC_Inner {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_8038BEAC_Outer {
    u8 pad[0x2C];
    struct func_8038BEAC_Inner *unk2C;
};


void func_8038BEAC(void) {
    D_801BBCD8->unk2C->unk1C = 33.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BEC8.s")


void func_801C0D04(s32 a, s32 b);

void func_8038BED4(void) {
    func_801C0D04(0, 0x1F40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038BEF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C17C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C30C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C53C.s")


extern s32 func_8011AAF4(s32 *a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, f32 f11, f32 f12, f32 f13, f32 f14, s32 s15, s32 s16);
extern s32 D_8038DCB8[];

s32 func_8038C548(s32 arg0, s32 arg1) {
    func_8011AAF4(D_8038DCB8, 0x16E, arg0, 0, 1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -4.0f, 0.0f, 35.0f, -1, -1);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C5D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C5F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038B7E0/func_8038C824.s")

