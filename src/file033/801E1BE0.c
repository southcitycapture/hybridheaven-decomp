#include "common.h"

extern void func_8038BED4();
extern void func_8038D28C();
s32 func_801C0B8C(u64 time);
extern void func_8038BEC8(f32);
extern void func_8038BE98(f32);
s32 func_801C0B8C(u64 time);

extern f32 D_801F44F0;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801F44F0);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x77);
        func_8038BED4();
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E1C48.s")

s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_801F4514;
extern f32 D_801F4518;
extern f32 D_801F451C;
extern f32 D_801F4520;
extern f32 D_801F4524;
extern f32 D_801F4528;
extern f32 D_801F452C;

s32 func_801E1D14(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;

    a = D_801F4514;
    b = D_801F4518;
    c = D_801F451C;
    if (func_8038BEF8(0.0f, 2.5f, 7.4f, 57.0f, D_801F4520, D_801F4524, D_801F4528, D_801F452C, a, b, c, a, b, c) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E1DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E1E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E1F64.s")


extern f32 D_801F457C;
extern f32 D_801F4580;
extern f32 D_801F4584;
extern f32 D_801F4588;

s32 func_801E2018(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.0f, -2.1f, 11.6f, D_801F457C, D_801F4580, 14.0f, -50.0f, -4.5f, D_801F4584, -59.0f, -4.5f, 20.5f, D_801F4588) != 0) {
        return 7;
    }
    return 6;
}


s32 func_801E20D4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E20E4(s32 arg0, s32 arg1) {
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E20F4.s")

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801F458C;
extern f32 D_801F4590;
extern f32 D_801F4594;
extern f32 D_801F4598;

s32 func_801E2148(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F458C, D_801F4590, 0xC1966666);
    D_8038BD88(D_801F4594, D_801F4598, 0xC2580000);
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E21A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E21F4.s")


extern f32 D_801F459C;
extern f32 D_801F45A0;
extern f32 D_801F45A4;
extern f32 D_801F45A8;

s32 func_801E2248(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F459C, D_801F45A0, 0xC2493333);
    D_8038BD88(D_801F45A4, D_801F45A8, 0xC26ACCCD);
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E22A4.s")

extern struct func_801E295C_Struct *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);


s32 func_801E22F8(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 15;
    }
    return 16;
}


extern f32 D_801F45AC;
extern f32 D_801F45B0;
extern f32 D_801F45B4;

s32 func_801E234C(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F45AC, D_801F45B0, 0xC2BA999A);
    D_8038BD88(D_801F45B4, 17.0f, 0xC25D999A);
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E23A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E23FC.s")


extern f32 D_801F45B8;
extern f32 D_801F45BC;

s32 func_801E2450(s32 arg0, s32 arg1) {
    func_8038BD50(-3.0f, D_801F45B8, 0xC144CCCD);
    D_8038BD88(D_801F45BC, 18.5f, 0xC264CCCD);
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E24AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2500.s")


extern f32 D_801F45C0;
extern f32 D_801F45C4;
extern f32 D_801F45C8;

s32 func_801E2554(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F45C0, 30.5f, 0xC2A1CCCD);
    D_8038BD88(D_801F45C4, D_801F45C8, 0xC2600000);
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E25AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E26AC.s")


s32 func_801E2700(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E2710(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E2720(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E2730(s32 arg0, s32 arg1) {
    return 31;
}


s32 func_801E2740(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E2750(s32 arg0, s32 arg1) {
    return 33;
}


extern s32 D_801F2A58;

s32 func_801E2760(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x37) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    D_801F2A58 = 0;
    func_8038D28C(0x217);
    func_8038BED4();
    return 0x22;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E27C8.s")


typedef struct func_801E295C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E295C_Struct;


s32 func_801E295C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3C) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E29B0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x24;
    }
    return 0x25;
}


extern f32 D_801F4620;

s32 func_801E2A04(s32 arg0, s32 arg1) {
    func_8038BD50(-1.5f, 18.5f, 0xC2896666);
    D_8038BD88(D_801F4620, 15.5f, 0xC2600000);
    return 0x26;
}


s32 func_801E2A5C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x44) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801E2AB0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x47) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2B04.s")


s32 func_801E2B60(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4C) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}


s32 func_801E2BB4(s32 arg0, s32 arg1) {
    return 43;
}



s32 func_801E2BC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x78);
        func_8038BED4();
        return 0x2C;
    }
    return 0x2B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2C14.s")


extern f32 D_801F4654;
extern f32 D_801F4658;
extern f32 D_801F465C;
extern f32 D_801F4660;
extern f32 D_801F4664;
extern f32 D_801F4668;
extern f32 D_801F466C;

s32 func_801E2CE4(s32 arg0, s32 arg1)
{
  f32 c18;
  f32 c4654;
  f32 half;
 do { half = 18.5f; } while (0);
  c18 = half;
  half = 0.5f;
  c4654 = D_801F4654;
 if (func_8038BEF8(0.0f, half, -10.7f, 33.8f, D_801F4658, D_801F465C, D_801F4660, D_801F4664, D_801F4668, c18, c4654, D_801F466C, c18, c4654) != 0) { func_8038BED4();
    return 0x2E;
  }
  return 0x2D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E2F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E3074.s")


extern f32 D_801F46F8;
extern f32 D_801F46FC;
extern f32 D_801F4700;

s32 func_801E3134(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_8038BD50(D_801F46F8, 28.5f, 0xC28B0000);
        D_8038BD88(D_801F46FC, D_801F4700, 0xC2533333);
        return 0x33;
    }
    return 0x32;
}


extern f32 D_801F4704;
extern f32 D_801F4708;
extern f32 D_801F470C;

s32 func_801E31A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x632EA0) != 0) {
        func_8038BD50(D_801F4704, 4.0f, 0xC20B3333);
        D_8038BD88(D_801F4708, D_801F470C, 0xC24F999A);
        return 0x34;
    }
    return 0x33;
}


s32 func_801E3220(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6ACFC0) != 0) {
        func_8038BED4();
        return 0x35;
    }
    return 0x34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E326C.s")


extern f32 D_801F4728;

s32 func_801E332C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA7D8C0) != 0) {
        func_8038BD50(-7.5f, D_801F4728, 0xC265999A);
        D_8038BD88(-4.5f, 20.5f, 0xC270CCCD);
        return 0x37;
    }
    return 0x36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E33A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E34CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E35F8.s")


extern f32 D_801F477C;
extern f32 D_801F4780;

s32 func_801E36CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD59F80) != 0) {
        func_8038BD50(D_801F477C, 120.0f, 0xC1A4CCCD);
        D_8038BD88(D_801F4780, 14.5f, 0xC256CCCD);
        return 0x3B;
    }
    return 0x3A;
}


s32 func_801E3744(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDEC740) != 0) {
        func_8038BED4();
        return 0x3C;
    }
    return 0x3B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E3790.s")


s32 func_801E384C(s32 arg0, s32 arg1) {
    return 62;
}


s32 func_801E385C(s32 arg0, s32 arg1) {
    return 62;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E386C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E38A8(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xE5, 0x98, 0x70);
    func_801CCEC8(0, 0x22, -0xC, 0x1F);
    func_801CCE88(1, 0xB2, 0xFF, 0xFD);
    func_801CCEC8(1, -0x30, -1, -0x10);
    func_801CCE50(0x35, 0x1D, 0xA);
    return 2;
}


