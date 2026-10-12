#include "common.h"


extern void func_8038BEC8(f32);
extern void D_8038C158(void);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E1C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E1D18.s")

extern s32 func_801C0B8C(u64);

s32 func_801E1DF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        D_8038C158();
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E1E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E1F28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E1FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E20E4.s")


s32 func_801E21B8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E21C8(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E21F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E22B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2308.s")


extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);
extern f32 D_801E70C8;
extern f32 D_801E70CC;
extern f32 D_801E70D0;
extern f32 D_801E70D4;

s32 func_801E235C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801E70C8);
    func_8038BD50(D_801E70CC, 5.5f, 0x41D33333);
    D_8038BD88(D_801E70D0, D_801E70D4, 0x422E0000);
    return 0xE;
}


s32 func_801E23C0(s32 arg0, s32 arg1) {
    return 15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E23D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2424.s")


s32 func_801E2478(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x12;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E24A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2578.s")


s32 func_801E25CC(s32 arg0, s32 arg1) {
    return 21;
}



s32 func_801E25DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x16;
    }
    return 0x15;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E26EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E27D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E29FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2BBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2C88.s")



s32 func_801E2D48(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        D_8038C158();
        return 0x1F;
    }
    return 0x1E;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2E78.s")


s32 func_801E2F54(s32 arg0, s32 arg1) {
    return 33;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2F64(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E2FA0.s")


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);
extern s32 D_801E6A50;

s32 func_801E2FF8(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x18, 0x76);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801E6A50 = 0x10;
    return 2;
}

extern s32 func_801E2FA0();

s32 func_801E30B4(s32 arg0, s32 arg1) {
    func_801E2FA0();
    return 0x3;
}


s32 func_801E30DC(s32 arg0, s32 arg1) {
    func_801E2FA0();
    return 0x4;
}


s32 func_801E3104(s32 arg0, s32 arg1) {
    func_801E2FA0();
    return 0x5;
}


s32 func_801E312C(s32 arg0, s32 arg1) {
    func_801E2FA0();
    return 0x5;
}


extern void D_8038BA70(void);
extern s32 func_801C2420(s32 id, void *data);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];

s32 func_801E3154(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x445, D_8038DDC0);
    D_8038BA70();
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E31C0.s")


s32 func_801E37F4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3804(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3814(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3824(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3834(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3878(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3888(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3898(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E38A8(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E38B8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E38FC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E390C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E391C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E392C(s32 arg0, s32 arg1) {
    return 5;
}

extern struct func_801E3A34_Struct0 *D_8038D8D0;

struct func_801E393C_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E393C_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    struct func_801E393C_Struct2 *unk30;
};

struct func_801E393C_Struct0 {
    u8 pad0[8];
    struct func_801E393C_Struct1 *unk8;
};

s32 func_801E393C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        ((struct func_801E393C_Struct0 *)D_8038D8D0)->unk8->unk30->unk4 = 49.0f;
        ((struct func_801E393C_Struct0 *)D_8038D8D0)->unk8->unk30->unk8 = 158.0f;
        ((struct func_801E393C_Struct0 *)D_8038D8D0)->unk8->unk30->unkC = 49.0f;
        ((struct func_801E393C_Struct0 *)D_8038D8D0)->unk8->unk30->unk12 = 0x1800;
        ((struct func_801E393C_Struct0 *)D_8038D8D0)->unk8->unk22 = 1;
        return 6;
    }
    return 5;
}


s32 func_801E39E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0D04(3, 2);
        return 7;
    }
    return 6;
}


struct func_801E3A34_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801E3A34_Struct1 {
    u8 pad[0x30];
    struct func_801E3A34_Struct2 *unk30;
};

struct func_801E3A34_Struct0 {
    u8 pad[0x8];
    struct func_801E3A34_Struct1 *unk8;
};

extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern f64 D_801E7248;

s32 func_801E3A34(s32 arg0, s32 arg1) {
    if (func_801C0DE4(3, 2, 0x40200000) != 0) {
        func_801C0EB0(3, 2);
        return 8;
    }
    D_8038D8D0->unk8->unk30->unk8 = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 2)) / D_801E7248)) / 2.5f) * -212.0f) + 158.0f;
    return 7;
}


struct func_801E3AE0_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

