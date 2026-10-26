#include "common.h"

#define func_8024D2A4 func_8024D2A4__func_8024D230
#define func_8024D898 func_8024D898__func_8024D230
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
void func_8024D2A4(void *arg0, void *arg1);

/* Forward declarations needed because this function sits before func_8024D2A4 in the file. */
struct func_8024D2A4_Arg;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024D898();

void func_8024D230(struct func_8024D2A4_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x7E) != 0) {
            func_800058DC(arg0, (void *)func_8024D898);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024D2A4);
    }
}
#undef func_8024D2A4
#undef func_8024D898

#define func_8024D384 func_8024D384__func_8024D2A4

struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_800179B0(void *);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_8024D384(s32 arg0, s32 arg1);
extern struct func_8024D2A4_Top D_801BBBF0;
extern u8 D_802541F4[];
extern u8 D_802542B0[];
extern s32 D_8025A2E0;

void func_8024D2A4(void *arg0, void *arg1) {
    if ((func_801C3D20(540.0f, -60.0f, 25.0f) != 0) || (func_801C3D20(560.0f, -100.0f, 25.0f) != 0)) {
        func_80133980(0x7E);
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2E0 = func_80005670(arg0, D_802541F4);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800179B0(D_802542B0);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024D384);
    }
}
#undef func_8024D384

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/D_80259830.s")


typedef struct func_8024D384_Struct {
    f32 v[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
    u8 pad[4];
} func_8024D384_Struct;

s32 func_800178E8();
void func_801C2F0C(s32, f32 *);
s32 func_801C2FF8();

#define func_8024D424 func_8024D424__decl91
extern u8 func_8024D424[];

void func_8024D384(s32 arg0, s32 arg1) {
    func_8024D384_Struct sp18;

    if ((func_801C2FF8() != 0) && (func_800178E8() != 0)) {
        sp18.v[0] = 593.099976f;
        sp18.v[1] = (-82.3000031f);
        sp18.v[2] = 0.0f;
        sp18.a = 0x1100;
        sp18.b = 0x0168003F;
        sp18.c = 1.0f;
        sp18.d = 0;
        sp18.e = 0xFA;
        func_801C2F0C(2, (f32 *)&sp18);
        func_800058DC(arg0, func_8024D424);
    }
}
#undef func_8024D424



#define D_801BBBF0 D_801BBBF0__func_8024D424
#define D_80259850 D_80259850__func_8024D424
#define D_80259A70 D_80259A70__func_8024D424
#define D_80259A74 D_80259A74__func_8024D424
#define D_80259A78 D_80259A78__func_8024D424
#define D_80259A7C D_80259A7C__func_8024D424
#define D_80259A80 D_80259A80__func_8024D424
#define func_8011AAF4 func_8011AAF4__func_8024D424
#define func_801C2F0C func_801C2F0C__func_8024D424
#define func_801C3044 func_801C3044__func_8024D424
#define func_8024D2A4_Sub func_8024D2A4_Sub__func_8024D424
#define func_8024D2A4_Top func_8024D2A4_Top__func_8024D424
#define func_8024D564 func_8024D564__func_8024D424
struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};
extern struct func_8024D2A4_Top D_801BBBF0;
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
void func_8024D564(void *arg0, void *arg1);
extern s32 func_801C2F0C(s32, void *);

typedef struct func_8024D424_Struct {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 pad[0x12];
} func_8024D424_Struct;