s32 func_801E3934(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3944(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3954(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3964(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3974(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3984(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3994(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E39A4(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E39B4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E39C4(s32 arg0, s32 arg1) {
    return 11;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E39D4(s32 arg0, s32 arg1) {
    func_801C2420(0x43A, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E3A08_StructR {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_801E3A08_StructQ {
    u8 pad0[0x2C];
    struct func_801E3A08_StructR *unk2C;
};

struct func_801E3A08_StructP {
    struct func_801E3A08_StructQ *unk0;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern s32 func_8038D850;
extern struct func_801E3A08_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E3A08(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x43A, 0);
    func_8038D854->unk0->unk2C->unk4 = 0.0f;
    func_8038D854->unk0->unk2C->unk8 = 0.0f;
    func_8038D854->unk0->unk2C->unkC = 0.0f;
    func_8038D854->unk0->unk2C->unk18 = 1.0f;
    func_8038D854->unk0->unk2C->unk1C = 1.0f;
    func_8038D854->unk0->unk2C->unk20 = 1.0f;
    func_8038D854->unk0->unk2C->unk12 = 0;
    func_8038D854->unk0->unk2C->unk30 = D_8017AE98;
    return 2;
}


s32 func_801E3B00(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3B10(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3B20(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3B30(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3B40(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3B50(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3B60(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3B70(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3B80(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3B90(s32 arg0, s32 arg1) {
    return 11;
}

extern void D_8038BA70(void);
extern u8 D_8038DD90[];

extern void func_8038BA8C(void);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DDA8[];
extern u8 D_8038DF70[];

s32 func_801E3BA0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC <= 0) {
        return 0;
    }
    func_801C2420(0x261, D_8038DD90);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDA8);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 4) = 0x3000;
    if (func_801C2570(0x43C, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x1800;
    if (func_801C2570(0x43D, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801E3C64_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
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
} func_801E3C64_Inner;

typedef struct func_801E3C64_Outer {
    u8 pad[0x30];
    func_801E3C64_Inner *unk30;
} func_801E3C64_Outer;

extern s32 D_8038D8CC;
extern func_801E3C64_Outer **D_8038D8D0;
extern u8 D_801BBBF0[];
extern u8 D_801DA0E8[];

s32 func_801E3C64(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x43A, 2);
    (*D_8038D8D0)->unk30->unk4 = 0.0f;
    (*D_8038D8D0)->unk30->unk8 = 0.0f;
    (*D_8038D8D0)->unk30->unkC = 65.0f;
    (*D_8038D8D0)->unk30->unk12 = 0;
    (*D_8038D8D0)->unk30->unk18 = 1.0f;
    (*D_8038D8D0)->unk30->unk1C = 1.0f;
    (*D_8038D8D0)->unk30->unk20 = 1.0f;
    (*D_8038D8D0)->unk30->unk24 = 0x400;
    (*D_8038D8D0)->unk30->unk4C = D_801BBBF0[0xF32];
    (*D_8038D8D0)->unk30->unk4D = D_801BBBF0[0xF33];
    (*D_8038D8D0)->unk30->unk4E = D_801BBBF0[0xF34];
    (*D_8038D8D0)->unk30->unk4F = D_801BBBF0[0xF35];
    (*D_8038D8D0)->unk30->unk30 = (s32)D_801DA0E8 | 0x40000000;
    return 2;
}


s32 func_801E3DD8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3DE8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3DF8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3E08(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3E18(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3E28(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3E38(s32 arg0, s32 arg1) {
    return 9;
}


extern s32 D_801F2BD0;

s32 func_801E3E48(s32 arg0, s32 arg1) {
    D_801F2BD0 = 0;
    return 0xA;
}


s32 func_801E3E60(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3E70(s32 arg0, s32 arg1) {
    return 11;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3E80(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3EC4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3ED4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3EE4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3EF4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3F04(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3F14(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3F24(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3F34(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3F44(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3F54(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E3F64(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3FA8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3FB8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3FC8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3FD8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3FE8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3FF8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4008(s32 arg0, s32 arg1) {
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E4018.s")


s32 func_801C5414(s32 a0, s32 a1, s32 a2, s32 a3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16);
extern f32 D_801F47A0;
extern f32 D_801F47A4;

s32 func_801E4148(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB923D5) != 0) {
        func_801C5414(0, 0xC1200000, 0x40A00000, 0xC21C0000, 0, 0x146, 0x1B, D_801F47A0, D_801F47A4, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xA;
    }
    return 9;
}


extern f32 D_801F47A8;

s32 func_801E4208(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0xBA283F) != 0) {
        temp = D_801F47A8;
        func_801C5414(1, 0xC0800000, 0x40E00000, 0xC21C0000, 0, 0x154, 0, temp, temp, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xB;
    }
    return 0xA;
}


extern f32 D_801F47AC;

s32 func_801E42BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBD357F) != 0) {
        f32 temp_ft0;

        temp_ft0 = D_801F47AC;
        func_801C5414(0, 0xC0C00000, 0x40E00000, 0xC2200000, 0, 0x14F, 0x1F, temp_ft0, temp_ft0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801F47B0;

s32 func_801E4374(s32 arg0, s32 arg1) {
    f32 f;

    if (func_801C0B8C(0xBDB7B5) != 0) {
        f = D_801F47B0;
        func_801C5414(0, 0xC0C00000, 0x41500000, 0xC2200000, 0, 0, 0, f, f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E4424.s")


extern f32 D_801F47BC;

s32 func_801E454C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35000) != 0) {
        func_801C5414(0, 0xC0C00000, 0x41700000, 0xC2200000, 0, 0, 0, D_801F47BC, 0.5f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0xF;
    }
    return 0xE;
}


extern f32 D_801F47C0;

s32 func_801E4604(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC3D235) != 0) {
        func_801C5414(1, 0xC0000000, 0x41000000, 0xC21C0000, 0, 0, 0, D_801F47C0, 0.5f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0x10;
    }
    return 0xF;
}


extern f32 D_801F47C4;
extern f32 D_801F47C8;

s32 func_801E46BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC558D5) != 0) {
        func_801C5414(0, 0xC0400000, 0x40E00000, 0xC2200000, 0, 0, 0, D_801F47C4, D_801F47C8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0x11;
    }
    return 0x10;
}


extern f32 D_801F47CC;

s32 func_801E4774(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC96A7F) != 0) {
        f32 temp_ft0;

        temp_ft0 = D_801F47CC;
        func_801C5414(0, 0xC0A00000, 0x41000000, 0xC2200000, 0, 0x1A, 0x2A, temp_ft0, temp_ft0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 2);
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E482C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E48E4.s")


extern f32 D_801F47E0;

s32 func_801E4A98(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCF8500) != 0) {
        func_801C5414(1, 0x40000000, 0x41200000, 0xC21C0000, 0, 0x17, 0x10, D_801F47E0, 0.5f, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0x15;
    }
    return 0x14;
}


s32 func_801E4B58(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E4B68(s32 arg0, s32 arg1) {
    return 22;
}



s32 func_801E4B78(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4BBC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4BCC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4BDC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4BEC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4BFC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4C0C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4C1C(s32 arg0, s32 arg1) {
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E4C2C.s")


extern f32 D_801F47F4;
extern f32 D_801F47F8;

s32 func_801E4D64(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35000) != 0) {
        func_801C5414(2, 0xC0C00000, 0x41000000, 0xC21C0000, 0, 0, 0x21, D_801F47F4, D_801F47F8, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xA;
    }
    return 9;
}


extern f32 D_801F47FC;
extern f32 D_801F4800;

s32 func_801E4E20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC4D69F) != 0) {
        func_801C5414(2, 0xBF800000, 0x41800000, 0xC21C0000, 0, 0, 0, D_801F47FC, D_801F4800, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xB;
    }
    return 0xA;
}


extern f32 D_801F4804;
extern f32 D_801F4808;

s32 func_801E4ED8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCC77BF) != 0) {
        func_801C5414(2, 0xC0400000, 0x41500000, 0xC2180000, 0, 0, 0, D_801F4804, D_801F4808, 0xC8, 0x64, 0x28, 0xFF, 0xFF, 0xFF, 3, 1);
        return 0xC;
    }
    return 0xB;
}


s32 func_801E4F90(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E4FA0(s32 arg0, s32 arg1) {
    return 13;
}


extern u8 D_801E0A48[];
extern u8 D_801DB660[];
extern u8 D_801DB664[];
extern u8 D_801DB730[];
extern u8 func_801DAC30[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x11B, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB660);
    func_801CC4C0(1, D_801DB664);
    func_801C2420(0x34, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB730);
    func_801CC4C0(2, D_801DB730 + 4);
    return 1;
}


extern void func_80005670(void *, void *);
extern void func_801CC530(void);
extern void func_801D517C(s32);
extern void func_801D5188(s32);
extern void func_801D58C4(s32);
extern void func_801D58D0(s32);
extern u8 D_801DB64C[];
extern u8 D_801DB71C[];
extern u8 func_801DAAF0[];

s32 func_801E507C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB64C);
    func_801D58C4(1);
    func_801D58D0(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB71C);
    func_801CC530();
    return 2;
}


void func_801C0D04(s32, s32);
void func_801CC470(s32, s32, s32, s32, f32);
extern f32 D_801F480C;
extern u8 *D_801DAB14;

#define FIELD_P(p, off) (*(u8**)((u8*)(p) + (off)))

s32 func_801E5110(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(FIELD_P(temp_v0, 0x2C) + 0x4) = 2.0f;
        *(f32 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0xC) = D_801F480C;
        *(s16 *)(FIELD_P(FIELD_P(FIELD_P(D_801DAB14, 0x8), 0x24), 0x2C) + 0x12) = 0x1000;
        func_801CC470(0, 0x0168003E, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E51E4.s")


extern s32 D_801F2CD8;

s32 func_801E5320(s32 arg0, s32 arg1) {
    D_801F2CD8 = 0;
    return 0x5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E5338.s")



s32 func_801E547C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD59F80) != 0) {
        D_801F2CD8 = 0;
        return 7;
    }
    return 6;
}

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();


s32 func_801E54C4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 7;
case0:
    func_801CC4D8(0, 0x04100026, 0, 0, 15.0f);
    D_801F2CD8 = 1;
    goto block_7;
case1:
    if (func_801CE274() != 0) {
        goto block_7;
    }
    func_801CC470(0, 0x04100026, 0, 0x100, 3.0f);
    return 8;
block_7:
    return 7;
}


s32 func_801E5574(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5584(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5594(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x13) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    func_801C0D04(4, 0);
    return 0xB;
}


extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);

s32 func_801E55F0(s32 arg0, s32 arg1) {
    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        D_801F2CD8 = 0;
        return 0xC;
    }
    return 0xB;
}

extern s32 func_801CE284();


s32 func_801E5644(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0xC;

case0:
    func_801CC4D8(0, 0x03480027, 0, 0, 15.0f);
    D_801F2CD8 = 1;
    goto done;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480027, 0, 0, 4.0f);
        D_801F2CD8 = 2;
    }
    goto done;

case2:
    if (func_801CE284() == 0) {
        goto done;
    }
    return 0xD;

done:
    return 0xC;
}


s32 func_801E571C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801E5770(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E5780(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5790(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E57A0(s32 arg0, s32 arg1) {
    return 18;
}



s32 func_801E57B0(s32 arg0, s32 arg1) {
    D_801F2CD8 = 0;
    return 0x13;
}


s32 func_801E57C8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto init;
    }
    if (state == 1) {
        goto ret14;
    }
    return 0x13;
init:
    func_801CC470(0, 0x0348002C, 0, 0, 3.0f);
    D_801F2CD8 = 1;
    goto ret13;
ret14:
    return 0x14;
ret13:
    return 0x13;
}


s32 func_801E5848(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}



s32 func_801E589C(s32 arg0, s32 arg1) {
    D_801F2CD8 = 1;
    return 0x16;
}


s32 func_801E58B8(s32 arg0, s32 arg1) {
    if (D_801F2CD8 == 1) {
        goto block_1;
    }
    if (D_801F2CD8 == 2) {
        goto block_2;
    }
    if (D_801F2CD8 == 3) {
        goto block_3;
    }
    return 0x16;
block_1:
    func_801CC4D8(0, 0x0348002D, 0, 0, 5.0f);
    D_801F2CD8 = 2;
    goto done;
block_2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002D, 0, 0, 4.0f);
        D_801F2CD8 = 3;
    }
    goto done;
block_3:
    if (func_801CE284() != 0) {
        goto ret17;
    }
    goto done;
ret17:
    return 0x17;
done:
    return 0x16;
}


s32 func_801E5994(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x44) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}


s32 func_801E59E8(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E59F8(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E5A08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC470(0, 0x0348002E, 0, 0, 5.0f);
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E5A68(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E5A78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_801CC4D8(0, 0x0348002F, 0, 0, 15.0f);
        D_801F2CD8 = 0;
        return 0x1D;
    }
    return 0x1C;
}



s32 func_801E5AE4(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F2CD8;
    if (state == 0) {
        goto block_0;
    }
    if (state == 1) {
        goto block_1;
    }
    return 0x1D;
block_0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002F, 0, 0, 3.0f);
        D_801F2CD8 = 1;
    }
    goto ret_1D;
block_1:
    if (func_801CE284() != 0) {
        return 0x1E;
    }
ret_1D:
    return 0x1D;
}


s32 func_801E5B80(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801CC470(0, 0x03480030, 0, 0x100, 6.0f);
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E5BE4(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x38) {
        func_801CC470(0, 0x03480031, 0, 0, 2.0f);
        return 0x20;
    }
    return 0x1F;
}



s32 func_801E5C48(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x21;
    }
    return 0x20;
}


s32 func_801E5C78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBEBC20) != 0) {
        func_8038D28C(0x282);
        func_801CC470(0, 0x03480032, 0, 0, 2.0f);
        return 0x22;
    }
    return 0x21;
}



s32 func_801E5CE8(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x23;
    }
    return 0x22;
}


s32 func_801E5D18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD59F80) != 0) {
        func_801CC470(0, 0x03480033, 0, 0, 3.0f);
        return 0x24;
    }
    return 0x23;
}



s32 func_801E5D7C(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x25;
    }
    return 0x24;
}


s32 func_801E5DAC(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E5DBC(s32 arg0, s32 arg1) {
    return 39;
}


s32 func_801E5DCC(s32 arg0, s32 arg1) {
    return 40;
}


s32 func_801E5DDC(s32 arg0, s32 arg1) {
    return 40;
}



s32 func_801E5DEC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E5E30_Float {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E5E30_Obj {
    u8 pad0[0x2C];
    struct func_801E5E30_Float *unk2C;
};

struct func_801E5E30_Node {
    u8 pad0[8];
    struct func_801E5E30_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5E30_Obj *unk24;
};

s32 func_801E5E30(s32 arg0, s32 arg1) {
    struct func_801E5E30_Obj *temp_v0;

    temp_v0 = ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -45.0f;
        ((struct func_801E5E30_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348001C, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801D51A4(void);

s32 func_801E5F04(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_801E5F34(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5F44(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5F54(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5F64(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5F74(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5F84(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5F94(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5FA4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5FB4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5FC4(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E5FD4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E6018_Out {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

struct func_801E6018_Ext {
    u8 pad0[0x2C];
    struct func_801E6018_Out *unk2C;
};

struct func_801E6018_Obj {
    u8 pad0[0x8];
    struct func_801E6018_Obj *unk8;
    u8 pad1[0x24 - 0xC];
    struct func_801E6018_Ext *unk24;
};

extern f32 D_801F4828;
extern f32 D_801F482C;
extern f32 D_801F4830;

s32 func_801E6018(s32 arg0, s32 arg1) {
    struct func_801E6018_Ext *temp_v0;

    temp_v0 = ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F4828;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = D_801F482C;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4830;
        ((struct func_801E6018_Obj *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320003C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6100(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6110(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x81B320) != 0) {
        func_801CC470(2, 0x0320003C, 0, 0, 6.0f);
        func_8038D28C(0x23B);
        return 4;
    }
    return 3;
}


s32 func_801E617C(s32 arg0, s32 arg1) {
    return 5;
}

extern s32 D_801F2DB4;

s32 func_801E618C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE4E1C0) != 0) {
        func_801CC4D8(2, 0x0320003D, 0, 0, 30.0f);
        D_801F2DB4 = 0;
        return 6;
    }
    return 5;
}

extern s32 func_801D58DC(void);
s32 func_801D58EC(void);


s32 func_801E61F8(s32 arg0, s32 arg1) {
    if (D_801F2DB4 == 0) {
        goto case0;
    }
    if (D_801F2DB4 == 1) {
        goto case1;
    }
    return 6;
case0:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x0320003D, 0, 0, 5.0f);
        D_801F2DB4 = 1;
    }
    goto ret6;
case1:
    if (func_801D58EC() != 0) {
        return 7;
    }
ret6:
    return 6;
}


s32 func_801E6294(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E62A4(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E62B4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


extern void func_801D5938(s32);

s32 func_801E6308(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320003E, 0, 0, 30.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E6360.s")


s32 func_801E6470(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 12;
    }
    return 13;
}


s32 func_801E64C4(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xB || func_801C1B1C() == 0) {
        return 13;
    }
    return 14;
}



s32 func_801E6518(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200042, 0, 0, 5.0f);
    func_801D5938(1);
    D_801F2DB4 = 0;
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E656C.s")


s32 func_801E667C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x10) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}



s32 func_801E66D0(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 17;
    }
    return 18;
}



s32 func_801E6724(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200047, 0, 0, 5.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E677C.s")


s32 func_801E688C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E68E0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}



s32 func_801E6934(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200047, 0, 0, 5.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E698C.s")


s32 func_801E6A9C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x20) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801E6AF0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E6B44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E6B9C.s")


s32 func_801E6CAC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 28;
    }
    return 29;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801E6D00(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2B) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801E6D54(s32 arg0, s32 arg1) {
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E6D88.s")


s32 func_801E6F0C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E6F60(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E6F70(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E6F80(s32 arg0, s32 arg1) {
    return 36;
}


s32 func_801E6F90(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E6FA0(s32 arg0, s32 arg1) {
    return 38;
}


s32 func_801E6FB0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 38;
    }
    return 39;
}


s32 func_801E7004(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200044, 0, 0, 5.0f);
    func_801D5938(1);
    D_801F2DB4 = 0;
    return 0x28;
}



s32 func_801E7058(s32 arg0, s32 arg1) {
    if (D_801F2DB4 == 0) {
        goto case0;
    }
    if (D_801F2DB4 == 1) {
        goto case1;
    }
    return 0x28;
case0:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200044, 0, 0, 3.0f);
        D_801F2DB4 = 1;
    }
    goto block_7;
case1:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        return 0x29;
    }
block_7:
    return 0x28;
}


typedef struct func_801E70FC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E70FC_Struct;


s32 func_801E70FC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3C) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}


s32 func_801E7150(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801E71A4(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200040, 0, 0, 2.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x2C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E71FC.s")


s32 func_801E730C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x44) || (func_801C1B1C() == 0)) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801E7360(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x47) || (func_801C1B1C() == 0)) {
        return 0x2E;
    }
    return 0x2F;
}


s32 func_801E73B4(s32 arg0, s32 arg1) {
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0x30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E73E8.s")


s32 func_801E7534(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4C) || (func_801C1B1C() == 0)) {
        return 0x31;
    }
    return 0x32;
}


s32 func_801E7588(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E7598(s32 arg0, s32 arg1) {
    return 52;
}


s32 func_801E75A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CC470(2, 0x0320003F, 0, 0, 3.0f);
        return 0x35;
    }
    return 0x34;
}



s32 func_801E760C(s32 arg0, s32 arg1) {
    if (func_801D58EC() != 0) {
        return 0x36;
    }
    return 0x35;
}



s32 func_801E763C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_801D58D0(1);
        func_801CC4D8(2, 0x03200048, 0, 0, 15.0f);
        return 0x37;
    }
    return 0x36;
}



s32 func_801E76AC(s32 arg0, s32 arg1) {
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200048, 0, 0x100, 7.0f);
        return 0x38;
    }
    return 0x37;
}


s32 func_801E7704(s32 arg0, s32 arg1) {
    return 57;
}



s32 func_801E7714(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA7D8C0) != 0) {
        func_801CC470(2, 0x03200049, 0, 0, 4.0f);
        return 0x3A;
    }
    return 0x39;
}



s32 func_801E7778(s32 arg0, s32 arg1) {
    if (func_801D58EC() != 0) {
        return 0x3B;
    }
    return 0x3A;
}


s32 func_801E77A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801CC470(2, 0x0320004A, 0, 0, 2.0f);
        func_8038D28C(0x198);
        return 0x3C;
    }
    return 0x3B;
}



s32 func_801E7814(s32 arg0, s32 arg1) {
    if (func_801D58EC() != 0) {
        return 0x3D;
    }
    return 0x3C;
}


s32 func_801E7844(s32 arg0, s32 arg1) {
    return 62;
}


s32 func_801E7854(s32 arg0, s32 arg1) {
    return 62;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E7864(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E78EC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E791C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E792C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E793C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E794C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E795C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E796C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E797C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E798C(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E799C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0xE66860) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        return 0xB;
    }
    return 0xA;
}



s32 func_801E7A24(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801E7A4C(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E7A5C(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E7A6C(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E7A7C(s32 arg0, s32 arg1) {
    return 2;
}


typedef struct func_801E7A8C_Struct {
    s32 w[6];
} func_801E7A8C_Struct;

extern func_801E7A8C_Struct D_801F2F04;

s32 func_801E7A8C(s32 arg0, s32 arg1) {
    func_801E7A8C_Struct sp18;

    sp18 = D_801F2F04;
    func_801C18CC(2, &sp18);
    return 0x3;
}



s32 func_801E7AF4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801F1860[];

s32 func_801E7B24(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1860);
    return 5;
}


s32 func_8038CBF0(void);

s32 func_801E7B58(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E7B88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801E7BB0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7BB0_Struct;

extern func_801E7BB0_Struct D_801F2F1C;

s32 func_801E7BB0(s32 arg0, s32 arg1) {
    func_801E7BB0_Struct sp18;

    sp18 = D_801F2F1C;
    func_801C18CC(2, &sp18);
    return 8;
}



s32 func_801E7C18(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E7C48(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801E7C70_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7C70_Struct;

extern func_801E7C70_Struct D_801F2F34;

s32 func_801E7C70(s32 arg0, s32 arg1) {
    func_801E7C70_Struct sp18;

    sp18 = D_801F2F34;
    func_801C18CC(2, &sp18);
    return 0xB;
}



s32 func_801E7CD8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


extern u8 D_801F18D4[];

s32 func_801E7D08(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F18D4);
    return 13;
}



s32 func_801E7D3C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E7D6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xF;
}


typedef struct func_801E7D94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7D94_Struct;

extern func_801E7D94_Struct D_801F2F4C;

s32 func_801E7D94(s32 arg0, s32 arg1) {
    func_801E7D94_Struct sp18;

    sp18 = D_801F2F4C;
    func_801C18CC(2, (void *) &sp18);
    return 0x10;
}



s32 func_801E7DFC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801E7E2C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801E7E54_Struct {
    s32 w[9];
} func_801E7E54_Struct;

s32 func_801C18CC(s32 arg0, func_801E7E54_Struct *arg1);
extern func_801E7E54_Struct D_801F2F64;

s32 func_801E7E54(s32 arg0, s32 arg1) {
    func_801E7E54_Struct sp1C;

    sp1C = D_801F2F64;
    func_801C18CC(3, &sp1C);
    return 19;
}



s32 func_801E7EB8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


extern u8 D_801F190C[];

s32 func_801E7EE8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F190C);
    return 21;
}



s32 func_801E7F1C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}


s32 func_801E7F4C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x17;
}


typedef struct func_801E7F74_Struct {
    s32 w[9];
} func_801E7F74_Struct;

extern func_801E7F74_Struct D_801F2F88;

s32 func_801E7F74(s32 arg0, s32 arg1) {
    func_801E7F74_Struct sp1C;

    sp1C = D_801F2F88;
    func_801C18CC(3, &sp1C);
    return 24;
}



s32 func_801E7FD8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E8008(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801E8030_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8030_Struct;

extern func_801E8030_Struct D_801F2FAC;

s32 func_801E8030(s32 arg0, s32 arg1) {
    func_801E8030_Struct sp18;

    sp18 = D_801F2FAC;
    func_801C18CC(2, &sp18);
    return 0x1B;
}



s32 func_801E8098(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


extern u8 D_801F195C[];

s32 func_801E80C8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F195C);
    return 29;
}



s32 func_801E80FC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E812C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E8154_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8154_Struct;

extern func_801E8154_Struct D_801F2FC4;

s32 func_801E8154(s32 arg0, s32 arg1) {
    func_801E8154_Struct sp18;

    sp18 = D_801F2FC4;
    func_801C18CC(2, &sp18);
    return 0x20;
}



s32 func_801E81BC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E81EC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}


