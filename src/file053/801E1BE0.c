#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
extern void func_8038D28C(s32 arg0);

extern void func_8038C53C(s32 arg0);
extern void func_8038BEC8(f32 arg0);
extern f32 D_801E98A0;
extern f32 D_801E98A4;
extern f32 D_801E98A8;
extern f32 D_801E98AC;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038C53C(1);
    func_8038BEC8(5.0f);
    func_8038BE98(D_801E98A0);
    func_8038BD50(D_801E98A4, D_801E98A8, 0x41B9999A);
    D_8038BD88(D_801E98AC, 1.0f, 0x421E0000);
    func_8038D28C(0x91);
    func_8038D28C(0x501);
    return 1;
}

extern f32 D_801E98B0;
extern f32 D_801E98B4;

s32 func_801E1C6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xBBAEE0) != 0) {
        func_8038BE98(D_801E98B0);
        func_8038BD50(-4.0f, D_801E98B4, (s32)0xC1BC0000);
        D_8038BD88(0.5f, 14.5f, (s32)0xC21F999A);
        return 2;
    }
    return 1;
}

extern u8 func_801DAAF0[];

struct func_801E1CEC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E1CEC_Struct2 {
    u8 pad0[0x2C];
    struct func_801E1CEC_Struct3 *unk2C;
};

struct func_801E1CEC_Struct1 {
    u8 pad0[0x24];
    struct func_801E1CEC_Struct2 *unk24;
};

struct func_801E1CEC_Struct0 {
    u8 pad0[8];
    struct func_801E1CEC_Struct1 *unk8;
};

extern f32 D_801E98B8;
extern f32 D_801E98BC;
extern f32 D_801E98C0;
extern f32 D_801E98C4;

s32 func_801E1CEC(s32 arg0, s32 arg1)
{
  struct func_801E1CEC_Struct0 **pp;
  int new_var;
  if (func_801C0B8C(0x011D56DE) != 0)
  {
    func_8038BE98(D_801E98B8);
    new_var = 0x24;
    func_8038BD50(D_801E98BC, D_801E98C0 * 1.0f, 0x42A73333);
    D_8038BD88(-0.5f, D_801E98C4, 0xC226CCCD);
    pp = (struct func_801E1CEC_Struct0 **) (func_801DAAF0 - (-new_var));
    (*pp)->unk8->unk24->unk2C->unk4 = 0.0f;
    (*pp)->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk24->unk2C->unkC = -39.5f;
    (*pp)->unk8->unk24->unk2C->unk12 = 0x1000;
    return 3;
  }
  return 2;
}

extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);
typedef struct func_801E442C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E442C_Struct;
extern struct func_801E5188_Struct0 *D_801DAB14;
struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};

extern f32 D_801E98C8;
extern f32 D_801E98CC;
extern f32 D_801E98D0;
extern f32 D_801E98D4;
extern f32 D_801E98D8;
extern f32 D_801E98DC;

struct func_801E1DD8_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1DD8_Struct3 {
    u8 pad0[0x2C];
    struct func_801E1DD8_Struct4 *unk2C;
};
struct func_801E1DD8_Struct2 {
    u8 pad0[0x24];
    struct func_801E1DD8_Struct3 *unk24;
};
struct func_801E1DD8_Struct1 {
    u8 pad0[8];
    struct func_801E1DD8_Struct2 *unk8;
};
struct func_801E1DD8_Struct0 {
    u8 pad0[8];
    struct func_801E1DD8_Struct1 *unk8;
};
struct func_801E1DD8_StructR {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E1DD8(s32 arg0, s32 arg1) {
    if (((struct func_801E1DD8_StructR *) func_801BF6B0(3))->unkC >= 4) {
        func_8038BE98(D_801E98C8);
        func_8038BD50(-18.0f, D_801E98CC, 0xC3E73333);
        D_8038BD88(D_801E98D0, D_801E98D4, 0xC3F0999A);
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk4 = D_801E98D8;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = D_801E98DC;
        ((struct func_801E1DD8_Struct0 *) D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        return 4;
    }
    return 3;
}

struct func_801E1EDC_S4 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801E1EDC_S3 { u8 pad0[0x2C]; struct func_801E1EDC_S4 *unk2C; };
struct func_801E1EDC_S2 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; u8 pad0c[0x18]; struct func_801E1EDC_S3 *unk24; };
struct func_801E1EDC_S1 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; };
struct func_801E1EDC_R { u8 pad[0x24]; s32 unk24; };
extern f32 D_801E98E0, D_801E98E4, D_801E98E8, D_801E98EC, D_801E98F0;
extern f32 D_801E98F4, D_801E98F8, D_801E98FC, D_801E9900;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
#define G ((struct func_801E1EDC_S1 *)D_801DAB14)

s32 func_801E1EDC(s32 arg0, s32 arg1) {
    if (((struct func_801E1EDC_R *)func_801BF6B0(4))->unk24 >= 0xA) {
        func_8038BE98(D_801E98E0);
        func_8038BD50(D_801E98E4, D_801E98E8, 0xC3D9B333);
        D_8038BD88(D_801E98EC, D_801E98F0, 0xC3E86666);
        G->unk8->unk24->unk2C->unk4 = D_801E98F4;
        G->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk24->unk2C->unkC = D_801E98F8;
        G->unk8->unk24->unk2C->unk12 = 0x1000;
        G->unk8->unk8->unk24->unk2C->unk4 = D_801E98FC;
        G->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk8->unk24->unk2C->unkC = D_801E9900;
        G->unk8->unk8->unk24->unk2C->unk12 = 0x1E38;
        func_801CC470(1, 0x02A80045, 0, 0, 3.0f);
        return 5;
    }
    return 4;
}


s32 func_801E2068(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2078(s32 arg0, s32 arg1) {
    return 7;
}

s32 func_801C1B1C(void);

typedef struct func_801E2088_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2088_Struct;

s32 func_801E2088(s32 arg0, s32 arg1) {
    if (((func_801E2088_Struct *)func_801BF6B0(7))->unkC < 0x17 || func_801C1B1C() == 0) {
        return 7;
    }
    return 8;
}


extern f32 D_801E9904;
extern f32 D_801E9908;
extern f32 D_801E990C;
extern f32 D_801E9910;
extern f32 D_801E9914;

s32 func_801E20DC(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E9904);
    func_8038BD50(D_801E9908, D_801E990C, 0xC3E20000);
    D_8038BD88(D_801E9910, D_801E9914, 0xC3E8F333);
    return 9;
}


