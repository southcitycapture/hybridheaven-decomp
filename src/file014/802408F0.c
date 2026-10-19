#include "common.h"


typedef struct func_802408F0_StructC {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_StructC;
typedef struct func_802408F0_StructD {
    u8 pad0[0x30];
    func_802408F0_StructC *unk30;
} func_802408F0_StructD;
typedef struct func_802408F0_StructE {
    u16 *unk0;
    s32 *unk4;
} func_802408F0_StructE;
typedef struct func_802408F0_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_802408F0_StructB;
typedef struct func_802408F0_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x36 - 0x30];
    u16 unk36;
    func_802408F0_StructB *unk38;
    u8 pad2[0x74 - 0x3C];
    s32 unk74;
} func_802408F0_StructA;

extern void func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern s32 func_80126CC0(void *, void *);
extern void func_8001F74C();
extern void func_80240A68();
extern u8 D_80164F40[];
extern u8 D_801BBBF0[];
extern s32 func_8000522C(u16, s32, void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C784(void *, s32, s32);
extern func_802408F0_StructE *D_80171CEC[];

void func_802408F0(func_802408F0_StructA *arg0, func_802408F0_StructD **arg1) {
    func_802408F0_StructE *temp;

    func_8001F74C();
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, &D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, ((u32) arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        (*arg1)->unk30->unk18 = 1.0f;
        (*arg1)->unk30->unk1C = 1.0f;
        (*arg1)->unk30->unk20 = 1.0f;
        temp = D_80171CEC[arg0->unk36];
        arg0->unk74 = func_8000522C(*temp->unk0, temp->unk4[((u32) arg0->unk38->unk10 >> 8) & 0xFF], D_801BBBF0);
        arg0->unk2C = 0xC00;
        func_800058DC(arg0, &func_80240A68);
    }
}

extern void func_80020744(s32);
extern void func_801268F4(s32);
extern s32 func_80133A24(s32);

typedef struct func_80240A68_StructB {
    u8 pad0[0x10];
    u32 unk10;
} func_80240A68_StructB;

typedef struct func_80240A68_StructA {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x38 - 0x30];
    func_80240A68_StructB *unk38;
    u8 pad2[0x3E - 0x3C];
    u8 unk3E;
} func_80240A68_StructA;

extern void func_80240B24();
extern void func_80240BE4();

void func_80240A68(func_80240A68_StructA *arg0, s32 arg1) {
    *(f32 *) (D_801BBBF0 + 0x390) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x394) = 0.0f;
    *(f32 *) (D_801BBBF0 + 0x398) = 0.0f;
    if ((arg0->unk38->unk10 >> 0x18) == 0) {
        if (func_80133A24(0x50) != 0) {
            func_800058DC(arg0, func_80240BE4);
            arg0->unk2C = 0xC60;
            arg0->unk3E = 0;
            func_801268F4(0);
        }
    } else if (func_80133A24(0x4F) != 0) {
        func_80020744(0x144);
        func_800058DC(arg0, func_80240B24);
        arg0->unk2C = 0xC20;
    }
}


typedef struct func_80240B24_StructC {
    u8 pad0[8];
    f32 unk8;
} func_80240B24_StructC;

typedef struct func_80240B24_StructB {
    u8 pad0[0x30];
    func_80240B24_StructC *unk30;
} func_80240B24_StructB;