typedef struct func_8024D424_Struct2 {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_8024D424_Struct2;
extern s32 func_801C3044(void);
extern u8 D_80259850[];
extern f32 D_80259A70;
extern f32 D_80259A74;
extern f32 D_80259A78;
extern f32 D_80259A7C;
extern f32 D_80259A80;

void func_8024D424(void *arg0, s32 arg1) {
    func_8024D424_Struct sp50;

    if (func_801C3044() == 0) {
        sp50.a = 0x1100;
        sp50.b = 0x0348007A;
        sp50.d = 0x14;
        sp50.c = 10.0f;
        func_801C2F0C(5, (f32 *)&sp50);
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1E8 = D_80259A70;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1EC = -117.0f;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F0 = D_80259A74;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F4 = D_80259A78;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F8 = D_80259A7C;
        ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1FC = D_80259A80;
        func_8011AAF4(D_80259850, 0x14B, arg0, 0, 1, 0.0f,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1E8,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1EC,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F0, 0.0f,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F4,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1F8,
                      ((func_8024D424_Struct2 *)&D_801BBBF0)->unk1FC, 0.0f, 35.0f, -1, -1);
        func_80133980(0x73);
        func_800058DC(arg0, func_8024D564);
    }
}
#undef D_801BBBF0
#undef D_80259850
#undef D_80259A70
#undef D_80259A74
#undef D_80259A78
#undef D_80259A7C
#undef D_80259A80
#undef func_8011AAF4
#undef func_801C2F0C
#undef func_801C3044
#undef func_8024D2A4_Sub
#undef func_8024D2A4_Top
#undef func_8024D564


struct func_8024D564_Inner {
    u8 pad[0x12];
    s16 unk12;
};
struct func_8024D564_Struct {
    u8 pad[0x2C];
    struct func_8024D564_Inner *unk2C;
};
extern s16 func_801FD284(s16, s32, s32);
extern void func_8024D5DC();
extern struct func_8024D564_Struct *D_801BBCD0;

void func_8024D564(void *arg0, void *arg1) {
    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, 0, 0x3D4CCCCD);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024D5DC);
    }
}


/* hh-block asm/nonmatchings/file015/8024D230/_mrg_keep_519c25405a791762.s {"functions":["func_8024D5DC"],"rodata":[[".rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259850"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259A70"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259A74"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259A78"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259A7C"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D424.s","D_80259A80"],[".rodata","asm/nonmatchings/file015/8024D230/func_8024D5DC.s","D_80259890"],[".rodata","asm/nonmatchings/file015/8024D230/func_8024D5DC.s","D_802598D0"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D5DC.s","D_80259A88"],[".late_rodata","asm/nonmatchings/file015/8024D230/func_8024D5DC.s","D_80259A90"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/_mrg_keep_519c25405a791762.s")


void func_8024D898(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024DA04 func_8024DA04__func_8024D8A4
extern s32 D_8025A2E4;
void func_8024DA04(void *arg0, s32 arg1);

struct func_8024D8A4_Sub {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad3[8];
    void *unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};

struct func_8024D8A4_Top {
    u8 pad[0x30];
    struct func_8024D8A4_Sub *unk30;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern s32 func_8015105C(s32);
struct func_8024D8A4_Words {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
};

extern struct func_8024D8A4_Words D_80164F40;
extern u8 D_80254260[];

void func_8024D8A4(s32 arg0, struct func_8024D8A4_Top **arg1) {
    struct func_8024D8A4_Words sp20;

    sp20 = D_80164F40;
    sp20.w1 = 0x80000C00;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 1);
    (*arg1)->unk30->unk30 = D_80254260;
    (*arg1)->unk30->unk24 = 0x100;
    (*arg1)->unk30->unk4 = -600.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = -20.0f;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    D_8025A2E4 = func_8015105C(0x30);
    func_800058DC((void *) arg0, (void *) func_8024DA04);
}
#undef func_8024DA04

#define func_8024DA8C func_8024DA8C__func_8024DA04
/* context.h declaration lines this function uses, needed before the file's own declarations. */
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_8024DA8C();

extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern u8 D_80254208[];

void func_8024DA04(void *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2E4) != 0) {
        func_801512CC(D_8025A2E4, 0x4413B333, 0x43B90000, 0x42DD6666);
        func_80151430(D_8025A2E4, 0x1000);
        func_8015115C(D_8025A2E4, D_80254208);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, &func_8024DA8C);
    }
}
#undef func_8024DA8C


struct func_8024DA8C_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_801511C4(s32, void *, s32);
extern void func_8024DB10();
extern u8 D_80254214[];

