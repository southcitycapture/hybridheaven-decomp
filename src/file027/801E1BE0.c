#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E1C60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E1D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E1D74.s")


struct func_801E1D84_StructA {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E1D84_StructA *func_801BF6B0(s32 a0);
extern s32 func_801C1B1C(void);
extern void func_8038BED4(void);

s32 func_801E1D84(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 4;
    }
    func_8038BED4();
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E1DE0.s")



s32 func_801E1EA4(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801F5688;
extern f32 D_801F568C;
extern f32 D_801F5690;
extern f32 D_801F5694;

s32 func_801E1EF8(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] >= 0xF) {
        func_8038BD50(D_801F5688, D_801F568C, 0x40D33333);
        D_8038BD88(D_801F5690, D_801F5694, 0xC0C9999A);
        return 8;
    }
    return 7;
}


extern f32 D_801F5698;
extern f32 D_801F569C;
extern f32 D_801F56A0;
extern f32 D_801F56A4;

s32 func_801E1F70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x48) || (func_801C1B1C() == 0)) {
        return 8;
    }
    func_8038BD50(D_801F5698, D_801F569C, 0x423E0000);
    D_8038BD88(D_801F56A0, D_801F56A4, 0xC0900000);
    return 9;
}


s32 func_801E1FF0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2044.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E20A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E214C.s")


extern f32 D_801F56B4;
extern f32 D_801F56B8;
extern f32 D_801F56BC;

s32 func_801E21A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    func_8038BD50(D_801F56B4, D_801F56B8, 0x41766666);
    D_8038BD88(1.5f, D_801F56BC, 0xC079999A);
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2228.s")


extern f32 D_801F56C0;
extern f32 D_801F56C4;
extern f32 D_801F56C8;
extern f32 D_801F56CC;

s32 func_801E2238(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0) != 0) && (func_801BF6B0(4)->unkC >= 9)) {
        func_8038BD50(D_801F56C0, D_801F56C4, 0xBECCCCCD);
        D_8038BD88(D_801F56C8, D_801F56CC, 0x4159999A);
        return 0x10;
    }
    return 0xF;
}



s32 func_801E22C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAAE5F) != 0) {
        func_8038BED4();
        return 0x11;
    }
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2310.s")


s32 func_801E23D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x19F0A0) != 0) {
        func_8038BED4();
        return 0x13;
    }
    return 0x12;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801F56F0;
extern f32 D_801F56F4;
extern f32 D_801F56F8;
extern f32 D_801F56FC;
extern f32 D_801F5700;
extern f32 D_801F5704;
extern f32 D_801F5708;

s32 func_801E241C(s32 arg0, s32 arg1) {
    f32 f0;
    f32 f1;
    f32 f2;

    f0 = D_801F56F0;
    f1 = D_801F56F4;
    f2 = D_801F56F8;
    if (func_8038BEF8(0.0f, 2.0f, 15.8f, 8.5f, D_801F56FC, D_801F5700, D_801F5704, D_801F5708, f0, f1, f2, f0, f1, f2) != 0) {
        return 0x14;
    }
    return 0x13;
}



s32 func_801E24C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x387520) != 0) {
        func_8038BED4();
        return 0x15;
    }
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E25BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E25CC.s")


s32 func_801E25DC(s32 arg0, s32 arg1) {
    struct func_801E1D84_StructA *p;

    p = func_801BF6B0(7);
    if (p->unkC < 0x6F || func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E268C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E26E0.s")


extern f32 D_801F5734;
extern f32 D_801F5738;

s32 func_801E2734(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F5734, D_801F5738, 0x40E33333);
    D_8038BD88(2.0f, 14.0f, 0xC0866666);
    return 0x1D;
}



s32 func_801E2790(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x7C) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E27E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E27F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2804.s")



s32 func_801E2814(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x22;
    }
    return 0x21;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E285C.s")


extern s32 D_801F3A80;

s32 func_801E2920(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3D0900) != 0) {
        D_801F3A80 = 0;
        func_8038BED4();
        return 0x24;
    }
    return 0x23;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E296C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2C74.s")


extern f32 D_801F57D8;
extern f32 D_801F57DC;
extern f32 D_801F57E0;

s32 func_801E2CEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016E3600) != 0) {
        func_8038BD50(D_801F57D8, D_801F57DC, 0xBF666666);
        D_8038BD88(-0.5f, D_801F57E0, 0xC2100000);
        return 0x27;
    }
    return 0x26;
}



s32 func_801E2D60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x018CBA80) != 0) {
        func_8038BED4();
        return 0x28;
    }
    return 0x27;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2E90.s")


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E2ECC(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0x66, 0xE5, 0xFF);
    func_801CCEC8(0, 7, -7, -0x64);
    func_801CCE50(0x78, 0x78, 0x78);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2F30.s")


s32 func_801E2F40(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0x66, 0xE5, 0xFF);
    func_801CCEC8(0, 7, -7, -0x5A);
    func_801CCE88(1, 0x66, 0xE5, 0xFF);
    func_801CCEC8(1, -7, -7, -0x5A);
    func_801CCE50(0x46, 0x46, 0x46);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E2FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E300C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E301C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E302C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E303C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3188.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E31A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E31B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E31C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E31D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E31E8.s")


extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern s32 func_801C2420(s32 arg0, void *arg1);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DDD4[];
extern u8 D_8038DE08[];
extern u8 D_8038DF70[];

