#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1C6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1C7C.s")

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);

extern void func_8038BE98(f32);
extern f32 D_801E7640;
extern f32 D_801E7644;
extern f32 D_801E7648;
extern f32 D_801E764C;

s32 func_801E1C8C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E7640);
    func_8038BD50(D_801E7644, D_801E7648, 85.4f);
    D_8038BD88(D_801E764C, 10.5f, 106.2f);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1D9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1F78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E1FDC.s")


extern u8 func_801DAAF0[];
extern f32 D_801E7770[];
extern f32 D_801E7780[];

void func_801E2044(void) {
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    func_8038BD50(D_801E7770[0] + *(f32 *)(temp_v0 + 0x4), D_801E7770[1] + *(f32 *)(temp_v0 + 0x8), D_801E7770[2] + *(f32 *)(temp_v0 + 0xC));
    temp_v0_2 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    D_8038BD88(D_801E7780[0] + *(f32 *)(temp_v0_2 + 0x4), D_801E7780[1] + *(f32 *)(temp_v0_2 + 0x8), D_801E7780[2] + *(f32 *)(temp_v0_2 + 0xC));
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E20F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2540.s")

extern s32 D_801E703C;

extern f32 D_801E76D0;
extern f32 D_801E76D4;
extern f32 D_801E76D8;

s32 func_801E2630(s32 arg0, s32 arg1) {
    if (D_801E703C >= 0x3D) {
        func_8038BE98(D_801E76D0);
        func_8038BD50(-10.5f, D_801E76D4, 132.8f);
        D_8038BD88(D_801E76D8, 13.0f, 127.5f);
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 0x24) + 0x2C) + 8) = 20.0f;
        D_801E703C = 0;
        return 0xE;
    } else {
        D_801E703C = D_801E703C + 1;
        return 0xD;
    }
}



s32 func_801E26E4(s32 arg0, s32 arg1) {
    if (D_801E703C >= 0x3D) {
        func_801E2044();
        return 0xF;
    }
    D_801E703C = D_801E703C + 1;
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E275C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2844.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E28C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E28D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E28E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E28F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2914.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E2968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E386C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E387C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E388C.s")

extern struct func_801E4434_Struct *func_801BF6B0(s32);
extern void func_801C1000(s32, s32);
extern void func_8038D28C(s32);

s32 func_801E38D0(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(4) + 0xC) >= 4) {
        func_801C1000(3, 1);
        func_8038D28C(0x20D);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E39E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3B14.s")


extern void func_801C2420(s32, void *);
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);
extern u8 func_801DAC30[];
extern u8 D_801E0A48[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB354[];
extern u8 D_801DB358[];

s32 func_801E3B24(s32 arg0, s32 arg1) {
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
    func_801CC458(3, D_801DB334);
    func_801CC4C0(3, D_801DB338);
    func_801CC458(4, D_801DB354);
    func_801CC4C0(4, D_801DB358);
    return 1;
}


extern void func_80005670(s32, void *);
extern void func_801CEDBC(s32);
extern void func_801CEDC8(s32);
extern void func_801CC530();
extern u8 D_801DAD14[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];

s32 func_801E3C30(s32 arg0, s32 arg1) {
    func_80005670(*(s32 *)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), D_801DB320);
    func_80005670(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8) + 0x8), D_801DB340);
    func_801CC530();
    return 2;
}

extern u8 *D_801DAB14;
extern s32 D_801E7144;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E3CF8_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3CF8_Struct4;

typedef struct func_801E3CF8_Struct3 {
    u8 pad0[0x2C];
    func_801E3CF8_Struct4 *unk2C;
} func_801E3CF8_Struct3;

typedef struct func_801E3CF8_Struct2 {
    u8 pad0[0x24];
    func_801E3CF8_Struct3 *unk24;
} func_801E3CF8_Struct2;

typedef struct func_801E3CF8_Struct1 {
    u8 pad0[0x8];
    func_801E3CF8_Struct2 *unk8;
} func_801E3CF8_Struct1;

extern f32 D_801E76E0;

s32 func_801E3CF8(s32 arg0, s32 arg1) {
    func_801E3CF8_Struct3 *temp_v0;

    temp_v0 = ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E76E0;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = 50.0f;
        ((func_801E3CF8_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        D_801E7144 = 0;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E3DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4030.s")

extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4048(s32 arg0, s32 arg1) {
    s32 v;

    if (func_801C0B8C(0) != 0) {
        v = D_801E7144;
        if (v >= 0xB) {
            func_801CC4D8(0, 0x01B8003C, 0, 0, 5.0f);
            return 9;
        }
        D_801E7144 = v + 1;
    }
    return 8;
}

extern s32 func_801CE274();

s32 func_801E40C4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003C, 0, 0, 4.0f);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E411C.s")



s32 func_801E412C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_801E7144 = 0;
        return 0xC;
    }
    return 0xB;
}