typedef struct func_80240B24_StructA {
    u8 pad0[0x24];
    func_80240B24_StructB *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80240B24_StructA;

extern void func_80240BD8(s32 arg0, s32 arg1);
extern s32 func_8012AAE8(void *, s32, s32, s32, f32);

void func_80240B24(func_80240B24_StructA *arg0, s32 arg1) {
    if (func_8012AAE8(arg0, 0xC3C80000, 0xC30D0000, 0xC3910000, 0.5f) != 0) {
        *(f32 *) &D_801BBBF0[0x390] = arg0->unk40;
        *(f32 *) &D_801BBBF0[0x394] = arg0->unk44;
        *(f32 *) &D_801BBBF0[0x398] = arg0->unk48;
        return;
    }
    func_80020744(0x6AF);
    *(f32 *) &D_801BBBF0[0x390] = 0.0f;
    *(f32 *) &D_801BBBF0[0x394] = 0.0f;
    *(f32 *) &D_801BBBF0[0x398] = 0.0f;
    arg0->unk24->unk30->unk8 = -4000.0f;
    func_800058DC(arg0, &func_80240BD8);
}


void func_80240BD8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

void func_80240CD4(s32 arg0, s32 arg1);

typedef struct func_80240BE4_Struct {
    u8 pad0[0x3E];
    u8 unk3E;
} func_80240BE4_Struct;

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s16 D_801BBD84;
extern u8 D_8024A240[];
extern f32 D_8024A27C;
extern f32 D_8024A280;

void func_80240BE4(func_80240BE4_Struct *arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A240, 0x87, arg0, 0, 2, 4.0f, D_8024A27C, -54.0f, -250.0f, 4.0f, -380.0f, -90.0f, D_8024A280, 0.0f, 35.0f, -1, -1) == 0) {
        arg0->unk3E = 0xA;
        D_801BBD84 = 2;
        func_80020744(0x145);
        func_800058DC(arg0, &func_80240CD4);
    }
}


void func_80240CD4(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


/* Exact context.h declarations for every name used here (the in-file build drops the #include,
   so these must appear in this function's own text). */
extern void func_80005700(void *);
extern s32 D_801BBCD0;
/* Unprototyped form of the context.h prototype for func_80240D74 (compatible with it, and avoids
   pulling in its struct typedefs before this function). */
extern void func_80240D74();

void func_80240CE0(s32 arg0, s32 arg1) {
    if (D_801BBCD0 != 0) {
        if (func_80133A24(0x47) != 0) {
            func_80005700((void *) arg0);
        }
        if (func_80126CC0((void *) arg0, (void *) func_80126EAC) != 0) {
            func_80005F6C((void *) arg0, D_80164F40);
            func_80006214((void *) arg0);
            func_8012636C((void *) arg0, 0);
            func_800058DC((void *) arg0, (void *) func_80240D74);
        }
    }
}


typedef struct func_80240D74_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_80240D74_StructC;

typedef struct func_80240D74_StructB {
    u8 pad0[0x30];
    func_80240D74_StructC *unk30;
} func_80240D74_StructB;

typedef struct func_80240D74_StructA {
    u8 pad0[0x24];
    func_80240D74_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_80240D74_StructA;

extern void func_8012C89C(void *, s32, s32, s32);
extern f32 D_8024A324;
extern f32 D_8024A328;
extern f32 D_8024A32C;
extern void func_80240E38();

void func_80240D74(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_8012C89C(arg0, 0, 0x23B, 0);
        arg0->unk24->unk30->unk4 = D_8024A324;
        arg0->unk24->unk30->unk8 = D_8024A328;
        arg0->unk24->unk30->unkC = D_8024A32C;
        arg0->unk24->unk30->unk10 = 1;
        arg0->unk24->unk30->unk12 = -1;
        arg0->unk94 = 0x12C;
        func_80020744(0x141);
        func_800058DC(arg0, func_80240E38);
    }
}


typedef struct func_80240E38_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80240E38_StructC;
typedef struct func_80240E38_StructB {
    u8 pad[0x2C];
    func_80240E38_StructC *unk2C;
} func_80240E38_StructB;
typedef struct func_80240E38_StructGlobal {
    u8 pad0[0xE0];
    func_80240E38_StructB *volatile unkE0;
    u8 pad1[0x354 - 0xE4];
    s16 unk354;
    u8 pad2[0x1058 - 0x356];
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
    s32 unk1064;
    s32 unk1068;
    s32 unk106C;
} func_80240E38_StructGlobal;
extern f64 D_8024A330;
extern f32 D_8024A338;
extern void func_80240F48(s32, s32);

void func_80240E38(func_80240D74_StructA *arg0, s32 arg1) {
    s16 temp_a1;
    func_80240D74_StructC *temp_v1;

    ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 1;
    temp_v1 = arg0->unk24->unk30;
    temp_v1->unk8 = (f32)((f64)temp_v1->unk8 + D_8024A330);
    temp_a1 = arg0->unk94;
    arg0->unk94 = temp_a1 - 1;
    if (temp_a1 == 0) {
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 0;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1058 = 0x13C68;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk105C = 0xA028;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1060 = 0xFFF7A360;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1064 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk4 * 1000.0f);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1068 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk8 + D_8024A338);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk106C = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unkC * 1000.0f);
        func_80020744(0x142);
        func_800058DC(arg0, func_80240F48);
    }
}