typedef struct func_801E8214_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8214_Struct;

extern func_801E8214_Struct D_801F2FDC;

s32 func_801E8214(s32 arg0, s32 arg1) {
    func_801E8214_Struct sp18;

    sp18 = D_801F2FDC;
    func_801C18CC(2, &sp18);
    return 0x23;
}



s32 func_801E827C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


extern u8 D_801F1A30[];

s32 func_801E82AC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1A30);
    return 37;
}



s32 func_801E82E0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x26;
    }
    return 0x25;
}


s32 func_801E8310(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}


typedef struct func_801E8338_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8338_Struct;

extern func_801E8338_Struct D_801F2FF4;

s32 func_801E8338(s32 arg0, s32 arg1) {
    func_801E8338_Struct sp18;

    sp18 = D_801F2FF4;
    func_801C18CC(2, &sp18);
    return 0x28;
}



s32 func_801E83A0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E83D0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2A;
}


typedef struct func_801E83F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E83F8_Struct;

extern func_801E83F8_Struct D_801F300C;

s32 func_801E83F8(s32 arg0, s32 arg1) {
    func_801E83F8_Struct sp18;

    sp18 = D_801F300C;
    func_801C18CC(2, &sp18);
    return 0x2B;
}



s32 func_801E8460(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2B;
    }
    return 0x2C;
}