typedef struct func_801E2140_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2140_Struct;

s32 func_801E2140(s32 arg0, s32 arg1) {
    if ((((func_801E2140_Struct *)func_801BF6B0(7))->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801E2194(s32 arg0, s32 arg1) {
    if ((*(s32 *) ((u8 *) func_801BF6B0(7) + 0xC) < 0x27) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


extern f32 D_801E9918;
extern f32 D_801E991C;
extern f32 D_801E9920;
extern f32 D_801E9924;
extern f32 D_801E9928;

s32 func_801E21E8(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E9918);
    func_8038BD50(D_801E991C, D_801E9920, 0xC3D9B333);
    D_8038BD88(D_801E9924, D_801E9928, 0xC3E86666);
    return 0xC;
}


s32 func_801E2250(s32 arg0, s32 arg1) {
    s32 *temp;

    temp = (s32 *) func_801BF6B0(7);
    if ((temp[3] < 0x2C) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E22A4(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E22B4(s32 arg0, s32 arg1) {
    return 14;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E22C4(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E2300(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE50(0x28, 0x28, 0x28);
    return 3;
}


s32 func_801E238C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E239C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E23AC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E23BC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E23CC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E23DC(s32 arg0, s32 arg1) {
    return 7;
}


struct func_801E23EC_Struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
    u8 pad14[8];
    s32 unk1C;
};

extern void func_801C2420(s32 a0, void *a1);
extern s32 func_801C2570(s32 a0, void *a1);
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern struct func_801E23EC_Struct D_8038DF70;
extern s32 D_8038DF98;
extern u8 D_8038DF94[];
struct func_801E23EC_Struct2 {
    u8 pad0[4];
    s32 unk4;
};
extern struct func_801E23EC_Struct2 func_8038DFA0;
extern s32 D_8038DFA4;

s32 func_801E23EC(s32 arg0, s32 arg1) {
    func_801C2420(0x470, D_8038DD90);
    D_8038BA70();
    D_8038DF70.unk4 = 0x200;
    if (func_801C2570(0x372, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0x1000;
    if (func_801C2570(0x471, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk1C = 0x4000;
    if (func_801C2570(0x473, (u8 *)&D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    D_8038DF98 = 0x4000;
    if (func_801C2570(0x474, D_8038DF94) != 0) {
        func_8038BA8C();
    }
    D_8038DFA4 = 0x1000;
    if (func_801C2570(0x475, &func_8038DFA0) != 0) {
        func_8038BA8C();
    }
    return 1;
}

struct func_801E2F88_Struct2 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801E2F88_Struct1 {
    u8 pad0[0x30];
    struct func_801E2F88_Struct2 *unk30;
};
struct func_801E2F88_Struct0 {
    u8 pad0[0x24];
    struct func_801E2F88_Struct1 *unk24;
};
extern struct func_801E2F88_Struct0 *D_8038D8D0;

typedef struct func_801E2500_Struct2 {
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
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2500_Struct2;

typedef struct func_801E2500_Struct1 {
    u8 pad0[0x30];
    func_801E2500_Struct2 *unk30;
} func_801E2500_Struct1;

typedef struct func_801E2500_Vec {
    s32 v[4];
} func_801E2500_Vec;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 D_8038D8CC;
extern u8 D_801D9768[];
extern u8 D_801D96C8[];
extern u8 D_801DA058[];
extern u8 D_801DA0B8[];
extern f32 D_801E992C;
extern f32 D_801E9930;
extern func_801E2500_Vec D_801E809C;
extern func_801E2500_Vec D_801E80AC;
extern func_801E2500_Vec D_801E80BC;
extern func_801E2500_Vec D_801E80CC;
extern func_801E2500_Vec D_801E80DC;
extern func_801E2500_Vec D_801E80EC;
extern func_801E2500_Vec D_801E80FC;
extern func_801E2500_Vec D_801E810C;

#define O(i) (((func_801E2500_Struct1 **)D_8038D8D0)[i]->unk30)

s32 func_801E2500(s32 arg0, s32 arg1) {
    func_801E2500_Vec sp98;
    func_801E2500_Vec sp88;
    func_801E2500_Vec sp78;
    func_801E2500_Vec sp68;
    func_801E2500_Vec sp58;
    func_801E2500_Vec sp48;
    func_801E2500_Vec sp38;
    func_801E2500_Vec sp28;
    s32 pad[2];

    sp98 = D_801E809C;
    sp88 = D_801E80AC;
    sp78 = D_801E80BC;
    sp68 = D_801E80CC;
    sp58 = D_801E80DC;
    sp48 = D_801E80EC;
    sp38 = D_801E80FC;
    sp28 = D_801E810C;
    func_80005E44(D_8038D8CC, &sp88);
    goto l1;
l1:
    func_80005E44(D_8038D8CC, &sp88);
    goto l2;
l2:
    func_80005E44(D_8038D8CC, &sp88);
    goto l3;
l3:
    func_80005E44(D_8038D8CC, &sp88);
    goto l4;
l4:
    func_80005E44(D_8038D8CC, &sp88);
    goto l5;
l5:
    func_80005E44(D_8038D8CC, &sp88);
    func_80005E44(D_8038D8CC, &sp58);
    func_80005E44(D_8038D8CC, &sp48);
    func_80005E44(D_8038D8CC, &sp48);
    func_80005E44(D_8038D8CC, &sp88);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x470, 6);
    func_8012C89C(D_8038D8CC, 1, 0x470, 7);
    func_8012C89C(D_8038D8CC, 2, 0x470, 6);
    func_8012C89C(D_8038D8CC, 3, 0x470, 7);
    func_8012C89C(D_8038D8CC, 4, 0x470, 0);
    func_8012C89C(D_8038D8CC, 5, 0x470, 2);
    func_8012C89C(D_8038D8CC, 6, 0x470, 3);
    func_8012C89C(D_8038D8CC, 7, 0x470, 4);
    func_8012C89C(D_8038D8CC, 8, 0x470, 8);
    func_8012C89C(D_8038D8CC, 9, 0x470, 5);
    O(0)->unk4 = 0.0f;
    O(0)->unk8 = 0.0f;
    O(0)->unkC = 125.0f;
    O(0)->unk12 = 0;
    O(0)->unk18 = 1.0f;
    O(0)->unk1C = 1.0f;
    O(0)->unk20 = 1.0f;
    O(1)->unk4 = 0.0f;
    O(1)->unk8 = 0.0f;
    O(1)->unkC = 125.0f;
    O(1)->unk12 = 0;
    O(1)->unk18 = 1.0f;
    O(1)->unk1C = 1.0f;
    O(1)->unk20 = 1.0f;
    O(2)->unk4 = 0.0f;
    O(2)->unk8 = 0.0f;
    O(2)->unkC = -125.0f;
    O(2)->unk12 = 0;
    O(2)->unk18 = 1.0f;
    O(2)->unk1C = 1.0f;
    O(2)->unk20 = 1.0f;
    O(3)->unk4 = 0.0f;
    O(3)->unk8 = 0.0f;
    O(3)->unkC = -125.0f;
    O(3)->unk12 = 0;
    O(3)->unk18 = 1.0f;
    O(3)->unk1C = 1.0f;
    O(3)->unk20 = 1.0f;
    O(4)->unk4 = 0.0f;
    O(4)->unk8 = 0.0f;
    O(4)->unkC = 0.0f;
    O(4)->unk12 = 0;
    O(4)->unk18 = 1.0f;
    O(4)->unk1C = 1.0f;
    O(4)->unk20 = 1.0f;
    O(5)->unk4 = 0.0f;
    O(5)->unk8 = 0.0f;
    O(5)->unkC = 0.0f;
    O(5)->unk12 = 0;
    O(5)->unk30 = (s32)D_801D9768 | 0x40000000;
    O(5)->unk24 = 0x100;
    O(5)->unk48 = 0xFF;
    O(5)->unk49 = 0xFF;
    O(5)->unk4A = 0xFF;
    O(5)->unk4B = 0xFF;
    O(5)->unk18 = 1.0f;
    O(5)->unk1C = 1.0f;
    O(5)->unk20 = 1.0f;
    O(6)->unk4 = 0.0f;
    O(6)->unk8 = 0.0f;
    O(6)->unkC = 0.0f;
    O(6)->unk12 = 0;
    O(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    O(6)->unk24 = 0x100;
    O(6)->unk48 = 0xFF;
    O(6)->unk49 = 0xFF;
    O(6)->unk4A = 0xFF;
    O(6)->unk4B = 0xFF;
    O(7)->unk4 = 0.0f;
    O(7)->unk8 = 0.0f;
    O(7)->unkC = 0.0f;
    O(7)->unk12 = 0;
    O(7)->unk30 = (s32)D_801DA058 | 0x40000000;
    O(7)->unk24 = 0x100;
    O(7)->unk48 = 0xFF;
    O(7)->unk49 = 0xFF;
    O(7)->unk4A = 0xFF;
    O(7)->unk4B = 0x7F;
    O(8)->unk4 = 0.0f;
    O(8)->unk8 = 0.0f;
    O(8)->unkC = D_801E992C;
    O(8)->unk12 = 0;
    O(8)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    O(8)->unk24 = 0x300;
    O(8)->unk48 = 0;
    O(8)->unk49 = 0;
    O(8)->unk4A = 0;
    O(8)->unk4B = 0;
    O(8)->unk4C = 0;
    O(8)->unk4D = 0;
    O(8)->unk4E = 0;
    O(8)->unk4F = 0;
    O(9)->unk4 = 0.0f;
    O(9)->unk8 = 0.0f;
    O(9)->unkC = D_801E9930;
    O(9)->unk12 = 0;
    O(9)->unk18 = 1.0f;
    O(9)->unk1C = 1.0f;
    O(9)->unk20 = 1.0f;
    return 2;
}


struct func_801E2DE0_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E2DE0(s32 arg0, s32 arg1) {
    if (((struct func_801E2DE0_Struct *) func_801BF6B0(4))->unkC >= 0xD) {
        func_801C1000(3, 0);
        func_8038D28C(0x202);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E2E38.s")


s32 func_801E2EF8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2F08(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2F18(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2F28(s32 arg0, s32 arg1) {
    return 8;
}


struct func_801E2F38_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E2F38(s32 arg0, s32 arg1) {
    if (((struct func_801E2F38_Struct *) func_801BF6B0(4))->unkC >= 0x2B) {
        func_801C1000(3, 0);
        return 9;
    }
    return 8;
}


s32 func_801C1088(s32 a0, s32 a1, s32 a2);
void func_801C10D8(s32 a0, s32 a1);
s32 func_801C1134(s32 a0, s32 a1);





s32 func_801E2F88(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 var_ft0;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 0);
    var_ft1 = (f32) temp_v0;
    var_ft0 = var_ft1 / 10.0f;
    D_8038D8D0->unk24->unk30->unk4 = 20.0f * var_ft0;
    if (func_801C1088(3, 0, 0xA) != 0) {
        func_801C10D8(3, 0);
        return 0xA;
    }
    return 9;
}


s32 func_801E3028(s32 arg0, s32 arg1) {
    return 10;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3038(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 func_801C1000(s32 arg0, s32 arg1);

s32 func_801E307C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        func_801C1000(3, 1);
        return 2;
    }
    return 1;
}


struct func_801E30C8_Struct2 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E30C8_Struct1 {
    u8 pad0[0x30];
    struct func_801E30C8_Struct2 *unk30;
};
struct func_801E30C8_Struct0 {
    u8 pad0[0x20];
    struct func_801E30C8_Struct1 *unk20;
};

s32 func_801E30C8(s32 arg0, s32 arg1) {
    f32 q;

    q = (f32)(u32)func_801C1134(3, 1) / 240.0f;
    ((struct func_801E30C8_Struct0 *)D_8038D8D0)->unk20->unk30->unk4B = (u32)(255.0f * q);
    if (func_801C1088(3, 1, 0xF0) != 0) {
        func_801C10D8(3, 1);
        return 3;
    }
    return 2;
}


s32 func_801E31EC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E31FC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E320C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E321C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E322C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_801C84E0(void);

s32 func_801E3270(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13D61F) != 0) {
        func_801C84E0();
        return 2;
    }
    return 1;
}


extern void func_801C851C(f32 f0, f32 f1, s32 a2, s32 a3);

s32 func_801E32BC(s32 arg0, s32 arg1) {
    func_801C851C(0.0f, 0.0f, 0x422C6666, 0x41200000);
    return 3;
}


s32 func_801E32F8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3308(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3318(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3328(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3338(s32 arg0, s32 arg1) {
    return 7;
}



s32 func_801E3348(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E8184;

s32 func_801E338C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        D_801E8184 = 0;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E33D4.s")


s32 func_801E359C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E35AC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E35BC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E35CC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E35DC(s32 arg0, s32 arg1) {
    return 7;
}



s32 func_801E35EC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E9238;
extern s32 D_801E923C;

void func_801E3630(void) {
    D_801E9238 = 0;
    D_801E923C = 1;
}



struct func_801E3648_Struct1 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E3648_Struct2 {
    u8 pad0[0x30];
    struct func_801E3648_Struct1 *unk30;
};
struct func_801E3648_Struct3 {
    u8 pad0[0x18];
    struct func_801E3648_Struct2 *unk18;
};

s32 func_801E3648() {
    f32 t;
    u8 v;
    t = (f32) D_801E9238 / 30.0f;
    if (D_801E923C != 0) {
        v = (u8)(255.0f * t);
    } else {
        v = (u8)(-255.0f * t + 255.0f);
    }
    ((struct func_801E3648_Struct3 *)D_8038D8D0)->unk18->unk30->unk4B = v;
    D_801E9238 += 1;
    if (D_801E9238 >= 31) {
        if (D_801E923C != 0) {
            D_801E923C = 0;
        } else {
            D_801E923C = 1;
        }
        D_801E9238 = 0;
    }
}


extern s32 D_801E9240;
extern s32 D_801E9244;

void func_801E3814(void) {
    D_801E9240 = 0;
    D_801E9244 = 1;
}



struct func_801E382C_Struct1 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E382C_Struct2 {
    u8 pad0[0x30];
    struct func_801E382C_Struct1 *unk30;
};
struct func_801E382C_Struct3 {
    u8 pad0[0x1C];
    struct func_801E382C_Struct2 *unk18;
};

s32 func_801E382C() {
    f32 t;
    u8 v;
    t = (f32) D_801E9240 / 30.0f;
    if (D_801E9244 != 0) {
        v = (u8)(255.0f * t);
    } else {
        v = (u8)(-255.0f * t + 255.0f);
    }
    ((struct func_801E382C_Struct3 *)D_8038D8D0)->unk18->unk30->unk4B = v;
    D_801E9240 += 1;
    if (D_801E9240 >= 31) {
        if (D_801E9244 != 0) {
            D_801E9244 = 0;
        } else {
            D_801E9244 = 1;
        }
        D_801E9240 = 0;
    }
}


extern s32 D_801E9248;
extern s32 D_801E924C;

void func_801E39F8(void) {
    D_801E9248 = 0;
    D_801E924C = 1;
}


extern f32 D_801E9250;
extern f32 D_801E9254;
extern f32 D_801E9258;

s32 func_801E3A10(void)
{
  f32 t;
  f32 r;
  f32 g;
  f32 b;
  s32 ir;
  s32 ig;
  u32 ib;
  t = ((f32) D_801E9248) / 30.0f;
  if (D_801E924C != 0)
  {
    r = (u8) ((215.0f * t) + 40.0f);
    g = (u8) (((-40.0f) * t) + 40.0f);
    b = g;
  }
  else
  {
    r = (u8) (((-215.0f) * t) + 255.0f);
    g = (u8) (40 * t);
    b = g;
  }
  ir = (u8) r;
  if (ir)
  {
  }
  ig = (u8) g;
  if (ig)
  {
  }
 do { ib = (u8) b; if (ib) { } D_801E9250 = r; D_801E9254 = g; D_801E9258 = b; func_801CCE50(ir, ig, ib); } while (0);
  if ((++D_801E9248) >= 31)
  {
    if (D_801E924C != 0)
    {
      D_801E924C = 0;
    }
    else
    {
      D_801E924C = 1;
    }
    D_801E9248 = 0;
  }
}


struct func_801E3F3C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3F3C(s32 arg0, s32 arg1) {
    if (((struct func_801E3F3C_Struct *)func_801BF6B0(1))->unkC < 2) {
        return 1;
    }
    func_801E3630();
    func_801E3814();
    func_801E39F8();
    return 2;
}



s32 func_801E3F98(s32 arg0, s32 arg1) {
    func_801E3648();
    func_801E382C();
    func_801E3A10();
    return 3;
}



s32 func_801E3FD0(s32 arg0, s32 arg1) {
    func_801E3648();
    func_801E382C();
    func_801E3A10();
    return 4;
}



s32 func_801E4008(s32 arg0, s32 arg1) {
    func_801E3648();
    func_801E382C();
    func_801E3A10();
    return 5;
}



s32 func_801E4040(s32 arg0, s32 arg1) {
    func_801E3648();
    func_801E382C();
    func_801E3A10();
    return 5;
}


extern u8 D_801E0A48[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DBB74[];
extern u8 D_801DBB78[];
extern u8 func_801DAC30[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E4078(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    func_801C2420(0x11E, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DBB74);
    func_801CC4C0(2, D_801DBB78);
    return 1;
}


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern u8 D_801DBB60[];
extern u8 D_801DAD14[];

s32 func_801E4144(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DBB60);
    func_801CC530();
    return 2;
}



struct func_801E41C8_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E41C8_StructC {
    u8 pad0[0x2C];
    struct func_801E41C8_StructD *unk2C;
};

struct func_801E41C8_StructB {
    u8 pad0[0x24];
    struct func_801E41C8_StructC *unk24;
};

struct func_801E41C8_StructA {
    u8 pad0[8];
    struct func_801E41C8_StructB *unk8;
};

s32 func_801E41C8(s32 arg0, s32 arg1) {
    struct func_801E41C8_StructC *temp_v0;

    temp_v0 = ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unkC = -39.5f;
        ((struct func_801E41C8_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348007F, 0, 0x100, 5.0f);
        return 3;
    }
    return 2;
}


s32 func_801E4284(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4294(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDA3360) != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 50.0f);
        return 5;
    }
    return 4;
}

s32 func_801CE274(void);

s32 func_801E42F8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 6;
    }
    return 5;
}


s32 func_801E4350(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01173C5F) != 0) {
        func_801CC4D8(0, 0x019100CD, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}



s32 func_801E43C4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}


s32 func_801E441C(s32 arg0, s32 arg1) {
    return 10;
}




s32 func_801E442C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 3) {
        func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}


s32 func_801E4490(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        return 0xC;
    }
    return 0xB;
}


extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern s32 func_801CE2D0(s32, s32);
extern f32 D_801E994C;

struct func_801E44F4_Struct3 {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
};
struct func_801E44F4_Struct2 {
    u8 pad[0x2C];
    struct func_801E44F4_Struct3 *p;
};
struct func_801E44F4_Struct1 {
    u8 pad[0x24];
    struct func_801E44F4_Struct2 *p;
};
struct func_801E44F4_Struct0 {
    u8 pad[8];
    struct func_801E44F4_Struct1 *p;
};

s32 func_801E44F4(s32 arg0, s32 arg1) {
    struct func_801E44F4_Struct3 *pos;
    f32 fraction;

    fraction = (f32)(u32)func_801C1134(4, 0) / 80.0f;
    (*(struct func_801E44F4_Struct0 **)(func_801DAAF0 + 0x24))->p->p->p->z =
        -73.5f * fraction + -39.5f;
    if (func_801C1088(4, 0, 0x50) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0xD;
    }
    if (func_801CE2D0(0x0168003F, 0xA) || func_801CE2D0(0x0168003F, 0x16)) {
        pos = (*(struct func_801E44F4_Struct0 **)(func_801DAAF0 + 0x24))->p->p->p;
        func_8038D33C(pos->x, pos->y, *(s32 *)&pos->z, 0x677, D_801E994C, 1.0f);
    }
    return 0xC;
}


typedef struct func_801E4630_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E4630_StructC;

typedef struct func_801E4630_StructB {
    u8 pad0[0x2C];
    func_801E4630_StructC *unk2C;
} func_801E4630_StructB;

typedef struct func_801E4630_StructA {
    u8 pad0[0x24];
    func_801E4630_StructB *unk24;
} func_801E4630_StructA;

typedef struct func_801E4630_StructV {
    u8 pad0[8];
    func_801E4630_StructA *unk8;
} func_801E4630_StructV;

extern f32 D_801E9950;

s32 func_801E4630(s32 arg0, s32 arg1) {
    func_801E4630_StructC *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = (*(func_801E4630_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x677, D_801E9950, 1.0f);
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 14;
    }
    return 13;
}


s32 func_801E46C8(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
    return 0xF;
}


s32 func_801E4710(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        return 0x10;
    }
    return 0xF;
}


extern f32 D_801E9954;

struct func_801E4774_Struct3 {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_801E4774_Struct2 {
    u8 pad0[0x2C];
    struct func_801E4774_Struct3 *unk2C;
};
struct func_801E4774_Struct1 {
    u8 pad0[0x24];
    struct func_801E4774_Struct2 *unk24;
};
struct func_801E4774_Struct0 {
    u8 pad0[0x8];
    struct func_801E4774_Struct1 *unk8;
};

s32 func_801E4774(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_ft0;
    s32 temp_v0;

    temp_v0 = func_801C1134(4, 0);
    var_ft1 = (f32) (u32) temp_v0;
    temp_ft0 = var_ft1 / 30.0f;
    ((struct func_801E4774_Struct0 *) *(u8 **) (func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unkC = (D_801E9954 * temp_ft0) + -113.0f;
    if (func_801C1088(4, 0, 0x1E) != 0) {
        func_801C10D8(4, 0);
        return 0x11;
    }
    return 0x10;
}


s32 func_801E4824(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 5) {
        func_801CC4D8(0, 0x0168003F, 0, 0, 5.0f);
        return 0x12;
    }
    return 0x11;
}


s32 func_801E4888(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0168003F, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        return 0x13;
    }
    return 0x12;
}


struct func_801E48EC_StructC { u8 pad[4]; f32 f4; f32 f8; f32 fC; };
struct func_801E48EC_StructB { u8 pad[0x2C]; struct func_801E48EC_StructC *p2C; };
struct func_801E48EC_StructA { u8 pad[0x24]; struct func_801E48EC_StructB *p24; };
struct func_801E48EC_StructR { u8 pad[8]; struct func_801E48EC_StructA *p8; };

extern f32 D_801E9958;
extern f32 D_801E995C;
extern f32 D_801E9960;

s32 func_801E48EC(s32 arg0, s32 arg1) {
    u32 t;
    f32 q;
    t = func_801C1134(4, 0);
    q = (f32)t / 15.0f;
    (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C->fC = D_801E9958 * q + D_801E995C;
    if (func_801C1088(4, 0, 0xF) != 0) {
        func_801C10D8(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x14;
    }
    if (func_801CE2D0(0x0168003F, 0xA) != 0 || func_801CE2D0(0x0168003F, 0x16) != 0) {
        struct func_801E48EC_StructC *c = (*(struct func_801E48EC_StructR **)&D_801DAB14)->p8->p24->p2C;
        func_8038D33C(c->f4, c->f8, *(s32 *)&c->fC, 0x67B, D_801E9960, 1.0f);
    }
    return 0x13;
}


s32 func_801E4A28(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 21;
    }
    return 20;
}


s32 func_801E4A80(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E4A90(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E4AA0(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E4AB0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 9) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E4B04(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x01B8003C, 0, 0, 5.0f);
    return 0x1A;
}


s32 func_801E4B4C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8003C, 0, 0, 4.0f);
        return 0x1B;
    }
    return 26;
}


extern s32 func_801CE284();

s32 func_801E4BA4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E4BFC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 29;
    }
    return 28;
}


typedef struct func_801E4C54_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E4C54_Struct;


s32 func_801E4C54(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801E4CA8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 30;
    }
    return 0x1F;
}


s32 func_801E4CFC(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E4D0C(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E4D1C(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E4D2C(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E4D3C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E4D90(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E4DA0(s32 arg0, s32 arg1) {
    return 38;
}



s32 func_801E4DB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 0x27;
    }
    return 0x26;
}



s32 func_801E4E10(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C1000(4, 0);
        return 0x28;
    }
    return 39;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E4E74.s")


extern f32 D_801E9974;

struct func_801E4FE0_Struct3 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};

struct func_801E4FE0_Struct2 {
    u8 pad0[0x2C];
    struct func_801E4FE0_Struct3 *unk2C;
};

struct func_801E4FE0_Struct1 {
    u8 pad0[0x24];
    struct func_801E4FE0_Struct2 *unk24;
};

struct func_801E4FE0_Struct0 {
    u8 pad0[0x8];
    struct func_801E4FE0_Struct1 *unk8;
};

s32 func_801E4FE0(s32 arg0, s32 arg1)
{
  struct func_801E4FE0_Struct3 *temp_v0;
  struct func_801E4FE0_Struct0 **new_var;
  struct func_801E4FE0_Struct0 *temp_t6;
  if (func_801CE274() == 0)
  {
    new_var = (struct func_801E4FE0_Struct0 **) (func_801DAAF0 + 0x24);
    ;
    ;
    func_8038D33C((*new_var)->unk8->unk24->unk2C->unk4, (*new_var)->unk8->unk24->unk2C->unk8, (*new_var)->unk8->unk24->unk2C->unkC, 0x67B, D_801E9974, 1.0f);
    func_801CC470(0, 0x04100045, 0, 0, 3.0f);
    return 0x2A;
  }
  return 0x29;
}



s32 func_801E5078(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_8038D28C(0x213);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 0x2B;
    }
    return 0x2A;
}


s32 func_801E50DC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 44;
    }
    return 43;
}


s32 func_801E5134(s32 arg0, s32 arg1) {
    return 44;
}



s32 func_801E5144(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



extern f32 D_801E9978;
extern f32 D_801E997C;

s32 func_801E5188(s32 arg0, s32 arg1) {
    struct func_801E5188_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E9978;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801E997C;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x04100022, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5260(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5270(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 4) {
        return 4;
    }
    return 3;
}


s32 func_801E52B0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x04100022, 0, 0, 5.0f);
    return 7;
}


s32 func_801CEDE4();

s32 func_801E52F8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x0410002F, 0, 0, 30.0f);
        return 6;
    }
    return 5;
}


extern s32 func_801CEDD4();

s32 func_801E5350(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x0410002F, 0, 0, 5.0f);
        return 7;
    }
    return 6;
}


s32 func_801E53A8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80057, 0, 0, 15.0f);
        return 8;
    }
    return 7;
}


s32 func_801E5400(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80057, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}


s32 func_801CEE30(s32 a0, s32 a1);
extern f32 D_801E9980;

s32 func_801E5458(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_801CEDE4() != 0) {
        return 0xA;
    }
    if ((func_801CEE30(0x02A80057, 0x12) != 0) || (func_801CEE30(0x02A80057, 0x33) != 0) || (func_801CEE30(0x02A80057, 0x3F) != 0) || (func_801CEE30(0x02A80057, 0x48) != 0)) {
        temp_v0 = *(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
        func_8038D33C(*(f32 *)(temp_v0 + 0x4), *(f32 *)(temp_v0 + 0x8), *(s32 *)(temp_v0 + 0xC), 0x67A, D_801E9980, 1.0f);
    }
    return 9;
}


s32 func_801E5520(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5530(s32 arg0, s32 arg1) {
    return 12;
}

void func_801CED5C(s32 arg0);


s32 func_801E5540(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0xD;
}



s32 func_801E5590(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004E, 0, 0, 5.0f);
        return 0xE;
    }
    return 0xD;
}



