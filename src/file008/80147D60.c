#include "common.h"


extern s32 func_8001B204(s32, s32, s32, void *);
extern u8 D_8018F9A0[];

void func_80147D60(u8 arg0) {
    s32 temp_s1;
    s32 var_s0;

    temp_s1 = arg0;
    var_s0 = 0;
    if (temp_s1 > 0) {
        do {
            func_8001B204(var_s0 & 0xFF, 0, 0, D_8018F9A0);
            var_s0 = (var_s0 + 1) & 0xFF;
        } while (var_s0 < temp_s1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80147DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80147E34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148044.s")


typedef struct func_80148074_Struct {
    u8 pad0[0x10];
    struct func_80148074_Struct *unk10;
} func_80148074_Struct;

extern void func_80145310(void *, s32, s32);
extern void func_801451C0(void *, s32);
extern func_80148074_Struct *D_801BED18;
extern func_80148074_Struct *D_801BED1C;

void func_80148074(u8 *arg0)
{
  s8 var_s0;
  func_80148074_Struct *var_s2;
  func_80148074_Struct *var_s1;
 var_s0 = 0; var_s1 = D_801BED18; var_s2 = D_801BED1C; do {
    if (var_s0 == arg0[0xA2])
    {
      func_80145310(var_s1, 6, 7);
      func_801451C0(var_s2, 1);
    }
    else
    {
      func_80145310(var_s1, 8, 9);
      func_801451C0(var_s2, 2);
    }
    var_s1 = var_s1->unk10;
    var_s0 += 1;
    var_s2 = var_s2->unk10;
  }
  while (var_s0 < 4);
}


s32 func_80148124(s32 arg0, s32 arg1) {
    s32 *p;
    s32 *q;
    p = &arg0;
    q = &arg1;
    return (arg0 + (u32)(arg1 * 4)) & 0xFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_8014813C.s")


extern u8 D_80181ABD[];

typedef struct func_80148270_Struct {
    u8 pad[0x90];
    s8 unk90;
    s8 unk91;
} func_80148270_Struct;

s32 func_80148270(func_80148270_Struct *arg0) {
    if (D_80181ABD[(arg0->unk91 * 0x78) + (arg0->unk90 * 6)] == 0) {
        return 0;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801482BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148500.s")

extern s32 D_80181D5C;
extern s32 D_80181D60;

struct func_801486A8_Obj {
    u8 pad0[0xA0];
    s16 unkA0;
};

struct func_801486A8_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
};

struct func_801486A8_Outer {
    u8 pad0[0x30];
    struct func_801486A8_Inner *unk30;
};

void func_801486A8(struct func_801486A8_Obj *arg0, s16 arg1) {
    s16 temp_v0;

    arg0->unkA0 = arg0->unkA0 + arg1;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk4 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk4;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk8 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk8;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unkC = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unkC;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk10 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk10;
    temp_v0 = arg0->unkA0;
    ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk12 = temp_v0;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk12 = temp_v0;
    ((struct func_801486A8_Outer *) D_80181D60)->unk30->unk14 = ((struct func_801486A8_Outer *) D_80181D5C)->unk30->unk14;
}


extern u8 D_80181ABC[];

s32 func_80148768(s32 arg0) {
    s32 var_v1;
    s32 *unused;
    u8 *base;

    unused = &arg0;
    base = D_80181ABC;
    for (var_v1 = 0; var_v1 < 0x3C; ) {
        if ((arg0 & 0xFF) == base[var_v1 * 6 + 1]) {
            break;
        }
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801487B4.s")


s32 func_801487F0(u8 arg0) {
    if ((arg0 >= 0x14) && (arg0 < 0x1E)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148958.s")


typedef struct func_80148B2C_Struct {
    u8 pad[0x30];
    void *unk30;
} func_80148B2C_Struct;

typedef struct func_80148B2C_Pos {
    s16 unk0;
    s16 unk2;
} func_80148B2C_Pos;

extern func_80148B2C_Struct *D_801BED20;

void func_80148B2C(s8 arg0, s8 arg1) {
    func_80148B2C_Pos *temp_v0;

    temp_v0 = (func_80148B2C_Pos *) D_801BED20->unk30;
    temp_v0->unk0 = (s16) ((arg0 << 5) + 0x1B);
    temp_v0->unk2 = (s16) ((arg1 << 5) + 0x2C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148CB0.s")


typedef struct func_80148D84_Struct {
    u8 pad[0x95];
    s8 unk95;
    s8 unk96;
} func_80148D84_Struct;

void func_80148D84(func_80148D84_Struct *arg0) {
    if (arg0->unk95 < 0) {
        arg0->unk95 = 3;
    }
    if (arg0->unk95 >= 4) {
        arg0->unk95 = 0;
    }
    if (arg0->unk96 < 0) {
        arg0->unk96 = 4;
    }
    if (arg0->unk96 >= 5) {
        arg0->unk96 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148DDC.s")


extern void func_80147218(s32);

void func_80148E44(s32 arg0) {
    func_80147D60(0x1C);
    func_80147218(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148E70.s")


extern u8 D_80181D58;

s32 func_80148E80(void) {
    if (D_80181D58 == 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80148FC4.s")


extern s32 func_80126E88(s32);

s32 func_80149014(void) {
    if (func_80126E88(0x113) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801491A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801491D0.s")


extern u16 D_801BBC1C;

s32 func_801491FC(void) {
    s32 var_s0;
    s32 var_v1;

    var_s0 = func_80126E88(0x125) & 0xFF;
    var_s0 += func_80126E88(0x127);
    var_s0 &= 0xFF;
    if (D_801BBC1C == 0xA) {
        var_s0 += func_80126E88(0x111);
        var_s0 &= 0xFF;
        var_s0 += func_80126E88(0x110);
        var_s0 &= 0xFF;
        var_v1 = 4;
    } else if (func_80236C9C() != 0) {
        var_s0 += func_80126E88(0x10F);
        var_s0 &= 0xFF;
        var_s0 += func_80126E88(0x110);
        var_s0 &= 0xFF;
        var_v1 = 4;
    } else {
        var_s0 += func_80126E88(0x10F);
        var_s0 &= 0xFF;
        var_v1 = 3;
    }
    if (var_v1 == var_s0) {
        return 1;
    }
    return 0;
}


typedef struct func_801492C8_Struct {
    u8 pad[0x5C];
} func_801492C8_Struct;

extern func_801492C8_Struct D_80181DC4;

s32 func_801492C8(s32 arg0) {
    func_801492C8_Struct sp4;
    s32 *p;

    p = &arg0;
    arg0 = arg0 & 0xFF;
    sp4 = D_80181DC4;
    return ((u16 *) &sp4)[arg0];
}


s32 func_80126A0C(s32, u16, s32);                   /* extern */

s32 func_80149330(s32 arg0) {
    s32 *unused;

    unused = &arg0;
    if (func_80126A0C(0, (u16)func_801492C8(arg0 & 0xFF), 0) == 0) {
        return 0;
    }
    return 1;
}


extern s8 D_80181C28[];
extern s8 D_801BBBF0[];

void func_80149370(void) {
    D_801BBBF0[0xF2F] = -D_80181C28[0x10];
    D_801BBBF0[0xF30] = D_80181C28[0x11];
    D_801BBBF0[0xF31] = D_80181C28[0x12];
}


typedef struct func_801493A0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801493A0_Inner;

typedef struct func_801493A0_Outer {
    u8 pad[0x30];
    func_801493A0_Inner *unk30;
} func_801493A0_Outer;

void func_801493A0(void) {
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk4 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk4;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk8 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk8;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unkC = ((func_801493A0_Outer *) D_80181D5C)->unk30->unkC;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk10 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk10;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk12 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk12;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk14 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk14;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk18 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk18;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk1C = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk1C;
    ((func_801493A0_Outer *) D_80181D60)->unk30->unk20 = ((func_801493A0_Outer *) D_80181D5C)->unk30->unk20;
    func_80149370();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801494A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149580.s")


extern void func_80006088(s32);
extern void func_800058DC(void *, void *);
extern void func_80149708(void);
extern s16 D_801BBD58;

struct func_80149684_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
extern struct func_80149684_Struct *D_801BED2C;

void func_80149684(void) {
    func_80006088(D_80181D60);
    D_801BBD58 = 0;
    D_80181D60 = 0;
    D_80181D5C = 0;
    D_801BED2C->unk3C = 5;
    func_800058DC(D_801BED2C, func_80149708);
}



void func_801496E4(s32 arg0, s32 arg1) {
    func_801493A0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149708.s")


struct func_80149764_Struct {
    u8 pad0[0x28];
    s16 unk28;
    u8 pad1[0x92 - 0x2A];
    u8 unk92;
    u8 unk93;
    u8 pad2[4];
    void *unk98;
    u8 pad3[6];
    s8 unkA2;
    u8 pad4[1];
    void *unkA4;
};

extern s32 func_80148044();
extern void func_801FBB30();
extern void func_80020744();
extern void func_80116E80();
extern void func_80146178();
extern s32 func_80006214();
extern s8 D_801BCC25;
extern u8 D_801BBC8C;
extern u8 D_801BC03C;
extern void func_801498CC();

void func_80149764(struct func_80149764_Struct *arg0, s32 *arg1) {
    u8 sp47;

    sp47 = 0;
    if (func_80126A0C((s32)arg0, 0x113, 0) != 0) {
        D_801BCC25 = 3;
        if (func_80148044() == 0) {
            func_801FBB30();
        }
        func_80020744(3);
        func_80116E80(0x200);
        func_80116E80(0x10);
        func_80116E80(0x800);
        func_80146178(arg0, &sp47, 0, 0, 0x140, 0xF0, 2, 0, 0, 0, 0x66);
        ((struct func_80149764_Struct *)arg1[func_80006214(arg0) - 1])->unk28 = 0x800;
        arg0->unk92 = 1;
        arg0->unkA4 = &D_801BBC8C;
        arg0->unk93 = 3;
        arg0->unkA2 = 1;
        arg0->unk98 = &D_801BC03C;
        func_800058DC(arg0, func_801498CC);
    }
}


extern void func_80149E84(void);

typedef struct func_80149880_Inner {
    u8 pad[0x94];
    s32 unk94;
} func_80149880_Inner;

typedef struct func_80149880_Struct {
    u8 pad0[0xC];
    func_80149880_Inner *unkC;
    u8 pad1[0x92 - 0x10];
    u8 unk92;
    u8 unk93;
    u8 pad2[0xA4 - 0x94];
    s32 unkA4;
} func_80149880_Struct;

void func_80149880(func_80149880_Struct *arg0, s32 arg1) {
    D_801BCC25 = 3;
    arg0->unk92 = 2;
    arg0->unkA4 = arg0->unkC->unk94;
    arg0->unk93 = 2;
    func_800058DC(arg0, (void *) func_80149E84);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_801498CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_80149E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_8014A234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_8014A67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_8014A774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/func_8014AAB4.s")


struct func_8014AB48_Struct {
    u8 pad0[0xEF0];
    u16 unkEF0;
    u8 pad1[0x1035 - 0xEF2];
    u8 unk1035;
};

extern void func_800023A8(s32);
extern void func_80005700(s32);
extern void func_8001F6FC();
extern s32 func_80126944();
extern void func_801FBB20();

void func_8014AB48(s32 arg0, s32 arg1) {
    struct func_8014AB48_Struct *dev;

    func_80147D60(0x1C);
    dev = (struct func_8014AB48_Struct *) D_801BBBF0;
    dev->unk1035 = 0;
    dev->unkEF0 &= 0xFFEF;
    if (func_80126944() == 0) {
        func_800023A8(0);
    }
    D_801BBD58 = 0;
    func_8001F6FC();
    func_80020744(4);
    if (func_80148044() == 0) {
        func_801FBB20();
    }
    func_80005700(arg0);
}


typedef struct func_8014ABD0_Struct {
    u8 pad0[0x168];
    s16 unk168;
    u8 pad1[0xEF0 - 0x16A];
    u16 unkEF0;
    u8 pad2[0x1035 - 0xEF2];
    u8 unk1035;
} func_8014ABD0_Struct;

extern void func_80236C60(void);

void func_8014ABD0(s32 arg0, s32 arg1) {
    if (((func_8014ABD0_Struct *) D_801BBBF0)->unk1035 == 0) {
        if (func_80126944() == 1) {
            func_80236C60();
        }
        ((func_8014ABD0_Struct *) D_801BBBF0)->unk168 = 0;
        ((func_8014ABD0_Struct *) D_801BBBF0)->unkEF0 = ((func_8014ABD0_Struct *) D_801BBBF0)->unkEF0 & 0xFFEF;
        func_8001F6FC();
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80147D60/_pad_16.s")