extern u8 D_801F1B3C[];

s32 func_801E8490(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1B3C);
    return 45;
}



s32 func_801E84C4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801E84F4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2F;
}


typedef struct func_801E851C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E851C_Struct;

extern func_801E851C_Struct D_801F3024;

s32 func_801E851C(s32 arg0, s32 arg1) {
    func_801E851C_Struct sp18;

    sp18 = D_801F3024;
    func_801C18CC(2, &sp18);
    return 0x30;
}



s32 func_801E8584(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801E85B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x32;
}


s32 func_801E85DC(s32 arg0, s32 arg1) {
    return 51;
}


s32 func_801E85EC(s32 arg0, s32 arg1) {
    return 52;
}


s32 func_801E85FC(s32 arg0, s32 arg1) {
    return 53;
}


s32 func_801E860C(s32 arg0, s32 arg1) {
    return 54;
}


typedef struct func_801E861C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E861C_Struct;

extern func_801E861C_Struct D_801F303C;

s32 func_801E861C(s32 arg0, s32 arg1) {
    func_801E861C_Struct sp18;

    sp18 = D_801F303C;
    func_801C18CC(2, &sp18);
    return 0x37;
}



s32 func_801E8684(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}


extern u8 D_801F1B84[];

s32 func_801E86B4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1B84);
    return 57;
}



s32 func_801E86E8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3A;
    }
    return 0x39;
}


s32 func_801E8718(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3B;
}


typedef struct func_801E8740_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8740_Struct;

extern func_801E8740_Struct D_801F3054;

s32 func_801E8740(s32 arg0, s32 arg1) {
    func_801E8740_Struct sp18;

    sp18 = D_801F3054;
    func_801C18CC(2, &sp18);
    return 0x3C;
}



s32 func_801E87A8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801E87D8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3E;
}


typedef struct func_801E8800_Struct {
    s32 w[9];
} func_801E8800_Struct;

extern func_801E8800_Struct D_801F306C;

s32 func_801E8800(s32 arg0, s32 arg1) {
    func_801E8800_Struct sp1C;

    sp1C = D_801F306C;
    func_801C18CC(3, &sp1C);
    return 63;
}



s32 func_801E8864(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3F;
    }
    return 0x40;
}


extern u8 D_801F1C00[];

s32 func_801E8894(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1C00);
    return 65;
}



s32 func_801E88C8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x42;
    }
    return 0x41;
}


s32 func_801E88F8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x43;
}


typedef struct func_801E8920_Struct {
    s32 w[9];
} func_801E8920_Struct;

extern func_801E8920_Struct D_801F3090;

s32 func_801E8920(s32 arg0, s32 arg1) {
    func_801E8920_Struct sp1C;

    sp1C = D_801F3090;
    func_801C18CC(3, &sp1C);
    return 68;
}



s32 func_801E8984(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x44;
    }
    return 0x45;
}


s32 func_801E89B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x46;
}


typedef struct func_801E89DC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E89DC_Struct;

extern func_801E89DC_Struct D_801F30B4;

s32 func_801E89DC(s32 arg0, s32 arg1) {
    func_801E89DC_Struct sp18;

    sp18 = D_801F30B4;
    func_801C18CC(2, &sp18);
    return 0x47;
}



s32 func_801E8A44(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x47;
    }
    return 0x48;
}


extern u8 D_801F1C64[];

s32 func_801E8A74(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1C64);
    return 73;
}



s32 func_801E8AA8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4A;
    }
    return 0x49;
}


s32 func_801E8AD8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4B;
}


typedef struct func_801E8B00_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8B00_Struct;

extern func_801E8B00_Struct D_801F30CC;

s32 func_801E8B00(s32 arg0, s32 arg1) {
    func_801E8B00_Struct sp18;

    sp18 = D_801F30CC;
    func_801C18CC(2, &sp18);
    return 0x4C;
}



s32 func_801E8B68(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4C;
    }
    return 0x4D;
}


s32 func_801E8B98(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4E;
}


s32 func_801E8BC0(s32 arg0, s32 arg1) {
    return 79;
}


s32 func_801E8BD0(s32 arg0, s32 arg1) {
    return 80;
}


s32 func_801E8BE0(s32 arg0, s32 arg1) {
    return 81;
}


s32 func_801E8BF0(s32 arg0, s32 arg1) {
    return 81;
}


extern f32 D_801F4848;

s32 func_801E8C00(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BE98(D_801F4848);
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}


extern f32 D_801F484C;
extern f32 D_801F4850;
extern f32 D_801F4854;
extern f32 D_801F4858;

s32 func_801E8C60(s32 arg0, s32 arg1)
{
  f32 sp20;
  f32 sp24;
  float new_var;
 do { sp20 = D_801F484C; sp24 = D_801F4850; new_var = 0.0f; } while (0);
  if (func_8038BEF8(new_var, 2.5f, 12.7f, 14.4f, -47.0f, 4.0f, D_801F4854, D_801F4858, sp20, sp24, -59.5f, sp20, sp24, -59.5f))
  {
    return 2;
  }
  return 1;
 if (1) { }
}


s32 func_801E8D0C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8D1C(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E8D2C(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}


s32 func_801E8D80(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E8D90(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 6;
    }
    return 7;
}


s32 func_801E8DE4(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xB || func_801C1B1C() == 0) {
        return 7;
    }
    return 8;
}



s32 func_801E8E38(s32 arg0, s32 arg1) {
    func_8038D28C(0x69);
    func_8038BED4();
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E8E6C.s")


s32 func_801E8F30(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xE) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


struct func_801E8F84_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E8F84(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 11;
    }
    return 12;
}


s32 func_801E8FD8(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E8FE8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x16) || (func_801C1B1C() == 0)) {
        return 13;
    }
    return 14;
}


s32 func_801E903C(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E904C(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E905C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x280);
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E90AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E918C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9348.s")


s32 func_801E940C(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E941C(s32 arg0, s32 arg1) {
    return 23;
}


typedef struct func_801E942C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E942C_Struct;


s32 func_801E942C(s32 arg0, s32 arg1) {
    func_801E942C_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x17;
    }
    return 0x18;
}


s32 func_801E9480(s32 arg0, s32 arg1) {
    return 25;
}


typedef struct func_801E9490_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E9490_Struct;


s32 func_801E9490(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x22) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}



typedef struct func_801E94E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E94E4_Struct;

s32 func_801E94E4(s32 arg0, s32 arg1) {
    if ((((func_801E94E4_Struct *)func_801BF6B0(7))->unkC < 0x25) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}


extern f32 D_801F4904;
extern f32 D_801F4908;
extern f32 D_801F490C;
extern f32 D_801F4910;

s32 func_801E9538(s32 arg0, s32 arg1) {
    func_8038BE98(40.0f);
    func_8038BD50(D_801F4904, D_801F4908, 0xC25B3333);
    D_8038BD88(D_801F490C, D_801F4910, 0xC22E0000);
    return 0x1C;
}


s32 func_801E959C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 28;
    }
    return 0x1D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E95F0.s")

extern s32 D_8038C158();

s32 func_801E9644(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E966C.s")


s32 func_801E973C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E9790(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x33) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801E97E4(s32 arg0, s32 arg1) {
    return 35;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E97F4.s")


s32 func_801E9848(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x3B || func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


extern f32 D_801F4930;
extern f32 D_801F4934;
extern f32 D_801F4938;
extern f32 D_801F493C;
extern f32 D_801F4940;

s32 func_801E989C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801F4930);
    func_8038BD50(D_801F4934, D_801F4938, 0xC257999A);
    D_8038BD88(D_801F493C, D_801F4940, 0xC225999A);
    return 0x26;
}


s32 func_801E9904(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x40) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801E9958(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}


extern f32 D_801F4944;
extern f32 D_801F4948;
extern f32 D_801F494C;
extern f32 D_801F4950;

s32 func_801E99AC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801F4944);
    func_8038BD50(D_801F4948, D_801F494C, 0xC1A33333);
    D_8038BD88(D_801F4950, 14.0f, 0xC2220000);
    return 0x29;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9A64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9AB8.s")


struct func_801E9B14_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E9B14(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x58) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801E9B68(s32 arg0, s32 arg1) {
    func_801E295C_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0x2D;
    }
    return 0x2E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9BBC.s")


s32 func_801E9C14(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    return 0x30;
}


s32 func_801E9C68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6B) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}


extern f32 D_801F4974;
extern f32 D_801F4978;

s32 func_801E9CBC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F4974, D_801F4978, 0xC159999A);
    D_8038BD88(16.0f, 13.5f, 0xC21E0000);
    return 0x32;
}


s32 func_801E9D14(s32 arg0, s32 arg1) {
    func_801E295C_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x70) || (func_801C1B1C() == 0)) {
        return 0x32;
    }
    return 0x33;
}


s32 func_801E9D68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7B) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


extern f32 D_801F497C;
extern f32 D_801F4980;
extern f32 D_801F4984;
extern f32 D_801F4988;

s32 func_801E9DBC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F497C, D_801F4980, 0xC257999A);
    D_8038BD88(D_801F4984, D_801F4988, 0xC225999A);
    return 0x35;
}


s32 func_801E9E18(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x80) || (func_801C1B1C() == 0)) {
        return 0x35;
    }
    return 0x36;
}



s32 func_801E9E6C(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x8B || func_801C1B1C() == 0) {
        return 0x36;
    }
    return 0x37;
}


extern f32 D_801F498C;
extern f32 D_801F4990;

s32 func_801E9EC0(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F498C, D_801F4990, 0x427C6666);
    D_8038BD88(11.0f, 13.0f, 0xC1F4CCCD);
    return 0x38;
}


s32 func_801E9F1C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}


s32 func_801E9F70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x93) || (func_801C1B1C() == 0)) {
        return 0x39;
    }
    return 0x3A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801E9FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EA01C.s")


s32 func_801EA070(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x9B) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801EA0C4(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0x3E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EA0EC.s")


typedef struct func_801EA1B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EA1B0_Struct;

s32 func_801EA1B0(s32 arg0, s32 arg1) {
    if ((((func_801EA1B0_Struct *)func_801BF6B0(7))->unkC < 0x9E) || (func_801C1B1C() == 0)) {
        return 0x3F;
    }
    return 0x40;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EA204.s")


s32 func_801EA258(s32 arg0, s32 arg1) {
    return 66;
}


struct func_801EA268_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EA268(s32 arg0, s32 arg1) {
    struct func_801EA268_Struct *obj;

    obj = (struct func_801EA268_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0xA6) || (func_801C1B1C() == 0)) {
        return 0x42;
    }
    return 0x43;
}


s32 func_801EA2BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA9) || (func_801C1B1C() == 0)) {
        return 0x43;
    }
    return 0x44;
}


extern f32 D_801F49CC;
extern f32 D_801F49D0;
extern f32 D_801F49D4;