s32 func_801E3AE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        ((struct func_801E3AE0_Struct *) D_8038D8D0->unk8->unk30)->unk4 = 49.0f;
        ((struct func_801E3AE0_Struct *) D_8038D8D0->unk8->unk30)->unk8 = -69.0f;
        ((struct func_801E3AE0_Struct *) D_8038D8D0->unk8->unk30)->unkC = 49.0f;
        ((struct func_801E3AE0_Struct *) D_8038D8D0->unk8->unk30)->unk12 = 0x1800;
        return 9;
    }
    return 8;
}


s32 func_801E3B7C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x63B0D5) != 0) {
        func_801C0D04(3, 2);
        return 0xA;
    }
    return 9;
}


extern f64 D_801E7250;
extern f32 D_801E7258;

s32 func_801E3BC8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 2, 0x3EAAAAB0) != 0) {
        func_801C0EB0(3, 2);
        return 0xB;
    }
    temp_ret = func_801C0F18(3, 2);
    D_8038D8D0->unk8->unk30->unk8 = (((f32) (func_80034C24(temp_ret) / D_801E7250) / D_801E7258) * -105.0f) + -69.0f;
    return 0xA;
}


struct func_801E3C78_Struct_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E3C78(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6E5F35) != 0) {
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk4 = 49.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk8 = -116.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unkC = 49.0f;
        ((struct func_801E3C78_Struct_Leaf *)D_8038D8D0->unk8->unk30)->unk12 = 0x1800;
        return 0xC;
    }
    return 0xB;
}


extern s32 func_801C0D04(s32, s32);

s32 func_801E3D14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        func_801C0D04(3, 2);
        return 0xD;
    }
    return 0xC;
}


extern f64 D_801E7260;
extern f32 D_801E7268;

s32 func_801E3D60(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 2, 0x3F444440) != 0) {
        func_801C0EB0(3, 2);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 2);
    D_8038D8D0->unk8->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E7260)) / D_801E7268) * -102.0f + -116.0f);
    return 0xD;
}


s32 func_801E3E10(s32 arg0, s32 arg1) {
    return 14;
}



s32 func_801E3E20(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3E64(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3E74(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3E84(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3E94(s32 arg0, s32 arg1) {
    return 5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E3EA4.s")


s32 func_801E3F50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801C0D04(3, 3);
        return 7;
    }
    return 6;
}


extern f64 D_801E7270;

struct func_801E3F9C_Struct2 {
    u8 pad[0x8];
    f32 unk8;
};
struct func_801E3F9C_Struct1 {
    u8 pad[0x30];
    struct func_801E3F9C_Struct2 *unk30;
};
struct func_801E3F9C_Struct0 {
    u8 pad[0xC];
    struct func_801E3F9C_Struct1 *unkC;
};

s32 func_801E3F9C(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x40200000) != 0) {
        func_801C0EB0(3, 3);
        return 8;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E3F9C_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 =(f32) (((f32) (func_80034C24(temp_ret) / D_801E7270) / 2.5f) * -212.0f + 158.0f);
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E4048.s")


s32 func_801E40E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x63B0D5) != 0) {
        func_801C0D04(3, 3);
        return 0xA;
    }
    return 9;
}


extern f64 D_801E7278;
extern f32 D_801E7280;

struct func_801E4130_Struct0 {
    u8 pad[0xC];
    struct func_801E3A34_Struct1 *unkC;
};

s32 func_801E4130(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x3EAAAAB0) != 0) {
        func_801C0EB0(3, 3);
        return 0xB;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E4130_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E7278)) / D_801E7280) * -105.0f + -69.0f);
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E41E0.s")



s32 func_801E427C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        func_801C0D04(3, 3);
        return 0xD;
    }
    return 0xC;
}


extern f64 D_801E7288;
extern f32 D_801E7290;

struct func_801E42C8_Struct0 {
    u8 pad[0xC];
    struct func_801E3A34_Struct1 *unkC;
};

s32 func_801E42C8(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 3, 0x3F444440) != 0) {
        func_801C0EB0(3, 3);
        return 0xE;
    }
    temp_ret = func_801C0F18(3, 3);
    ((struct func_801E42C8_Struct0 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E7288)) / D_801E7290) * -102.0f + -116.0f);
    return 0xD;
}


s32 func_801E4378(s32 arg0, s32 arg1) {
    return 14;
}



