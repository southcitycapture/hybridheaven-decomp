#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1CBC.s")


extern void D_8038C158();

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


extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1FAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E1FBC.s")

extern void D_8038BD88(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BD50(f32 arg0, f32 arg1, s32 arg2);
extern void func_8038BE98(f32 arg0);

extern f32 D_801EB320;
extern f32 D_801EB324;
extern f32 D_801EB328;
extern f32 D_801EB32C;

s32 func_801E1FCC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB320);
    func_8038BD50(D_801EB324, D_801EB328, 0x42613333);
    D_8038BD88(D_801EB32C, 10.5f, 0x42CA6666);
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2088.s")


extern f32 D_801EB330;
extern f32 D_801EB334;
extern f32 D_801EB338;

s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB330);
    func_8038BD50(18.5f, D_801EB334, 0x4348999A);
    D_8038BD88(D_801EB338, 25.0f, 0x43508000);
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2198.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E21A8.s")


extern f32 D_801EB33C;
extern f32 D_801EB340;
extern f32 D_801EB344;
extern f32 D_801EB348;
extern f32 D_801EB34C;

s32 func_801E21B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x16E360) != 0) {
        func_8038BE98(D_801EB33C);
        func_8038BD50(D_801EB340, D_801EB344, 0x433A0000);
        D_8038BD88(D_801EB348, D_801EB34C, 0x434F0000);
        return 0x10;
    }
    return 0xF;
}


extern void *func_801BF6B0(s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2350.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2360.s")


extern f32 D_801EB368;
extern f32 D_801EB36C;
extern f32 D_801EB370;
extern f32 D_801EB374;
extern f32 D_801EB378;


s32 func_801E23B4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB368);
    func_8038BD50(D_801EB36C, D_801EB370, 0x429C999A);
    D_8038BD88(D_801EB374, D_801EB378, 0x42C80000);
    return 0x16;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E246C.s")


extern f32 D_801EB37C;
extern f32 D_801EB380;

s32 func_801E24C0(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB37C);
    func_8038BD50(-17.5f, D_801EB380, 0x424C0000);
    D_8038BD88(0.0f, 14.5f, 0x4235999A);
    return 0x19;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2520.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E25C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E262C.s")


extern s32 func_801C1B1C(void);

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


extern f32 D_801EB398;
extern f32 D_801EB39C;

s32 func_801E26D4(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EB398);
    func_8038BD50(0.0f, 13.0f, 0x42A0999A);
    D_8038BD88(0.0f, D_801EB39C, 0x42BE6666);
    return 0x1F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E2798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E27A8.s")


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E28FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E290C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E291C.s")


extern s32 D_801EA628;
extern s32 D_801EA62C;
extern s32 D_801EA630;

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

extern s32 func_801E2980();