s32 func_801EA310(s32 arg0, s32 arg1) {
    func_8038BD50(10.5f, D_801F49CC, 0xC277999A);
    D_8038BD88(D_801F49D0, D_801F49D4, 0xC201999A);
    return 0x45;
}


s32 func_801EA36C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xAE) || (func_801C1B1C() == 0)) {
        return 0x45;
    }
    return 0x46;
}


typedef struct func_801EA3C0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EA3C0_Struct;


s32 func_801EA3C0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB1) || (func_801C1B1C() == 0)) {
        return 0x46;
    }
    return 0x47;
}


extern f32 D_801F49D8;
extern f32 D_801F49DC;
extern f32 D_801F49E0;

s32 func_801EA414(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F49D8, 16.0f, 0xC2620000);
    D_8038BD88(D_801F49DC, D_801F49E0, 0xC20A0000);
    return 0x48;
}


s32 func_801EA468(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB6) || (func_801C1B1C() == 0)) {
        return 0x48;
    }
    return 0x49;
}


s32 func_801EA4BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB9) || (func_801C1B1C() == 0)) {
        return 0x49;
    }
    return 0x4A;
}


extern f32 D_801F49E4;
extern f32 D_801F49E8;

s32 func_801EA510(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F49E4, 14.0f, 0xC230CCCD);
    D_8038BD88(D_801F49E8, 16.0f, 0xC21E0000);
    return 0x4B;
}


s32 func_801EA568(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0x4B;
    }
    return 0x4C;
}


s32 func_801EA5BC(s32 arg0, s32 arg1) {
    return 77;
}


s32 func_801EA5CC(s32 arg0, s32 arg1) {
    return 78;
}



s32 func_801EA5DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x4F;
    }
    return 0x4E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EA624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EA6F4.s")


s32 func_801EA7B8(s32 arg0, s32 arg1) {
    return 81;
}


s32 func_801EA7C8(s32 arg0, s32 arg1) {
    return 82;
}


s32 func_801EA7D8(s32 arg0, s32 arg1) {
    return 83;
}


s32 func_801EA7E8(s32 arg0, s32 arg1) {
    return 84;
}


s32 func_801EA7F8(s32 arg0, s32 arg1) {
    return 85;
}


s32 func_801EA808(s32 arg0, s32 arg1) {
    return 86;
}


s32 func_801EA818(s32 arg0, s32 arg1) {
    return 87;
}


s32 func_801EA828(s32 arg0, s32 arg1) {
    return 88;
}


s32 func_801EA838(s32 arg0, s32 arg1) {
    return 89;
}


s32 func_801EA848(s32 arg0, s32 arg1) {
    return 90;
}



s32 func_801EA858(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}



s32 func_801EA894(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xE5, 0x98, 0x70);
    func_801CCEC8(0, 0x22, -0xC, 0x1F);
    func_801CCE88(1, 0xB2, 0xFF, 0xFD);
    func_801CCEC8(1, -0x29, 0x3C, -0x10);
    func_801CCE50(0x35, 0x1D, 0xA);
    return 2;
}


s32 func_801EA920(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EA930(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EA940(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EA950(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EA960(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EA970(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EA980(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EA990(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801EA9A0(s32 arg0, s32 arg1) {
    func_801C2420(0x43A, func_8038DD54 + 0x14);
    return 1;
}


struct func_801EA9D4_StructR {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    void *unk30;
};

struct func_801EA9D4_StructQ {
    u8 pad0[0x2C];
    struct func_801EA9D4_StructR *unk2C;
};

struct func_801EA9D4_StructP {
    struct func_801EA9D4_StructQ *unk0;
};


s32 func_801EA9D4(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x43A, 0);
    func_8038D854->unk0->unk2C->unk4 = 0.0f;
    func_8038D854->unk0->unk2C->unk8 = 0.0f;
    func_8038D854->unk0->unk2C->unkC = 0.0f;
    func_8038D854->unk0->unk2C->unk18 = 1.0f;
    func_8038D854->unk0->unk2C->unk1C = 1.0f;
    func_8038D854->unk0->unk2C->unk20 = 1.0f;
    func_8038D854->unk0->unk2C->unk12 = 0;
    func_8038D854->unk0->unk2C->unk30 = D_8017AE98;
    return 2;
}


s32 func_801EAACC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EAADC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EAAEC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EAAFC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EAB0C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EAB1C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EAB2C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EAB3C(s32 arg0, s32 arg1) {
    return 9;
}


struct func_801EAB4C_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801EAB4C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(2)->unkC <= 0) {
        return 0;
    }
    func_801C2420(0x261, D_8038DD90);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EABA4.s")


s32 func_801EAD18(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EAD28(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EAD38(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EAD48(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EAD58(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EAD68(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EAD78(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EAD88(s32 arg0, s32 arg1) {
    return 9;
}


extern u8 D_801DB734[];

s32 func_801EAD98(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x11B, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB660);
    func_801CC4C0(1, D_801DB664);
    func_801C2420(0x34, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB730);
    func_801CC4C0(2, D_801DB734);
    return 1;
}



s32 func_801EAE64(s32 arg0, s32 arg1) {
    func_80005670((void *)((s32 *)func_801DAAF0)[9], (void *)((u8 *)func_801DAC30 + 0x2C));
    func_801D517C(0);
    func_801D5188(0);
    func_80005670((void *)((s32 *)((s32 *)func_801DAAF0)[9])[2], D_801DB64C);
    func_801D58C4(1);
    func_801D58D0(1);
    func_80005670((void *)((s32 *)((s32 *)((s32 *)func_801DAAF0)[9])[2])[2], D_801DB71C);
    func_801CC530();
    return 2;
}


struct func_801EAEF8_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EAEF8_D {
    u8 pad0[0x2C];
    struct func_801EAEF8_E *unk2C;
};

struct func_801EAEF8_C {
    u8 pad0[0x24];
    struct func_801EAEF8_D *unk24;
};

struct func_801EAEF8_B {
    u8 pad0[8];
    struct func_801EAEF8_C *unk8;
};

s32 func_801EAEF8(s32 arg0, s32 arg1) {
    struct func_801EAEF8_D *temp_v0;

    temp_v0 = ((struct func_801EAEF8_B *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 10.5f;
        ((struct func_801EAEF8_B *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EAEF8_B *)D_801DAB14)->unk8->unk24->unk2C->unkC = -42.0f;
        ((struct func_801EAEF8_B *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(0, 0x03480034, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801EAFC0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EAFD0(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801EAFE0(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}


s32 func_801EB034(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EB044(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EB054(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 8;
    }
    return 9;
}


s32 func_801EB0A8(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801EB0B8(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801EB0C8(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801EB0D8(s32 arg0, s32 arg1) {
    return 13;
}



typedef struct func_801EB0E8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EB0E8_Struct;

s32 func_801EB0E8(s32 arg0, s32 arg1) {
    if ((((func_801EB0E8_Struct *)func_801BF6B0(7))->unkC < 0x25) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


extern s32 D_801F345C;

s32 func_801EB13C(s32 arg0, s32 arg1) {
    D_801F345C = 0;
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EB154.s")


s32 func_801EB2F4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}


s32 func_801EB348(s32 arg0, s32 arg1) {
    func_801E295C_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}



s32 func_801EB39C(s32 arg0, s32 arg1) {
    D_801F345C = 0;
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EB3B4.s")


s32 func_801EB50C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801EB560(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x93) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801EB5B4(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801EB5C4(s32 arg0, s32 arg1) {
    return 24;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EB5D4.s")


s32 func_801EB628(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x9B) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}



s32 func_801EB67C(s32 arg0, s32 arg1) {
    D_801F345C = 0;
    return 0x1B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EB694.s")


typedef struct func_801EB7EC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EB7EC_Struct;

s32 func_801EB7EC(s32 arg0, s32 arg1) {
    if ((((func_801EB7EC_Struct *)func_801BF6B0(7))->unkC < 0x9E) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801EB840(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801EB850(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801EB860(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801EB8A4_Struct2C {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    u16 unk12;
};

struct func_801EB8A4_Struct2C_Owner {
    u8 pad0[0x2C];
    struct func_801EB8A4_Struct2C *unk2C;
};

struct func_801EB8A4_Struct24 {
    u8 pad0[0x24];
    struct func_801EB8A4_Struct2C_Owner *unk24;
};

struct func_801EB8A4_Struct8 {
    u8 pad0[0x8];
    struct func_801EB8A4_Struct24 *unk8;
};

struct func_801EB8A4_Struct8b {
    u8 pad0[0x8];
    struct func_801EB8A4_Struct8 *unk8;
};

s32 func_801EB8A4(s32 arg0, s32 arg1) {
    struct func_801EB8A4_Struct2C_Owner *temp_v0;

    temp_v0 = ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 12.5f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -10.0f;
        ((struct func_801EB8A4_Struct8b *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x03480036, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801EB97C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB98C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB99C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EB9AC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xB || func_801C1B1C() == 0) {
        return 5;
    }
    return 6;
}


s32 func_801EBA00(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EBA10(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EBA20(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xE) || (func_801C1B1C() == 0)) {
        return 0x8;
    }
    return 0x9;
}


struct func_801EBA74_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EBA74(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801D51F0(s32 arg0);

s32 func_801EBAC8(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480036, 0, 0, 3.0f);
    func_801D51F0(1);
    return 0xB;
}



s32 func_801EBB18(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 12;
    }
    return 11;
}


s32 func_801EBB58(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x16) || (func_801C1B1C() == 0)) {
        return 12;
    }
    return 13;
}


s32 func_801EBBAC(s32 arg0, s32 arg1) {
    return 14;
}


extern s32 D_801F34DC;

s32 func_801EBBBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_801F34DC = 0;
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EBC00.s")


s32 func_801EBDC4(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801EBDD4(s32 arg0, s32 arg1) {
    return 18;
}


typedef struct func_801EBDE4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EBDE4_Struct;


s32 func_801EBDE4(s32 arg0, s32 arg1) {
    func_801EBDE4_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801EBE38(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EBE6C.s")


typedef struct func_801EBFC0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EBFC0_Struct;


s32 func_801EBFC0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x22) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}



typedef struct func_801EC014_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EC014_Struct;

s32 func_801EC014(s32 arg0, s32 arg1) {
    if ((((func_801EC014_Struct *)func_801BF6B0(7))->unkC < 0x25) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801EC068(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EC09C.s")


s32 func_801EC2A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 25;
    }
    return 0x1A;
}


s32 func_801EC2F4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}


s32 func_801EC348(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480040, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x1C;
}



s32 func_801EC398(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 29;
    }
    return 28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EC3D8.s")


s32 func_801EC42C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4B) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801EC480(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480041, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x20;
}



s32 func_801EC4D0(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 33;
    }
    return 32;
}


s32 func_801EC510(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x50) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EC564.s")


s32 func_801EC5B8(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480040, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x24;
}



s32 func_801EC608(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 37;
    }
    return 36;
}


struct func_801EC648_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801EC648(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x58) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}


s32 func_801EC69C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5B) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801EC6F0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480041, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x28;
}



s32 func_801EC740(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 41;
    }
    return 40;
}


s32 func_801EC780(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x60) {
        goto ret1D;
    }
    if (func_801C1B1C() != 0) {
        goto ret1E;
    }
ret1D:
    return 0x29;
ret1E:
    return 0x2A;
}


s32 func_801EC7D4(s32 arg0, s32 arg1) {
    func_801E295C_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801EC828(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x2C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EC85C.s")


s32 func_801ECA20(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801ECA74(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7B) || (func_801C1B1C() == 0)) {
        return 0x2E;
    }
    return 0x2F;
}


s32 func_801ECAC8(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x30;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801ECAFC.s")


s32 func_801ECBDC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x80) || (func_801C1B1C() == 0)) {
        return 0x31;
    }
    return 0x32;
}



s32 func_801ECC30(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x8B || func_801C1B1C() == 0) {
        return 0x32;
    }
    return 0x33;
}


s32 func_801ECC84(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480040, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x34;
}



s32 func_801ECCD4(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 53;
    }
    return 52;
}


s32 func_801ECD14(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 0x35;
    }
    return 0x36;
}


s32 func_801ECD68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x93) || (func_801C1B1C() == 0)) {
        return 0x36;
    }
    return 0x37;
}


s32 func_801ECDBC(s32 arg0, s32 arg1) {
    return 56;
}


s32 func_801ECDCC(s32 arg0, s32 arg1) {
    return 57;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801ECDDC.s")


s32 func_801ECE30(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x9B) || (func_801C1B1C() == 0)) {
        return 0x3A;
    }
    return 0x3B;
}



s32 func_801ECE84(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    return 0x3C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801ECE9C.s")


typedef struct func_801ED034_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801ED034_Struct;

s32 func_801ED034(s32 arg0, s32 arg1) {
    if ((((func_801ED034_Struct *)func_801BF6B0(7))->unkC < 0x9E) || (func_801C1B1C() == 0)) {
        return 0x3D;
    }
    return 0x3E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801ED088.s")


s32 func_801ED0DC(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480040, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x40;
}



s32 func_801ED12C(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 65;
    }
    return 64;
}


struct func_801ED16C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801ED16C(s32 arg0, s32 arg1) {
    struct func_801ED16C_Struct *obj;

    obj = (struct func_801ED16C_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0xA6) || (func_801C1B1C() == 0)) {
        return 0x41;
    }
    return 0x42;
}


s32 func_801ED1C0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA9) || (func_801C1B1C() == 0)) {
        return 0x42;
    }
    return 0x43;
}


s32 func_801ED214(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03480041, 0, 0, 4.0f);
    func_801D51F0(1);
    return 0x44;
}



s32 func_801ED264(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 69;
    }
    return 68;
}


s32 func_801ED2A4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xAE) || (func_801C1B1C() == 0)) {
        return 0x45;
    }
    return 0x46;
}


typedef struct func_801ED2F8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801ED2F8_Struct;


s32 func_801ED2F8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB1) || (func_801C1B1C() == 0)) {
        return 0x46;
    }
    return 0x47;
}


s32 func_801ED34C(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x48;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801ED380.s")


s32 func_801ED460(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB6) || (func_801C1B1C() == 0)) {
        return 0x49;
    }
    return 0x4A;
}


s32 func_801ED4B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB9) || (func_801C1B1C() == 0)) {
        return 0x4A;
    }
    return 0x4B;
}


s32 func_801ED508(s32 arg0, s32 arg1) {
    D_801F34DC = 0;
    func_801D51F0(1);
    return 0x4C;
}


extern s32 func_801D5194();

s32 func_801ED53C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F34DC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x4C;
case0:
    func_801CC4D8(1, 0x0348003B, 0, 0, 15.0f);
    D_801F34DC = 1;
    goto ret4c;
case1:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348003B, 0, 0, 9.0f);
        D_801F34DC = 2;
    }
    goto ret4c;