void func_8024DA8C(struct func_8024DA8C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_801511C4(D_8025A2E4, D_80254214, 0x14);
        func_801512CC(D_8025A2E4, 0x4413B333, 0xC3020000, 0x42DD6666);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DB10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DB10.s")

#define func_8024DDA0 func_8024DDA0__func_8024DD24

typedef struct func_8024DD24_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DD24_Struct;

extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern void func_8024DDA0();

void func_8024DD24(func_8024DD24_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 cond;
  func_8024DD24_Struct *new_var;
  new_var = arg0;
  temp_v0 = new_var->unk90;
  cond = (0, temp_v0 >= 0x17);
  arg0->unk90 = temp_v0 - -1;
  temp_v0 = 0xFF;
  if (cond != 0)
  {
    D_80089354 = 0;
    func_8001E978(arg0, temp_v0, temp_v0, temp_v0, 0x14, 0, 1, 0);
    arg0->unk90 = 0;
    func_800058DC(new_var, func_8024DDA0);
  }
}
#undef func_8024DDA0

/* hh-block asm/nonmatchings/file015/8024D230/_ro_func_8024DDA0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file015/8024D230/func_8024DDA0.s","D_802599A8"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/_ro_func_8024DDA0.s")

#define func_8024DF34 func_8024DF34__func_8024DDA0

typedef struct func_8024DDA0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DDA0_Struct;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024DF34_Struct;
void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1);
extern u8 D_802599A8[];

void func_8024DDA0(func_8024DDA0_Struct *arg0, s32 arg1) {
    u8 *b;
    f32 *f;
    s32 t;

    if (arg0->unk90++ >= 0x19) {
        b = (u8 *)&D_801BBBF0;
        f = (f32 *)&D_801BBBF0;
        b[0xF20] = 0x75;
        b[0xF21] = 0x6C;
        b[0xF22] = 0x40;
        b[0xF23] = 0xFF;
        b[0xF24] = 0xB0;
        b[0xF25] = 0x80;
        b[0xF26] = 0;
        ((s8 *)b)[0xF27] = 0x40;
        b[0xF28] = 0;
        f[0x1E8 / 4] = 593.599976f;
        f[0x1EC / 4] = -120.0f;
        f[0x1F0 / 4] = 71.0f;
        f[0x1F4 / 4] = 584.099976f;
        f[0x1F8 / 4] = (-120.400002f);
        f[0x1FC / 4] = 106.800003f;
        func_8011AAF4(D_802599A8, 0x26B, arg0, 0, 1, 0.0f, f[0x1E8 / 4], f[0x1EC / 4], f[0x1F0 / 4], 0.0f, f[0x1F4 / 4], f[0x1F8 / 4], f[0x1FC / 4], 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DF34);
    }
}
#undef func_8024DF34


struct func_8024DF34_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8024DFA4();
extern u8 D_802545D4[];
extern u8 D_8025422C[];

void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1C) {
        func_800179B0(D_802545D4);
        func_8015115C(D_8025A2E4, D_8025422C);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DFA4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DFA4.s")

#define func_8024E324 func_8024E324__func_8024E2BC

typedef struct func_8024E2BC_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024E2BC_Struct;

extern u8 D_80254250[];
extern void func_8024E324();
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);

void func_8024E2BC(func_8024E2BC_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2E4, 0x71);
    if (func_80151790(D_8025A2E4) == 0) {
        func_8015115C(D_8025A2E4, D_80254250);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024E324);
    }
}
#undef func_8024E324

#define func_8024E3B0 func_8024E3B0__func_8024E324

struct func_8024E324_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_80005700(void *);
extern void func_80151114(s32, void *);
extern s32 func_80151478(s32);
extern void func_8024E3B0(s32, s32);

void func_8024E324(struct func_8024E324_Struct *volatile arg0, s32 arg1) {
    struct func_8024E324_Struct *ptr;

    if (func_80151478(D_8025A2E4) < 0x1800) {
        func_801514B0(D_8025A2E4, 0x71);
    }
    ptr = arg0;
    if (ptr->unk90++ >= 0x3C) {
        func_80151114(D_8025A2E4, ptr);
        func_80133980(0x77);
        func_80005700(arg0);
        func_800058DC(arg0, (void *)func_8024E3B0);
    }
}
#undef func_8024E3B0


void func_8024E3B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