s32 func_801E55E8(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0xF;
    }
    return 0xE;
}


s32 func_801E564C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x10;
    }
    return 15;
}



s32 func_801E56A4(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 17;
}


s32 func_801E56F8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 17;
    }
    return 0x12;
}


s32 func_801E574C(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004D, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x13;
}


s32 func_801E579C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004D, 0, 0, 5.0f);
        return 20;
    }
    return 19;
}



s32 func_801E57F4(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x15;
    }
    return 0x14;
}


s32 func_801E5858(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x16;
    }
    return 21;
}


s32 func_801E58B0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801E5904(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}



s32 func_801E5958(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004F, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x19;
}


s32 func_801E59A8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004F, 0, 0, 5.5f);
        return 0x1A;
    }
    return 0x19;
}



s32 func_801E5A00(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E5A64(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x1C;
    }
    return 27;
}


s32 func_801E5ABC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801E5B10(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801E5B64(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A80046, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x1F;
}


s32 func_801E5BB4(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80046, 0, 0, 3.0f);
        return 0x20;
    }
    return 0x1F;
}



s32 func_801E5C0C(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x21;
    }
    return 0x20;
}


s32 func_801E5C70(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x22;
    }
    return 33;
}


s32 func_801E5CC8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 34;
    }
    return 35;
}


