#include "common.h"

extern f32 D_801EB2F8;
extern f32 D_801EB2FC;
extern f32 D_801EB300;
extern f32 D_801EB304;
extern f32 D_801EB308;
extern f32 D_801EB30C;
extern f32 D_801EB310;
extern f32 D_801EB314;
extern f32 D_801EB318;
extern f32 D_801EB31C;
extern f32 D_801EB320;
extern f32 D_801EB324;
extern f32 D_801EB328;
extern f32 D_801EB32C;
extern f32 D_801EB330;
extern f32 D_801EB334;
extern f32 D_801EB338;
extern f32 D_801EB33C;
extern f32 D_801EB340;
extern f32 D_801EB344;
extern f32 D_801EB348;
extern f32 D_801EB34C;
extern f32 D_801EB368;
extern f32 D_801EB36C;
extern f32 D_801EB370;
extern f32 D_801EB374;
extern f32 D_801EB378;
extern f32 D_801EB37C;
extern f32 D_801EB380;
extern f32 D_801EB384;
extern f32 D_801EB388;
extern f32 D_801EB38C;
extern f32 D_801EB390;
extern f32 D_801EB394;
extern f32 D_801EB398;
extern f32 D_801EB39C;
extern f32 D_801EB3A0;
extern f32 D_801EB3A4;
extern f32 D_801EB3A8;
extern f32 D_801EB3AC;
extern f32 D_801EB3B0;
extern f32 D_801EB3B4;
extern f32 D_801EB3B8;
extern f32 D_801EB3BC;
extern f32 D_801EB3C0;
extern f32 D_801EB3C4;
extern f32 D_801EB3C8;
extern f32 D_801EB3CC;
extern s16 D_80089354;
extern s32 D_801D8D60;
extern s32 D_801DABB8;
extern s32 D_801DABBC;
extern s32 D_801EA628;
extern s32 D_801EA62C;
extern s32 D_801EA630;
extern s32 D_801EA708;
extern s32 D_801EA70C;
extern s32 D_801EA73C;
extern s32 D_801EA740;
extern s32 D_801EA76C;
extern s32 D_801EA770;
extern s32 D_801EA7A0;
extern s32 D_801EA7A4;
extern s32 D_801EA824[];
extern s32 D_801EA990;
extern s32 D_801EAA54;
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern s32 func_801C1088(s32, s32, s32);
extern s32 func_801C1974();
extern s32 func_801C1B1C(void);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CD044();
extern s32 func_801CE274();
extern s32 func_801CED5C(s32 arg0);
extern s32 func_801CEDD4(void);
extern s32 func_801CEDE4(void);
extern s32 func_801D2034(s32 arg0);
extern s32 func_801D20AC();
extern s32 func_801D20BC(void);
extern s32 func_801D3620(void);
extern s32 func_801D3630(void);
extern s32 func_801D3708(void);
extern s32 func_801E2980();
extern s32 func_801E40BC();
extern s32 func_801E43D8();
extern s32 func_801E4870();
extern s32 func_8038CBF0(void);
extern s32 func_8038D850;
extern u32 func_801C1134(s32, s32);
extern u8 D_8017AE98[];
extern u8 D_801BBD54;
extern u8 D_801DAD14[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB184[];
extern u8 D_801DB300[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB320[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB360[];
extern u8 D_801DB374[];
extern u8 D_801DB378[];
extern u8 D_801E0A48[];
extern u8 D_801E9470[];
extern u8 D_801E95F8[];
extern u8 D_801E96A0[];
extern u8 D_801E9748[];
extern u8 D_801E9A8C[];
extern u8 D_801E9F6C[];
extern u8 D_801EA120[];
extern u8 D_801EA324[];
extern u8 D_801EA47C[];
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_801DAAF0[];
extern u8 func_801DAC30[];
extern u8 func_801DB190[];
extern u8 func_8038D830[];
extern u8 func_8038DD54[];
extern void *func_801BF6B0(s32);
extern void D_801CCF48(s32, s32);
extern void D_801CEE74(s32, s32, s32, s32, s32, s32, s32);
extern void D_801CEF04(s32);
extern void D_8038BA70(void);
extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void D_8038C158();
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern void func_80005670(s32 arg0, void *arg1);
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_801BF628(s32 arg0, s32 *arg1);
extern void func_801C1000(s32, s32);
extern void func_801C10D8(s32, s32);
extern void func_801C2420(s32, u8 *);
extern void func_801CC318(void);
extern void func_801CC458(s32, u8 *);
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4C0(s32, u8 *);
extern void func_801CC530(void);
extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);
extern void func_801CEDBC(s32 arg0);
extern void func_801CEDC8(s32 arg0);
extern void func_801D2094(s32 arg0);
extern void func_801D20A0(s32 arg0);
extern void func_801D367C(s32 arg0);
extern void func_801D3750(s32);
extern void func_801E292C(void);
extern void func_801E4BCC();
extern void func_801E51C0();
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BE98(f32 arg0);
extern void func_8038CB60(f32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1CBC.s")



s32 func_801E1D8C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEAFC3F) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1DD8.s")


s32 func_801E1E9C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0xFA3E7F) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}