s32 func_801E4174(s32 arg0, s32 arg1) {
    if (D_801E7144 >= 0xB) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 0xD;
    }
    D_801E7144 += 1;
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E41E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E42EC.s")


struct func_801E4434_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E4434(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xB) {
        func_801C1000(4, 0);
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4484.s")

extern void func_8038D33C(f32, f32, s32, s32, f32, f32);

extern f32 D_801E7718;

s32 func_801E459C(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C);
    func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67D, D_801E7718, 1.0f);
    func_801CC4D8(0, 0x04100034, 0, 0, 20.0f);
    return 0x12;
}



s32 func_801E4624(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100034, 0, 0, 5.0f);
        D_801E7144 = 0;
        return 0x13;
    }
    return 0x12;
}


s32 func_801E4684(s32 arg0, s32 arg1) {
    if (D_801E7144 == 0) {
        goto case0;
    }
    if (D_801E7144 == 1) {
        goto case1;
    }
    return 0x13;
case0:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        D_801E7144 = 1;
    }
    goto ret13;
case1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007B, 0, 0x100, 10.0f);
        D_801E7144 = 0;
        return 0x14;
    }
ret13:
    return 0x13;
}



s32 func_801E4748(s32 arg0, s32 arg1) {
    if (D_801E7144 >= 0x1F) {
        return 0x15;
    }
    D_801E7144 += 1;
    return 0x14;
}


s32 func_801E4780(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xF) {
        func_801CC4D8(0, 0x01680040, 0, 0, 20.0f);
        D_801E7144 = 0;
        return 0x16;
    }
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E47EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E49D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E49E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E49F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4A94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4B9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4BF0.s")


s32 func_801E4C40(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004D, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}


extern void func_801CED5C(s32);
extern s32 func_801CEDE4();

s32 func_801E4C98(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        func_801CED5C(0);
        return 9;
    }
    return 8;
}


s32 func_801E4CF8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4DB4.s")


s32 func_801E4DC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A80051, 0, 0, 5.0f);
        return 0xE;
    }
    return 0xD;
}


s32 func_801E4E24(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80051, 0, 0, 2.0f);
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4ED4.s")


s32 func_801E4F2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC4D8(1, 0x02A80058, 0, 0, 3.0f);
        return 0x12;
    }
    return 0x11;
}


s32 func_801CEDD4();

s32 func_801E4F90(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80058, 0, 0, 3.5f);
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E4FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E510C.s")



s32 func_801E522C(s32 arg0, s32 arg1) {
    if (((s32 *) func_801BF6B0(0))[3] >= 0xD) {
        func_801C1000(4, 1);
        return 0x17;
    }
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E527C.s")


struct func_801E53D0_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E53D0_Struct {
    u8 pad0[0x8];
    struct func_801E53D0_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E53D0_Struct *unk24;
    u8 pad2[0x4];
    struct func_801E53D0_Struct3 *unk2C;
};

extern s32 func_801CEE30(s32, s32);
extern f32 D_801E7740;

s32 func_801E53D0(s32 arg0, s32 arg1) {
    struct func_801E53D0_Struct3 *temp_v0;

    if (func_801BF6B0(0)->unkC >= 0xF) {
        ((struct func_801E53D0_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 0x19;
    }
    if ((func_801CEE30(0x01B8001B, 0x18) != 0) || (func_801CEE30(0x01B8001B, 0x3C) != 0)) {
        temp_v0 = ((struct func_801E53D0_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67D, D_801E7740, 1.0f);
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E54F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5500.s")


extern f32 D_801E7744;
extern f32 D_801E7748;

s32 func_801E5544(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)(temp_v0 + 0x2C) + 0x4) = D_801E7744;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = D_801E7748;
        *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14 + 0x8) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E562C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E563C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E564C.s")


s32 func_801E565C(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320001C, 0, 0, 5.0f);
    return 6;
}


s32 func_801E56A4(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001C, 0, 0, 7.0f);
        return 7;
    }
    return 6;
}


extern s32 func_801D2C10();

s32 func_801E56FC(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 0, 30.0f);
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E57AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E589C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E58F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E594C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E59A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E59F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5B84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5B94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5BA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5C08.s")


s32 func_801D2F30();

s32 func_801E5C50(s32 arg0, s32 arg1) {
    if (func_801D2F30() == 0) {
        func_801CC470(3, 0x03200027, 0, 0, 6.0f);
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5D00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5D58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5DBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5DCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5F68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E5FF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6040.s")


extern s32 D_801E72FC;

s32 func_801E6050(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xF) {
        D_801E72FC = 0;
        return 6;
    }
    return 5;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E6098(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (D_801E72FC >= 0x5B) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    D_801E72FC += 1;
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6178.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E61AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E61DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E629C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E62EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E631C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6380.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E63A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E63F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E64B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E64E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E651C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E654C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E65DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E660C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6684.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E66B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E66E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6740.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E6790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E67C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E67E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file049/801E1BE0/func_801E67F8.s")