s32 func_801E5D1C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}



s32 func_801E5D70(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004F, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x25;
}


s32 func_801E5DC0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004F, 0, 0, 5.5f);
        return 0x26;
    }
    return 0x25;
}



s32 func_801E5E18(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x27;
    }
    return 0x26;
}


s32 func_801E5E7C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x28;
    }
    return 39;
}


s32 func_801E5ED4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E5F28(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}



s32 func_801E5F7C(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004E, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x2B;
}



s32 func_801E5FCC(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004E, 0, 0, 5.0f);
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801E6024(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x2D;
    }
    return 0x2C;
}


s32 func_801E607C(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CED5C(0);
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801E60E0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x34 || func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}


s32 func_801E6134(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 47;
    }
    return 48;
}


s32 func_801E6188(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x02A8004D, 0, 0, 5.0f);
    func_801CED5C(1);
    return 0x31;
}


s32 func_801E61D8(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A8004D, 0, 0, 5.0f);
        return 50;
    }
    return 49;
}



s32 func_801E6230(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CED5C(0);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x33;
    }
    return 0x32;
}


s32 func_801E6294(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x34;
    }
    return 51;
}


typedef struct func_801E62EC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E62EC_Struct;


s32 func_801E62EC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3C) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E6340(s32 arg0, s32 arg1) {
    return 54;
}