s32 func_801E1EE8(s32 arg0, s32 arg1) {
    f32 a = D_801EB2F8;
    f32 b = D_801EB2FC;
    f32 c = D_801EB300;
    f32 d = D_801EB304;

    if (D_8038C17C(0.0f, 1.0f, a, b, D_801EB308, a, b, D_801EB30C, c, d, D_801EB310, c, d, D_801EB314, D_801EB318, D_801EB31C) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E1FAC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E1FBC(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E1FCC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB320);
    func_8038BD50(D_801EB324, D_801EB328, 0x42613333);
    D_8038BD88(D_801EB32C, 10.5f, 0x42CA6666);
    return 9;
}


struct func_801E2034_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E2034(s32 arg0, s32 arg1) {
    if ((((struct func_801E2034_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2088.s")



s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB330);
    func_8038BD50(18.5f, D_801EB334, 0x4348999A);
    D_8038BD88(D_801EB338, 25.0f, 0x43508000);
    return 0xC;
}

/* starting point: func_801E23C4 (file051), whose assembly is 95% the same as this function's */

typedef struct func_801E2144_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2144_Struct;


s32 func_801E2144(s32 arg0, s32 arg1) {
    func_801E2144_Struct *temp;

    temp = func_801BF6B0(7);
    if (temp->unkC < 0xA || func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E2198(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E21A8(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_801E21B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BE98(D_801EB33C);
        func_8038BD50(D_801EB340, D_801EB344, 0x433A0000);
        D_8038BD88(D_801EB348, D_801EB34C, 0x434F0000);
        return 0x10;
    }
    return 0xF;
}



typedef struct func_801E2234_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2234_Struct;

s32 func_801E2234(s32 arg0, s32 arg1) {
    if (((func_801E2234_Struct *)func_801BF6B0(4))->unk3C >= 0xA) {
        D_8038C158();
        return 0x11;
    }
    return 0x10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2280.s")


s32 func_801E2340(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E2350(s32 arg0, s32 arg1) {
    return 20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2360.s")




s32 func_801E23B4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB368);
    func_8038BD50(D_801EB36C, D_801EB370, 0x429C999A);
    D_8038BD88(D_801EB374, D_801EB378, 0x42C80000);
    return 0x16;
}



struct func_801E2418_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2418(s32 arg0, s32 arg1) {
    if ((((struct func_801E2418_Struct *)func_801BF6B0(7))->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 22;
    }
    return 23;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E246C.s")



s32 func_801E24C0(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB37C);
    func_8038BD50(-17.5f, D_801EB380, 0x424C0000);
    D_8038BD88(0.0f, 14.5f, 0x4235999A);
    return 0x19;
}


typedef struct func_801E2520_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2520_Struct;

s32 func_801E2520(s32 arg0, s32 arg1) {
    if (((func_801E2520_Struct *) func_801BF6B0(7))->unkC < 0x39 || func_801C1B1C() == 0) {
        return 0x19;
    }
    return 0x1A;
}


typedef struct func_801E2574_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2574_Struct;

s32 func_801E2574(s32 arg0, s32 arg1) {
    if ((((func_801E2574_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}




s32 func_801E25C8(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB384);
    func_8038BD50(D_801EB388, D_801EB38C, 0x429C999A);
    D_8038BD88(D_801EB390, D_801EB394, 0x42C80000);
    return 0x1C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E262C.s")



typedef struct func_801E2680_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2680_Struct;

s32 func_801E2680(s32 arg0, s32 arg1) {
    if (((func_801E2680_Struct *)func_801BF6B0(7))->unkC < 0x5E || func_801C1B1C() == 0) {
        return 0x1D;
    }
    return 0x1E;
}



s32 func_801E26D4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB398);
    func_8038BD50(0.0f, 13.0f, 0x42A0999A);
    D_8038BD88(0.0f, D_801EB39C, 0x42BE6666);
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2734.s")


s32 func_801E2788(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E2798(s32 arg0, s32 arg1) {
    return 33;
}



s32 func_801E27A8(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}



s32 func_801E27E4(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0, 0, 0);
    func_801CCEC8(0, 0, 0, -0x40);
    func_801CCE88(1, 0, 0, 0);
    func_801CCEC8(1, 0, 0x40, 0x20);
    func_801CCE50(0, 0, 0);
    return 2;
}


typedef struct func_801E2870_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2870_Struct;

s32 func_801E2870(s32 arg0, s32 arg1) {
    func_801E2870_Struct *temp;

    temp = (func_801E2870_Struct *)func_801BF6B0(0);
    if (temp->unkC > 0) {
        return 3;
    }
    return 2;
}


s32 func_801E28AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E28BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E28CC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E28DC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E28EC(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E28FC(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E290C(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E291C(s32 arg0, s32 arg1) {
    return 10;
}



void func_801E292C(void) {
    func_801CCE88(0, 0, 0, 0);
    func_801CCE88(1, 0, 0, 0);
    D_801EA628 = 0;
    D_801EA62C = 0;
    D_801EA630 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2980.s")


typedef struct func_801E32F0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E32F0_Struct;


s32 func_801E32F0(s32 arg0, s32 arg1) {
    if (((func_801E32F0_Struct *) func_801BF6B0(1))->unkC >= 2) {
        func_801E292C();
        return 1;
    }
    return 0;
}


typedef struct func_801E333C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E333C_Struct;


s32 func_801E333C(s32 arg0, s32 arg1) {
    if (((func_801E333C_Struct *)func_801BF6B0(0))->unkC > 0) {
        return 2;
    }
    func_801E2980();
    return 1;
}


s32 func_801E3384(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3394(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E33A4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E33B4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E33C4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E33D4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E33E4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E33F4(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E3404(s32 arg0, s32 arg1) {
    func_801C2420(0x466, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E3438_StructR {
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

struct func_801E3438_StructQ {
    u8 pad0[0x2C];
    struct func_801E3438_StructR *unk2C;
};

struct func_801E3438_StructP {
    struct func_801E3438_StructQ *unk0;
};

extern struct func_801E3438_StructP *func_8038D854;

s32 func_801E3438(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x466, 0);
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


s32 func_801E3530(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3540(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3550(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3560(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3570(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3580(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3590(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E35A0(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E35B0(s32 arg0, s32 arg1) {
    func_801C2420(0x468, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x469, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x465, D_8038DDC0);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E361C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E40BC.s")

extern struct func_801E4D04_StructOuter *D_8038D8D0;

typedef struct func_801E41F0_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_801E41F0_Inner;

typedef struct func_801E41F0_Struct {
    u8 pad[0x20];
    func_801E41F0_Inner *unk20;
} func_801E41F0_Struct;


s32 func_801E41F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        ((func_801E41F0_Struct *) D_8038D8D0)->unk20->unk22 = 0;
        D_801EA708 = 1;
        D_801EA70C = 0;
        return 3;
    }
    return 2;
}


s32 func_801E4254(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x4;
}


s32 func_801E427C(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x5;
}


s32 func_801E42A4(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x6;
}


s32 func_801E42CC(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x7;
}


s32 func_801E42F4(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x8;
}


s32 func_801E431C(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0x9;
}


s32 func_801E4344(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0xA;
}


s32 func_801E436C(s32 arg0, s32 arg1) {
    func_801E40BC();
    return 0xA;
}



s32 func_801E4394(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E43D8.s")



s32 func_801E46C8(s32 arg0, s32 arg1) {
    D_801EA73C = 1;
    D_801EA740 = 0;
    return 2;
}


s32 func_801E46EC(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x3;
}


s32 func_801E4714(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x4;
}


s32 func_801E473C(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x5;
}


s32 func_801E4764(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x6;
}


s32 func_801E478C(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x7;
}


s32 func_801E47B4(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x8;
}


s32 func_801E47DC(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x9;
}


s32 func_801E4804(s32 arg0, s32 arg1) {
    func_801E43D8();
    return 0x9;
}



s32 func_801E482C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4870.s")



s32 func_801E49D0(s32 arg0, s32 arg1) {
    D_801EA76C = 1;
    D_801EA770 = 0;
    return 2;
}


s32 func_801E49F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        *(*(u8 **)((u8 *)D_8038D8D0 + 8) + 0x22) = 1;
        return 3;
    }
    return 2;
}


s32 func_801E4A48(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x4;
}


s32 func_801E4A70(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x5;
}


s32 func_801E4A98(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x6;
}


s32 func_801E4AC0(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x7;
}


s32 func_801E4AE8(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x8;
}


s32 func_801E4B10(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0x9;
}


s32 func_801E4B38(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0xA;
}


s32 func_801E4B60(s32 arg0, s32 arg1) {
    func_801E4870();
    return 0xA;
}



s32 func_801E4B88(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4BCC.s")



s32 func_801E4CB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        D_801EA7A0 = 1;
        D_801EA7A4 = 0;
        return 2;
    }
    return 1;
}


struct func_801E4D04_StructInner {
    u8 pad[0x22];
    u8 flag;
};

struct func_801E4D04_StructOuter {
    u8 pad[0xC];
    struct func_801E4D04_StructInner *unkC;
};


s32 func_801E4D04(s32 arg0, s32 arg1) {
    D_8038D8D0->unkC->flag = 1;
    func_801E4BCC();
    return 3;
}


s32 func_801E4D40(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x4;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x5;
}


s32 func_801E4D90(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x6;
}


s32 func_801E4DB8(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x7;
}


s32 func_801E4DE0(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x8;
}


s32 func_801E4E08(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0x9;
}


s32 func_801E4E30(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0xA;
}


s32 func_801E4E58(s32 arg0, s32 arg1) {
    func_801E4BCC();
    return 0xA;
}



s32 func_801E4E80(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E4EC4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E4EC4_Inner;

typedef struct func_801E4EC4_Mid {
    u8 pad0[0x30];
    func_801E4EC4_Inner *unk30;
} func_801E4EC4_Mid;

typedef struct func_801E4EC4_Outer {
    u8 pad0[0x10];
    func_801E4EC4_Mid *unk10;
} func_801E4EC4_Outer;


s32 func_801E4EC4(s32 arg0, s32 arg1) {
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk4 = D_801EB3A0;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk8 = 18.0f;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unkC = D_801EB3A4;
    return 2;
}


s32 func_801E4F24(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4F34(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4F44(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4F54(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4F64(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4F74(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4F84(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4F94(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E4FA4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E4FE8_StructMid {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E4FE8_StructInner {
    u8 pad[0x30];
    struct func_801E4FE8_StructMid *unk30;
};

struct func_801E4FE8_StructOuter {
    u8 pad[0x14];
    struct func_801E4FE8_StructInner *unk14;
};


s32 func_801E4FE8(s32 arg0, s32 arg1) {
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unk4 = D_801EB3A8;
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unk8 = 18.0f;
    ((struct func_801E4FE8_StructOuter *) D_8038D8D0)->unk14->unk30->unkC = D_801EB3AC;
    return 2;
}


s32 func_801E5048(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5058(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5068(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5078(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5088(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5098(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E50A8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E50B8(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E50C8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E510C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E511C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E512C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E513C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E514C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E515C(s32 arg0, s32 arg1) {
    return 7;
}



typedef struct func_801E516C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E516C_Struct;

s32 func_801E516C(s32 arg0, s32 arg1) {
    if (((func_801E516C_Struct *)func_801BF6B0(7))->unkC < 0x5E || func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


void func_801E51C0(void) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30);
    *(s16 *)(temp_v0 + 0x12) = (s16) (*(s16 *)(temp_v0 + 0x12) + 0xE3);
}



struct func_801E51E0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x3B];
    u8 unk4B;
};

struct func_801E51E0_StructB {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0xD];
    struct func_801E51E0_StructC *unk30;
};

struct func_801E51E0_StructA {
    u8 pad0[0x18];
    struct func_801E51E0_StructB *unk18;
};

s32 func_801E51E0(s32 arg0, s32 arg1) {
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk4 = 0.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk8 = 0.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unkC = 100.0f;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk30->unk4B = 0;
    ((struct func_801E51E0_StructA *)D_8038D8D0)->unk18->unk22 = 1;
    D_801EA824[0] = 0;
    D_801EA824[1] = 0;
    D_801EA824[2] = 0x1F;
    D_801EA824[3] = 0x1F;
    func_801C1000(3, 6);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5290.s")


s32 func_801E53B8(s32 arg0, s32 arg1) {
    func_801E51C0();
    return 0xB;
}



s32 func_801E53E0(s32 arg0, s32 arg1) {
    func_801E51C0();
    if ((((func_801E2680_Struct *)func_801BF6B0(7))->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E5438(s32 arg0, s32 arg1) {
    func_801E51C0();
    return 0xD;
}


s32 func_801E5460(s32 arg0, s32 arg1) {
    func_801E51C0();
    return 0xE;
}



s32 func_801E5488(s32 arg0, s32 arg1) {
    func_801E51C0();
    if (func_801C0B8C(0) != 0) {
        func_801C1000(3, 6);
        return 0xF;
    }
    return 0xE;
}


typedef struct func_801E54D4_Z {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E54D4_Z;

typedef struct func_801E54D4_Y {
    u8 pad0[0x30];
    func_801E54D4_Z *unk30;
} func_801E54D4_Y;

typedef struct func_801E54D4_X {
    u8 pad0[0x18];
    func_801E54D4_Y *unk18;
} func_801E54D4_X;


s32 func_801E54D4(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 ratio;
    s32 max;
    u32 val;

    max = 0x6F;
    if (func_801C1088(3, 6, max) != 0) {
        func_801C10D8(3, 6);
        return 0x10;
    }
    val = func_801C1134(3, 6);
    ratio = (f32) val / (f32) max;
    temp_fv0 = (D_801EB3B0 * ratio) + 1.0f;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk18 = temp_fv0;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk1C = temp_fv0;
    ((func_801E54D4_X *) D_8038D8D0)->unk18->unk30->unk20 = temp_fv0;
    func_801E51C0();
    return 0xF;
}


s32 func_801E55AC(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E55BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5600(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5610(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5620(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5630(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5640(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5650(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5660(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5670(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E5680(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x148, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB374);
    func_801CC4C0(2, D_801DB378);
    func_801C2420(0x31, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(3, func_801DB190 + 8);
    func_801CC4C0(3, func_801DB190 + 0xC);
    func_801C2420(0x2F, D_801E0A48 + 0x60);
    func_801CC318();
    func_801CC458(4, D_801DB314);
    func_801CC4C0(4, D_801DB318);
    func_801CC458(5, D_801DB334);
    func_801CC4C0(5, D_801DB338);
    return 1;
}


struct func_801E57DC_StructRet {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E5908_StructA;
extern struct func_801E5908_StructA *D_801DAB14;

#define N(p) (*(s32 *)((p) + 8))
#define ROOT (*(s32 *)(func_801DAAF0 + 0x24))

s32 func_801E57DC(s32 arg0, s32 arg1) {
    if (((struct func_801E57DC_StructRet *)func_801BF6B0(3))->unkC < 2) {
        return 1;
    }
    func_80005670(ROOT, func_801DAC30 + 0x2C);
    func_801CEDBC(1);
    func_801CEDC8(1);
    func_80005670(N((s32)D_801DAB14), D_801DAD14);
    func_801D367C(0);
    func_80005670(N(N(ROOT)), D_801DB360);
    func_801D2094(0);
    func_801D20A0(0);
    func_80005670(N(N(N((s32)D_801DAB14))), D_801DB184);
    func_80005670(N(N(N(N(ROOT)))), D_801DB300);
    func_80005670(N(N(N(N(N((s32)D_801DAB14))))), D_801DB320);
    func_801CC530();
    func_8038D28C(8);
    return 2;
}


struct func_801E5908_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5908_StructC {
    u8 pad0[0x2C];
    struct func_801E5908_StructD *unk2C;
};

struct func_801E5908_StructB {
    u8 pad0[0x24];
    struct func_801E5908_StructC *unk24;
};

struct func_801E5908_StructA {
    u8 pad0[8];
    struct func_801E5908_StructB *unk8;
};


s32 func_801E5908(s32 arg0, s32 arg1) {
    struct func_801E5908_StructC *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -300.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x03480028, 0, 0x100, 10.0f);
        func_8038D28C(0x1FB);
        return 3;
    }
    return 2;
}


s32 func_801E59CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E59DC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E59EC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E59FC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5A0C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5A1C(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E5A2C(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0xC) = 45.0f;
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5AB0.s")



s32 func_801E5AF8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100026, 0, 0, 4.0f);
        return 0xD;
    }
    return 0xC;
}


s32 func_801E5B50(s32 arg0, s32 arg1) {
    return 14;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5B60.s")


s32 func_801E5BB4(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5BC4(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E5BD4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E5C18_Struct_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E5C18_Struct_Y;

typedef struct func_801E5C18_Struct_X {
    u8 pad0[8];
    struct func_801E5C18_Struct_X *unk8;
    u8 pad1[0x18];
    struct func_801E5C18_Struct_X *unk24;
    u8 pad2[4];
    func_801E5C18_Struct_Y *unk2C;
} func_801E5C18_Struct_X;

s32 func_801E5C18(s32 arg0, s32 arg1) {
    func_801E5C18_Struct_X *temp_v0;

    temp_v0 = ((func_801E5C18_Struct_X *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 33.0f;
        ((func_801E5C18_Struct_X *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 10.0f;
        ((func_801E5C18_Struct_X *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 210.0f;
        ((func_801E5C18_Struct_X *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x02A80064, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5CEC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5CFC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5D0C(s32 arg0, s32 arg1) {
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5D1C.s")


s32 func_801E5D70(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80068, 0, 0, 5.0f);
    return 7;
}


s32 func_801E5DB8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80068, 0, 0, 4.0f);
        return 8;
    }
    return 7;
}



s32 func_801E5E10(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        return 0x9;
    }
    return 0x8;
}


struct func_801E5E40_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E5E40(s32 arg0, s32 arg1) {
    if ((((struct func_801E5E40_Struct *) func_801BF6B0(7))->unkC < 0xA) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


typedef struct func_801E5E94_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5E94_Struct;

s32 func_801E5E94(s32 arg0, s32 arg1) {
    if ((((func_801E5E94_Struct *)func_801BF6B0(7))->unkC < 0xD) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}



s32 func_801E5EE8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80065, 0, 0, 2.0f);
    func_801CED5C(1);
    return 0xC;
}


s32 func_801E5F38(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80065, 0, 0, 4.0f);
        return 0xD;
    }
    return 0xC;
}



s32 func_801E5F90(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        return 14;
    }
    return 13;
}

/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */

typedef struct func_801E5FD0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5FD0_Struct;


s32 func_801E5FD0(s32 arg0, s32 arg1) {
    func_801E5FD0_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E6024(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E6034(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E6044(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A80067, 0, 0, 1.0f);
        return 0x12;
    }
    return 0x11;
}



s32 func_801E60A4(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80067, 0, 0, 2.0f);
        D_801CEE74(1, 1, 0x40200000, 0xFF, 0, 1, 1);
        func_801C1000(3, 0x2673);
        D_801CEF04(1);
        func_8038D28C(0x204);
        return 0x13;
    }
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6140.s")


s32 func_801E6290(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E62A0(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E62B0(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E62C0(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E62D0(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E62E0(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E62F0(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E6300(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E6310(s32 arg0, s32 arg1) {
    return 29;
}



s32 func_801E6320(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 5120.0f;
    return 0x1E;
}


s32 func_801E6354(s32 arg0, s32 arg1) {
    return 31;
}


s32 func_801E6364(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E6374(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E6384(s32 arg0, s32 arg1) {
    return 33;
}



s32 func_801E6394(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



typedef struct func_801E63D8_Struct_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E63D8_Struct_Vals;

typedef struct func_801E63D8_Struct_Node {
    u8 pad0[8];
    struct func_801E63D8_Struct_Node *unk8;
    u8 pad1[0x18];
    struct func_801E63D8_Struct_Node *unk24;
    u8 pad2[4];
    func_801E63D8_Struct_Vals *unk2C;
} func_801E63D8_Struct_Node;

s32 func_801E63D8(s32 arg0, s32 arg1) {
    func_801E63D8_Struct_Node *temp_v0;

    temp_v0 = ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801EB3B4;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 12.0f;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 5120.0f;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x03200053, 0, 0x100, 15.0f);
        func_801D3750(1);
        return 2;
    }
    return 1;
}


s32 func_801E64CC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E64DC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E64EC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E64FC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E650C(s32 arg0, s32 arg1) {
    return 7;
}


struct func_801E651C_Struct {
    u8 pad[0x24];
    s32 unk24;
};

s32 func_801E651C(s32 arg0, s32 arg1) {
    if (((struct func_801E651C_Struct *) func_801BF6B0(4))->unk24 >= 0x1D) {
        func_801D3688(1, 2, 0x40000000, 0, 0xFF, 1, 1);
        func_8038D28C(0x205);
        return 8;
    }
    return 7;
}


typedef struct func_801E6590_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E6590_Vals;

typedef struct func_801E6590_Node {
    u8 pad0[8];
    struct func_801E6590_Node *unk8;
    u8 pad1[0x18];
    struct func_801E6590_Node *unk24;
    u8 pad2[4];
    func_801E6590_Vals *unk2C;
} func_801E6590_Node;

extern s32 func_801D3688(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

s32 func_801E6590(s32 arg0, s32 arg1)
{
  unsigned short new_var;
  new_var = 9;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801EB3B8;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk8 = 10.0f;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unkC = D_801EB3BC;
  (*(((func_801E6590_Node **) func_801DAAF0) + new_var))->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
  if (func_801D3708() != 0)
  {
    func_801D3688(1, 2, 0x3F000000, 0xFE, 0xFF, 1, 0);
    return new_var;
 } return 8;
}



s32 func_801E6680(s32 arg0, s32 arg1) {
    if (func_801D3708() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E66B0(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E66C0(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E66D0(s32 arg0, s32 arg1) {
    return 13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E66E0.s")


s32 func_801E6728(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200054, 0, 0, 15.0f);
        return 0xF;
    }
    return 0xE;
}



s32 func_801E6780(s32 arg0, s32 arg1) {
    if (func_801D3630() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801E67B0(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 0x1B) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}


typedef struct func_801E6804_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6804_Struct;

s32 func_801E6804(s32 arg0, s32 arg1) {
    if ((((func_801E6804_Struct *)func_801BF6B0(7))->unkC < 0x1E) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801E6858(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E6868(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E6878(s32 arg0, s32 arg1) {
    return 21;
}

/* starting point: func_801E23A8 (file039), whose assembly is 95% the same as this function's */

typedef struct func_801E6888_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6888_Struct;


s32 func_801E6888(s32 arg0, s32 arg1) {
    func_801E6888_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x21 || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}


typedef struct func_801E68DC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E68DC_Struct;

s32 func_801E68DC(s32 arg0, s32 arg1) {
    if ((((func_801E68DC_Struct *) func_801BF6B0(7))->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6930.s")



s32 func_801E6978(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200055, 0, 0, 5.0f);
        D_801EA990 = 0;
        return 25;
    }
    return 24;
}


s32 func_801E69D8(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA990;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x19;
case0:
    if (func_801D3630() != 0) {
        func_801CC4D8(2, 0x03200056, 0, 0, 5.0f);
        D_801EA990 = 1;
    }
    goto block_9;
case1:
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200056, 0, 0x100, 20.0f);
        D_801EA990 = 2;
    }
    goto block_9;
case2:
    return 0x1A;
block_9:
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6B00.s")



s32 func_801E6B54(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200057, 0, 0, 5.0f);
    return 0x1D;
}



s32 func_801E6B9C(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200057, 0, 0, 6.0f);
        D_801EA990 = 0;
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E6BFC(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA990;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 0x1E;
case0:
    if (func_801D3630() != 0) {
        func_801CC4D8(2, 0x03200058, 0, 0, 5.0f);
        D_801EA990 = 1;
    }
    goto ret1E;
case1:
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200058, 0, 0x100, 20.0f);
        return 0x1F;
    }
ret1E:
    return 0x1E;
}



struct func_801E6CB8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E6CB8(s32 arg0, s32 arg1) {
    if ((((struct func_801E6CB8_Struct *)func_801BF6B0(7))->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 31;
    }
    return 32;
}


typedef struct func_801E6D0C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6D0C_Struct;

s32 func_801E6D0C(s32 arg0, s32 arg1) {
    if ((((func_801E6D0C_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801E6D60(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E6D70(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E6D80(s32 arg0, s32 arg1) {
    return 36;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D90.s")


struct func_801E6DE4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6DE4(s32 arg0, s32 arg1) {
    if ((((struct func_801E6DE4_Struct *) func_801BF6B0(7))->unkC < 0x48) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}


s32 func_801E6E38(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200059, 0, 0, 5.0f);
    return 0x27;
}



s32 func_801E6E80(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200059, 0, 0, 6.0f);
        D_801EA990 = 0;
        return 0x28;
    }
    return 0x27;
}


s32 func_801E6EE0(s32 arg0, s32 arg1) {
    if (D_801EA990 == 0) {
        goto case0;
    }
    if (D_801EA990 != 1) {
        goto done;
    }
    goto case1;
case0:
    if (func_801D3630() == 0) {
        goto done;
    }
    func_801CC4D8(2, 0x0320005A, 0, 0, 5.0f);
    D_801EA990 = 1;
    goto done;
case1:
    if (func_801D3620() != 0) {
        goto done;
    }
    func_801CC470(2, 0x0320005A, 0, 0x100, 6.0f);
    return 0x29;
done:
    return 0x28;
}


s32 func_801E6F9C(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}


s32 func_801E6FF0(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 0x50) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}



s32 func_801E7044(s32 arg0, s32 arg1) {
    func_801D3688(1, 2, 0x40200000, 0xFF, 0, 1, 1);
    func_8038D28C(0x206);
    return 0x2C;
}



s32 func_801E7098(s32 arg0, s32 arg1) {
    if (func_801D3708() != 0) {
        return 0x2D;
    }
    return 0x2C;
}


typedef struct func_801E70C8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E70C8_Struct;

s32 func_801E70C8(s32 arg0, s32 arg1) {
    if (((func_801E70C8_Struct *)func_801BF6B0(7))->unkC < 0x53 || func_801C1B1C() == 0) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801E711C(s32 arg0, s32 arg1) {
    return 47;
}


s32 func_801E712C(s32 arg0, s32 arg1) {
    return 47;
}



s32 func_801E713C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E7180_Struct_Y {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E7180_Struct_Y;

typedef struct func_801E7180_Struct_X {
    u8 pad0[8];
    struct func_801E7180_Struct_X *unk8;
    u8 pad1[0x18];
    struct func_801E7180_Struct_X *unk24;
    u8 pad2[4];
    func_801E7180_Struct_Y *unk2C;
} func_801E7180_Struct_X;

s32 func_801E7180(s32 arg0, s32 arg1) {
    func_801E7180_Struct_X *temp_v0;

    temp_v0 = ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 100.0f;
        ((func_801E7180_Struct_X *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x019100FD, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E7270(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7280(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E7290(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E72A0(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x019100FF, 0, 0, 10.0f);
    func_801D2034(1);
    return 6;
}



s32 func_801E72F0(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FF, 0, 0, 6.0f);
        D_801EAA54 = 0;
        return 7;
    }
    return 6;
}



s32 func_801E7350(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EAA54;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    return 7;

case0:
    if (func_801D20BC() != 0) {
        func_801CC4D8(3, 0x019100FD, 0, 0, 5.0f);
        D_801EAA54 = 1;
    }
    goto ret7;

case1:
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FD, 0, 0x100, 10.0f);
        func_801D2034(0);
        return 8;
    }

ret7:
    return 7;
}


struct func_801E7414_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E7414(s32 arg0, s32 arg1) {
    if ((((struct func_801E7414_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 9;
}


s32 func_801E7468(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E7478(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E7488(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E7498(s32 arg0, s32 arg1) {
    return 13;
}



typedef struct func_801E74A8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E74A8_Struct;

s32 func_801E74A8(s32 arg0, s32 arg1) {
    if ((((func_801E74A8_Struct *)func_801BF6B0(7))->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}



s32 func_801E74FC(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x019100FE, 0, 0, 5.0f);
    func_801D2034(1);
    return 0xF;
}


s32 func_801E754C(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FE, 0, 0, 10.0f);
        return 0x10;
    }
    return 0xF;
}



s32 func_801E75A4(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 17;
    }
    return 16;
}


typedef struct func_801E75E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E75E4_Struct;

s32 func_801E75E4(s32 arg0, s32 arg1) {
    if ((((func_801E75E4_Struct *)func_801BF6B0(7))->unkC < 0x5B) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}



typedef struct func_801E7638_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7638_Struct;

s32 func_801E7638(s32 arg0, s32 arg1) {
    if (((func_801E7638_Struct *)func_801BF6B0(7))->unkC < 0x5E || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E768C(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x03480006, 0, 0, 5.0f);
    func_801D2034(1);
    return 0x14;
}



s32 func_801E76DC(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x03480006, 0, 0, 3.0f);
        return 0x15;
    }
    return 0x14;
}



s32 func_801E7734(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        func_801D2034(0);
        return 22;
    }
    return 21;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7774.s")


s32 func_801E77C8(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E77D8(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E77E8(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x0348000C, 0, 0, 5.0f);
    return 0x1A;
}



s32 func_801E7830(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x0348000C, 0, 0, 3.0f);
        return 0x1B;
    }
    return 0x1A;
}



s32 func_801E7888(s32 arg0, s32 arg1) {
    if (func_801D20BC() != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E78B8(s32 arg0, s32 arg1) {
    return 28;
}



s32 func_801E78C8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



struct func_801E790C_Vals {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad1[2];
    s16 h12;
};

struct func_801E790C_Holder {
    u8 pad0[0x2C];
    struct func_801E790C_Vals *vals;
};

struct func_801E790C_Node {
    u8 pad0[8];
    struct func_801E790C_Node *next;
    u8 pad1[0x18];
    struct func_801E790C_Holder *holder;
};

s32 func_801E790C(s32 arg0, s32 arg1) {
    struct func_801E790C_Holder *holder;

    holder = (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder;
    if (holder != NULL) {
        holder->vals->f4 = D_801EB3C0;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->f8 = 10.0f;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->fC = D_801EB3C4;
        (*(struct func_801E790C_Node **)&D_801DAB14)->next->next->next->next->next->holder->vals->h12 = 0xF77;
        func_801CC470(4, 0x03200038, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E7A18(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7A28(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E7A38(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E7A48(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E7A58(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E7A68(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E7A78(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E7A88(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E7A98(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E7AA8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E7AEC_Vals {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad1[2];
    s16 h12;
};

struct func_801E7AEC_Holder {
    u8 pad0[0x2C];
    struct func_801E7AEC_Vals *vals;
};

struct func_801E7AEC_Node {
    u8 pad0[8];
    struct func_801E7AEC_Node *next;
    u8 pad1[0x18];
    struct func_801E7AEC_Holder *holder;
};


s32 func_801E7AEC(s32 arg0, s32 arg1) {
    struct func_801E7AEC_Holder *temp_v0;

    temp_v0 = ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder;
    if (temp_v0 != NULL) {
        temp_v0->vals->f4 = D_801EB3C8;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->f8 = 10.0f;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->fC = D_801EB3CC;
        ((struct func_801E7AEC_Node *)D_801DAB14)->next->next->next->next->next->next->holder->vals->h12 = 0x1071;
        func_801CC470(5, 0x03200038, 0, 0x110, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E7C08(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7C18(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E7C28(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E7C38(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E7C48(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E7C58(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E7C68(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E7C78(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E7C88(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E7C98(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x186A0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 9, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E7D20(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E7D50(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E7D60(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E7D70(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E7D80(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E7D90(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E7DA0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E7DB0(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E7DC0(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E7DD0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x30D400) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}



s32 func_801E7E60(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801E7E88(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E7E98(s32 arg0, s32 arg1) {
    return 1;
}



s32 func_801E7EA8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9470);
    return 2;
}



s32 func_801E7EDC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}


typedef struct func_801E7F0C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7F0C_Struct;

extern func_801E7F0C_Struct D_801EAB7C;

s32 func_801E7F0C(s32 arg0, s32 arg1) {
    func_801E7F0C_Struct sp18;

    sp18 = D_801EAB7C;
    func_801C18CC(2, (void *) &sp18);
    return 4;
}



s32 func_801E7F74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}


s32 func_801E7FA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801E7FCC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7FCC_Struct;

extern func_801E7FCC_Struct D_801EAB94;

s32 func_801E7FCC(s32 arg0, s32 arg1) {
    func_801E7FCC_Struct sp18;

    sp18 = D_801EAB94;
    func_801C18CC(2, (void *) &sp18);
    return 7;
}



s32 func_801E8034(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


s32 func_801E8064(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9;
}


typedef struct func_801E808C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E808C_Struct;

extern func_801E808C_Struct D_801EABAC;

s32 func_801E808C(s32 arg0, s32 arg1) {
    func_801E808C_Struct sp18;

    sp18 = D_801EABAC;
    func_801C18CC(2, (void *) &sp18);
    return 0xA;
}



s32 func_801E80F4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801E8124(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC;
}


typedef struct func_801E814C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E814C_Struct;

extern func_801E814C_Struct D_801EABC4;

s32 func_801E814C(s32 arg0, s32 arg1) {
    func_801E814C_Struct sp1C;

    sp1C = D_801EABC4;
    func_801C18CC(1, (void *) &sp1C);
    return 0xD;
}



s32 func_801E819C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xD;
    }
    return 0xE;
}



s32 func_801E81CC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E95F8);
    return 15;
}



s32 func_801E8200(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801E8230(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x11;
}


typedef struct func_801E8258_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8258_Struct;

extern func_801E8258_Struct D_801EABD0;

s32 func_801E8258(s32 arg0, s32 arg1) {
    func_801E8258_Struct sp1C;

    sp1C = D_801EABD0;
    func_801C18CC(1, (void *) &sp1C);
    return 0x12;
}



s32 func_801E82A8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E82D8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x14;
}


s32 func_801E8300(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E8310(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E8320(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E8330(s32 arg0, s32 arg1) {
    return 24;
}



s32 func_801E8340(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E96A0);
    return 25;
}



s32 func_801E8374(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1A;
    }
    return 0x19;
}


typedef struct func_801E83A4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E83A4_Struct;

extern func_801E83A4_Struct D_801EABDC;

s32 func_801E83A4(s32 arg0, s32 arg1) {
    func_801E83A4_Struct sp1C;

    sp1C = D_801EABDC;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}



s32 func_801E83F4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


s32 func_801E8424(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1D;
}


typedef struct func_801E844C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E844C_Struct;

extern func_801E844C_Struct D_801EABE8;

s32 func_801E844C(s32 arg0, s32 arg1) {
    func_801E844C_Struct sp1C;

    sp1C = D_801EABE8;
    func_801C18CC(1, &sp1C);
    return 0x1E;
}



s32 func_801E849C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E84CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x20;
}


typedef struct func_801E84F4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E84F4_Struct;

extern func_801E84F4_Struct D_801EABF4;

s32 func_801E84F4(s32 arg0, s32 arg1) {
    func_801E84F4_Struct sp1C;

    sp1C = D_801EABF4;
    func_801C18CC(1, &sp1C);
    return 0x21;
}



s32 func_801E8544(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801E8574(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x23;
}


typedef struct func_801E859C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E859C_Struct;

extern func_801E859C_Struct D_801EAC00;

s32 func_801E859C(s32 arg0, s32 arg1) {
    func_801E859C_Struct sp1C;

    sp1C = D_801EAC00;
    func_801C18CC(1, (void *) &sp1C);
    return 0x24;
}



s32 func_801E85EC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}



s32 func_801E861C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9748);
    return 38;
}



s32 func_801E8650(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x27;
    }
    return 0x26;
}


s32 func_801E8680(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x28;
}


typedef struct func_801E86A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E86A8_Struct;

extern func_801E86A8_Struct D_801EAC0C;

s32 func_801E86A8(s32 arg0, s32 arg1) {
    func_801E86A8_Struct sp1C;

    sp1C = D_801EAC0C;
    func_801C18CC(1, (void *) &sp1C);
    return 0x29;
}



s32 func_801E86F8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x29;
    }
    return 0x2A;
}


s32 func_801E8728(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2B;
}


typedef struct func_801E8750_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8750_Struct;

extern func_801E8750_Struct D_801EAC18;

s32 func_801E8750(s32 arg0, s32 arg1) {
    func_801E8750_Struct sp18;

    sp18 = D_801EAC18;
    func_801C18CC(2, &sp18);
    return 0x2C;
}



s32 func_801E87B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2C;
    }
    return 0x2D;
}



s32 func_801E87E8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9A8C);
    return 46;
}



s32 func_801E881C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2F;
    }
    return 0x2E;
}


s32 func_801E884C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x30;
}


typedef struct func_801E8874_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8874_Struct;

extern func_801E8874_Struct D_801EAC30;

s32 func_801E8874(s32 arg0, s32 arg1) {
    func_801E8874_Struct sp18;

    sp18 = D_801EAC30;
    func_801C18CC(2, &sp18);
    return 0x31;
}



s32 func_801E88DC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x31;
    }
    return 0x32;
}


s32 func_801E890C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}


typedef struct func_801E8934_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8934_Struct;

extern func_801E8934_Struct D_801EAC48;

s32 func_801E8934(s32 arg0, s32 arg1) {
    func_801E8934_Struct sp1C;

    sp1C = D_801EAC48;
    func_801C18CC(1, (void *) &sp1C);
    return 0x34;
}



s32 func_801E8984(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}



s32 func_801E89B4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9F6C);
    return 54;
}



s32 func_801E89E8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x37;
    }
    return 0x36;
}


s32 func_801E8A18(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x38;
}


typedef struct func_801E8A40_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8A40_Struct;

extern func_801E8A40_Struct D_801EAC54;

s32 func_801E8A40(s32 arg0, s32 arg1) {
    func_801E8A40_Struct sp1C;

    sp1C = D_801EAC54;
    func_801C18CC(1, &sp1C);
    return 0x39;
}



s32 func_801E8A90(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x39;
    }
    return 0x3A;
}


s32 func_801E8AC0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3B;
}


typedef struct func_801E8AE8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8AE8_Struct;

extern func_801E8AE8_Struct D_801EAC60;

s32 func_801E8AE8(s32 arg0, s32 arg1) {
    func_801E8AE8_Struct sp1C;

    sp1C = D_801EAC60;
    func_801C18CC(1, (void *) &sp1C);
    return 0x3C;
}



s32 func_801E8B38(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801E8B68(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3E;
}


typedef struct func_801E8B90_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8B90_Struct;

extern func_801E8B90_Struct D_801EAC6C;

s32 func_801E8B90(s32 arg0, s32 arg1) {
    func_801E8B90_Struct sp1C;

    sp1C = D_801EAC6C;
    func_801C18CC(1, (void *) &sp1C);
    return 0x3F;
}



s32 func_801E8BE0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3F;
    }
    return 0x40;
}


s32 func_801E8C10(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x41;
}


typedef struct func_801E8C38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8C38_Struct;

extern func_801E8C38_Struct D_801EAC78;

s32 func_801E8C38(s32 arg0, s32 arg1) {
    func_801E8C38_Struct sp18;

    sp18 = D_801EAC78;
    func_801C18CC(2, (void *) &sp18);
    return 0x42;
}



s32 func_801E8CA0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x42;
    }
    return 0x43;
}


s32 func_801E8CD0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x44;
}


typedef struct func_801E8CF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8CF8_Struct;

extern func_801E8CF8_Struct D_801EAC90;

s32 func_801E8CF8(s32 arg0, s32 arg1) {
    func_801E8CF8_Struct sp18;

    sp18 = D_801EAC90;
    func_801C18CC(2, &sp18);
    return 0x45;
}



s32 func_801E8D60(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x45;
    }
    return 0x46;
}


s32 func_801E8D90(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x47;
}


typedef struct func_801E8DB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8DB8_Struct;

extern func_801E8DB8_Struct D_801EACA8;

s32 func_801E8DB8(s32 arg0, s32 arg1) {
    func_801E8DB8_Struct sp1C;

    sp1C = D_801EACA8;
    func_801C18CC(1, &sp1C);
    return 0x48;
}



s32 func_801E8E08(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x48;
    }
    return 0x49;
}



s32 func_801E8E38(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA120);
    return 74;
}



s32 func_801E8E6C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4B;
    }
    return 0x4A;
}


s32 func_801E8E9C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4C;
}


typedef struct func_801E8EC4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8EC4_Struct;

extern func_801E8EC4_Struct D_801EACB4;

s32 func_801E8EC4(s32 arg0, s32 arg1) {
    func_801E8EC4_Struct sp1C;

    sp1C = D_801EACB4;
    func_801C18CC(1, (void *) &sp1C);
    return 0x4D;
}



s32 func_801E8F14(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4D;
    }
    return 0x4E;
}


s32 func_801E8F44(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4F;
}


typedef struct func_801E8F6C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8F6C_Struct;

extern func_801E8F6C_Struct D_801EACC0;

s32 func_801E8F6C(s32 arg0, s32 arg1) {
    func_801E8F6C_Struct sp1C;

    sp1C = D_801EACC0;
    func_801C18CC(1, (void *) &sp1C);
    return 0x50;
}



s32 func_801E8FBC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x50;
    }
    return 0x51;
}


s32 func_801E8FEC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x52;
}


typedef struct func_801E9014_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E9014_Struct;

extern func_801E9014_Struct D_801EACCC;

s32 func_801E9014(s32 arg0, s32 arg1) {
    func_801E9014_Struct sp1C;

    sp1C = D_801EACCC;
    func_801C18CC(1, (void *) &sp1C);
    return 0x53;
}



s32 func_801E9064(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x53;
    }
    return 0x54;
}


s32 func_801E9094(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x55;
}


typedef struct func_801E90BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E90BC_Struct;

extern func_801E90BC_Struct D_801EACD8;

s32 func_801E90BC(s32 arg0, s32 arg1) {
    func_801E90BC_Struct sp1C;

    sp1C = D_801EACD8;
    func_801C18CC(1, &sp1C);
    return 0x56;
}



s32 func_801E910C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x56;
    }
    return 0x57;
}



s32 func_801E913C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA324);
    return 88;
}



s32 func_801E9170(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x59;
    }
    return 0x58;
}


s32 func_801E91A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5A;
}


typedef struct func_801E91C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E91C8_Struct;

extern func_801E91C8_Struct D_801EACE4;

s32 func_801E91C8(s32 arg0, s32 arg1) {
    func_801E91C8_Struct sp1C;

    sp1C = D_801EACE4;
    func_801C18CC(1, (void *) &sp1C);
    return 0x5B;
}



s32 func_801E9218(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5B;
    }
    return 0x5C;
}


s32 func_801E9248(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5D;
}


typedef struct func_801E9270_Struct {
    s32 w[9];
} func_801E9270_Struct;

s32 func_801C18CC(s32 arg0, func_801E9270_Struct *arg1);
extern func_801E9270_Struct D_801EACF0;

s32 func_801E9270(s32 arg0, s32 arg1) {
    func_801E9270_Struct sp1C;

    sp1C = D_801EACF0;
    func_801C18CC(3, &sp1C);
    return 94;
}



s32 func_801E92D4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5E;
    }
    return 0x5F;
}



s32 func_801E9304(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA47C);
    return 96;
}



s32 func_801E9338(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x61;
    }
    return 0x60;
}


s32 func_801E9368(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x62;
}


typedef struct func_801E9390_Struct {
    s32 w[9];
} func_801E9390_Struct;

extern func_801E9390_Struct D_801EAD14;

s32 func_801E9390(s32 arg0, s32 arg1) {
    func_801E9390_Struct sp1C;

    sp1C = D_801EAD14;
    func_801C18CC(3, &sp1C);
    return 99;
}



s32 func_801E93F4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x63;
    }
    return 0x64;
}


s32 func_801E9424(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x65;
}


s32 func_801E944C(s32 arg0, s32 arg1) {
    return 102;
}


s32 func_801E945C(s32 arg0, s32 arg1) {
    return 102;
}

