#include "common.h"

#define func_80240D74 func_80240D74__func_80240CE0

/* Exact context.h declarations for every name used here (the in-file build drops the #include,
   so these must appear in this function's own text). */
extern void func_800058DC(void *, void *);
extern void func_80005700(void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_80126EAC(void);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);
extern u8 D_80164F40[];
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
#undef func_80240D74

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80240CE0/D_8024A290.s")

#define func_80240E38 func_80240E38__func_80240D74

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

extern void func_80020744(s32);
extern void func_8012C89C(void *, s32, s32, s32);

extern void func_80240E38();

void func_80240D74(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_8012C89C(arg0, 0, 0x23B, 0);
        arg0->unk24->unk30->unk4 = 36.7000008f;
        arg0->unk24->unk30->unk8 = (-60.7999992f);
        arg0->unk24->unk30->unkC = (-471.100006f);
        arg0->unk24->unk30->unk10 = 1;
        arg0->unk24->unk30->unk12 = -1;
        arg0->unk94 = 0x12C;
        func_80020744(0x141);
        func_800058DC(arg0, func_80240E38);
    }
}
#undef func_80240E38

#define func_80240F48 func_80240F48__func_80240E38

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
extern u8 D_801BBBF0[];

extern void func_80240F48(s32, s32);

void func_80240E38(func_80240D74_StructA *arg0, s32 arg1) {
    s16 temp_a1;
    func_80240D74_StructC *temp_v1;

    ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 1;
    temp_v1 = arg0->unk24->unk30;
    temp_v1->unk8 = (f32)((f64)temp_v1->unk8 + 0.2);
    temp_a1 = arg0->unk94;
    arg0->unk94 = temp_a1 - 1;
    if (temp_a1 == 0) {
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk354 = 0;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1058 = 0x13C68;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk105C = 0xA028;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1060 = 0xFFF7A360;
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1064 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk4 * 1000.0f);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk1068 = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unk8 + 15000.0f);
        ((func_80240E38_StructGlobal *)D_801BBBF0)->unk106C = (s32)(((func_80240E38_StructGlobal *)D_801BBBF0)->unkE0->unk2C->unkC * 1000.0f);
        func_80020744(0x142);
        func_800058DC(arg0, func_80240F48);
    }
}
#undef func_80240F48


void func_80240F48(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024101C func_8024101C__func_80240F54
void func_8024101C(s32 arg0, s32 arg1);


void func_80240F54(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        arg0->unk24->unk30->unk4 = -151.0f;
        arg0->unk24->unk30->unk8 = (-489.799988f);
        arg0->unk24->unk30->unkC = (-100.800003f);
        arg0->unk24->unk30->unk12 = 0;
        func_8012C89C(arg0, 0, 0x23B, 0);
        func_800058DC(arg0, &func_8024101C);
    }
}
#undef func_8024101C

#define func_80241064 func_80241064__func_8024101C

extern s32 func_8012A564(s32, s32);
extern void func_801268F4(s32);
extern void func_80241064();

void func_8024101C(s32 arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x430C0000) != 0) {
        func_801268F4(0);
        func_800058DC((void *) arg0, (void *) func_80241064);
    }
}
#undef func_80241064

/* hh-block asm/nonmatchings/file014/80240CE0/_ro_func_80241064.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file014/80240CE0/func_80241064.s","D_8024A2A8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file014/80240CE0/_ro_func_80241064.s")

#define func_80241144 func_80241144__func_80241064

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

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80241144();

void func_80241064(func_80241064_StructA *arg0, s32 arg1) {
    func_80241064_StructC *temp_v0;
    func_80241064_StructC *temp_v1;

    if (func_8011AAF4(D_8024A2A8, 0x103, arg0, 0, 2, 4294967296.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unk4, -544.0f, ((func_80241064_StructGlobal *)D_801BBCD0)->unk2C->unkC, 4.0f, arg0->unk24->unk30->unk4, (-551.0f), arg0->unk24->unk30->unkC, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC(arg0, func_80241144);
    }
}
#undef func_80241144

#define func_8024118C func_8024118C__func_80241144

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
#undef func_8024118C

#define func_80241200 func_80241200__func_8024118C

typedef struct func_8024118C_StructC {
    u8 pad0[8];
    f32 unk8;
} func_8024118C_StructC;

typedef struct func_8024118C_StructB {
    u8 pad0[0x30];
    func_8024118C_StructC *unk30;
} func_8024118C_StructB;

typedef struct func_8024118C_Struct {
    u8 pad0[0x24];
    func_8024118C_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_8024118C_Struct;

void func_80241200(s32 arg0, s32 arg1);

void func_8024118C(func_8024118C_Struct *arg0, s32 arg1) {
    func_8024118C_StructC *p = arg0->unk24->unk30;
    s16 t;
    p->unk8 = (f32)((f64)p->unk8 - 0.5);
    t = arg0->unk94;
    arg0->unk94 = t - 1;
    if (t == 0) {
        func_80020744(0x142);
        func_800058DC(arg0, func_80241200);
    }
}
#undef func_80241200


void func_80241200(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_802412A0 func_802412A0__func_8024120C

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
#undef func_802412A0

#define func_802412F4 func_802412F4__func_802412A0

extern void func_8001F74C();
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
#undef func_802412F4

extern s32 func_802039B0();

void func_802412F4(s32 arg0, struct func_802039B0_Struct *arg1) {
    func_802039B0(arg0, arg1);
}