s32 func_801E6350(s32 arg0, s32 arg1) {
    return 55;
}


s32 func_801E6360(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x02A80050, 0, 0, 5.0f);
        return 0x38;
    }
    return 0x37;
}



s32 func_801E63C0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80050, 0, 0, 3.0f);
        func_801C1000(4, 1);
        return 0x39;
    }
    return 0x38;
}


s32 func_801E6424(s32 arg0, s32 arg1) {
    void *temp_v1;

    if ((func_801CEDE4() != 0) || (func_801C1088(4, 1, 0x1E) != 0)) {
        func_801C10D8(4, 1);
        func_801CC4D8(1, 0x02A80045, 0, 0, 5.0f);
        return 0x3A;
    }
    func_801C1134(4, 1);
    temp_v1 = *(void **) ((u8 *) *(void **) ((u8 *) *(void **) ((u8 *) *(void **) ((u8 *) *(void **) (func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C);
    *(s16 *) ((u8 *) temp_v1 + 0x12) = *(s16 *) ((u8 *) temp_v1 + 0x12) - 0x44;
    return 0x39;
}


s32 func_801E64CC(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80045, 0, 0x100, 10.0f);
        return 0x3B;
    }
    return 58;
}


s32 func_801E6524(s32 arg0, s32 arg1) {
    return 59;
}


extern s32 D_801E9434;

typedef struct func_801E6534_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad_10[0x1F8 - 0x10];
} func_801E6534_Struct;

s32 func_801E6534(s32 arg0, s32 arg1) {
    func_801E6534_Struct sp18;

    func_801BF628(4, &sp18);
    if (sp18.unkC >= 2) {
        D_801E9434 = 1;
        return 1;
    }
    return 0;
}


struct func_801E6584_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 s12;
};
struct func_801E6584_StructA {
    u8 pad0[8];
    struct func_801E6584_StructA *c8;
    u8 padC[0x18];
    struct func_801E6584_StructA *c24;
    u8 pad28[4];
    struct func_801E6584_StructB *c2C;
};
extern f32 D_801E9984;
extern f32 D_801E9988;

