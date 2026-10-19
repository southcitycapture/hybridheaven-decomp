#include "common.h"

extern void func_8038BED4(void);
extern s32 func_801C0B8C(u64);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E2DF0;
extern f32 D_801E2DF4;
extern f32 D_801E2DF8;
extern f32 D_801E2DFC;
extern f32 D_801E2E00;
extern f32 D_801E2E04;
extern f32 D_801E2E08;
extern f32 D_801E2E0C;
extern f32 D_801E2E10;

s32 func_801E1C28(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.5f, 78.7f, 113.2f, D_801E2DF0, D_801E2DF4, D_801E2DF8, 30.0f, D_801E2DFC, D_801E2E00, D_801E2E04, D_801E2E08, D_801E2E0C, D_801E2E10) != 0) {
        return 2;
    }
    return 1;
}


s32 func_801E1CEC(s32 arg0, s32 arg1) {
    return 3;
}


void func_8038BD50(f32, f32, s32);
void D_8038BD88(f32, f32, s32);
extern f32 D_801E2E14;
extern f32 D_801E2E18;
extern f32 D_801E2E1C;
extern f32 D_801E2E20;

s32 func_801E1CFC(s32 arg0, s32 arg1) {
    func_8038BD50(D_801E2E14, D_801E2E18, 0xBF19999A);
    D_8038BD88(D_801E2E1C, D_801E2E20, 0xC228CCCD);
    return 4;
}

struct func_801E27E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};
extern struct func_801E27E0_Struct *func_801BF6B0(s32);
s32 func_801C1B1C();

s32 func_801E1D58(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 4) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}


s32 func_801E1DAC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E1DBC(s32 arg0, s32 arg1) {
    return 6;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1DCC(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern s32 func_801CCE0C(s32);
extern s32 func_801CCE50(s32, s32, s32);
extern s32 func_801CCE88(s32, s32, s32, s32);
extern s32 func_801CCEC8(s32, s32, s32, s32);

s32 func_801E1E08(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xE5, 0x98, 0x70);
    func_801CCEC8(0, 0x22, -0xC, 0x1F);
    func_801CCE88(1, 0xB2, 0xFF, 0xFD);
    func_801CCEC8(1, -0x29, 0x3C, -0x10);
    func_801CCE50(0x35, 0x1D, 0xA);
    return 2;
}


s32 func_801E1E94(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E1EA4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E1EB4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E1EC4(s32 arg0, s32 arg1) {
    return 5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E1ED4(s32 arg0, s32 arg1) {
    func_801C2420(0x43A, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E1F08_StructR {
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

struct func_801E1F08_StructQ {
    u8 pad0[0x2C];
    struct func_801E1F08_StructR *unk2C;
};

struct func_801E1F08_StructP {
    struct func_801E1F08_StructQ *unk0;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern s32 func_8038D850;
extern struct func_801E1F08_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E1F08(s32 arg0, s32 arg1) {
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


s32 func_801E2000(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2010(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2020(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2030(s32 arg0, s32 arg1) {
    return 5;
}


extern u8 D_801E0A48[];
extern u8 func_801DAC30[];
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E2040(s32 arg0, s32 arg1) {
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

s32 func_801E210C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DAD14);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}


struct func_801E2190_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E2190_StructC {
    u8 pad0[0x2C];
    struct func_801E2190_Struct2C *unk2C;
};

struct func_801E2190_StructB {
    u8 pad0[0x24];
    struct func_801E2190_StructC *unk24;
};

struct func_801E2190_StructA {
    u8 pad0[8];
    struct func_801E2190_StructB *unk8;
};

extern struct func_801E2190_StructA *D_801DAB14;
void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E2190(s32 arg0, s32 arg1) {
    struct func_801E2190_StructC *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 11.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = -30.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1333;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}


s32 func_801E2258(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2268(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2278(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2288(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2298(s32 arg0, s32 arg1) {
    return 7;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E22A8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E22EC_Struct2C {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E22EC_Struct24 {
    u8 pad0[0x2C];
    struct func_801E22EC_Struct2C *unk2C;
};

struct func_801E22EC_Struct8 {
    u8 pad0[0x24];
    struct func_801E22EC_Struct24 *unk24;
};

struct func_801E22EC_StructA {
    u8 pad0[8];
    struct func_801E22EC_Struct8 *unk8;
};

struct func_801E22EC_StructB {
    u8 pad0[8];
    struct func_801E22EC_StructA *unk8;
};

s32 func_801E22EC(s32 arg0, s32 arg1) {
    struct func_801E22EC_Struct24 *temp_v0;

    temp_v0 = ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = -45.0f;
        ((struct func_801E22EC_StructB *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x02A8005C, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E23B8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E23C8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E23D8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E23E8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E23F8(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E2408(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E244C_Struct1 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E244C_Struct2 {
    u8 pad0[0x2C];
    struct func_801E244C_Struct1 *unk2C;
};

struct func_801E244C_Struct0 {
    u8 pad0[8];
    struct func_801E244C_Struct0 *unk8;
    u8 pad1[0x18];
    struct func_801E244C_Struct2 *unk24;
};


s32 func_801E244C(s32 arg0, s32 arg1) {
    struct func_801E244C_Struct2 *temp_v0;
    struct func_801E244C_Struct0 **ptr;

    ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
    temp_v0 = (*ptr)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -4.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unkC = -39.0f;
        ptr = (struct func_801E244C_Struct0 **)&D_801DAB14;
        (*ptr)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0xC71;
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E2534(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2544(s32 arg0, s32 arg1) {
    return 4;
}


void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 D_801E2C00;

s32 func_801E2554(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03200021, 0, 0, 30.0f);
    D_801E2C00 = 0;
    return 5;
}


extern s32 func_801D2C00();
extern s32 func_801D2C10();

s32 func_801E25A0(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801E2C00;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state != 2) {
        goto ret5;
    }
    goto case2;

case0:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x03200021, 0, 0, 9.0f);
        D_801E2C00 = 1;
    }
    goto ret5;

case1:
    if (func_801D2C10() != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 0, 15.0f);
        D_801E2C00 = 2;
    }
    goto ret5;

case2:
    if (func_801D2C00() == 0) {
        func_801CC470(2, 0x0320001A, 0, 0x100, 10.0f);
        return 6;
    }
    goto ret5;

ret5:
    return 5;
}


struct func_801E26A4_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E26A4(s32 arg0, s32 arg1) {
    if ((((struct func_801E26A4_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


s32 func_801E26F8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E2708(s32 arg0, s32 arg1) {
    return 8;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E2718(s32 arg0, s32 arg1) {
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



s32 func_801E27A0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E27D0(s32 arg0, s32 arg1) {
    return 3;
}




s32 func_801E27E0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC >= 6) {
        return 4;
    }
    return 3;
}

extern void func_8038D28C(s32 arg0);

s32 func_801E2820(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x4;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    func_8038D28C(10);
    return 0x5;
}



s32 func_801E2894(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    return 6;
}


s32 func_801E28BC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E28CC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E28DC(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E2A30[];

s32 func_801E28EC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E2A30);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E2920(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}


typedef struct func_801E2950_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E2950_Struct;

extern void func_801C18CC(s32, void *);
extern func_801E2950_Struct D_801E2C60;

s32 func_801E2950(s32 arg0, s32 arg1) {
    func_801E2950_Struct sp18;

    sp18 = D_801E2C60;
    func_801C18CC(2, &sp18);
    return 4;
}



s32 func_801E29B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E29E8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


s32 func_801E2A10(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2A20(s32 arg0, s32 arg1) {
    return 7;
}