s32 func_801E4388(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E43CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E4558.s")

extern s32 func_801E4558();

s32 func_801E4628(s32 arg0, s32 arg1) {
    func_801E4558();
    return 0x3;
}


s32 func_801E4650(s32 arg0, s32 arg1) {
    func_801E4558();
    return 0x4;
}


s32 func_801E4678(s32 arg0, s32 arg1) {
    func_801E4558();
    return 0x5;
}


s32 func_801E46A0(s32 arg0, s32 arg1) {
    func_801E4558();
    return 0x5;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E46C8.s")


extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern void func_801CC530(void);
extern u8 D_801DAD14[];
extern u8 D_801DB64C[];
extern u8 func_801DAC30[];

struct func_801E4794_Struct1 {
    u8 pad0[0x8];
    void *unk8;
};

struct func_801E4794_Struct0 {
    u8 pad0[0x24];
    struct func_801E4794_Struct1 *unk24;
};

extern struct func_801E4794_Struct0 func_801DAAF0;

s32 func_801E4794(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DAD14);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(((struct func_801E4794_Struct1 *)func_801DAAF0.unk24->unk8)->unk8, D_801DB64C);
    func_801CC530();
    return 2;
}

extern struct func_801E51CC_A *D_801DAB14;
extern s32 func_801CC470(s32, s32, s32, s32, f32);

struct func_801E4828_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E4828_D {
    u8 pad0[0x2C];
    struct func_801E4828_E *unk2C;
};

struct func_801E4828_C {
    u8 pad0[0x24];
    struct func_801E4828_D *unk24;
};

struct func_801E4828_B {
    u8 pad0[8];
    struct func_801E4828_C *unk8;
};

s32 func_801E4828(s32 arg0, s32 arg1) {
    struct func_801E4828_D *temp_v0;

    temp_v0 = ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -51.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unkC = 46.0f;
        ((struct func_801E4828_B *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1C12;
        func_801CC470(0, 0x0348007B, 0, 0, 10.0f);
        return 3;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E48F0.s")

extern s32 func_801CE274(void);

s32 func_801E4948(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}


s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E49A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC4D8(0, 0x0348005F, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}

extern s32 D_801E6B48;

extern s32 D_801E6B4C;

s32 func_801E4A04(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005F, 0, 0, 3.0f);
        D_801E6B48 = 0;
        D_801E6B4C = 0;
        return 7;
    }
    return 6;
}

extern void func_8038D28C(s32 a0);

extern s32 func_801CE284();

struct func_801E4A6C_W {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801E4A6C_Z {
    u8 pad0[0x2C];
    struct func_801E4A6C_W *unk2C;
};
struct func_801E4A6C_Y {
    u8 pad0[0x24];
    struct func_801E4A6C_Z *unk24;
};
struct func_801E4A6C_X {
    u8 pad0[8];
    struct func_801E4A6C_Y *unk8;
};

s32 func_801E4A6C(s32 arg0, s32 arg1) {
    if (D_801E6B48 == 0) {
        if (func_801CE284() != 0) {
            ((struct func_801E4A6C_X *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0xC12;
            func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
            return 8;
        }
        if (D_801E6B4C == 0x12) {
            func_8038D28C(0x677);
        }
        D_801E6B4C = D_801E6B4C + 1;
    }
    return 7;
}


s32 func_801E4B20(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xACEED5) != 0) {
        func_801CC4D8(0, 0x03480060, 0, 0, 3.0f);
        return 9;
    }
    return 8;
}



s32 func_801E4B84(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480060, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}


s32 func_801E4BDC(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E4BEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB61695ULL) != 0) {
        func_801CC4D8(0, 0x03480064, 0, 0, 3.0f);
        return 0xC;
    }
    return 0xB;
}



s32 func_801E4C50(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480064, 0, 0, 3.0f);
        return 0xD;
    }
    return 0xC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E4CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E4D00.s")