#define ROOT (*(struct func_801E6584_StructA **)&D_801DAB14)
#define CH (ROOT->c8->c8->c8->c24)

s32 func_801E6584(s32 arg0, s32 arg1) {
    if (CH != NULL) {
        CH->c2C->f4 = 0.0f;
        CH->c2C->f8 = 0.0f;
        if (D_801E9434 != 0) {
            CH->c2C->fC = D_801E9984;
            CH->c2C->s12 = 0x1000;
            func_801CC470(2, 0x01900017, 0, 1, 1.0f);
            return 2;
        }
        CH->c2C->fC = D_801E9988;
        CH->c2C->s12 = 0x1000;
        func_801CC470(2, 0x01900018, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E66E4(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E66F4_Struct {
    u8 pad0[0x4];
    f32 unk4;
    struct func_801E66F4_Struct *unk8;
    u8 pad_c[0x18];
    struct func_801E66F4_Struct *unk24;
    u8 pad_28[0x4];
    struct func_801E66F4_Struct *unk2C;
};

extern void func_801C78C0(void);
extern f32 D_801E9990;

void func_801E66F4(void) {
    func_801C78C0();
    D_801E9990 = ((struct func_801E66F4_Struct *)func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk4;
}


extern f32 func_801C78F8();

void func_801E6738(void) {
    f32 v;

    v = func_801C78F8() - 0.5f;
    ((struct func_801E66F4_Struct *) func_801DAAF0)->unk24->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E9990 + v;
}



s32 func_801E6790(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x13D61F) != 0) {
        func_801C1000(4, 2);
        func_8038D28C(0x212);
        return 4;
    }
    return 3;
}

extern void func_801D8ADC(s32 a0);
s32 func_801E67E4(s32 arg0, s32 arg1) {
    f32 q;
    q = (f32)(u32)func_801C1134(4, 2) / 90.0f;
    func_801D8ADC((u32)(-128.0f * q + 255.0f) & 0xFF);
    if (func_801C1088(4, 2, 0x5A) != 0) {
        func_801C10D8(4, 2);
        func_801E66F4();
        func_801C1000(4, 2);
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file053/801E1BE0/func_801E691C.s")


s32 func_801E6AA0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E6AB0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6AC0(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E6AD0(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E6AE0(s32 arg0, s32 arg1) {
    return 10;
}

s32 func_801C0B8C(u64 time);

s32 func_801E6AF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E0) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801E6B2C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E6B3C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E6B4C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6B5C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6B6C(s32 arg0, s32 arg1) {
    return 6;
}


extern void D_8038C97C(s32 a0, s32 a1, s32 a2, s32 a3, s32 s4, s32 s5, s32 s6);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E6B7C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x325A9F) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}


extern u8 D_801BBD54;

s32 func_801E6BF8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E6C20(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6C30(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E6C40(s32 arg0, s32 arg1) {
    return 2;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E79C0[];

s32 func_801E6C50(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E79C0);
    return 3;
}


s32 func_8038CBF0(void);

s32 func_801E6C84(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4;
    }
    return 0x3;
}

extern s32 func_801C1974();

s32 func_801E6CB4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5;
}

extern void func_801C18CC(s32 arg0, void *arg1);

typedef struct func_801E6CDC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6CDC_Struct;

extern func_801E6CDC_Struct D_801E94A0;

s32 func_801E6CDC(s32 arg0, s32 arg1) {
    func_801E6CDC_Struct sp1C;

    sp1C = D_801E94A0;
    func_801C18CC(1, &sp1C);
    return 0x6;
}



s32 func_801E6D2C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801E6D5C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x8;
}


typedef struct func_801E6D84_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6D84_Struct;

extern func_801E6D84_Struct D_801E94AC;

s32 func_801E6D84(s32 arg0, s32 arg1) {
    func_801E6D84_Struct sp1C;

    sp1C = D_801E94AC;
    func_801C18CC(1, &sp1C);
    return 0x9;
}



s32 func_801E6DD4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9;
    }
    return 0xA;
}


s32 func_801E6E04(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}


typedef struct func_801E6E2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E6E2C_Struct;

extern func_801E6E2C_Struct D_801E94B8;

s32 func_801E6E2C(s32 arg0, s32 arg1) {
    func_801E6E2C_Struct sp1C;

    sp1C = D_801E94B8;
    func_801C18CC(1, &sp1C);
    return 0xC;
}



s32 func_801E6E7C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E6EAC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


typedef struct func_801E6ED4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E6ED4_Struct;

extern func_801E6ED4_Struct D_801E94C4;

s32 func_801E6ED4(s32 arg0, s32 arg1) {
    func_801E6ED4_Struct sp18;

    sp18 = D_801E94C4;
    func_801C18CC(2, &sp18);
    return 0xF;
}



s32 func_801E6F3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xF;
    }
    return 0x10;
}


