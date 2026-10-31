#include "common.h"

#define D_80006214 D_80006214__func_802408F0
#define D_80164F40 D_80164F40__func_802408F0
#define D_8017AF90 D_8017AF90__func_802408F0
#define D_801BBBF0 D_801BBBF0__func_802408F0
#define func_800058DC func_800058DC__func_802408F0
#define func_80005E44 func_80005E44__func_802408F0
#define func_8012C89C func_8012C89C__func_802408F0
#define func_8012D918 func_8012D918__func_802408F0
#define func_80133A24 func_80133A24__func_802408F0
#define func_80240AA8 func_80240AA8__func_802408F0
#define func_80240AA8_Struct func_80240AA8_Struct__func_802408F0
#define func_802411EC func_802411EC__func_802408F0
#define func_802441AC_Struct func_802441AC_Struct__func_802408F0
extern s32 D_80006214(void *);
extern u8 D_80164F40[];
extern u8 D_8017AF90[];
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern s32 func_80133A24(u16);
struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_80240AA8(struct func_80240AA8_Struct *arg0, void *arg1);
void func_802411EC(s32 arg0, s32 arg1);



typedef struct func_802408F0_StructQ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[0x10];
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_StructQ;

typedef struct func_802408F0_StructR {
    u8 pad[0x30];
    func_802408F0_StructQ *unk30;
} func_802408F0_StructR;

typedef struct func_802408F0_StructP {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
} func_802408F0_StructP;

typedef struct func_802408F0_Struct4 {
    s32 a[4];
} func_802408F0_Struct4;

void func_802408F0(func_802408F0_StructP *arg0, func_802408F0_StructR **arg1) {
    func_802408F0_Struct4 sp28;

    sp28 = *(func_802408F0_Struct4 *)D_80164F40;
    sp28.a[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    D_80006214(arg0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk12 = arg0->unk9C;
    (*arg1)->unk30->unk4C = D_801BBBF0.unkF32;
    (*arg1)->unk30->unk4D = D_801BBBF0.unkF33;
    (*arg1)->unk30->unk4E = D_801BBBF0.unkF34;
    (*arg1)->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 0, 0x305, 0);
    if (func_80133A24(arg0->unk9E) == 0) {
        func_8012D918(arg0, 0x2F8, 0x10, 0, 0);
        func_800058DC(arg0, (void *)func_80240AA8);
        return;
    }
    func_8012D918(arg0, 0x2F8, 9, 0, 0);
    (*arg1)->unk30->unk12 = (s16)((*arg1)->unk30->unk12 + 0x1000) & 0x1FFF;
    func_800058DC(arg0, (void *)func_802411EC);
}
#undef D_80006214
#undef D_80164F40
#undef D_8017AF90
#undef D_801BBBF0
#undef func_800058DC
#undef func_80005E44
#undef func_8012C89C
#undef func_8012D918
#undef func_80133A24
#undef func_80240AA8
#undef func_80240AA8_Struct
#undef func_802411EC
#undef func_802441AC_Struct

#define func_80240B10 func_80240B10__func_80240AA8

struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_80133A24(u16);
extern s32 func_80126944(void);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_800058DC(void *, void *);
extern void func_80240B10();

void func_80240AA8(struct func_80240AA8_Struct *arg0, void *arg1) {
    if (func_80133A24(*(u16 *)((u8 *)arg0 + 0xA2)) != 0) {
        if (func_80126944() != 1) {
            arg0->unk3C = 0;
            func_801C3B2C(2);
            func_801C3B10(1);
            func_800058DC(arg0, func_80240B10);
        }
    }
}
#undef func_80240B10

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/D_8025C2C0.s")


struct func_80240B10_Struct {
    u8 pad0[0x74];
    s32 unk74;
    u8 pad1[0x18];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
};

extern s32 func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);

extern void func_80240C00();

void func_80240B10(struct func_80240B10_Struct *arg0, void *arg1) {
    s32 angle;

    angle = (s16)(arg0->unk9C + 0x1000) & 0x1FFF;
    if (func_801C3DC8(arg0, func_8001EAD0(angle) * 30.0f + arg0->unk90, arg0->unk94 + 17.0f,
                       func_8001EB64(angle) * 30.0f + arg0->unk98, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98,
                       0.200000003f, 35.0f) == 0) {
        arg0->unk74 = 0;
        func_80020718(0x14C);
        func_800058DC(arg0, func_80240C00);
    }
}

#define func_80240C58 func_80240C58__func_80240C00
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
void func_80240C58(s32 arg0, s32 arg1);


struct func_80240C00_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80240C00_StructA {
    u8 pad[0x30];
    struct func_80240C00_StructB *unk30;
};
struct func_80240C00_StructC {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad2[0x5E];
    u16 unk9C;
};

void func_80240C00(struct func_80240C00_StructC *arg0, struct func_80240C00_StructA **arg1) {
    arg0->unk9C = (s16)(arg0->unk9C + 0x2D) & 0x1FFF;
    (*arg1)->unk30->unk12 = arg0->unk9C;
    if (arg0->unk3C++ >= 0x5A) {
        func_800058DC(arg0, func_80240C58);
    }
}
#undef CAT2
#undef CAT
#undef func_80240C58