s32 func_801E31F8(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D3, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x261, D_8038DDD4 + 4);
    D_8038BA70();
    func_801C2420(0x439, D_8038DDD4 + 0x1C);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DE08);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x1800;
    if (func_801C2570(0x2DC, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E32D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3894.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E38A4.s")


typedef struct func_801E390C_Struct3 {
    u8 pad0[8];
    f32 unk8;
} func_801E390C_Struct3;

typedef struct func_801E390C_Struct2 {
    u8 pad0[0x30];
    func_801E390C_Struct3 *unk30;
} func_801E390C_Struct2;

typedef struct func_801E390C_Struct1 {
    func_801E390C_Struct2 *unk0;
} func_801E390C_Struct1;

s32 func_801C2F60(f32 *);
void func_801C2F24(void);
extern func_801E390C_Struct1 *D_8038D8D0;
extern f32 D_801F3BA0;

s32 func_801E390C(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F60(&sp1C) != 0) {
        func_801C2F24();
        return 0xB;
    }
    D_8038D8D0->unk0->unk30->unk8 = sp1C + D_801F3BA0;
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E39C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E39D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E39E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E39F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3A14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3B18.s")


struct func_801E3B84_StructOuter {
    u8 pad0[4];
    func_801E390C_Struct2 *unk4;
};

extern f32 D_801F3BD4;

s32 func_801E3B84(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        ((struct func_801E3B84_StructOuter *)D_8038D8D0)->unk4->unk30->unk8 = sp1C + D_801F3BD4;
        return 0xB;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3CAC.s")


typedef struct func_801E3CBC_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E3CBC_StructC;

typedef struct func_801E3CBC_StructB {
    u8 pad0[0x30];
    func_801E3CBC_StructC *unk30;
} func_801E3CBC_StructB;

typedef struct func_801E3CBC_StructA {
    u8 pad0[8];
    func_801E3CBC_StructB *unk8;
} func_801E3CBC_StructA;

extern u64 func_801C0B2C();
extern f64 func_80034C24(u64 time);
extern f64 D_801F5810;

s32 func_801E3CBC(s32 arg0, s32 arg1) {
    u64 temp_ret;
    f32 two;

    two = 2.0f;
    if (func_801C0B8C(0x018CBA80) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x016E3600) != 0) {
        temp_ret = func_801C0B2C();
        ((func_801E3CBC_StructA *) D_8038D8D0)->unk8->unk30->unk4 = (((f32) (func_80034C24(temp_ret) / D_801F5810 - 24.0)) / two) * 2.5f + -2.5f;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3E50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3EB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3EF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3F14.s")


struct func_801E3F24_StructA {
    u8 pad[0x30];
    struct func_801E3F24_StructB *unk30;
};

struct func_801E3F24_StructB {
    u8 pad[4];
    f32 unk4;
};

struct func_801E3F24_StructC {
    u8 pad[0xC];
    struct func_801E3F24_StructA *unkC;
};

extern f64 D_801F5818;

s32 func_801E3F24(s32 arg0, s32 arg1) {
    u64 temp;

    if (func_801C0B8C(0x14FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        temp = func_801C0B2C();
        ((struct func_801E3F24_StructC *) D_8038D8D0)->unkC->unk30->unk4 =
            ((f32) ((func_80034C24(temp) / D_801F5818) - 4.0) / 18.0f) * 8.0f;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E3FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E40A0.s")


struct func_801E40B0_StructC {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E40B0_StructB {
    u8 pad0[0x30];
    struct func_801E40B0_StructC *unk30;
};

struct func_801E40B0_StructA {
    u8 pad0[0x10];
    struct func_801E40B0_StructB *unk10;
};

extern f64 D_801F5820;

s32 func_801E40B0(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0B8C(0x014FB180) != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        temp_ret = func_801C0B2C();
        ((struct func_801E40B0_StructA *) D_8038D8D0)->unk10->unk30->unk4 =
            (f32) (((f32) ((func_80034C24(temp_ret) / D_801F5820) - 4.0) / 18.0f) * -8.0f);
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E41BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E41CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E41DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E41EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E41FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E420C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E421C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E422C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E423C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E431C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E43EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E43FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4470.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E44A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E44B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E44C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E45A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E460C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E46C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E46D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E46E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E46F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4724.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E48A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E490C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E49C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E49D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E49E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E49F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4A14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4C7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4C8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4CF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4D90.s")

extern u8 D_801DB184[];
extern u8 D_801DB244[];
extern void func_80005670(s32, void *);
extern void func_801CC530(void);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
void func_801D03E0();
void func_801D03EC();
void func_801D048C();
void func_801D2094();
void func_801D20A0();
void func_801D2704();
void func_801D2710();
extern u8 func_801DAAF0[];
extern u8 func_801DAE70[];
extern u8 func_801DAEE8[];

extern void func_801D0A68();
extern u8 D_801DAFC4[];

s32 func_801E4EA4(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801D2094(1);
    func_801D20A0(1);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8), D_801DB184);
    func_801D2704(1);
    func_801D2710(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB244);
    func_801D048C(0);
    func_801D03E0(1);
    func_801D03EC(1);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), func_801DAEE8 + 0x1C);
    func_801D0A68(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x8), D_801DAFC4);
    func_801CC530();
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E4FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5074.s")

extern u8 *D_801DAB14;
extern s32 func_801C0B8C(u64);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

typedef struct func_801E5084_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E5084_StructD;

typedef struct func_801E5084_StructC {
    u8 pad0[0x2C];
    func_801E5084_StructD *unk2C;
} func_801E5084_StructC;

typedef struct func_801E5084_StructB {
    u8 pad0[0x24];
    func_801E5084_StructC *unk24;
} func_801E5084_StructB;

typedef struct func_801E5084_StructA {
    u8 pad0[8];
    func_801E5084_StructB *unk8;
} func_801E5084_StructA;

extern f32 D_801F586C;

s32 func_801E5084(s32 arg0, s32 arg1) {
    func_801E5084_StructA **pa;

    if (func_801C0B8C(0x53EC60) != 0) {
        pa = &D_801DAB14;
        (*pa)->unk8->unk24->unk2C->unk4 = 5.0f;
        (*pa)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pa)->unk8->unk24->unk2C->unkC = D_801F586C;
        (*pa)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x0348000D, 0, 0x1100, 5.0f);
        return 5;
    }
    return 4;
}


s32 func_801E5150(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 5;
    if (func_801BF6B0(7)->unkC >= 0x66) {
        return 6;
    }
    return var_v0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E51A0.s")



s32 func_801E51B0(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x01B80019, 0, 1, 1.0f);
    return 9;
}


extern f32 D_801F5870;
extern f32 D_801F5874;

s32 func_801E51F8(s32 arg0, s32 arg1)
{
  char new_var;
  int new_var2;
  if (func_801C0B8C(0) != 0)
  {
    new_var = 0x24;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + (0x2C & 0xFFFFFFFFu)))) + 4)) = D_801F5870;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + 0x2C))) + 8)) = 0.0f;
    new_var2 = new_var;
    *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var))) + 0x2C))) + 0xC)) = D_801F5874;
    *((u16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (func_801DAAF0 + new_var))) + 0x8))) + new_var2))) + 0x2C))) + 0x12)) = 0x1000;
    func_801CC470(0, 0x01B80019, 0, 0, 1.5f);
    return 0xA;
  }
  return 9;
}


