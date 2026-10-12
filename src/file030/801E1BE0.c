#include "common.h"

extern void func_8038BED4(void);
extern void func_8038D28C(s32);
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x84);
        func_8038BED4();
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1DCC.s")


s32 func_801E1E70(s32 arg0, s32 arg1) {
    return 5;
}

extern void D_8038BD88(f32, f32, s32);
void *func_801BF6B0(s32 arg0);
s32 func_801C1B1C(void);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_801EC4BC;
extern f32 D_801EC4C0;
extern f32 D_801EC4C4;

typedef struct func_801E1E80_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1E80_Struct;

s32 func_801E1E80(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC4BC, 1.0f, 0xC04CCCCD);
    D_8038BD88(D_801EC4C0, D_801EC4C4, 0xC019999A);
    if ((((func_801E1E80_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E1FB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E200C.s")


extern f32 D_801EC4D8;
extern f32 D_801EC4DC;
extern f32 D_801EC4E0;

s32 func_801E2060(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC4D8, D_801EC4DC, 0x41ACCCCD);
    D_8038BD88(D_801EC4E0, 14.5f, 0xC10E6666);
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E20BC.s")


s32 func_801E2110(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0xD;
}


s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);
extern f32 D_801EC4E4;
extern f32 D_801EC4E8;
extern f32 D_801EC4EC;
extern f32 D_801EC4F0;
extern f32 D_801EC4F4;
extern f32 D_801EC4F8;
extern f32 D_801EC4FC;

s32 func_801E2138(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, -28.3f, 3.5f, 10.5f, D_801EC4E4, D_801EC4E8, D_801EC4EC, 0.0f, D_801EC4F0, D_801EC4F4, D_801EC4F8, 35.5f, D_801EC4FC) != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E21F0(s32 arg0, s32 arg1) {
    return 15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2200.s")


extern f32 D_801EC500;
extern f32 D_801EC504;
extern f32 D_801EC508;

s32 func_801E2254(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC500, 0.5f, 0x41C9999A);
    D_8038BD88(D_801EC504, D_801EC508, 0xC124CCCD);
    return 0x11;
}


typedef struct func_801E22B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E22B0_Struct;


s32 func_801E22B0(s32 arg0, s32 arg1) {
    func_801E22B0_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2304.s")


extern f32 D_801EC50C;
extern f32 D_801EC510;
extern f32 D_801EC514;

s32 func_801E2358(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC50C, D_801EC510, 0xC1080000);
    D_8038BD88(-2.5f, D_801EC514, 0x40666666);
    return 0x14;
}



typedef struct func_801E23B0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E23B0_Struct;

s32 func_801E23B0(s32 arg0, s32 arg1) {
    if ((((func_801E23B0_Struct *)func_801BF6B0(7))->unkC < 0x25) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E2404(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E2414(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0x17;
}


extern f32 D_801EC518;
extern f32 D_801EC51C;
extern f32 D_801EC520;
extern f32 D_801EC524;
extern f32 D_801EC528;
extern f32 D_801EC52C;
extern f32 D_801EC530;
extern f32 D_801EC534;

s32 func_801E243C(s32 arg0, s32 arg1) {
    f32 temp;

    temp = D_801EC518;
    if (func_8038BEF8(0.0f, D_801EC51C, 67.1f, 19.4f, -8.5f, D_801EC520, temp, D_801EC524, -2.5f, D_801EC528, temp, D_801EC52C, D_801EC530, D_801EC534) != 0) {
        return 0x18;
    }
    return 0x17;
}


extern s32 D_801EB580;
extern f32 D_801EC538;
extern f32 D_801EC53C;
extern f32 D_801EC540;
extern f32 D_801EC544;

s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1CFDE0) != 0) {
        func_8038BD50(D_801EC538, D_801EC53C, 0x42A13333);
        D_8038BD88(D_801EC540, D_801EC544, 0x42746666);
        D_801EB580 = 0;
        func_8038BED4();
        func_8038D28C(0x252);
        return 0x19;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2584.s")


s32 func_801E27D4(s32 arg0, s32 arg1) {
    return 27;
}


extern f32 D_801EC5BC;
extern f32 D_801EC5C0;
extern f32 D_801EC5C4;

s32 func_801E27E4(s32 arg0, s32 arg1) {
    func_8038BD50(48.0f, D_801EC5BC, 0x41A8CCCD);
    D_8038BD88(D_801EC5C0, D_801EC5C4, 0xC0B9999A);
    return 0x1C;
}


s32 func_801E2840(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E2850(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2948.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E29F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2AE0.s")


extern f32 D_801EC624;
extern f32 D_801EC628;
extern f32 D_801EC62C;
extern f32 D_801EC630;
extern f32 D_801EC634;

s32 func_801E2B94(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, -13.7f, 10.7f, D_801EC624, D_801EC628, 17.5f, D_801EC62C, 0.0f, 30.0f, D_801EC630, 1.0f, 37.0f, D_801EC634) != 0) {
        return 0x23;
    }
    return 0x22;
}


s32 func_801E2C50(s32 arg0, s32 arg1) {
    return 36;
}


extern f32 D_801EC638;
extern f32 D_801EC63C;

s32 func_801E2C60(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC638, 2.0f, 0x41B26666);
    D_8038BD88(D_801EC63C, 14.0f, 0xC0FCCCCD);
    return 0x25;
}


s32 func_801E2CBC(s32 arg0, s32 arg1) {
    return 38;
}



s32 func_801E2CCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x27;
    }
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E2DE0.s")


s32 func_801E2EA0(s32 arg0, s32 arg1) {
    return 41;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2EB0(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


void func_801CCE0C(s32 arg0);
void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CD5C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E2EEC(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0, 0xFF, 0xFF);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0, 0xFF, 0xFF);
    func_801CCEC8(1, 0, 0x7F, 0);
    func_801CCE50(0x28, 0x28, 0x28);
    func_801CD5C8(0, 1, 2, 0x11);
    func_801CD5C8(1, 1, 2, 0x11);
    return 2;
}


s32 func_801E2FA0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2FB0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2FC0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2FD0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2FE0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2FF0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3000(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3010(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(1, 0);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E305C.s")



s32 func_801E342C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xCDFE60) != 0) {
        func_801CD5C8(0, 0, 2, 0);
        func_801CD5C8(1, 0, 2, 0);
        return 0xC;
    }
    return 0xB;
}


s32 func_801E3494(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFBC520) != 0) {
        func_801CCE88(0, 0, 0, 0);
        func_801CCE88(1, 0, 0, 0);
        func_801CCEC8(0, 0, -0xD, 0);
        func_801CCEC8(1, 0, 0x73, 0);
        func_801C0D04(1, 0);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E3530.s")


s32 func_801E38E4(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E38F4(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E3904(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E3914(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E3924(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E3934(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E3944(s32 arg0, s32 arg1) {
    return 20;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E3954(s32 arg0, s32 arg1) {
    func_801C2420(0x489, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E3988_StructR {
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

struct func_801E3988_StructQ {
    u8 pad0[0x2C];
    struct func_801E3988_StructR *unk2C;
};

struct func_801E3988_StructP {
    struct func_801E3988_StructQ *unk0;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern s32 func_8038D850;
extern struct func_801E3988_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E3988(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x489, 0);
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


s32 func_801E3A80(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3A90(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3AA0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3AB0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3AC0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3AD0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3AE0(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3AF0(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E3B00(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E3B10(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E3B20(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3B30(s32 arg0, s32 arg1) {
    return 13;
}


extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];

s32 func_801E3B40(s32 arg0, s32 arg1) {
    func_801C2420(0x48A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x2D2, D_8038DDC0);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E3BAC.s")

extern struct func_801E5060_StructC *D_8038D8D0;

s32 func_801E40CC(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 3;
}


s32 func_801E40F8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 4;
}


s32 func_801E4124(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 5;
}


s32 func_801E4150(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 6;
}


s32 func_801E417C(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 7;
}


s32 func_801E41A8(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 8;
}


s32 func_801E41D4(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + 0x222;
    return 9;
}


typedef struct func_801E4200_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
} func_801E4200_Struct3;

typedef struct func_801E4200_Struct2 {
    u8 pad0[0x30];
    func_801E4200_Struct3 *unk30;
} func_801E4200_Struct2;

typedef struct func_801E4200_Struct1 {
    func_801E4200_Struct2 *unk0;
} func_801E4200_Struct1;

s32 func_801E4200(s32 arg0, s32 arg1) {
    func_801E4200_Struct3 *temp_v0;

    temp_v0 = ((func_801E4200_Struct1 *) D_8038D8D0)->unk0->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 + 0x222);
    if (func_801C0B8C(0x2625A0) != 0) {
        func_8038D28C(0x652);
        func_801C0D04(3, 0);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4274.s")


struct func_801E4378_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
};

struct func_801E4378_Struct2 {
    u8 pad0[0x30];
    struct func_801E4378_Struct3 *unk30;
};

extern u32 D_801EB778;

s32 func_801E4378(s32 arg0, s32 arg1) {
    u32 *temp_v0;
    struct func_801E4378_Struct3 *temp_v1;

    temp_v0 = &D_801EB778;
    if (++(*temp_v0) >= 0x78U) {
        return 0xC;
    }
    temp_v1 = ((struct func_801E4378_Struct2 *)*(struct func_801E4378_Struct2 **)D_8038D8D0)->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x88);
    return 0xB;
}


s32 func_801E43CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFBC520) != 0) {
        func_8038D28C(0x251);
        func_8038D28C(8);
        func_801C0D04(3, 0);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E442C.s")


s32 func_801E4500(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + -0x222;
    return 15;
}


s32 func_801E452C(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + -0x222;
    return 16;
}


s32 func_801E4558(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + -0x222;
    return 17;
}


s32 func_801E4584(s32 arg0, s32 arg1) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)(*(u8 **)D_8038D8D0 + 0x30);
    *(s16 *)(temp_v1 + 0x12) = *(s16 *)(temp_v1 + 0x12) + -0x222;
    return 17;
}


s32 func_801E45B0(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E45C0(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E45D0(s32 arg0, s32 arg1) {
    return 20;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E45E0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E467C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E46A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E46D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E472C.s")



typedef struct func_801E4758_Struct2 {
    u8 pad0[0x12];
    s16 unk12;
} func_801E4758_Struct2;

typedef struct func_801E4758_Struct1 {
    u8 pad0[0x30];
    func_801E4758_Struct2 *unk30;
} func_801E4758_Struct1;

typedef struct func_801E4758_Struct0 {
    u8 pad0[0x4];
    func_801E4758_Struct1 *unk4;
} func_801E4758_Struct0;

s32 func_801E4758(s32 arg0, s32 arg1) {
    func_801E4758_Struct2 *temp_v0;

    temp_v0 = ((func_801E4758_Struct0 *) D_8038D8D0)->unk4->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 + 0x222);
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C0D04(3, 1);
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E47C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E48C4.s")

extern s32 func_801C0D04(s32 arg0, s32 arg1);

typedef struct func_801E49E4_Struct3 {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801E49E4_Struct3;

typedef struct func_801E49E4_Struct2 {
    u8 pad0[0x30];
    func_801E49E4_Struct3 *unk30;
} func_801E49E4_Struct2;

typedef struct func_801E49E4_Struct1 {
    u8 pad0[0x4];
    func_801E49E4_Struct2 *unk4;
} func_801E49E4_Struct1;

s32 func_801E49E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xFBC520) != 0) {
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk48 = 0xFF;
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk49 = 0xFF;
        ((func_801E49E4_Struct1 *) D_8038D8D0)->unk4->unk30->unk4A = 0;
        func_801C0D04(3, 1);
        return 0xC;
    }
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4A6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E4CBC.s")


s32 func_801E4CE8(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E4CF8(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E4D08(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E4D18(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E4D28(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4D6C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4D7C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4D8C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4D9C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4DAC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4DBC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4DCC(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4DDC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4DEC(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4DFC(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E4E0C(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E4E1C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 2);
        return 0xD;
    }
    return 0xC;
}

extern f64 func_80034C24();
s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
s32 func_801C0EB0(s32 arg0, s32 arg1);
u64 func_801C0F18(s32 arg0, s32 arg1);

struct func_801E4E68_StructC {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E4E68_StructB {
    u8 pad[0x30];
    struct func_801E4E68_StructC *unk30;
};

struct func_801E4E68_StructA {
    u8 pad[0x8];
    struct func_801E4E68_StructB *unk8;
};

extern f64 D_801EC700;

s32 func_801E4E68(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 2, 0x40A00000) != 0) {
        func_801C0EB0(3, 2);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 2);
    ((struct func_801E4E68_StructA *) D_8038D8D0)->unk8->unk30->unk8 =
        (f32) (((func_80034C24(temp_ret) / D_801EC700) / 5.0) * 31.0);
    return 0xD;
}


s32 func_801E4F10(s32 arg0, s32 arg1) {
    return 14;
}



s32 func_801E4F20(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4F64(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4F74(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4F84(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4F94(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4FA4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4FB4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4FC4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4FD4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4FE4(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4FF4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5004(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E5014(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801C0D04(3, 3);
        return 0xD;
    }
    return 0xC;
}


struct func_801E5060_StructB {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E5060_StructA {
    u8 pad[0x30];
    struct func_801E5060_StructB *unk30;
};

struct func_801E5060_StructC {
    u8 pad[0xC];
    struct func_801E5060_StructA *unkC;
};

extern f64 D_801EC708;

s32 func_801E5060(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x40A00000) != 0) {
        func_801C0EB0(3, 3);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 3);
    D_8038D8D0->unkC->unk30->unk8 = (f32) (((func_80034C24(temp_ret) / D_801EC708) / 5.0) * 31.0);
    return 0xD;
}


s32 func_801E5108(s32 arg0, s32 arg1) {
    return 14;
}



s32 func_801E5118(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E515C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E516C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E517C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E518C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E519C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E51AC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E51BC(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E51CC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E51DC(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E51EC(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E51FC(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E520C(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E521C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5260(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5270(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5280(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5290(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E52A0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E52B0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E52C0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E52D0(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E52E0(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E52F0(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5300(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5310(s32 arg0, s32 arg1) {
    return 12;
}


extern u8 func_801DAC30[];
extern u8 D_801E0A48[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E5320(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x2F, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB314);
    func_801CC4C0(2, D_801DB318);
    return 1;
}


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern u8 D_801DB300[];
extern u8 D_801DAD14[];
extern u8 func_801DAAF0[];

s32 func_801E53EC(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}


typedef struct func_801E5470_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E5470_StructC;

typedef struct func_801E5470_StructP3 {
    u8 pad0[0x2C];
    func_801E5470_StructC *unk2C;
} func_801E5470_StructP3;

typedef struct func_801E5470_StructP2 {
    u8 pad0[0x24];
    func_801E5470_StructP3 *unk24;
} func_801E5470_StructP2;

typedef struct func_801E5470_StructP1 {
    u8 pad0[0x8];
    func_801E5470_StructP2 *unk8;
} func_801E5470_StructP1;

extern func_801E5470_StructP1 *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

s32 func_801E5470(s32 arg0, s32 arg1) {
    func_801E5470_StructP3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -2.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 89.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x0168003F, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801CE284(void);
s32 func_801CE2D0(s32 a0, s32 a1);
void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
void func_8038D33C(f32 f0, f32 f1, s32 a2, s32 a3, f32 f4, f32 f5);
extern f32 D_801EC710;

s32 func_801E5538(s32 arg0, s32 arg1) {
    void *temp_v0;
    void *temp_t6;

    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x01B8000B, 0, 0, 15.0f);
        return 4;
    }
    if ((func_801CE2D0(0x0168003F, 0xA) != 0) || (func_801CE2D0(0x0168003F, 0x16) != 0)) {
        temp_v0 = *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)*(void **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)((u8 *)temp_v0 + 0x4), *(f32 *)((u8 *)temp_v0 + 0x8),
                      *(s32 *)((u8 *)temp_v0 + 0xC), 0x67B, D_801EC710, 1.0f);
    }
    return 3;
}


typedef struct func_801E55F8_StructB {
    u8 pad0[0x8];
    void *unk8;
} func_801E55F8_StructB;

typedef struct func_801E55F8_StructC {
    u8 pad0[0x24];
    void *unk24;
} func_801E55F8_StructC;

typedef struct func_801E55F8_StructD {
    u8 pad0[0x2C];
    void *unk2C;
} func_801E55F8_StructD;

typedef struct func_801E55F8_StructE {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E55F8_StructE;

extern s32 func_801CE274();
extern void func_801CC550(s32);
extern f32 D_801EC714;

s32 func_801E55F8(s32 arg0, s32 arg1) {
    func_801E55F8_StructE *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = ((func_801E55F8_StructD *)((func_801E55F8_StructC *)((func_801E55F8_StructB *)D_801DAB14)->unk8)->unk24)->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67A, D_801EC714, 1.0f);
        func_801CC550(0);
        return 5;
    }
    return 4;
}


extern u8 func_801CE1C8[];
s32 func_801CC564(s32 a0, void *a1, s32 a2, s32 a3, s32 a4, f32 f5, void *a6, s32 a7, s32 a8, s32 a9, f32 f10);

s32 func_801E5674(s32 arg0, s32 arg1) {
    if (func_801CC564(0, func_801CE1C8 + 0xBC, 0x01B8000B, 0, 0, 3.0f, func_801CE1C8 + 0xAC, 0x0168003F, 0, 0, 15.0f) != 0) {
        func_801CC470(0, 0x0168003F, 0, 0x100, 1.0f);
        func_801C0D04(4, 0);
        return 6;
    }
    return 5;
}


extern s32 D_801EB924;
extern f32 D_801EC718;

s32 func_801E572C(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (func_801C0DE4(4, 0, 0x3F800000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x03480019, 0, 0, 15.0f);
        D_801EB924 = 0;
        return 7;
    }
    if ((func_801CE2D0(0x0168003F, 0xA) != 0) || (func_801CE2D0(0x0168003F, 0x16) != 0)) {
        temp_v0 = *(void **)((u8 *)*(void **)((u8 *)*(void **)((u8 *)*(void **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)((u8 *)temp_v0 + 0x4), *(f32 *)((u8 *)temp_v0 + 0x8), *(s32 *)((u8 *)temp_v0 + 0xC), 0x67B, D_801EC718, 1.0f);
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E580C.s")


s32 func_801E5978(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E5988(s32 arg0, s32 arg1) {
    D_801EB924 = 0;
    return 0xA;
}


s32 func_801E59A0(s32 arg0, s32 arg1) {
    if (D_801EB924 == 0) {
        goto block_case0;
    }
    if (D_801EB924 == 1) {
        goto block_case1;
    }
    if (D_801EB924 == 2) {
        goto block_case2;
    }
    goto block_default;

block_default:
    return 0xA;

block_case0:
    func_801CC4D8(0, 0x03480029, 0, 0, 15.0f);
    D_801EB924 = 1;
    goto block_ret10;

block_case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480029, 0, 0, 4.0f);
        D_801EB924 = 2;
    }
    goto block_ret10;

block_case2:
    if (func_801CE284() != 0) {
        return 0xB;
    }
    goto block_ret10;

block_ret10:
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E5A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E5ACC.s")


s32 func_801E5B20(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EB924;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0xD;

case0:
    func_801CC4D8(0, 0x0348002A, 0, 0, 15.0f);
    D_801EB924 = 1;
    goto done;

case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002A, 0, 0, 3.0f);
        D_801EB924 = 2;
    }
    goto done;

case2:
    if (func_801CE284() == 0) {
        goto done;
    }
    return 0xE;

done:
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E5BF8.s")


s32 func_801E5C4C(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5C5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 17;
    }
    return 16;
}


s32 func_801E5C94(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E5CA4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2191C0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -38.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 57.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x17A4;
        func_801CC470(0, 0x03480024, 0, 0, 3.0f);
        return 0x13;
    }
    return 0x12;
}



s32 func_801E5D78(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x14;
    }
    if (func_801CE2D0(0x03480024, 0x42) != 0) {
        func_8038D28C(0x250);
    }
    return 0x13;
}


s32 func_801E5DCC(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E5DDC(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E5DEC(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E5DFC(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E5E0C(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E5E1C(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E5E2C(s32 arg0, s32 arg1) {
    return 27;
}


extern f32 D_801EC720;

s32 func_801E5E3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = -3.5f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = D_801EC720;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x1B8000B, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E5F10(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E5F40(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E5F50(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801E5F60(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E5FA4_StructC {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E5FA4_StructC;

typedef struct func_801E5FA4_StructD {
    u8 pad0[0x2C];
    func_801E5FA4_StructC *unk2C;
} func_801E5FA4_StructD;

typedef struct func_801E5FA4_StructB {
    u8 pad0[0x24];
    func_801E5FA4_StructD *unk24;
} func_801E5FA4_StructB;

typedef struct func_801E5FA4_StructA {
    u8 pad0[0x8];
    func_801E5FA4_StructB *unk8;
} func_801E5FA4_StructA;

typedef struct func_801E5FA4_StructP {
    u8 pad0[0x8];
    func_801E5FA4_StructA *unk8;
} func_801E5FA4_StructP;

s32 func_801E5FA4(s32 arg0, s32 arg1) {
    func_801E5FA4_StructD *temp_v0;

    temp_v0 = (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 19.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -42.0f;
        (*(func_801E5FA4_StructP **)&D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005A, 0, 0x100, 3.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6078(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6088(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6098(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E60A8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E60B8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E60C8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E60D8(s32 arg0, s32 arg1) {
    return 9;
}


extern s32 D_801EB9A4;

s32 func_801E60E8(s32 arg0, s32 arg1) {
    D_801EB9A4 = 0;
    return 0xA;
}



s32 func_801E6100(s32 arg0, s32 arg1) {
    if (D_801EB9A4 == 0) {
        goto case0;
    }
    if (D_801EB9A4 == 1) {
        goto case1;
    }
    return 0xA;
case0:
    if (func_801C0B8C(0x632EA0) == 0) {
        goto ret_a;
    }
    func_801CC4D8(1, 0x02A8005A, 0, 0, 30.0f);
    D_801EB9A4 = 1;
    goto ret_a;
case1:
    if (func_801CEDD4() != 0) {
        goto ret_a;
    }
    func_801CC470(1, 0x02A8005A, 0, 1, 1.0f);
    return 0xB;
ret_a:
    return 0xA;
}


s32 func_801E61C4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E61D4(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E61E4(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E61F4(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E6204(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E6214(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E6224(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E6234(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E6244(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E6254(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E6264(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E62A8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E62A8_StructC;

typedef struct func_801E62A8_StructM {
    u8 pad0[0x2C];
    func_801E62A8_StructC *unk2C;
} func_801E62A8_StructM;

typedef struct func_801E62A8_StructN {
    u8 pad0[0x8];
    struct func_801E62A8_StructN *unk8;
    u8 pad1[0x18];
    func_801E62A8_StructM *unk24;
} func_801E62A8_StructN;

s32 func_801E62A8(s32 arg0, s32 arg1) {
    func_801E62A8_StructM *temp_v0;

    temp_v0 = (*(func_801E62A8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 33.0f;
        (*(func_801E62A8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(func_801E62A8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = -9.5f;
        (*(func_801E62A8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x138E;
        func_801CC470(2, 0x03200033, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6390(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 D_801EB9FC;

s32 func_801E63A0(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0x4;
}

s32 func_801D2C10(void);

s32 func_801E63B8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EB9FC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 4;
case0:
    func_801CC470(2, 0x03200033, 0, 0, 3.0f);
    D_801EB9FC = 1;
    goto ret4;
case1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200034, 0, 0, 3.0f);
        D_801EB9FC = 2;
    }
    goto ret4;
case2:
    if (func_801D2C10() == 0) {
        goto ret4;
    }
    return 5;
ret4:
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E6490.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E64E4.s")



s32 func_801E6538(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200035, 0, 0, 4.0f);
    return 8;
}



s32 func_801E6580(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x9;
    }
    return 0x8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E65B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E6604.s")



s32 func_801E6658(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0xC;
}



s32 func_801E6670(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    if (D_801EB9FC != 2) {
        goto done;
    }
    goto case2;

case0:
    func_801CC470(2, 0x03200036, 0, 0, 3.0f);
    D_801EB9FC = 1;
    goto done;

case1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200033, 0, 0, 3.0f);
        D_801EB9FC = 2;
    }
    goto done;

case2:
    if (func_801D2C10() != 0) {
        return 0xD;
    }
    goto done;

done:
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E6748.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E679C.s")



s32 func_801E67F0(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0x10;
}


s32 func_801E6808(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    if (D_801EB9FC == 2) {
        goto case2;
    }
    return 0x10;

case0:
    func_801CC470(2, 0x03200037, 0, 0, 4.0f);
    D_801EB9FC = 1;
    goto done;

case1:
    if (func_801D2C10() == 0) {
        goto done;
    }
    func_801CC470(2, 0x03200033, 0, 0, 3.0f);
    D_801EB9FC = 2;
    goto done;

case2:
    if (func_801D2C10() == 0) {
        goto done;
    }
    return 0x11;

done:
    return 0x10;
}


typedef struct func_801E68E0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E68E0_Struct;


s32 func_801E68E0(s32 arg0, s32 arg1) {
    func_801E68E0_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801E6934(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E6944(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E6954(s32 arg0, s32 arg1) {
    return 21;
}



s32 func_801E6964(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0x16;
}



s32 func_801E697C(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto case0;
    }
    if (D_801EB9FC == 1) {
        goto case1;
    }
    return 0x16;

case0:
    func_801CC470(2, 0x03200037, 0, 0, 4.0f);
    D_801EB9FC = 1;
    goto block_6;

case1:
    if (func_801D2C10() == 0) {
        goto block_6;
    }
    func_801CC470(2, 0x03200032, 0, 0x100, 3.0f);
    return 0x17;

block_6:
    return 0x16;
}



s32 func_801E6A2C(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E6A44.s")


s32 func_801E6B08(s32 arg0, s32 arg1) {
    return 26;
}



s32 func_801E6B18(s32 arg0, s32 arg1) {
    D_801EB9FC = 0;
    return 0x1B;
}



s32 func_801E6B30(s32 arg0, s32 arg1) {
    if (D_801EB9FC == 0) {
        goto state0;
    }
    if (D_801EB9FC == 1) {
        goto state1;
    }
    if (D_801EB9FC == 2) {
        goto state2;
    }
    return 0x1B;

state0:
    func_801CC470(2, 0x03200034, 0, 0, 4.0f);
    D_801EB9FC = 1;
state1:
    if (func_801D2C10() != 0) {
        func_801CC470(2, 0x03200035, 0, 0, 4.0f);
        D_801EB9FC = 2;
    }
    goto done;

state2:
    if (func_801D2C10() != 0) {
        return 0x1C;
    }

done:
    return 0x1B;
}


s32 func_801E6C04(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E6C14(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E6C24(s32 arg0, s32 arg1) {
    return 30;
}

extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E6C34(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E6CB8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E6CE8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6CF8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6D08(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6D18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E6D50(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E6D60(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E6D70(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        return 9;
    }
    return 8;
}


s32 func_801E6DAC(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E6DBC(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E6DCC(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E6DDC(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E6DEC(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E6DFC(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E6E0C(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E6E1C(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E6E2C(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E6E3C(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E6E4C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x13;
    }
    if (func_801C0B8C(0x5B8D80) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        return 0x14;
    }
    return 0x13;
}



s32 func_801E6ED4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 20;
    }
    return 21;
}


s32 func_801E6EFC(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E6F0C(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E96C0[];

s32 func_801E6F1C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E96C0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E6F50(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}


typedef struct func_801E6F80_Struct {
    s32 w[9];
} func_801E6F80_Struct;

s32 func_801C18CC(s32 arg0, func_801E6F80_Struct *arg1);
extern func_801E6F80_Struct D_801EBAEC;

s32 func_801E6F80(s32 arg0, s32 arg1) {
    func_801E6F80_Struct sp1C;

    sp1C = D_801EBAEC;
    func_801C18CC(3, &sp1C);
    return 4;
}



s32 func_801E6FE4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E7014(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801E703C_Struct {
    s32 w[9];
} func_801E703C_Struct;

extern func_801E703C_Struct D_801EBB10;

s32 func_801E703C(s32 arg0, s32 arg1) {
    func_801E703C_Struct sp1C;

    sp1C = D_801EBB10;
    func_801C18CC(3, &sp1C);
    return 7;
}



s32 func_801E70A0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_801E9758[];

s32 func_801E70D0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9758);
    return 9;
}



s32 func_801E7104(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E7134(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}


typedef struct func_801E715C_Struct {
    s32 w[9];
} func_801E715C_Struct;

extern func_801E715C_Struct D_801EBB34;

s32 func_801E715C(s32 arg0, s32 arg1) {
    func_801E715C_Struct sp1C;

    sp1C = D_801EBB34;
    func_801C18CC(3, &sp1C);
    return 12;
}



s32 func_801E71C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E71F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


typedef struct func_801E7218_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7218_Struct;

extern func_801E7218_Struct D_801EBB58;

s32 func_801E7218(s32 arg0, s32 arg1) {
    func_801E7218_Struct sp18;

    sp18 = D_801EBB58;
    func_801C18CC(2, &sp18);
    return 0xF;
}



s32 func_801E7280(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xF;
    }
    return 0x10;
}


extern u8 D_801E98AC[];

s32 func_801E72B0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E98AC);
    return 17;
}



s32 func_801E72E4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801E7314(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x13;
}


typedef struct func_801E733C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E733C_Struct;

extern func_801E733C_Struct D_801EBB70;

s32 func_801E733C(s32 arg0, s32 arg1) {
    func_801E733C_Struct sp18;

    sp18 = D_801EBB70;
    func_801C18CC(2, &sp18);
    return 0x14;
}



s32 func_801E73A4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E73D4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x16;
}



s32 func_801E73FC(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(0))[3] >= 0xE) {
        return 23;
    }
    return 22;
}


typedef struct func_801E743C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E743C_Struct;

extern func_801E743C_Struct D_801EBB88;

s32 func_801E743C(s32 arg0, s32 arg1) {
    func_801E743C_Struct sp18;

    sp18 = D_801EBB88;
    func_801C18CC(2, &sp18);
    return 0x18;
}



s32 func_801E74A4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


extern u8 D_801E9948[];

s32 func_801E74D4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9948);
    return 26;
}



s32 func_801E7508(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E7538(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1C;
}


typedef struct func_801E7560_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7560_Struct;

extern func_801E7560_Struct D_801EBBA0;

s32 func_801E7560(s32 arg0, s32 arg1) {
    func_801E7560_Struct sp18;

    sp18 = D_801EBBA0;
    func_801C18CC(2, &sp18);
    return 0x1D;
}



s32 func_801E75C8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801E75F8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E7620_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7620_Struct;

extern func_801E7620_Struct D_801EBBB8;

s32 func_801E7620(s32 arg0, s32 arg1) {
    func_801E7620_Struct sp1C;

    sp1C = D_801EBBB8;
    func_801C18CC(1, &sp1C);
    return 0x20;
}



s32 func_801E7670(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


extern u8 D_801E9AAC[];

s32 func_801E76A0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9AAC);
    return 34;
}



s32 func_801E76D4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x23;
    }
    return 0x22;
}


s32 func_801E7704(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x24;
}


typedef struct func_801E772C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E772C_Struct;

extern func_801E772C_Struct D_801EBBC4;

s32 func_801E772C(s32 arg0, s32 arg1) {
    func_801E772C_Struct sp1C;

    sp1C = D_801EBBC4;
    func_801C18CC(1, &sp1C);
    return 0x25;
}



s32 func_801E777C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x25;
    }
    return 0x26;
}


s32 func_801E77AC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}


s32 func_801E77D4(s32 arg0, s32 arg1) {
    return 40;
}


s32 func_801E77E4(s32 arg0, s32 arg1) {
    return 41;
}


s32 func_801E77F4(s32 arg0, s32 arg1) {
    return 42;
}


extern u8 D_801E9B48[];

s32 func_801E7804(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9B48);
    return 43;
}



s32 func_801E7838(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801E7868(s32 arg0, s32 arg1) {
    return 45;
}


s32 func_801E7878(s32 arg0, s32 arg1) {
    return 46;
}


s32 func_801E7888(s32 arg0, s32 arg1) {
    return 47;
}


extern u8 D_801E9C08[];

s32 func_801E7898(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9C08);
    return 48;
}



s32 func_801E78CC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x31;
    }
    return 0x30;
}


s32 func_801E78FC(s32 arg0, s32 arg1) {
    return 50;
}


s32 func_801E790C(s32 arg0, s32 arg1) {
    return 50;
}


s32 func_801E791C(s32 arg0, s32 arg1) {
    func_801C0D04(0, 0);
    return 1;
}


s32 func_801E794C(s32 arg0, s32 arg1) {
    if (func_801C0DE4(0, 0, 0x3F800000) != 0) {
        func_801C0EB0(0, 0);
        D_80089354 = 0;
        func_8038BED4();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E79A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E7A68.s")


extern f32 D_801EC748;
extern f32 D_801EC74C;
extern f32 D_801EC750;

s32 func_801E7ABC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC748, 2.0f, 0x412E6666);
    D_8038BD88(D_801EC74C, D_801EC750, 0xC12B3333);
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E7B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E7B6C.s")


extern f32 D_801EC754;
extern f32 D_801EC758;
extern f32 D_801EC75C;

s32 func_801E7BC0(s32 arg0, s32 arg1) {
    func_8038BD50(D_801EC754, 41.0f, 0x424F3333);
    D_8038BD88(D_801EC758, D_801EC75C, (s32)0xC0E9999A);
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E7C1C.s")


s32 func_801E7C70(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0xA;
}


extern f32 D_801EC760;
extern f32 D_801EC764;
extern f32 D_801EC768;
extern f32 D_801EC76C;
extern f32 D_801EC770;
extern f32 D_801EC774;

s32 func_801E7C98(s32 arg0, s32 arg1) {
    f32 fa;
    f32 fb;
    f32 fc;

    fa = D_801EC760;
    fb = D_801EC764;
    fc = D_801EC768;

    if (func_8038BEF8(0.0f, 3.5f, 11.2f, 41.0f, D_801EC76C, D_801EC770, 58.5f, D_801EC774, fa, fb, fc, fa, fb, fc) != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801E7D40(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E7D50(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E7D60(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


s32 func_801E7D9C(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xCC, 0x7F, 0x33);
    func_801CCEC8(0, -0x69, -0x6F, 0xA);
    func_801CCE88(1, 0x19, 0xB2, 0xE5);
    func_801CCEC8(1, 0x11, 0x29, -0x51);
    func_801CCE50(0x4E, 0x60, 0x49);
    return 2;
}


s32 func_801E7E28(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7E38(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E7E48(s32 arg0, s32 arg1) {
    func_801C2420(0x489, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E7E7C_StructR {
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

struct func_801E7E7C_StructQ {
    u8 pad0[0x2C];
    struct func_801E7E7C_StructR *unk2C;
};

struct func_801E7E7C_StructP {
    struct func_801E7E7C_StructQ *unk0;
};


s32 func_801E7E7C(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x489, 0);
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


s32 func_801E7F74(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7F84(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7F94(s32 arg0, s32 arg1) {
    func_801C2420(0x48A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D2, D_8038DDA8);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E7FE8.s")


s32 func_801E818C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E819C(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E81AC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E81F0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E8200(s32 arg0, s32 arg1) {
    return 2;
}



s32 func_801E8210(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x2F, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB314);
    func_801CC4C0(2, D_801DB318);
    return 1;
}



s32 func_801E82DC(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}


s32 func_801E8360(s32 arg0, s32 arg1) {
    func_801E5470_StructP3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -19.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -14.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0xA38;
        func_801CC470(0, 0x0348001E, 0, 0x110, 5.0f);
        return 3;
    }
    return 2;
}


s32 func_801E8428(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8438(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E8448(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801E8458(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E849C_Node {
    u8 pad0[8];
    struct func_801E849C_Node *unk8;
    u8 pad1[0x18];
    func_801E5470_StructP3 *unk24;
};

s32 func_801E849C(s32 arg0, s32 arg1) {
    func_801E5470_StructP3 *temp_v0;

    temp_v0 = ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -16.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -9.0f;
        ((struct func_801E849C_Node *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1A38;
        func_801CC470(1, 0x02A8005B, 0, 0x100, 5.0f);
        return 2;
    }
    return 1;
}


s32 func_801E8574(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8584(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8594(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E85A4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E85E8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E85E8_StructC;

typedef struct func_801E85E8_StructM {
    u8 pad0[0x2C];
    func_801E85E8_StructC *unk2C;
} func_801E85E8_StructM;

typedef struct func_801E85E8_StructN {
    u8 pad0[0x8];
    struct func_801E85E8_StructN *unk8;
    u8 pad1[0x18];
    func_801E85E8_StructM *unk24;
} func_801E85E8_StructN;

s32 func_801E85E8(s32 arg0, s32 arg1) {
    func_801E85E8_StructM *temp_v0;

    temp_v0 = (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -30.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = -7.0f;
        (*(func_801E85E8_StructN **)&D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x999;
        func_801CC470(2, 0x0320001C, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E86D0(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E86E0(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}


extern s32 D_801EBD88;

s32 func_801E8734(s32 arg0, s32 arg1) {
    D_801EBD88 = 0;
    return 0x5;
}


s32 func_801D2C00();

s32 func_801E874C(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EBD88;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 5;
case0:
    func_801CC470(2, 0x0320001C, 0, 0, 10.0f);
    D_801EBD88 = 1;
    goto end;
case1:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001F, 0, 0, 30.0f);
        D_801EBD88 = 2;
    }
    goto end;
case2:
    if (func_801D2C00() == 0) {
        return 6;
    }
    goto end;
end:
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8878.s")


s32 func_801E88CC(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320001F, 0, 0, 10.0f);
    return 9;
}



s32 func_801E8914(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0xA;
    }
    return 0x9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8944.s")



s32 func_801E8998(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 11;
    }
    return 12;
}



s32 func_801E89EC(s32 arg0, s32 arg1) {
    D_801EBD88 = 0;
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8A04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8B78.s")


s32 func_801E8BCC(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320001A, 0, 0, 6.0f);
    return 0x11;
}



s32 func_801E8C14(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x12;
    }
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file030/801E1BE0/func_801E8C44.s")


s32 func_801E8C98(s32 arg0, s32 arg1) {
    return 19;
}



s32 func_801E8CA8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    func_801C0D04(6, 0);
    return 1;
}



s32 func_801E8CEC(s32 arg0, s32 arg1) {
    if (func_801C0DE4(6, 0, 0x3F800000) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        func_801C0EB0(6, 0);
        func_8038D28C(0x71);
        return 2;
    }
    return 1;
}



s32 func_801E8D74(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 2;
    }
    D_80089354 = 0;
    return 3;
}


struct func_801E8DA4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E8DA4(s32 arg0, s32 arg1) {
    if (((struct func_801E8DA4_Struct *) func_801BF6B0(0))->unkC >= 0xA) {
        return 4;
    }
    return 3;
}


s32 func_801E8DE4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    func_801C0D04(6, 0);
    return 5;
}


s32 func_801E8E28(s32 arg0, s32 arg1) {
    if (func_801C0DE4(6, 0, 0x40200000) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_801C0EB0(6, 0);
        return 6;
    }
    return 5;
}



s32 func_801E8EA8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    return 7;
}


s32 func_801E8ED0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E8EE0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E8EF0(s32 arg0, s32 arg1) {
    func_801C0D04(7, 0);
    return 1;
}


s32 func_801E8F20(s32 arg0, s32 arg1) {
    if (func_801C0DE4(7, 0, 0x40800000) != 0) {
        func_801C0EB0(7, 0);
        return 2;
    }
    return 1;
}


typedef struct func_801E8F6C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8F6C_Struct;

extern func_801E8F6C_Struct D_801EBE18;

s32 func_801E8F6C(s32 arg0, s32 arg1) {
    func_801E8F6C_Struct sp1C;

    sp1C = D_801EBE18;
    func_801C18CC(1, &sp1C);
    return 0x3;
}



s32 func_801E8FBC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


extern u8 D_801E9C68[];

s32 func_801E8FEC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9C68);
    return 5;
}



s32 func_801E9020(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801E9050(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801E9078_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9078_Struct;

extern func_801E9078_Struct D_801EBE24;

s32 func_801E9078(s32 arg0, s32 arg1) {
    func_801E9078_Struct sp1C;

    sp1C = D_801EBE24;
    func_801C18CC(1, &sp1C);
    return 0x8;
}



s32 func_801E90C8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801E90F8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_801E9120_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9120_Struct;

extern func_801E9120_Struct D_801EBE30;

s32 func_801E9120(s32 arg0, s32 arg1) {
    func_801E9120_Struct sp18;

    sp18 = D_801EBE30;
    func_801C18CC(2, &sp18);
    return 0xB;
}



s32 func_801E9188(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


extern u8 D_801E9D88[];

s32 func_801E91B8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9D88);
    return 13;
}



s32 func_801E91EC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801E921C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xF;
}


typedef struct func_801E9244_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9244_Struct;

extern func_801E9244_Struct D_801EBE48;

s32 func_801E9244(s32 arg0, s32 arg1) {
    func_801E9244_Struct sp18;

    sp18 = D_801EBE48;
    func_801C18CC(2, &sp18);
    return 0x10;
}



s32 func_801E92AC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801E92DC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801E9304_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9304_Struct;

extern func_801E9304_Struct D_801EBE60;

s32 func_801E9304(s32 arg0, s32 arg1) {
    func_801E9304_Struct sp1C;

    sp1C = D_801EBE60;
    func_801C18CC(1, &sp1C);
    return 0x13;
}



s32 func_801E9354(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


extern u8 D_801E9E80[];

s32 func_801E9384(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9E80);
    return 21;
}



s32 func_801E93B8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}


s32 func_801E93E8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x17;
}


typedef struct func_801E9410_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9410_Struct;

extern func_801E9410_Struct D_801EBE6C;

s32 func_801E9410(s32 arg0, s32 arg1) {
    func_801E9410_Struct sp1C;

    sp1C = D_801EBE6C;
    func_801C18CC(1, &sp1C);
    return 0x18;
}



s32 func_801E9460(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E9490(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801E94B8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E94B8_Struct;

extern func_801E94B8_Struct D_801EBE78;

s32 func_801E94B8(s32 arg0, s32 arg1) {
    func_801E94B8_Struct sp18;

    sp18 = D_801EBE78;
    func_801C18CC(2, &sp18);
    return 0x1B;
}



s32 func_801E9520(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


extern u8 D_801E9F0C[];

s32 func_801E9550(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9F0C);
    return 29;
}



s32 func_801E9584(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E95B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E95DC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E95DC_Struct;

extern func_801E95DC_Struct D_801EBE90;

s32 func_801E95DC(s32 arg0, s32 arg1) {
    func_801E95DC_Struct sp18;

    sp18 = D_801EBE90;
    func_801C18CC(2, &sp18);
    return 0x20;
}



s32 func_801E9644(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E9674(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}


s32 func_801E969C(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E96AC(s32 arg0, s32 arg1) {
    return 35;
}