s32 func_801E333C(s32 arg0, s32 arg1) {
    if (((func_801E333C_Struct *)func_801BF6B0(0))->unkC > 0) {
        return 2;
    }
    func_801E2980();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E33F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3404.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3540.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E3590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E35A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E35B0.s")

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

extern s32 D_801EA708;
extern s32 D_801EA70C;

s32 func_801E41F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        ((func_801E41F0_Struct *) D_8038D8D0)->unk20->unk22 = 0;
        D_801EA708 = 1;
        D_801EA70C = 0;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E427C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E42A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E42CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E42F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E431C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E436C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4394.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E43D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E46C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E46EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4714.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E473C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E478C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E47B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E47DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E482C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E49D0.s")


s32 func_801E49F4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xADF33F) != 0) {
        *(*(u8 **)((u8 *)D_8038D8D0 + 8) + 0x22) = 1;
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4B88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4BCC.s")


extern s32 D_801EA7A0;
extern s32 D_801EA7A4;

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

extern void func_801E4BCC();

s32 func_801E4D04(s32 arg0, s32 arg1) {
    D_8038D8D0->unkC->flag = 1;
    func_801E4BCC();
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4D40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4D68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4E58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4E80.s")


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

extern f32 D_801EB3A0;
extern f32 D_801EB3A4;

s32 func_801E4EC4(s32 arg0, s32 arg1) {
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk4 = D_801EB3A0;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unk8 = 18.0f;
    ((func_801E4EC4_Outer *) D_8038D8D0)->unk10->unk30->unkC = D_801EB3A4;
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4F94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4FA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E4FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5058.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5068.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5088.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E50A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E50B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E50C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E510C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E511C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E512C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E513C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E514C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E515C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E516C.s")


void func_801E51C0(void) {
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30);
    *(s16 *)(temp_v0 + 0x12) = (s16) (*(s16 *)(temp_v0 + 0x12) + 0xE3);
}

extern void func_801C1000(s32, s32);

extern s32 D_801EA824[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E53B8.s")



s32 func_801E53E0(s32 arg0, s32 arg1) {
    func_801E51C0();
    if ((((func_801E2680_Struct *)func_801BF6B0(7))->unkC < 0x63) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5438.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5460.s")



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

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern u32 func_801C1134(s32, s32);
extern f32 D_801EB3B0;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E55AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E55BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5600.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5620.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5640.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E57DC.s")


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

extern void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_8038D28C(s32 arg0);
extern struct func_801E5908_StructA *D_801DAB14;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E59CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E59DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E59EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E59FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5A0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5A1C.s")


extern u8 func_801DAAF0[];

s32 func_801E5A2C(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0xC) = 45.0f;
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5AB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5B50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5BD4.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5CEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5D1C.s")

s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5E94.s")


s32 func_801CED5C(s32 arg0);

s32 func_801E5EE8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80065, 0, 0, 2.0f);
    func_801CED5C(1);
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E5FD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6024.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6034.s")


s32 func_801E6044(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A80067, 0, 0, 1.0f);
        return 0x12;
    }
    return 0x11;
}


extern s32 func_801CEDD4(void);
extern void D_801CEE74(s32, s32, s32, s32, s32, s32, s32);
extern void D_801CEF04(s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E62F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6310.s")



s32 func_801E6320(s32 arg0, s32 arg1) {
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 5120.0f;
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6354.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6394.s")


extern f32 D_801EB3B4;
extern void func_801D3750(s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E64CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E64DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E64EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E64FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E650C.s")


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

extern f32 D_801EB3B8;
extern f32 D_801EB3BC;
extern s32 func_801D3708(void);
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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E66B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E66C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E66D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E66E0.s")


s32 func_801E6728(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200054, 0, 0, 15.0f);
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E67B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6858.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E68DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6978.s")

extern s32 D_801EA990;
extern s32 func_801D3620(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6DE4.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E6FF0.s")



s32 func_801E7044(s32 arg0, s32 arg1) {
    func_801D3688(1, 2, 0x40200000, 0xFF, 0, 1, 1);
    func_8038D28C(0x206);
    return 0x2C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7098.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E70C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E711C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E712C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E713C.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7290.s")


s32 func_801E72A0(s32 arg0, s32 arg1) {
    func_801CC4D8(3, 0x019100FF, 0, 0, 10.0f);
    func_801D2034(1);
    return 6;
}


extern s32 D_801EAA54;

s32 func_801E72F0(s32 arg0, s32 arg1) {
    if (func_801D20AC() == 0) {
        func_801CC470(3, 0x019100FF, 0, 0, 6.0f);
        D_801EAA54 = 0;
        return 7;
    }
    return 6;
}


extern s32 func_801D20AC();
extern s32 func_801D20BC();

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7498.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E74A8.s")


extern s32 func_801D2034(s32);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E75A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E75E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7638.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E77C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E77D8.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E78B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E78C8.s")


extern f32 D_801EB3C0;
extern f32 D_801EB3C4;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7A98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7AA8.s")


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

extern f32 D_801EB3C8;
extern f32 D_801EB3CC;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7C98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7DA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7DB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7DC0.s")


extern u8 D_801BBD54;
extern s16 D_80089354;
extern s32 D_801D8D60;
extern void D_8038C97C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7E60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7EA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7EDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7FA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E7FCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8034.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E808C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E80F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E814C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E819C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E81CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E82A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E82D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8310.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E83A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E83F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E844C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E849C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E84CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E84F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8544.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E859C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E85EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E861C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E86A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E86F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8728.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E87B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E87E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E881C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E884C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E88DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E890C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E89B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E89E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8A40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8A90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8AC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8AE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8B68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8B90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8C10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8D60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8D90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8DB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8E08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8E6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8E9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8EC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8F14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8F44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8F6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E8FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E90BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E910C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E913C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E91A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E91C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9218.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9270.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E92D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E93F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E9424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E944C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file046/801E1BE0/func_801E945C.s")