case2:
    func_801D51F0(0);
    return 0x4D;
ret4c:
    return 0x4C;
}


s32 func_801ED60C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0x4D;
    }
    return 0x4E;
}


s32 func_801ED660(s32 arg0, s32 arg1) {
    return 79;
}


s32 func_801ED670(s32 arg0, s32 arg1) {
    return 80;
}


s32 func_801ED680(s32 arg0, s32 arg1) {
    return 81;
}


s32 func_801ED690(s32 arg0, s32 arg1) {
    return 81;
}



s32 func_801ED6A0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801F4ACC;
extern f32 D_801F4AD0;
extern f32 D_801F4AD4;

typedef struct func_801ED6E4_Out {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_801ED6E4_Out;

typedef struct func_801ED6E4_Ext {
    u8 pad0[0x2C];
    func_801ED6E4_Out *unk2C;
} func_801ED6E4_Ext;

typedef struct func_801ED6E4_Node {
    u8 pad0[0x8];
    struct func_801ED6E4_Node *unk8;
    u8 pad1[0x24 - 0xC];
    func_801ED6E4_Ext *unk24;
} func_801ED6E4_Node;

s32 func_801ED6E4(s32 arg0, s32 arg1) {
    func_801ED6E4_Ext *temp_v0;

    temp_v0 = ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F4ACC;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = D_801F4AD0;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4AD4;
        ((func_801ED6E4_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x0320004B, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801ED7CC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801ED7DC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801ED7EC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801ED7FC(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}


extern s32 D_801F362C;

s32 func_801ED850(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320004B, 0, 0, 6.0f);
    func_801D5938(1);
    D_801F362C = 0;
    return 7;
}



s32 func_801ED8A4(s32 arg0, s32 arg1) {
    if (D_801F362C == 0) {
        goto case0;
    }
    if (D_801F362C != 1) {
        goto block_7;
    }
    goto case1;
case0:
    if (func_801D58EC() != 0) {
        func_801D5938(0);
        func_801CC4D8(2, 0x03200050, 0, 0, 5.0f);
        D_801F362C = 1;
    }
    goto block_7;
case1:
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200050, 0, 0x100, 10.0f);
        return 8;
    }
block_7:
    return 7;
}


s32 func_801ED96C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 8;
    }
    return 9;
}


struct func_801ED9C0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801ED9C0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}



s32 func_801EDA14(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EDA2C.s")


s32 func_801EDB6C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x16) || (func_801C1B1C() == 0)) {
        return 12;
    }
    return 13;
}


s32 func_801EDBC0(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801EDBD0(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801EDBE0(s32 arg0, s32 arg1) {
    return 16;
}


extern f32 D_801F4AD8;

s32 func_801EDBF0(s32 arg0, s32 arg1)
{
  register struct func_801E6018_Obj **slot;
  short new_var;
  new_var = 0x24;
  slot = (struct func_801E6018_Obj **) (func_801DAAF0 + new_var);
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk4 = 35.0f;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F4AD8;
  (*slot)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x171C;
  func_801CC470(2, 0x03200052, 0, 1, 1.0f);
  func_801D58D0(0);
  return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EDCD0.s")



s32 func_801EDD24(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EDD3C.s")


s32 func_801EDEF0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x30) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801EDF44(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x33) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}



s32 func_801EDF98(s32 arg0, s32 arg1) {
    D_801F362C = 3;
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EDFB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE068.s")


s32 func_801EE0BC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x3B || func_801C1B1C() == 0) {
        return 0x19;
    }
    return 0x1A;
}


s32 func_801EE110(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    func_801D5938(1);
    return 0x1B;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE144.s")


s32 func_801EE290(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x40) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801EE2E4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6B) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801EE338(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    func_801D5938(1);
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE36C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE4B8.s")


s32 func_801EE50C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x73) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801EE560(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    func_801D5938(1);
    return 0x23;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE594.s")


s32 func_801EE6E0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x78 || func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801EE734(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x83) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}



s32 func_801EE788(s32 arg0, s32 arg1) {
    D_801F362C = 0;
    return 0x27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file033/801E1BE0/func_801EE7A0.s")


s32 func_801EE8E0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x88) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801EE934(s32 arg0, s32 arg1) {
    return 42;
}


s32 func_801EE944(s32 arg0, s32 arg1) {
    return 43;
}



s32 func_801EE954(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_801F362C = 0;
        return 0x2C;
    }
    return 0x2B;
}



s32 func_801EE998(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F362C;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x2C;

case0:
    func_801CC4D8(2, 0x0320004E, 0, 0, 3.0f);
    D_801F362C = 1;
    goto done;

case1:
    if (func_801D58DC() != 0) {
        goto done;
    }
    func_801CC470(2, 0x0320004E, 0, 0, 6.0f);
    D_801F362C = 2;
    goto done;

case2:
    if (func_801D58EC() != 0) {
        return 0x2D;
    }
    goto done;

done:
    return 0x2C;
}


s32 func_801EEA70(s32 arg0, s32 arg1) {
    return 46;
}


s32 func_801EEA80(s32 arg0, s32 arg1) {
    return 46;
}



s32 func_801EEA90(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0xF4240) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801EEB18(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801EEB48(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EEB58(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EEB68(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EEB78(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EEB88(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EEB98(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EEBA8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EEBB8(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801EEBC8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x50DF20) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0xB;
    }
    return 0xA;
}



s32 func_801EEC50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801EEC78(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801EEC88(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801EEC98(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801EECA8(s32 arg0, s32 arg1) {
    return 2;
}


typedef struct func_801EECB8_Struct {
    s32 w[9];
} func_801EECB8_Struct;

extern func_801EECB8_Struct D_801F373C;

s32 func_801EECB8(s32 arg0, s32 arg1) {
    func_801EECB8_Struct sp1C;

    sp1C = D_801F373C;
    func_801C18CC(3, &sp1C);
    return 3;
}



s32 func_801EED1C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


extern u8 D_801F1CB8[];

s32 func_801EED4C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1CB8);
    return 5;
}



s32 func_801EED80(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801EEDB0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801EEDD8_Struct {
    s32 w[9];
} func_801EEDD8_Struct;

extern func_801EEDD8_Struct D_801F3760;

s32 func_801EEDD8(s32 arg0, s32 arg1) {
    func_801EEDD8_Struct sp1C;

    sp1C = D_801F3760;
    func_801C18CC(3, &sp1C);
    return 8;
}



s32 func_801EEE3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801EEE6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801EEE94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EEE94_Struct;

extern func_801EEE94_Struct D_801F3784;

s32 func_801EEE94(s32 arg0, s32 arg1) {
    func_801EEE94_Struct sp18;

    sp18 = D_801F3784;
    func_801C18CC(2, &sp18);
    return 0xB;
}



s32 func_801EEEFC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801EEF2C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xD;
}


typedef struct func_801EEF54_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EEF54_Struct;

extern func_801EEF54_Struct D_801F379C;

s32 func_801EEF54(s32 arg0, s32 arg1) {
    func_801EEF54_Struct sp18;

    sp18 = D_801F379C;
    func_801C18CC(2, &sp18);
    return 0xE;
}



s32 func_801EEFBC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801EEFEC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x10;
}


typedef struct func_801EF014_Struct {
    s32 w[9];
} func_801EF014_Struct;

extern func_801EF014_Struct D_801F37B4;

s32 func_801EF014(s32 arg0, s32 arg1) {
    func_801EF014_Struct sp1C;

    sp1C = D_801F37B4;
    func_801C18CC(3, &sp1C);
    return 17;
}



s32 func_801EF078(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}


extern u8 D_801F1D3C[];

s32 func_801EF0A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1D3C);
    return 19;
}



s32 func_801EF0DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x14;
    }
    return 0x13;
}


s32 func_801EF10C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x15;
}