#define func_80240DEC func_80240DEC__func_80240C58
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80240DEC_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_80240DEC_Struct;
void func_80240DEC(func_80240DEC_Struct *arg0, s32 arg1);
extern void func_801C2F0C(s32, void *);
struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};
struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};
extern struct func_80241094_StructA *D_801BBCD0;

typedef struct func_80240C58_StructB {
    u8 pad0[4];
    f32 f4, f8, fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x1C];
    f32 f30, f34, f38, f3C, f40, f44;
} func_80240C58_StructB;
typedef struct func_80240C58_StructA {
    u8 pad[0x2C];
    func_80240C58_StructB *p;
} func_80240C58_StructA;

extern u8 D_8025C1C0[];

extern func_80240C58_StructA *D_801BBCD8;

void func_80240C58(s32 arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(((func_80240C58_StructA *)D_801BBCD0)->p->s12);
    if (func_801C3DC8((void *)arg0, (f32)((f64)((func_80240C58_StructA *)D_801BBCD0)->p->f4 - (f64)sp50 * 40.0), ((func_80240C58_StructA *)D_801BBCD0)->p->f8 + 20.0f,
                      (f32)((f64)((func_80240C58_StructA *)D_801BBCD0)->p->fC - (f64)func_8001EB64(((func_80240C58_StructA *)D_801BBCD0)->p->s12) * 40.0),
                      ((func_80240C58_StructA *)D_801BBCD0)->p->f4, ((func_80240C58_StructA *)D_801BBCD0)->p->f8 + 17.0f, ((func_80240C58_StructA *)D_801BBCD0)->p->fC, 0.200000003f, 35.0f) == 0) {
        func_8011AAF4(D_8025C1C0, 0xD8, (void *)arg0, 2, 1, 0.0f, D_801BBCD8->p->f30, D_801BBCD8->p->f34, D_801BBCD8->p->f38, 0.0f, D_801BBCD8->p->f3C, D_801BBCD8->p->f40, D_801BBCD8->p->f44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC((void *)arg0, (void *)func_80240DEC);
    }
}
#undef func_80240DEC

extern s32 func_801C3D20(f32, f32, f32);
extern u8 D_8025C1F4[];
#define func_80240F50 func_80240F50__decl120
extern u8 func_80240F50[];

void func_80240DEC(func_80240DEC_Struct *arg0, s32 arg1) {
    s32 t;

    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 8.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = (s16)(*(u16 *)&arg0->unk9C + 0x2AA) & 0x1FFF;
        func_8011AAF4(D_8025C1F4, 0xEE, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 20.0f + arg0->unk90, arg0->unk94 + 30.0f, func_8001EB64(t) * 20.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 5.0f, arg0->unk98, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_80240F50);
    }
}
#undef func_80240F50

#define func_8024102C func_8024102C__func_80240F50
extern void func_8024102C(s32 arg0, s32 arg1);

struct func_80240F50_Struct {
    u8 pad[0x90];
    f32 x;
    f32 y;
    f32 z;
    s16 angle;
};

struct func_80240F50_StructLocal {
    f32 x;
    f32 z;
    f32 y;
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
    u8 pad[4];
};

void func_80240F50(struct func_80240F50_Struct *arg0, void *arg1) {
    struct func_80240F50_StructLocal data;

    if (func_801C2FF8() != 0) {
        data.x = (f32)(((f64)func_8001EAD0(arg0->angle) * 8.2) + (f64)arg0->x);
        data.z = (f32)(((f64)func_8001EB64(arg0->angle) * 8.2) + (f64)arg0->z);
        data.a = 0x1100;
        data.b = 0x0168003E;
        data.d = 0;
        data.e = 0x5A;
        data.y = 0.0f;
        data.c = 1.5f;
        func_801C2F0C(2, &data);
        func_800058DC(arg0, func_8024102C);
    }
}
#undef func_8024102C

#define func_80241094 func_80241094__func_8024102C

struct func_8024102C_Struct {
    s16 a;
    s16 pad0;
    s32 b;
    f32 c;
    s16 d;
    s16 pad1;
};

extern s32 func_801C3044(void);
extern void func_80241094();

void func_8024102C(s32 arg0, s32 arg1) {
    u8 pad[0x10];
    struct func_8024102C_Struct sp18;

    if (func_801C3044() == 0) {
        sp18.a = 0;
        sp18.b = 0x0168002D;
        sp18.d = 0x14;
        sp18.c = 1.0f;
        func_801C2F0C(3, &sp18);
        func_800058DC(arg0, &func_80241094);
    }
}
#undef func_80241094




struct func_80241094_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_80241094_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
};

extern s16 func_801FD284(s16, s16, s32);
#define func_80241144 func_80241144__decl251
extern void func_80241144(void);