s32 func_801E4D58(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E4D78(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E4D88(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E4D98(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E4DA8(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E4DB8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(0, 0x04100026, 0, 0, 15.0f);
        return 0x16;
    }
    return 0x15;
}



s32 func_801E4E18(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100026, 0, 0, 3.0f);
        return 0x17;
    }
    return 0x16;
}


s32 func_801E4E70(s32 arg0, s32 arg1) {
    return 24;
}


struct func_801E4E80_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E4E80_Struct *func_801BF6B0(s32 a0);

s32 func_801E4E80(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x17) {
        func_801CC4D8(0, 0x03480061, 0, 0, 3.0f);
        D_801E6B48 = 0;
        return 0x19;
    }
    return 0x18;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E4EEC.s")


s32 func_801E5070(s32 arg0, s32 arg1) {
    return 27;
}


struct func_801E5080_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E5080(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x1A) {
        func_801CC4D8(0, 0x03480074, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E50E4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_8038D28C(0x23F);
        func_801CC470(0, 0x03480074, 0, 0, 2.0f);
        return 0x1D;
    }
    return 0x1C;
}



s32 func_801E5148(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E5178(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801E5188(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E51CC_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E51CC_D {
    u8 pad0[0x2C];
    struct func_801E51CC_E *unk2C;
};

struct func_801E51CC_C {
    u8 pad0[0x24];
    struct func_801E51CC_D *unk24;
};

struct func_801E51CC_B {
    u8 pad0[8];
    struct func_801E51CC_C *unk8;
};

struct func_801E51CC_A {
    u8 pad0[8];
    struct func_801E51CC_B *unk8;
};


s32 func_801E51CC(s32 arg0, s32 arg1) {
    struct func_801E51CC_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -62.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = 61.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xB0E;
        func_801CC470(1, 0x02A80059, 0, 0x100, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E52A4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E52B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        return 4;
    }
    return 3;
}



s32 func_801E52F0(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x04100026, 0, 0, 6.0f);
    return 5;
}


extern s32 func_801CEDE4();

s32 func_801E5338(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        func_801CC4D8(1, 0x02A80059, 0, 0, 15.0f);
        return 6;
    }
    return 5;
}


extern s32 func_801CEDD4();

s32 func_801E5390(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80059, 0, 0x100, 6.0f);
        return 7;
    }
    return 6;
}


s32 func_801E53E8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E53F8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5408(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5418(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5428(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5438(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E5448(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801E5458(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E5468(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E5478(s32 arg0, s32 arg1) {
    return 17;
}



s32 func_801E5488(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x68C6EA) != 0) {
        func_801CC4D8(1, 0x0348008B, 0, 0, 5.0f);
        return 0x12;
    }
    return 0x11;
}



s32 func_801E54EC(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x0348008B, 0, 0, 1.0f);
        return 0x13;
    }
    return 0x12;
}



s32 func_801E5544(s32 arg0, s32 arg1) {
    if (func_801CEDE4() != 0) {
        return 0x14;
    }
    return 0x13;
}


extern f32 D_801E72B0;
extern f32 D_801E72B4;

s32 func_801E5574(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x79D0E5) != 0) {
        D_801DAB14->unk8->unk8->unk24->unk2C->unk4 = D_801E72B0;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801E72B4;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xC66;
        func_801CC470(1, 0x02A80033, 0, 0x100, 6.0f);
        return 0x15;
    }
    return 0x14;
}


s32 func_801E5658(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E5668(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E5678(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E5688(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E5698(s32 arg0, s32 arg1) {
    return 25;
}



s32 func_801E56A8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E56EC_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E56EC_Vals;

typedef struct func_801E56EC_Node {
    u8 pad0[8];
    struct func_801E56EC_Node *unk8;
    u8 pad1[0x18];
    struct func_801E56EC_Node *unk24;
    u8 pad2[4];
    func_801E56EC_Vals *unk2C;
} func_801E56EC_Node;

s32 func_801E56EC(s32 arg0, s32 arg1) {
    func_801E56EC_Node *temp_v0;

    temp_v0 = ((func_801E56EC_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -36.0f;
        ((func_801E56EC_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = -23.0f;
        ((func_801E56EC_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 36.0f;
        ((func_801E56EC_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1B8E;
        func_801CC470(2, 0x03480063, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E57D8(s32 arg0, s32 arg1) {
    return 3;
}

extern s32 D_801E6C34;

s32 func_801E57E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x70EA40) != 0) {
        func_801CC470(2, 0x03480063, 0, 0, 2.0f);
        D_801E6C34 = 0;
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E5854.s")



s32 func_801E5934(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xACEED5) != 0) {
        func_801CC4D8(2, 0x03480065, 0, 0, 3.0f);
        return 6;
    }
    return 5;
}


s32 func_801E5998(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480065, 0, 0, 2.0f);
        return 7;
    }
    return 6;
}


s32 func_801D51A4(void);

s32 func_801E59F0(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x8;
    }
    return 0x7;
}


extern f32 D_801E72B8;

struct func_801E5A20_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E5A20_Struct2 {
    u8 pad0[0x2C];
    struct func_801E5A20_Struct3 *unk2C;
};

struct func_801E5A20_Struct1 {
    u8 pad0[8];
    struct func_801E5A20_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_801E5A20_Struct2 *unk24;
};

s32 func_801E5A20(s32 arg0, s32 arg1) {
    u8 *root;

    if (func_801C0B8C(0xB61695) != 0) {
        root = (u8 *)&func_801DAAF0;
        root += 0x24;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk4 = -38.0f;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E72B8;
        (*(struct func_801E5A20_Struct1 **)root)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1B8E;
        func_801CC470(2, 0x03480066, 0, 1, 1.0f);
        return 9;
    }
    return 8;
}


s32 func_801E5B14(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5B24(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5B34(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03480066, 0, 0, 4.0f);
    return 0xC;
}


s32 func_801E5B7C(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801CC4D8(2, 0x0348007C, 0, 0, 15.0f);
        return 0xD;
    }
    return 0xC;
}


s32 func_801E5BD4(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x0348007C, 0, 0x100, 10.0f);
        return 0xE;
    }
    return 0xD;
}


s32 func_801E5C2C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 14;
    }
    return 15;
}

s32 func_801C1B1C(void);

s32 func_801E5C80(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 7) || (func_801C1B1C() == 0)) {
        return 15;
    }
    return 0x10;
}


s32 func_801D51F0(s32 a);

s32 func_801E5CD4(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03480067, 0, 0, 3.0f);
    func_801D51F0(1);
    D_801E6C34 = 0;
    return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E5D28.s")


s32 func_801E5E38(s32 arg0, s32 arg1) {
    return 19;
}


typedef struct func_801E5E48_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E5E48_Struct;


s32 func_801E5E48(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


s32 func_801E5E9C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 20;
    }
    return 0x15;
}


s32 func_801E5EF0(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x03480068, 0, 0, 10.0f);
    func_801D51F0(1);
    return 0x16;
}


s32 func_801E5F40(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480068, 0, 0, 4.0f);
        D_801E6C34 = 0;
        return 0x17;
    }
    return 0x16;
}