typedef struct func_801EF134_Struct {
    s32 w[9];
} func_801EF134_Struct;

extern func_801EF134_Struct D_801F37D8;

s32 func_801EF134(s32 arg0, s32 arg1) {
    func_801EF134_Struct sp1C;

    sp1C = D_801F37D8;
    func_801C18CC(3, &sp1C);
    return 22;
}



s32 func_801EF198(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801EF1C8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x18;
}


s32 func_801EF1F0(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801EF200(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801EF210(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801EF220(s32 arg0, s32 arg1) {
    return 28;
}


typedef struct func_801EF230_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF230_Struct;

extern func_801EF230_Struct D_801F37FC;

s32 func_801EF230(s32 arg0, s32 arg1) {
    func_801EF230_Struct sp18;

    sp18 = D_801F37FC;
    func_801C18CC(2, &sp18);
    return 0x1D;
}



s32 func_801EF298(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1D;
    }
    return 0x1E;
}


extern u8 D_801F1D78[];

s32 func_801EF2C8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1D78);
    return 31;
}



s32 func_801EF2FC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x20;
    }
    return 0x1F;
}


s32 func_801EF32C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x21;
}


typedef struct func_801EF354_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF354_Struct;

extern func_801EF354_Struct D_801F3814;

s32 func_801EF354(s32 arg0, s32 arg1) {
    func_801EF354_Struct sp18;

    sp18 = D_801F3814;
    func_801C18CC(2, &sp18);
    return 0x22;
}



s32 func_801EF3BC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x22;
    }
    return 0x23;
}


s32 func_801EF3EC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x24;
}


typedef struct func_801EF414_Struct {
    s32 w[9];
} func_801EF414_Struct;

extern func_801EF414_Struct D_801F382C;

s32 func_801EF414(s32 arg0, s32 arg1) {
    func_801EF414_Struct sp1C;

    sp1C = D_801F382C;
    func_801C18CC(3, &sp1C);
    return 37;
}



s32 func_801EF478(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x25;
    }
    return 0x26;
}


extern u8 D_801F1DD0[];

s32 func_801EF4A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1DD0);
    return 39;
}



s32 func_801EF4DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x28;
    }
    return 0x27;
}


s32 func_801EF50C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x29;
}


typedef struct func_801EF534_Struct {
    s32 w[9];
} func_801EF534_Struct;

extern func_801EF534_Struct D_801F3850;

s32 func_801EF534(s32 arg0, s32 arg1) {
    func_801EF534_Struct sp1C;

    sp1C = D_801F3850;
    func_801C18CC(3, &sp1C);
    return 42;
}



s32 func_801EF598(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801EF5C8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2C;
}


typedef struct func_801EF5F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF5F0_Struct;

extern func_801EF5F0_Struct D_801F3874;

s32 func_801EF5F0(s32 arg0, s32 arg1) {
    func_801EF5F0_Struct sp18;

    sp18 = D_801F3874;
    func_801C18CC(2, &sp18);
    return 0x2D;
}



s32 func_801EF658(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801EF688(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2F;
}


typedef struct func_801EF6B0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF6B0_Struct;

extern func_801EF6B0_Struct D_801F388C;

s32 func_801EF6B0(s32 arg0, s32 arg1) {
    func_801EF6B0_Struct sp18;

    sp18 = D_801F388C;
    func_801C18CC(2, &sp18);
    return 0x30;
}



s32 func_801EF718(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801EF748(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x32;
}


typedef struct func_801EF770_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF770_Struct;

extern func_801EF770_Struct D_801F38A4;

s32 func_801EF770(s32 arg0, s32 arg1) {
    func_801EF770_Struct sp18;

    sp18 = D_801F38A4;
    func_801C18CC(2, &sp18);
    return 0x33;
}



s32 func_801EF7D8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x33;
    }
    return 0x34;
}


extern u8 D_801F1E60[];

s32 func_801EF808(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1E60);
    return 53;
}



s32 func_801EF83C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x36;
    }
    return 0x35;
}


s32 func_801EF86C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x37;
}


typedef struct func_801EF894_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF894_Struct;

extern func_801EF894_Struct D_801F38BC;

s32 func_801EF894(s32 arg0, s32 arg1) {
    func_801EF894_Struct sp18;

    sp18 = D_801F38BC;
    func_801C18CC(2, &sp18);
    return 0x38;
}



s32 func_801EF8FC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x38;
    }
    return 0x39;
}


s32 func_801EF92C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3A;
}


typedef struct func_801EF954_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF954_Struct;

extern func_801EF954_Struct D_801F38D4;

s32 func_801EF954(s32 arg0, s32 arg1) {
    func_801EF954_Struct sp18;

    sp18 = D_801F38D4;
    func_801C18CC(2, &sp18);
    return 0x3B;
}



s32 func_801EF9BC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3B;
    }
    return 0x3C;
}


extern u8 D_801F1FA4[];

s32 func_801EF9EC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1FA4);
    return 61;
}



s32 func_801EFA20(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3E;
    }
    return 0x3D;
}


s32 func_801EFA50(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3F;
}


typedef struct func_801EFA78_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFA78_Struct;

extern func_801EFA78_Struct D_801F38EC;

s32 func_801EFA78(s32 arg0, s32 arg1) {
    func_801EFA78_Struct sp18;

    sp18 = D_801F38EC;
    func_801C18CC(2, &sp18);
    return 0x40;
}



s32 func_801EFAE0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x40;
    }
    return 0x41;
}


s32 func_801EFB10(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x42;
}


typedef struct func_801EFB38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFB38_Struct;

extern func_801EFB38_Struct D_801F3904;

s32 func_801EFB38(s32 arg0, s32 arg1) {
    func_801EFB38_Struct sp18;

    sp18 = D_801F3904;
    func_801C18CC(2, &sp18);
    return 0x43;
}



s32 func_801EFBA0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x43;
    }
    return 0x44;
}


extern u8 D_801F2070[];

s32 func_801EFBD0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2070);
    return 69;
}



s32 func_801EFC04(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x46;
    }
    return 0x45;
}


s32 func_801EFC34(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x47;
}


typedef struct func_801EFC5C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFC5C_Struct;

extern func_801EFC5C_Struct D_801F391C;

s32 func_801EFC5C(s32 arg0, s32 arg1) {
    func_801EFC5C_Struct sp18;

    sp18 = D_801F391C;
    func_801C18CC(2, &sp18);
    return 0x48;
}



s32 func_801EFCC4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x48;
    }
    return 0x49;
}


s32 func_801EFCF4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4A;
}


typedef struct func_801EFD1C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD1C_Struct;

extern func_801EFD1C_Struct D_801F3934;

s32 func_801EFD1C(s32 arg0, s32 arg1) {
    func_801EFD1C_Struct sp1C;

    sp1C = D_801F3934;
    func_801C18CC(1, &sp1C);
    return 0x4B;
}



s32 func_801EFD6C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4B;
    }
    return 0x4C;
}


extern u8 D_801F21A0[];

s32 func_801EFD9C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F21A0);
    return 77;
}



s32 func_801EFDD0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4E;
    }
    return 0x4D;
}


s32 func_801EFE00(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4F;
}


typedef struct func_801EFE28_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFE28_Struct;

extern func_801EFE28_Struct D_801F3940;

s32 func_801EFE28(s32 arg0, s32 arg1) {
    func_801EFE28_Struct sp1C;

    sp1C = D_801F3940;
    func_801C18CC(1, &sp1C);
    return 0x50;
}



s32 func_801EFE78(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x50;
    }
    return 0x51;
}


s32 func_801EFEA8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x52;
}


typedef struct func_801EFED0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFED0_Struct;

extern func_801EFED0_Struct D_801F394C;

s32 func_801EFED0(s32 arg0, s32 arg1) {
    func_801EFED0_Struct sp18;

    sp18 = D_801F394C;
    func_801C18CC(2, &sp18);
    return 0x53;
}



s32 func_801EFF38(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x53;
    }
    return 0x54;
}


extern u8 D_801F22CC[];

s32 func_801EFF68(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F22CC);
    return 85;
}



s32 func_801EFF9C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x56;
    }
    return 0x55;
}


s32 func_801EFFCC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x57;
}


typedef struct func_801EFFF4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFFF4_Struct;

extern func_801EFFF4_Struct D_801F3964;

s32 func_801EFFF4(s32 arg0, s32 arg1) {
    func_801EFFF4_Struct sp18;

    sp18 = D_801F3964;
    func_801C18CC(2, &sp18);
    return 0x58;
}



s32 func_801F005C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x58;
    }
    return 0x59;
}


s32 func_801F008C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5A;
}


typedef struct func_801F00B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F00B4_Struct;

extern func_801F00B4_Struct D_801F397C;

s32 func_801F00B4(s32 arg0, s32 arg1) {
    func_801F00B4_Struct sp1C;

    sp1C = D_801F397C;
    func_801C18CC(1, &sp1C);
    return 0x5B;
}



s32 func_801F0104(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5B;
    }
    return 0x5C;
}


extern u8 D_801F2348[];

s32 func_801F0134(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2348);
    return 93;
}



s32 func_801F0168(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x5E;
    }
    return 0x5D;
}


s32 func_801F0198(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5F;
}


typedef struct func_801F01C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F01C0_Struct;

extern func_801F01C0_Struct D_801F3988;

s32 func_801F01C0(s32 arg0, s32 arg1) {
    func_801F01C0_Struct sp1C;

    sp1C = D_801F3988;
    func_801C18CC(1, &sp1C);
    return 0x60;
}



s32 func_801F0210(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x60;
    }
    return 0x61;
}


s32 func_801F0240(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x62;
}


typedef struct func_801F0268_Struct {
    s32 w[9];
} func_801F0268_Struct;

extern func_801F0268_Struct D_801F3994;

s32 func_801F0268(s32 arg0, s32 arg1) {
    func_801F0268_Struct sp1C;

    sp1C = D_801F3994;
    func_801C18CC(3, &sp1C);
    return 99;
}



s32 func_801F02CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x63;
    }
    return 0x64;
}


extern u8 D_801F2370[];

s32 func_801F02FC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2370);
    return 101;
}



s32 func_801F0330(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x66;
    }
    return 0x65;
}


s32 func_801F0360(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x67;
}


typedef struct func_801F0388_Struct {
    s32 w[9];
} func_801F0388_Struct;

extern func_801F0388_Struct D_801F39B8;

s32 func_801F0388(s32 arg0, s32 arg1) {
    func_801F0388_Struct sp1C;

    sp1C = D_801F39B8;
    func_801C18CC(3, &sp1C);
    return 104;
}



s32 func_801F03EC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x68;
    }
    return 0x69;
}


s32 func_801F041C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6A;
}


typedef struct func_801F0444_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0444_Struct;

extern func_801F0444_Struct D_801F39DC;

s32 func_801F0444(s32 arg0, s32 arg1) {
    func_801F0444_Struct sp18;

    sp18 = D_801F39DC;
    func_801C18CC(2, &sp18);
    return 0x6B;
}



s32 func_801F04AC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6B;
    }
    return 0x6C;
}


extern u8 D_801F24E4[];