void func_80241094(struct func_80241094_StructC *arg0, void *arg1) {
    u8 pad[0x14];
    struct func_80241094_StructD sp18;

    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_80241144);
    }
}
#undef func_80241144

#define D_801BBBF0 D_801BBBF0__func_80241144
#define func_8012D918 func_8012D918__func_80241144
#define func_8012FE50 func_8012FE50__func_80241144
#define func_80133980 func_80133980__func_80241144
#define func_802411EC func_802411EC__func_80241144
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(u16);


typedef struct {
    u8 pad0[0x9E];
    u16 unk9E;
    u16 unkA0;
    u8 padA2[2];
    u16 unkA4;
} func_80241144_Struct;

void func_802411EC(s32 arg0, s32 arg1);

void func_80241144(func_80241144_Struct *arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_80133980(arg0->unk9E);
        func_80133980(arg0->unkA0);
        func_8012D918(arg0, 0x2F8, 9, 0, 0);
        *(u16 *)((u8 *)&D_801BBBF0 + 6) = 0;
        *((u8 *)&D_801BBBF0 + 0x3A6) = 0;
        *(u16 *)((u8 *)&D_801BBBF0 + 4) = arg0->unkA4;
        func_8012FE50(9, *(u16 *)((u8 *)&D_801BBBF0 + 4), 1, 1, 1);
        func_80020718(0x14E);
        func_800058DC(arg0, func_802411EC);
    }
}
#undef CAT2
#undef CAT
#undef D_801BBBF0
#undef func_8012D918
#undef func_8012FE50
#undef func_80133980
#undef func_802411EC


void func_802411EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define D_80006214 D_80006214__func_802411F8
#define D_80164F40 D_80164F40__func_802411F8
#define D_8017AF90 D_8017AF90__func_802411F8
#define D_801BBBF0 D_801BBBF0__func_802411F8
#define func_80005E44 func_80005E44__func_802411F8
#define func_8012C89C func_8012C89C__func_802411F8
#define func_8012D918 func_8012D918__func_802411F8
#define func_80241358 func_80241358__func_802411F8
#define func_80241358_Struct func_80241358_Struct__func_802411F8
#define func_80241784 func_80241784__func_802411F8
#define func_802441AC_Struct func_802441AC_Struct__func_802411F8
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
extern u8 D_80164F40[];
extern u8 D_8017AF90[];
struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};
extern struct func_802441AC_Struct D_801BBBF0;
extern void func_80005E44(void *, void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
struct func_80241358_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
void func_80241358(struct func_80241358_Struct *arg0, void *arg1);
extern void func_80241784(s32, s32);


extern s32 D_80006214(void *);

struct func_802411F8_Struct { s32 a[4]; };
struct func_802411F8_StructQ { u8 pad24[0x24]; s32 unk24; s32 unk28; s32 unk2C; s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F; };
struct func_802411F8_StructR { u8 pad[0x30]; struct func_802411F8_StructQ *unk30; };
struct func_802411F8_StructP { u8 pad9E[0x9E]; u16 unk9E; u16 unkA0; u16 unkA2; };

void func_802411F8(struct func_802411F8_StructP *arg0, struct func_802411F8_StructR **arg1) {
    struct func_802411F8_Struct sp28;

    sp28 = *(struct func_802411F8_Struct *)D_80164F40;
    sp28.a[1] = 0x80000900;
    func_80005E44(arg0, &sp28);
    D_80006214(arg0);
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk30 = (s32)D_8017AF90 | 0x40000000;
    (*arg1)->unk30->unk4C = D_801BBBF0.unkF32;
    (*arg1)->unk30->unk4D = D_801BBBF0.unkF33;
    (*arg1)->unk30->unk4E = D_801BBBF0.unkF34;
    (*arg1)->unk30->unk4F = D_801BBBF0.unkF35;
    func_8012C89C(arg0, 0, arg0->unk9E, arg0->unkA0);
    if (func_80133A24(arg0->unkA2) == 0) {
        func_8012D918(arg0, 0x2F8, 0x10, 0, 0);
        func_800058DC(arg0, func_80241358);
        return;
    }
    func_8012D918(arg0, 0x2F8, 9, 0, 0);
    func_800058DC(arg0, func_80241784);
}
#undef CAT2
#undef CAT
#undef D_80006214
#undef D_80164F40
#undef D_8017AF90
#undef D_801BBBF0
#undef func_80005E44
#undef func_8012C89C
#undef func_8012D918
#undef func_80241358
#undef func_80241358_Struct
#undef func_80241784
#undef func_802441AC_Struct

struct func_80241358_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
};
extern u8 D_8025C228[];
void func_802414B0(void *arg0, void *arg1);
void func_80241358(struct func_80241358_Struct *arg0, void *arg1) {
    s32 t;
    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 6.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = arg0->unk9C & 0x1FFF;
        func_8011AAF4(D_8025C228, 0x17E, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 25.0f + arg0->unk90, arg0->unk94 + 20.0f, func_8001EB64(t) * 25.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 15.0f, arg0->unk98, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_802414B0);
    }
}