s32 func_801E5FA0(s32 arg0, s32 arg1) {
    if (D_801E6C34 == 0) {
        goto case0;
    }
    if (D_801E6C34 != 1) {
        goto block_7;
    }
    goto case1;

case0:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(2, 0x0348007C, 0, 0, 3.0f);
        D_801E6C34 = 1;
    }
    goto block_7;

case1:
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x0348007C, 0, 0x100, 10.0f);
        return 0x18;
    }
    goto block_7;

block_7:
    return 0x17;
}


s32 func_801E6068(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E60BC(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E60CC(s32 arg0, s32 arg1) {
    return 27;
}


struct func_801E60DC_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E60DC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x1A) {
        func_801CC4D8(2, 0x03480075, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801D5194(void);

s32 func_801E6140(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480075, 0, 0, 2.0f);
        return 0x1D;
    }
    return 0x1C;
}



s32 func_801E6198(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801E61C8(s32 arg0, s32 arg1) {
    return 30;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E61D8(s32 arg0, s32 arg1) {
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



s32 func_801E6260(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E6290(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E62A0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E62B0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E62C0(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E62D0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x8FF0F5) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_8038D28C(8);
        return 7;
    }
    return 6;
}



s32 func_801E6360(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E6388(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6398(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E68C0[];

s32 func_801E63A8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E68C0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E63DC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E640C.s")



s32 func_801E6474(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E64A4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E64CC.s")



s32 func_801E6534(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_801E6920[];

s32 func_801E6564(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E6920);
    return 9;
}



s32 func_801E6598(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E65C8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E65F0.s")



s32 func_801E6658(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E6688(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E66B0.s")



s32 func_801E6718(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xF;
    }
    return 0x10;
}


extern u8 D_801E6978[];

s32 func_801E6748(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E6978);
    return 17;
}



s32 func_801E677C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801E67AC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x13;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file038/801E1BE0/func_801E67D4.s")



s32 func_801E683C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E686C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x16;
}


s32 func_801E6894(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E68A4(s32 arg0, s32 arg1) {
    return 23;
}