s32 func_801F04DC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F24E4);
    return 109;
}



s32 func_801F0510(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6E;
    }
    return 0x6D;
}


s32 func_801F0540(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6F;
}


typedef struct func_801F0568_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0568_Struct;

extern func_801F0568_Struct D_801F39F4;

s32 func_801F0568(s32 arg0, s32 arg1) {
    func_801F0568_Struct sp18;

    sp18 = D_801F39F4;
    func_801C18CC(2, &sp18);
    return 0x70;
}



s32 func_801F05D0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x70;
    }
    return 0x71;
}


s32 func_801F0600(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x72;
}


typedef struct func_801F0628_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0628_Struct;

extern func_801F0628_Struct D_801F3A0C;

s32 func_801F0628(s32 arg0, s32 arg1) {
    func_801F0628_Struct sp1C;

    sp1C = D_801F3A0C;
    func_801C18CC(1, &sp1C);
    return 0x73;
}



s32 func_801F0678(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x73;
    }
    return 0x74;
}


extern u8 D_801F2564[];

s32 func_801F06A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2564);
    return 117;
}



s32 func_801F06DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x76;
    }
    return 0x75;
}


s32 func_801F070C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x77;
}


typedef struct func_801F0734_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0734_Struct;

extern func_801F0734_Struct D_801F3A18;

s32 func_801F0734(s32 arg0, s32 arg1) {
    func_801F0734_Struct sp1C;

    sp1C = D_801F3A18;
    func_801C18CC(1, &sp1C);
    return 0x78;
}



s32 func_801F0784(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x78;
    }
    return 0x79;
}


s32 func_801F07B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7A;
}


typedef struct func_801F07DC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F07DC_Struct;

extern func_801F07DC_Struct D_801F3A24;

s32 func_801F07DC(s32 arg0, s32 arg1) {
    func_801F07DC_Struct sp18;

    sp18 = D_801F3A24;
    func_801C18CC(2, &sp18);
    return 0x7B;
}



s32 func_801F0844(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7B;
    }
    return 0x7C;
}


extern u8 D_801F25C0[];

s32 func_801F0874(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F25C0);
    return 125;
}



s32 func_801F08A8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x7E;
    }
    return 0x7D;
}


s32 func_801F08D8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7F;
}


typedef struct func_801F0900_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0900_Struct;

extern func_801F0900_Struct D_801F3A3C;

s32 func_801F0900(s32 arg0, s32 arg1) {
    func_801F0900_Struct sp18;

    sp18 = D_801F3A3C;
    func_801C18CC(2, &sp18);
    return 0x80;
}



s32 func_801F0968(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x80;
    }
    return 0x81;
}


s32 func_801F0998(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x82;
}


typedef struct func_801F09C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F09C0_Struct;

extern func_801F09C0_Struct D_801F3A54;

s32 func_801F09C0(s32 arg0, s32 arg1) {
    func_801F09C0_Struct sp1C;

    sp1C = D_801F3A54;
    func_801C18CC(1, &sp1C);
    return 0x83;
}



s32 func_801F0A10(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x83;
    }
    return 0x84;
}


extern u8 D_801F268C[];

s32 func_801F0A40(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F268C);
    return 133;
}



s32 func_801F0A74(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x86;
    }
    return 0x85;
}


s32 func_801F0AA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x87;
}


typedef struct func_801F0ACC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0ACC_Struct;

extern func_801F0ACC_Struct D_801F3A60;

s32 func_801F0ACC(s32 arg0, s32 arg1) {
    func_801F0ACC_Struct sp1C;

    sp1C = D_801F3A60;
    func_801C18CC(1, &sp1C);
    return 0x88;
}



s32 func_801F0B1C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x88;
    }
    return 0x89;
}


s32 func_801F0B4C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x8A;
}


typedef struct func_801F0B74_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0B74_Struct;

extern func_801F0B74_Struct D_801F3A6C;

s32 func_801F0B74(s32 arg0, s32 arg1) {
    func_801F0B74_Struct sp18;

    sp18 = D_801F3A6C;
    func_801C18CC(2, &sp18);
    return 0x8B;
}



s32 func_801F0BDC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8B;
    }
    return 0x8C;
}


extern u8 D_801F26E8[];

s32 func_801F0C0C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F26E8);
    return 141;
}



s32 func_801F0C40(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x8E;
    }
    return 0x8D;
}


s32 func_801F0C70(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x8F;
}


typedef struct func_801F0C98_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0C98_Struct;

extern func_801F0C98_Struct D_801F3A84;

s32 func_801F0C98(s32 arg0, s32 arg1) {
    func_801F0C98_Struct sp18;

    sp18 = D_801F3A84;
    func_801C18CC(2, &sp18);
    return 0x90;
}



s32 func_801F0D00(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x90;
    }
    return 0x91;
}


s32 func_801F0D30(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x92;
}


typedef struct func_801F0D58_Struct {
    s32 w[9];
} func_801F0D58_Struct;

extern func_801F0D58_Struct D_801F3A9C;

s32 func_801F0D58(s32 arg0, s32 arg1) {
    func_801F0D58_Struct sp1C;

    sp1C = D_801F3A9C;
    func_801C18CC(3, &sp1C);
    return 147;
}



s32 func_801F0DBC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x93;
    }
    return 0x94;
}


extern u8 D_801F27C0[];

s32 func_801F0DEC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F27C0);
    return 149;
}



s32 func_801F0E20(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x96;
    }
    return 0x95;
}


s32 func_801F0E50(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x97;
}


typedef struct func_801F0E78_Struct {
    s32 w[9];
} func_801F0E78_Struct;

extern func_801F0E78_Struct D_801F3AC0;

s32 func_801F0E78(s32 arg0, s32 arg1) {
    func_801F0E78_Struct sp1C;

    sp1C = D_801F3AC0;
    func_801C18CC(3, &sp1C);
    return 152;
}



s32 func_801F0EDC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x98;
    }
    return 0x99;
}


s32 func_801F0F0C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9A;
}


typedef struct func_801F0F34_Struct {
    s32 w[9];
} func_801F0F34_Struct;

extern func_801F0F34_Struct D_801F3AE4;

s32 func_801F0F34(s32 arg0, s32 arg1) {
    func_801F0F34_Struct sp1C;

    sp1C = D_801F3AE4;
    func_801C18CC(3, &sp1C);
    return 155;
}



s32 func_801F0F98(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9B;
    }
    return 0x9C;
}


s32 func_801F0FC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9D;
}


typedef struct func_801F0FF0_Struct {
    s32 w[9];
} func_801F0FF0_Struct;

extern func_801F0FF0_Struct D_801F3B08;

s32 func_801F0FF0(s32 arg0, s32 arg1) {
    func_801F0FF0_Struct sp1C;

    sp1C = D_801F3B08;
    func_801C18CC(3, &sp1C);
    return 158;
}



s32 func_801F1054(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9E;
    }
    return 0x9F;
}


s32 func_801F1084(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA0;
}


typedef struct func_801F10AC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F10AC_Struct;

extern func_801F10AC_Struct D_801F3B2C;

s32 func_801F10AC(s32 arg0, s32 arg1) {
    func_801F10AC_Struct sp18;

    sp18 = D_801F3B2C;
    func_801C18CC(2, &sp18);
    return 0xA1;
}



s32 func_801F1114(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA1;
    }
    return 0xA2;
}


extern u8 D_801F2814[];

s32 func_801F1144(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2814);
    return 163;
}



s32 func_801F1178(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA4;
    }
    return 0xA3;
}


s32 func_801F11A8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA5;
}


typedef struct func_801F11D0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F11D0_Struct;

extern func_801F11D0_Struct D_801F3B44;

s32 func_801F11D0(s32 arg0, s32 arg1) {
    func_801F11D0_Struct sp18;

    sp18 = D_801F3B44;
    func_801C18CC(2, &sp18);
    return 0xA6;
}



s32 func_801F1238(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA6;
    }
    return 0xA7;
}


s32 func_801F1268(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA8;
}


typedef struct func_801F1290_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1290_Struct;

extern func_801F1290_Struct D_801F3B5C;

s32 func_801F1290(s32 arg0, s32 arg1) {
    func_801F1290_Struct sp18;

    sp18 = D_801F3B5C;
    func_801C18CC(2, &sp18);
    return 0xA9;
}



s32 func_801F12F8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA9;
    }
    return 0xAA;
}


extern u8 D_801F28FC[];

s32 func_801F1328(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F28FC);
    return 171;
}



s32 func_801F135C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xAC;
    }
    return 0xAB;
}


s32 func_801F138C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xAD;
}


typedef struct func_801F13B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F13B4_Struct;

extern func_801F13B4_Struct D_801F3B74;

s32 func_801F13B4(s32 arg0, s32 arg1) {
    func_801F13B4_Struct sp18;

    sp18 = D_801F3B74;
    func_801C18CC(2, &sp18);
    return 0xAE;
}



s32 func_801F141C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xAE;
    }
    return 0xAF;
}


s32 func_801F144C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB0;
}


typedef struct func_801F1474_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1474_Struct;

extern func_801F1474_Struct D_801F3B8C;

s32 func_801F1474(s32 arg0, s32 arg1) {
    func_801F1474_Struct sp18;

    sp18 = D_801F3B8C;
    func_801C18CC(2, &sp18);
    return 0xB1;
}



s32 func_801F14DC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB1;
    }
    return 0xB2;
}


extern u8 D_801F29B0[];

s32 func_801F150C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F29B0);
    return 179;
}



s32 func_801F1540(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xB4;
    }
    return 0xB3;
}


s32 func_801F1570(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB5;
}


typedef struct func_801F1598_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1598_Struct;

extern func_801F1598_Struct D_801F3BA4;

s32 func_801F1598(s32 arg0, s32 arg1) {
    func_801F1598_Struct sp18;

    sp18 = D_801F3BA4;
    func_801C18CC(2, &sp18);
    return 0xB6;
}



s32 func_801F1600(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB6;
    }
    return 0xB7;
}


s32 func_801F1630(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB8;
}


typedef struct func_801F1658_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1658_Struct;

extern func_801F1658_Struct D_801F3BBC;

s32 func_801F1658(s32 arg0, s32 arg1) {
    func_801F1658_Struct sp18;

    sp18 = D_801F3BBC;
    func_801C18CC(2, &sp18);
    return 0xB9;
}



s32 func_801F16C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB9;
    }
    return 0xBA;
}


extern u8 D_801F2A10[];

s32 func_801F16F0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F2A10);
    return 187;
}



s32 func_801F1724(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xBC;
    }
    return 0xBB;
}


s32 func_801F1754(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xBD;
}


typedef struct func_801F177C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F177C_Struct;

extern func_801F177C_Struct D_801F3BD4;

s32 func_801F177C(s32 arg0, s32 arg1) {
    func_801F177C_Struct sp18;

    sp18 = D_801F3BD4;
    func_801C18CC(2, &sp18);
    return 0xBE;
}



s32 func_801F17E4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xBE;
    }
    return 0xBF;
}


s32 func_801F1814(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC0;
}


s32 func_801F183C(s32 arg0, s32 arg1) {
    return 193;
}


s32 func_801F184C(s32 arg0, s32 arg1) {
    return 193;
}