extern u8 D_801E7A10[];

s32 func_801E6F6C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7A10);
    return 17;
}



s32 func_801E6FA0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801E6FD0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x13;
}



typedef struct func_801E6FF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E6FF8_Struct;

extern func_801E6FF8_Struct D_801E94DC;

s32 func_801E6FF8(s32 arg0, s32 arg1) {
    func_801E6FF8_Struct sp18;

    sp18 = D_801E94DC;
    func_801C18CC(2, &sp18);
    return 0x14;
}



s32 func_801E7060(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E7090(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x16;
}


typedef struct func_801E70B8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E70B8_Struct;

extern func_801E70B8_Struct D_801E94F4;

s32 func_801E70B8(s32 arg0, s32 arg1) {
    func_801E70B8_Struct sp18;

    sp18 = D_801E94F4;
    func_801C18CC(2, &sp18);
    return 0x17;
}



s32 func_801E7120(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x17;
    }
    return 0x18;
}


extern u8 D_801E7AFC[];

s32 func_801E7150(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7AFC);
    return 25;
}



s32 func_801E7184(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1A;
    }
    return 0x19;
}


s32 func_801E71B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1B;
}


typedef struct func_801E71DC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E71DC_Struct;

extern func_801E71DC_Struct D_801E950C;

s32 func_801E71DC(s32 arg0, s32 arg1) {
    func_801E71DC_Struct sp18;

    sp18 = D_801E950C;
    func_801C18CC(2, &sp18);
    return 0x1C;
}