s32 func_801CFD50(void);

s32 func_801E52C8(s32 arg0, s32 arg1) {
    if (func_801CFD50() != 0) {
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E52F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5308.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5318.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5328.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5338.s")


struct func_801E5348_W {
    s32 pad0;
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 h12;
};

struct func_801E5348_Z {
    u8 pad[0x2C];
    struct func_801E5348_W *w;
};

struct func_801E5348_Y {
    u8 pad[0x24];
    struct func_801E5348_Z *z;
};

struct func_801E5348_X {
    s32 pad0;
    s32 pad4;
    struct func_801E5348_Y *y;
};

extern s32 D_801F3DDC;
extern f32 D_801F5878;

s32 func_801E5348(s32 arg0, s32 arg1) {
    struct func_801E5348_X **p;

    if (func_801C0B8C(0x1E8480) != 0) {
        p = (struct func_801E5348_X **) &D_801DAB14;
        (*p)->y->z->w->f4 = 0.0f;
        (*p)->y->z->w->f8 = D_801F5878;
        (*p)->y->z->w->fC = -45.0f;
        (*p)->y->z->w->h12 = 0;
        func_801CC470(0, 0x0348000F, 0, 0x1000, 3.0f);
        D_801F3DDC = 0;
        return 0x11;
    }
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E553C.s")


extern s32 func_801C2F4C();
extern f32 D_801F3DE0;

s32 func_801E55AC(s32 arg0, s32 arg1) {
    f32 sp1C;

    if (func_801C2F4C() != 0) {
        func_801C2F60(&sp1C);
        *(f32 *)((u8 *)*(void **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x8) = sp1C + D_801F3DE0;
        return 0x13;
    }
    return 0x14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5614.s")


extern void func_801BF628(s32, u8 *);
extern s32 D_801F3E38;

s32 func_801E5624(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(4, sp18);
    if (*(s32 *)&sp18[0xC] >= 2) {
        D_801F3E38 = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E587C.s")


s32 func_801E588C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7270E0) != 0) {
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E58C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E58D8.s")


s32 func_801E592C(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x03480007, 0, 0, 6.0f);
    return 7;
}


s32 func_801D2034(s32 arg0);
s32 func_801D20BC(void);

s32 func_801E597C(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E59BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5A60.s")


s32 func_801E5AA0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xE) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E5AF4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1E) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5B98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5BD8.s")


s32 func_801E5C2C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}



s32 func_801E5C80(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x03480004, 0, 0, 1.0f);
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5D10.s")


s32 func_801E5D64(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x0348000B, 0, 0, 2.5f);
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5DB4.s")


struct func_801E5DF4_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E5DF4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5E48.s")



s32 func_801E5E9C(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x03480006, 0, 0, 3.0f);
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E5F2C.s")


s32 func_801E5F80(s32 arg0, s32 arg1) {
    struct func_801E1D84_StructA *s;

    s = func_801BF6B0(7);
    if ((s->unkC < 0x48) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}



s32 func_801E5FD4(s32 arg0, s32 arg1) {
    func_801D2034(1);
    func_801CC470(1, 0x03480005, 0, 0, 5.0f);
    return 0x1D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6064.s")


s32 func_801E60B8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x50) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    D_801F3E38 = 0;
    return 0x20;
}


extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D20AC(void);
extern void func_8038D28C(s32);

s32 func_801E6110(s32 arg0, s32 arg1) {
    if (D_801F3E38 == 0) {
        goto state0;
    }
    if (D_801F3E38 == 1) {
        goto state1;
    }
    return 0x20;
state0:
    func_801CC4D8(1, 0x01680003, 0, 0, 15.0f);
    D_801F3E38 = 1;
    goto done;
state1:
    if (func_801D20AC() == 0) {
        func_8038D28C(0x663);
        func_801CC470(1, 0x01680003, 0, 0x100, 1.0f);
        return 0x21;
    }
done:
    return 0x20;
}


extern s32 func_801D2108(s32 a0, s32 a1);
extern f64 D_801F5898;

s32 func_801E61CC(s32 arg0, s32 arg1) {
    if (D_801F5898 < (f64) *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC)) {
        return 0x22;
    }
    if ((func_801D2108(0x01680003, 0x14) != 0) || (func_801D2108(0x01680003, 0x28) != 0)) {
        func_8038D28C(0x663);
    }
    return 0x21;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6264.s")



s32 func_801E62B8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
    if ((f64) *(f32 *)(temp_v1 + 0xC) > 20.0) {
        *(f32 *)(temp_v1 + 0x4) = 5120.0f;
        return 0x24;
    }
    return 0x23;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E631C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E632C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E633C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E634C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E635C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E636C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E637C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E638C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E639C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E63FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E640C.s")


struct func_801E6450_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E6450_Ext {
    u8 pad0[0x2C];
    struct func_801E6450_Y *unk2C;
};

struct func_801E6450_Node {
    u8 pad0[8];
    struct func_801E6450_Node *unk8;
    u8 pad1[0x18];
    struct func_801E6450_Ext *unk24;
};

extern f32 D_801F58A0;

s32 func_801E6450(s32 arg0, s32 arg1)
{
  struct func_801E6450_Ext *temp_v0;
  short new_var;
  new_var = 0x24;
  temp_v0 = (*((struct func_801E6450_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24;
  if (temp_v0 != 0)
  {
    temp_v0->unk2C->unk4 = D_801F58A0;
    (*((struct func_801E6450_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*((struct func_801E6450_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unkC = -5.5f;
    (*((struct func_801E6450_Node * volatile *) (&func_801DAAF0[new_var])))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(2, 0x03200000, 0, 0x1001, 1.0f);
    return 2;
  }
  return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E662C.s")


struct func_801E663C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E663C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x11) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E66E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E678C.s")


s32 func_801E68EC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6940.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E69E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6ADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6B0C.s")


typedef struct func_801E6B60_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6B60_Struct;


s32 func_801E6B60(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x41) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


extern s32 func_801D271C(s32);

s32 func_801E6BB4(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200003, 0, 0, 3.0f);
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6C04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6C44.s")


struct func_801E6C98_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E6C98(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6D04.s")


s32 func_801E6E64(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5B) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}


s32 func_801E6EB8(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200012, 0, 0, 3.0f);
    return 0x1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6F48.s")



s32 func_801E6F9C(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200009, 0, 0, 5.0f);
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E6FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E702C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E70A0.s")


s32 func_801E70B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x19F0A0) != 0) {
        func_801D2710(1);
        func_801CC470(2, 0x0320000E, 0, 0, 2.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1D79;
        return 0x25;
    }
    return 0x24;
}


extern s32 func_801D278C();

s32 func_801E7144(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801CC470(2, 0x03200013, 0, 0x100, 6.0f);
        return 0x26;
    }
    return 0x25;
}


s32 func_801E719C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x56F99F) != 0) {
        return 0x27;
    }
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E71D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E71E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E71F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E724C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7264.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7360.s")


s32 func_801E73B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7F) || (func_801C1B1C() == 0)) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801E7408(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x0320000D, 0, 0, 5.0f);
    return 0x2F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7458.s")


s32 func_801E7498(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x84 || func_801C1B1C() == 0) {
        return 0x30;
    }
    return 0x31;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E74EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E74FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E750C.s")



s32 func_801E751C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = 19.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = -20.5f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1333;
        func_801CC470(2, 0x03200000, 0, 1, 1.0f);
        return 0x35;
    }
    return 0x34;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E760C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E761C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E762C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E763C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E764C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E765C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E766C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E767C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E768C.s")


typedef struct func_801E76D8_Struct {
    u8 pad0[8];
    struct func_801E76D8_Struct *unk8;
    u8 pad1[0x18];
    func_801E5084_StructC *unk24;
} func_801E76D8_Struct;

s32 func_801E76D8(s32 arg0, s32 arg1) {
    func_801E5084_StructC *temp_v1;

    temp_v1 = ((func_801E76D8_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v1 != NULL) {
        temp_v1->unk2C->unk4 = 5120.0f;
        ((func_801E76D8_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7760.s")


typedef struct func_801E7770_Node {
    u8 pad0[8];
    struct func_801E7770_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7770_Mid *unk24;
} func_801E7770_Node;

typedef struct func_801E7770_Mid {
    u8 pad0[0x2C];
    struct func_801E7770_Leaf *unk2C;
} func_801E7770_Mid;

typedef struct func_801E7770_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E7770_Leaf;

extern f32 D_801F58D0;

s32 func_801E7770(s32 arg0, s32 arg1) {
    func_801D03EC(0);
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = 12.0f;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F58D0;
    ((func_801E7770_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(3, 0x03480089, 0, 0x100, 5.0f);
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7880.s")


s32 func_801E7890(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x01B8001A, 0, 1, 1.0f);
    return 9;
}


typedef struct func_801E78D8_Detail {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E78D8_Detail;

typedef struct func_801E78D8_Holder {
    u8 pad0[0x2C];
    func_801E78D8_Detail *unk2C;
} func_801E78D8_Holder;

typedef struct func_801E78D8_Node {
    u8 pad0[8];
    struct func_801E78D8_Node *unk8;
    u8 pad1[0x18];
    func_801E78D8_Holder *unk24;
} func_801E78D8_Node;

extern f32 D_801F58D4;
extern f32 D_801F58D8;

s32 func_801E78D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801F58D4;
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F58D8;
        ((func_801E78D8_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01B8001A, 0, 0, 1.5f);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E79D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7A08.s")



s32 func_801E7A18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2932E0) != 0) {
        func_801CC470(3, 0x01B8000B, 6, 0x1001, 1.0f);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7A9C.s")


extern void func_801D0498(s32);
extern void func_801C0D04(s32, s32);

s32 func_801E7AF0(s32 arg0, s32 arg1) {
    func_801D0498(1);
    func_801C0D04(4, 3);
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7B28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7BF0.s")


struct func_801E7C00_Dev {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E7C00_Node {
    u8 pad0[8];
    struct func_801E7C00_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7C00_Node *unk24;
    u8 pad2[4];
    struct func_801E7C00_Dev *unk2C;
};

extern f32 D_801F58DC;

s32 func_801E7C00(s32 arg0, s32 arg1)
{
  short new_var;
  struct func_801E7C00_Node **pp;
  if (func_801C0B8C(0x1E8480) != 0)
  {
    new_var = 9;
    pp = &((struct func_801E7C00_Node **) func_801DAAF0)[new_var];
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801F58DC;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
    func_801CC470(3, 0x02A80004, 0, 0x1100, 1.0f);
    return 0x17;
  }
  return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7D98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7E70.s")


struct func_801E7E80_Rec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E7E80_Node {
    u8 pad0[8];
    struct func_801E7E80_Node *unk8;
    u8 pad1[0x18];
    struct func_801E7E80_Node *unk24;
    u8 pad2[4];
    struct func_801E7E80_Rec *unk2C;
};

extern f32 D_801F58E0;

s32 func_801E7E80(s32 arg0, s32 arg1) {
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -1.0f;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F58E0;
    ((struct func_801E7E80_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(4, 0x0348008A, 0, 0x100, 5.0f);
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7F88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E7F98.s")


typedef struct func_801E7FA8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E7FA8_StructC;

typedef struct func_801E7FA8_StructB {
    u8 pad0[0x2C];
    func_801E7FA8_StructC *unk2C;
} func_801E7FA8_StructB;

typedef struct func_801E7FA8_StructA {
    u8 pad0[8];
    struct func_801E7FA8_StructA *unk8;
    u8 pad1[0x18];
    func_801E7FA8_StructB *unk24;
} func_801E7FA8_StructA;

extern f32 D_801F58E4;
extern f32 D_801F58E8;

#define FUNC_801E7FA8_ROOT (*(func_801E7FA8_StructA **)&D_801DAB14)

s32 func_801E7FA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801F58E4;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_801F58E8;
        FUNC_801E7FA8_ROOT->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1582;
        func_801CC470(4, 0x01B8000B, 0, 0x1000, 1.0f);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E80B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E80C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E80D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E80E8.s")


extern f32 D_801F58EC;

struct func_801E80F8_StructA {
    u8 pad0[8];
    struct func_801E80F8_StructA *unk8;
    u8 pad1[0x18];
    struct func_801E80F8_StructB *unk24;
};

struct func_801E80F8_StructB {
    u8 pad0[0x2C];
    struct func_801E80F8_StructC *unk2C;
};

struct func_801E80F8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E80F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801F58EC;
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801E80F8_StructA *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1471;
        func_801CC470(4, 0x02A80004, 0, 0x1100, 1.0f);
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E820C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E821C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E822C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E823C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E824C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E825C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E826C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E827C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E83B4.s")


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E8408(s32 arg0, s32 arg1) {
    if (D_801BBD54 == 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 2);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E84A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E84F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8558.s")


s32 func_801E8568(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 0xF;
    }
    return 0xE;
}



s32 func_801E85E4(s32 arg0, s32 arg1) {
    if (D_801BBD54 == 0) {
        return 0x10;
    }
    return 0xF;
}



s32 func_801E860C(s32 arg0, s32 arg1) {
    if ((func_801C0B8C(0x3D0900) != 0) && (D_801BBD54 == 0)) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x18, 0, 2);
        return 0x11;
    }
    return 0x10;
}



s32 func_801E868C(s32 arg0, s32 arg1) {
    if (D_801BBD54 == 0) {
        D_80089354 = 0;
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E86BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E873C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8764.s")


s32 func_801E8774(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        return 1;
    }
    return 0;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801F1F40[];

s32 func_801E87B0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801F1F40);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E87E4.s")


typedef struct func_801E8814_Struct {
    s32 w[9];
} func_801E8814_Struct;

s32 func_801C18CC(s32 arg0, func_801E8814_Struct *arg1);
extern func_801E8814_Struct D_801F4134;

s32 func_801E8814(s32 arg0, s32 arg1) {
    func_801E8814_Struct sp1C;

    sp1C = D_801F4134;
    func_801C18CC(3, &sp1C);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E88A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8910.s")


extern s32 func_801C1974();
extern u8 D_801F1FAC[];

s32 func_801E8940(s32 arg0, s32 arg1) {
    func_801C1974();
    func_8038CB60(0.0f, D_801F1FAC);
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8978.s")


typedef struct func_801E89A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E89A8_Struct;

extern func_801E89A8_Struct D_801F417C;

s32 func_801E89A8(s32 arg0, s32 arg1) {
    func_801E89A8_Struct sp1C;

    sp1C = D_801F417C;
    func_801C18CC(1, &sp1C);
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E89F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8A60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8AE0.s")


s32 func_801E8B10(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8BB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8C20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8C98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8CC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8F08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8F58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8F88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E8FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E90BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E910C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E913C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9164.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E91B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E91E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E92C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E92F0.s")


typedef struct func_801E9318_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9318_Struct;

extern func_801E9318_Struct D_801F4200;

s32 func_801E9318(s32 arg0, s32 arg1) {
    func_801E9318_Struct sp18;

    sp18 = D_801F4200;
    func_801C18CC(2, &sp18);
    return 0x36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E93B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E93D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E948C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E94BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E94E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E958C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E95DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E960C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9698.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E96E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E97B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E97E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E983C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E98A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E98D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E98FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9964.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E99BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9A24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9BA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9CC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9D78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9E20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9E50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9EDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9F1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9F2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9F94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801E9FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA0B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA0E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA1A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA1DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA20C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA29C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA2CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA2F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA3A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA3D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA480.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA508.s")


extern s32 D_801F45A4;

s32 func_801EA518(s32 arg0, s32 arg1) {
    func_8038D28C(0x157);
    D_801F45A4 = 0;
    return 1;
}


s32 func_801EA548(s32 arg0, s32 arg1) {
    if (D_801F45A4 == 0) {
        goto case0;
    }
    if (D_801F45A4 == 1) {
        goto case1;
    }
    return 1;
case0:
    if (func_801C0B8C(0x53EC60) != 0) {
        func_8038D28C(0x158);
        D_801F45A4 = 1;
    }
    goto done;
case1:
    return 2;
done:
    return 1;
}


s32 func_801EA5C4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 2;
    }
    func_8038D28C(0x89);
    func_8038D28C(0x691);
    return 3;
}



s32 func_801EA628(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x5B || func_801C1B1C() == 0) {
        return 3;
    }
    func_8038D28C(0x6AD);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA684.s")



s32 func_801EA69C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F45A4;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    if (state == 3) {
        goto case3;
    }
    return 5;
case0:
    func_8038D28C(0x66);
    D_801F45A4 = 1;
    goto ret5;
case1:
    if (func_801C0B8C(0xAAE5F) != 0) {
        func_8038D28C(0x15A);
        D_801F45A4 = 2;
    }
    goto ret5;
case2:
    if (func_801C0B8C(0x2191C0) != 0) {
        func_8038D28C(0x159);
        D_801F45A4 = 3;
    }
    goto ret5;
case3:
    return 6;
ret5:
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA770.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA8DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA8EC.s")


extern f32 D_801F5904;
extern f32 D_801F5908;
extern f32 D_801F590C;

s32 func_801EA8FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D40) != 0) {
        func_8038BED4();
        return 1;
    }
    func_8038BD50(D_801F5904, D_801F5908, 0x41F26666);
    D_8038BD88(1.0f, D_801F590C, 0xC0133333);
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EA97C.s")


s32 func_801EAA40(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x40163F) != 0) {
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAA7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAA8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAA9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAB64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EACDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EACEC.s")


s32 func_801EACFC(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x1800;
    if (func_801C2570(0x2DC, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EAD90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB4B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB4C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB4E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB53C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB54C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB55C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB56C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB57C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB5C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB5D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB5E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB674.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB6C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB6D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB6E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB6F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB74C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB9B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EB9C0.s")

extern u8 D_801E0A48[];
extern void func_801CC318(void);
extern void func_801CC458(s32 a0, void *a1);


s32 func_801EB9D0(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    return 1;
}



s32 func_801EBA1C(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801CC530();
    return 2;
}


typedef struct func_801EBA6C_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801EBA6C_StructD;

typedef struct func_801EBA6C_StructC {
    u8 pad0[0x2C];
    func_801EBA6C_StructD *unk2C;
} func_801EBA6C_StructC;

typedef struct func_801EBA6C_StructB {
    u8 pad0[0x24];
    func_801EBA6C_StructC *unk24;
} func_801EBA6C_StructB;

typedef struct func_801EBA6C_StructA {
    u8 pad0[8];
    func_801EBA6C_StructB *unk8;
} func_801EBA6C_StructA;

extern f32 D_801F5940;
extern f32 D_801F5944;

s32 func_801EBA6C(s32 arg0, s32 arg1) {
    func_801EBA6C_StructC *temp_v0;

    temp_v0 = ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = D_801F5940;
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801F5944;
        ((func_801EBA6C_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348000F, 0x50, 0x1001, 1.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBB30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBB50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBBBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBBEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBC9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBCAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBCD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBCE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBCF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBD08.s")


extern f32 D_801F5948;
extern f32 D_801F594C;
extern f32 D_801F5950;
extern f32 D_801F5954;

s32 func_801EBD18(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F5948, D_801F594C, 0xC0400000);
    D_8038BD88(D_801F5950, D_801F5954, 0xC1C26666);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBD70.s")


extern f32 D_801F5958;
extern f32 D_801F595C;

struct func_801EBDC4_Struct {
    u8 pad[0x3C];
    s32 unk3C;
};

s32 func_801EBDC4(s32 arg0, s32 arg1) {
    if (((struct func_801EBDC4_Struct *)func_801BF6B0(4))->unk3C >= 8) {
        func_8038BD50(11.0f, D_801F5958, 0xC1D26666);
        D_8038BD88(D_801F595C, 13.5f, 0xC1F33333);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBE3C.s")


s32 func_801EBE90(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}


extern f32 D_801F5960;
extern f32 D_801F5964;
extern f32 D_801F5968;
extern f32 D_801F596C;

s32 func_801EBEE4(s32 arg0, s32 arg1) {
    func_8038BD50(D_801F5960, D_801F5964, 0xC089999A);
    D_8038BD88(D_801F5968, D_801F596C, 0xC1BC0000);
    return 6;
}


s32 func_801EBF3C(s32 arg0, s32 arg1) {
    struct func_801E1D84_StructA *temp = func_801BF6B0(7);

    if ((temp->unkC < 0x2D) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


struct func_801EBF90_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801EBF90(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x38) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EBFE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC00C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC0B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC11C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC12C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC278.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC380.s")



s32 func_801EC390(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x84, D_8038DDC0);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC3FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC78C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC79C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC7AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC8B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC8C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC91C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC92C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC93C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC9A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC9E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EC9F4.s")

extern u8 D_801DB258[];
extern u8 D_801DB25C[];
extern void func_801CC4C0(s32 a0, void *a1);
extern u8 func_801DB190[];


s32 func_801ECA04(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, (u8 *)func_801DAE70 + 0x5C);
    func_801C2420(0x31, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, (u8 *)func_801DB190 + 8);
    func_801C2420(0x32, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB258);
    func_801CC4C0(2, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, (u8 *)func_801DAEE8 + 0x30);
    func_801CC4C0(3, (u8 *)func_801DAEE8 + 0x34);
    return 1;
}




s32 func_801ECAE8(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_801D2094(0);
    func_801D20A0(0);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8), D_801DB184);
    func_801D2704(0);
    func_801D2710(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8) + 8), D_801DB244);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 8) + 8) + 8), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}


extern f32 D_801F598C;

struct func_801ECBC4_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801ECBC4_StructC {
    u8 pad0[0x2C];
    struct func_801ECBC4_StructD *unk2C;
};

struct func_801ECBC4_StructB {
    u8 pad0[0x24];
    struct func_801ECBC4_StructC *unk24;
};

struct func_801ECBC4_StructA {
    u8 pad0[8];
    struct func_801ECBC4_StructB *unk8;
};

s32 func_801ECBC4(s32 arg0, s32 arg1) {
    struct func_801ECBC4_StructC *temp_v0;

    temp_v0 = ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801F598C;
        ((struct func_801ECBC4_StructA *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480010, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECC8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECC9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECCAC.s")


typedef struct func_801ECCF0_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801ECCF0_StructE;

typedef struct func_801ECCF0_StructD {
    u8 pad0[0x2C];
    func_801ECCF0_StructE *unk2C;
} func_801ECCF0_StructD;

typedef struct func_801ECCF0_StructC {
    u8 pad0[0x24];
    func_801ECCF0_StructD *unk24;
} func_801ECCF0_StructC;

typedef struct func_801ECCF0_StructB {
    u8 pad0[8];
    func_801ECCF0_StructC *unk8;
} func_801ECCF0_StructB;

typedef struct func_801ECCF0_StructA {
    u8 pad0[8];
    func_801ECCF0_StructB *unk8;
} func_801ECCF0_StructA;

extern f32 D_801F5990;

s32 func_801ECCF0(s32 arg0, s32 arg1) {
    func_801ECCF0_StructD *temp_v0;

    temp_v0 = ((func_801ECCF0_StructA *) D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801ECCF0_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801ECCF0_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801F5990;
        ((func_801ECCF0_StructA *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECDD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECDE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECE24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECF08.s")



s32 func_801ECF18(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECF6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ECFBC.s")


s32 func_801ECFFC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 6;
    }
    return 7;
}


extern s32 D_801F4888;

s32 func_801ED050(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB) || (func_801C1B1C() == 0)) {
        D_801F4888 = 0;
        return 7;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED0A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED14C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED51C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED5C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED5DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED798.s")


extern s32 D_801F488C;

s32 func_801ED7B0(s32 arg0, s32 arg1) {
    if (D_801F488C == 0) {
        goto case0;
    }
    if (D_801F488C == 1) {
        goto case1;
    }
    return 0x10;

case0:
    func_801D271C(1);
    func_801CC470(2, 0x03200006, 0, 0, 5.0f);
    D_801F488C = 1;
    goto done;

case1:
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 0x11;
    }

done:
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED8A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED934.s")


s32 func_801ED988(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200002, 0, 0, 3.0f);
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801ED9D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDA18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDA6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDAC0.s")



s32 func_801EDAD8(s32 arg0, s32 arg1) {
    if (D_801F488C == 0) {
        goto case0;
    }
    if (D_801F488C == 1) {
        goto case1;
    }
    return 0x1A;
case0:
    func_801D271C(1);
    func_801CC470(2, 0x03200015, 0, 0, 5.0f);
    D_801F488C = 1;
    goto done;
case1:
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 0x1B;
    }
done:
    return 0x1A;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDBCC.s")


s32 func_801EDC24(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200017, 0, 0, 3.0f);
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDC74.s")


s32 func_801EDCB4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x35) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    return 0x20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDD08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDD18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDD28.s")


struct func_801EDD74_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EDD74_Sub {
    u8 pad0[0x2C];
    struct func_801EDD74_Data *unk2C;
};

struct func_801EDD74_Node {
    u8 pad0[8];
    struct func_801EDD74_Node *unk8;
    u8 pad1[0x18];
    struct func_801EDD74_Sub *unk24;
};

extern f32 D_801F59B4;

s32 func_801EDD74(s32 arg0, s32 arg1) {
    struct func_801EDD74_Sub *temp_v0;

    temp_v0 = ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801F59B4;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
        ((struct func_801EDD74_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
        func_801CC470(3, 0x02A80004, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801EDE6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(2000000) != 0) {
        func_801CC470(3, 0x0348008C, 0, 0x1000, 2.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDED0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDF00.s")


s32 func_801EDF64(s32 arg0, s32 arg1) {
    struct func_801E1D84_StructA *a;

    if (func_801D03F8() == 0) {
        a = func_801BF6B0(7);
        if (a->unkC >= 0x26) {
            func_8038D28C(0x15E);
            func_801CC470(3, 0x02A80004, 0, 0x1100, 1.0f);
            return 6;
        }
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EDFF0.s")



s32 func_801EE000(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        if (D_801BBD54 != 0) {
            return 0;
        }
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 2);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE0B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE10C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE1A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE204.s")


extern u8 D_801F33A0[];

s32 func_801EE214(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038CB60(0.0f, D_801F33A0);
        return 1;
    }
    return 0;
}


extern s32 func_8038CBF0();

s32 func_801EE264(s32 arg0, s32 arg1) {
    u8 *obj;

    if (func_8038CBF0() != 0) {
        obj = func_801BF6B0(4);
        if (*(s32 *)(obj + 0x54) >= 4) {
            return 2;
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE2B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE398.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE410.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE4D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE5C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE6CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE744.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE850.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE8A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE8F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE95C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EE9B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEA34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEA90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEAC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEB58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEB8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEBBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEBE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEC4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEC7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EECA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EECF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EED24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EED58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EED88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEE30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEE58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEF14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEF7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEFAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEFD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EEFE4.s")



s32 func_801EEFF4(s32 arg0, s32 arg1) {
    func_8038D28C(0x89);
    func_8038D28C(0x162);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF09C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF0AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF1A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF1FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF2E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF348.s")



s32 func_801EF358(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        func_8038BED4();
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF3A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF890.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF8B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF8E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF900.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EF944.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFA3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFA4C.s")


s32 func_801EFA5C(s32 arg0, s32 arg1) {
    func_801C2420(0x2D2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D4, D_8038DDA8);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFAB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFE48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFE58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFE9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFEAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFFC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFFD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801EFFE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F002C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F003C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F004C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0090.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F00A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F00B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F00F4.s")



s32 func_801F0104(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCDFE60) != 0) {
        func_8038D28C(0x121);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0150.s")



s32 func_801F0160(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    func_801CC4C0(0, func_801DAE70 + 0x60);
    func_801C2420(0x31, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, func_801DB190 + 8);
    func_801C2420(0x32, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB258);
    func_801CC4C0(2, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DAEE8 + 0x30);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0244.s")


extern f32 D_801F5A2C;
extern f32 D_801F5A30;

s32 func_801F0320(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = D_801F5A2C;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = D_801F5A30;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(0, 0x03480012, 0, 0x1001, 1.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F03E4.s")



s32 func_801F0438(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x3480012, 0, 0, 6.0f);
    return 5;
}


struct func_801F0480_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801F0480_StructC {
    u8 pad0[0x2C];
    struct func_801F0480_StructD *unk2C;
};

struct func_801F0480_StructB {
    u8 pad0[0x24];
    struct func_801F0480_StructC *unk24;
};

struct func_801F0480_StructA {
    u8 pad0[8];
    struct func_801F0480_StructB *unk8;
};

struct func_801F0480_Root {
    u8 pad0[0x24];
    struct func_801F0480_StructA *unk24;
};

extern s32 func_801CFE28(s32 a0, s32 a1);
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern f32 D_801F5A34;

s32 func_801F0480(s32 arg0, s32 arg1) {
    struct func_801F0480_StructD *temp_v0;

    if (func_801CFE28(0x03480012, 0xDE) != 0) {
        temp_v0 = ((struct func_801F0480_Root *)func_801DAAF0)->unk24->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x164, D_801F5A34, 1.0f);
    }
    if (func_801CFD50() != 0) {
        return 6;
    }
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F055C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F056C.s")


extern s32 D_801CFD40();
extern s32 D_801F4CC8;

s32 func_801F0584(s32 arg0, s32 arg1) {
    if (D_801F4CC8 == 0) {
        goto case0;
    }
    if (D_801F4CC8 == 1) {
        goto case1;
    }
    return 9;
case0:
    func_801CC4D8(0, 0x02A80016, 0, 0, 15.0f);
    D_801F4CC8 = 1;
    goto end9;
case1:
    if (D_801CFD40() == 0) {
        func_801CC470(0, 0x02A80016, 0, 0, 3.0f);
        return 0xA;
    }
end9:
    return 9;
}


struct func_801F0634_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801F0634_Struct3 {
    u8 pad0[0x2C];
    struct func_801F0634_Struct4 *unk2C;
};

struct func_801F0634_Struct2 {
    u8 pad0[0x24];
    struct func_801F0634_Struct3 *unk24;
};

struct func_801F0634_Struct1 {
    u8 pad0[8];
    struct func_801F0634_Struct2 *unk8;
};

extern f32 D_801F5A38;

s32 func_801F0634(s32 arg0, s32 arg1) {
    struct func_801F0634_Struct4 *temp_v0;

    if ((func_801CFE28(0x02A80016, 0xB4) != 0) || (func_801CFE28(0x02A80016, 0xD2) != 0) || (func_801CFE28(0x02A80016, 0xF9) != 0) || (func_801CFE28(0x02A80016, 0x126) != 0) || (func_801CFE28(0x02A80016, 0x147) != 0)) {
        temp_v0 = (*(struct func_801F0634_Struct1 **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x664, D_801F5A38, 1.0f);
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F06FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0968.s")



s32 func_801F0978(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200005, 0, 0x1000, 2.0f);
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F09C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0A08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0E74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F0FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1030.s")


extern s32 D_801F4D08;

s32 func_801F1048(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801F4D08;
    if (state == 0) {
        goto block_0;
    }
    if (state == 1) {
        goto block_1;
    }
    return 0x10;
block_0:
    func_801D271C(1);
    func_801CC470(2, 0x03200006, 0, 0x1000, 5.0f);
    D_801F4D08 = 1;
    goto done;
block_1:
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 0x11;
    }
done:
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F10E8.s")



s32 func_801F113C(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200019, 0, 0x1000, 5.0f);
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F118C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F11CC.s")


s32 func_801F1220(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200002, 0, 0x1000, 3.0f);
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F12B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1358.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1370.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F155C.s")



s32 func_801F15B0(s32 arg0, s32 arg1) {
    func_801D271C(1);
    func_801CC470(2, 0x03200012, 0, 0x1000, 3.0f);
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F16A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F16B4.s")


typedef struct func_801F1700_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801F1700_Leaf;

typedef struct func_801F1700_Node {
    u8 pad0[0x8];
    struct func_801F1700_Node *unk8;
    u8 pad1[0x18];
    struct func_801F1700_Node *unk24;
    u8 pad2[0x4];
    func_801F1700_Leaf *unk2C;
} func_801F1700_Node;

s32 func_801F1700(s32 arg0, s32 arg1) {
    func_801F1700_Node *temp_v0;

    temp_v0 = ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -32.0f;
        ((func_801F1700_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xB8E;
        func_801CC470(3, 0x02A80004, 0, 0x1101, 1.0f);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F17F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1808.s")



s32 func_801F1818(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F18F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1984.s")



s32 func_801F1994(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA037A0) != 0) {
        if (D_801BBD54 != 0) {
            return 7;
        }
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1A44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1B20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1B78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1BF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1C5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1D1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1D44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1ED4.s")


s32 func_801F1EE4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA037A0) != 0) {
        func_8038D28C(0xA);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file027/801E1BE0/func_801F1F30.s")