void func_80240F48(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

void func_8024101C(s32 arg0, s32 arg1);

extern f32 D_8024A33C;
extern f32 D_8024A340;

void func_80240F54(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        arg0->unk24->unk30->unk4 = -151.0f;
        arg0->unk24->unk30->unk8 = D_8024A33C;
        arg0->unk24->unk30->unkC = D_8024A340;
        arg0->unk24->unk30->unk12 = 0;
        func_8012C89C(arg0, 0, 0x23B, 0);
        func_800058DC(arg0, &func_8024101C);
    }
}


extern s32 func_8012A564(s32, s32);
extern void func_80241064();

void func_8024101C(s32 arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x430C0000) != 0) {
        func_801268F4(0);
        func_800058DC((void *) arg0, (void *) func_80241064);
    }
}


typedef struct func_80241064_StructC {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80241064_StructC;
typedef struct func_80241064_StructB {
    u8 pad[0x30];
    func_80241064_StructC *unk30;
} func_80241064_StructB;
typedef struct func_80241064_StructA {
    u8 pad[0x24];
    func_80241064_StructB *unk24;
} func_80241064_StructA;
typedef struct func_80241064_StructGlobal {
    u8 pad[0x2C];
    func_80241064_StructC *unk2C;
} func_80241064_StructGlobal;

extern u8 D_8024A2A8[];
extern f32 D_8024A344;
extern void func_80241144();

void func_80241064(func_80241064_StructA *arg0, s32 arg1) {
    func_80241064_StructC *temp_v0;
    func_80241064_StructC *temp_v1;

    if (func_8011AAF4(D_8024A2A8, 0x103, arg0, 0, 2, 4294967296.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unk4, -544.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unkC, 4.0f, arg0->unk24->unk30->unk4, D_8024A344, arg0->unk24->unk30->unkC, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC(arg0, func_80241144);
    }
}


typedef struct func_80241144_Struct {
    u8 pad[0x94];
    s16 unk94;
} func_80241144_Struct;

extern void func_80133980(s32);
extern void func_8024118C();

void func_80241144(func_80241144_Struct *arg0, s32 arg1) {
    arg0->unk94 = 0xA0;
    func_80133980(0x4E);
    func_80020744(0x143);
    func_800058DC(arg0, func_8024118C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/802408F0/func_8024118C.s")


void func_80241200(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_8024120C_StructB {
    u8 pad0[2];
    u16 unk2;
} func_8024120C_StructB;

typedef struct func_8024120C_Struct {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1[4];
    void *unk20;
    u8 pad2[0x14];
    func_8024120C_StructB *unk38;
} func_8024120C_Struct;

extern void func_8013B570(void *, u16, s32, s32, void *);
extern void func_80127014();
extern void func_8012E5B0(void);
extern void func_8012E6BC(void);
extern void func_802412A0(s32 arg0, s32 arg1);

void func_8024120C(func_8024120C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_80005700(arg0);
        return;
    }
    if (func_80126CC0(arg0, func_80127014) != 0) {
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        func_8013B570(arg0, arg0->unk38->unk2, 2, 4, func_802412A0);
    }
}


extern void func_80203830(s32, void *);
extern void func_8020394C();
extern s32 D_801BCC78;
extern u8 D_8024732C[];
extern void func_802412F4();

void func_802412A0(s32 arg0, s32 arg1) {
    func_8001F74C();
    func_80203830(arg0, D_8024732C);
    D_801BCC78 = arg0;
    func_8020394C();
    func_800058DC((void *)arg0, func_802412F4);
}

extern s32 func_802039B0();

void func_802412F4(s32 arg0, struct func_802039B0_Struct *arg1) {
    func_802039B0(arg0, arg1);
}