s32 func_801E7244(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801E7274(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1E;
}


typedef struct func_801E729C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E729C_Struct;

extern func_801E729C_Struct D_801E9524;

s32 func_801E729C(s32 arg0, s32 arg1) {
    func_801E729C_Struct sp1C;

    sp1C = D_801E9524;
    func_801C18CC(1, &sp1C);
    return 0x1F;
}



s32 func_801E72EC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1F;
    }
    return 0x20;
}


extern u8 D_801E7C18[];

s32 func_801E731C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7C18);
    return 33;
}



s32 func_801E7350(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x22;
    }
    return 0x21;
}


s32 func_801E7380(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x23;
}


typedef struct func_801E73A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E73A8_Struct;

extern func_801E73A8_Struct D_801E9530;

s32 func_801E73A8(s32 arg0, s32 arg1) {
    func_801E73A8_Struct sp1C;

    sp1C = D_801E9530;
    func_801C18CC(1, &sp1C);
    return 0x24;
}



s32 func_801E73F8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801E7428(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x26;
}


typedef struct func_801E7450_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7450_Struct;

extern func_801E7450_Struct D_801E953C;

s32 func_801E7450(s32 arg0, s32 arg1) {
    func_801E7450_Struct sp18;

    sp18 = D_801E953C;
    func_801C18CC(2, &sp18);
    return 0x27;
}



s32 func_801E74B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x27;
    }
    return 0x28;
}


extern u8 D_801E7D8C[];

s32 func_801E74E8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7D8C);
    return 41;
}



s32 func_801E751C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2A;
    }
    return 0x29;
}


s32 func_801E754C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2B;
}


typedef struct func_801E7574_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7574_Struct;

extern func_801E7574_Struct D_801E9554;

s32 func_801E7574(s32 arg0, s32 arg1) {
    func_801E7574_Struct sp18;

    sp18 = D_801E9554;
    func_801C18CC(2, &sp18);
    return 0x2C;
}



s32 func_801E75DC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801E760C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2E;
}


typedef struct func_801E7634_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7634_Struct;

extern func_801E7634_Struct D_801E956C;

s32 func_801E7634(s32 arg0, s32 arg1) {
    func_801E7634_Struct sp1C;

    sp1C = D_801E956C;
    func_801C18CC(1, &sp1C);
    return 0x2F;
}



s32 func_801E7684(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2F;
    }
    return 0x30;
}


extern u8 D_801E7E34[];

s32 func_801E76B4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7E34);
    return 49;
}



s32 func_801E76E8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x32;
    }
    return 0x31;
}


s32 func_801E7718(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}


typedef struct func_801E7740_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7740_Struct;

extern func_801E7740_Struct D_801E9578;

s32 func_801E7740(s32 arg0, s32 arg1) {
    func_801E7740_Struct sp1C;

    sp1C = D_801E9578;
    func_801C18CC(1, &sp1C);
    return 0x34;
}



s32 func_801E7790(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E77C0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x36;
}


typedef struct func_801E77E8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E77E8_Struct;

extern func_801E77E8_Struct D_801E9584;

s32 func_801E77E8(s32 arg0, s32 arg1) {
    func_801E77E8_Struct sp1C;

    sp1C = D_801E9584;
    func_801C18CC(1, &sp1C);
    return 0x37;
}



s32 func_801E7838(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}


extern u8 D_801E7ED4[];

s32 func_801E7868(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E7ED4);
    return 57;
}



s32 func_801E789C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3A;
    }
    return 0x39;
}


s32 func_801E78CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3B;
}


typedef struct func_801E78F4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E78F4_Struct;

extern func_801E78F4_Struct D_801E9590;

s32 func_801E78F4(s32 arg0, s32 arg1) {
    func_801E78F4_Struct sp1C;

    sp1C = D_801E9590;
    func_801C18CC(1, &sp1C);
    return 0x3C;
}



s32 func_801E7944(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801E7974(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3E;
}


s32 func_801E799C(s32 arg0, s32 arg1) {
    return 63;
}


s32 func_801E79AC(s32 arg0, s32 arg1) {
    return 63;
}

