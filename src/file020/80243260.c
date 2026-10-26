#include "common.h"

extern f32 D_80246BE8;
extern f32 D_80246BEC;
extern f32 D_80246BF0;
extern f32 D_80246BF4;
extern f32 D_80246BF8;
extern f32 D_80246BFC;
extern f32 D_80246C00;
extern f32 D_80246C04;
extern f32 D_80246C08;
extern f32 D_80246C0C;
extern f32 D_80246C10;
extern f32 D_80246C14;
extern f32 D_80246C18;
extern f32 D_80246C1C;
extern f32 D_80246C20;
extern f32 D_80246C24;
extern f32 D_80246C28;
extern f64 D_80246BD8;
extern f64 D_80246BE0;
extern f64 D_80246C48;
extern f64 D_80246C50;
extern s16 D_80244738[];
extern s32 D_801BBCCC;
extern s32 D_80246C70;
extern s32 func_8000C3B0(void *);
extern s32 func_800178E8(void);
extern s32 func_80017910(void);
extern s32 func_80020744(s32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_801270C0(s32);
extern s32 func_8012C6B4();
extern s32 func_80133A24();
extern s32 func_80150584(void);
extern s32 func_8015105C(s32);
extern s32 func_80151790(s32);
extern s32 func_801517CC(s32);
extern s32 func_801C2FF8(void);
extern s32 func_801C3044(void);
extern s32 func_801C3D20(f32, f32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern u8 D_801BBF90[];
extern u8 D_801BBFAC[];
extern u8 D_801BC3D8[];
extern u8 D_80244430[];
extern u8 D_8024443C[];
extern u8 D_80244448[];
extern u8 D_80244454[];
extern u8 D_80244460[];
extern u8 D_802444D0[];
extern u8 D_80246B18[];
extern u8 D_80246B64[];
#define func_80243F38 func_80243F38__decl
extern u8 func_80243F38[];
extern void *D_801BBCD8;
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801268CC(s32);
extern void func_80126968(void);
extern void func_80126EAC(void);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80133980(s32);
extern void func_8015115C(s32, void *);
extern void func_8015122C(s32, void *, s32);
extern void func_801512CC(s32, s32, f32, s32);
extern void func_80151430(s32, s32);
extern void func_801514B0(s32, s32);
extern void func_801C2F0C(s32, s16 *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FA2E0(void);
extern void func_801FBB30();
extern void func_802432C0(void *arg0, void *arg1);
extern void func_8024332C();
extern void func_802435AC(s32 arg0, s32 arg1);
extern void func_8024363C(void *arg0, s32 arg1);
extern void func_80243724();
extern void func_802437F0();
extern void func_802439B4();
extern void func_80243A74(s32 arg0, s32 arg1);
extern void func_80243B04(s32 arg0, s32 arg1);
extern void func_80243B3C();
extern void func_80243B88();
extern void func_80243C84();
extern void func_80243D1C(s32 arg0, s32 arg1);
extern void func_80243D88(s32 arg0, s32 arg1);
extern void func_802440D8();
extern void func_80244248(s32 arg0, s32 arg1);
extern void func_8037BB4C();

#define func_802432C0 func_802432C0__func_80243260
#define func_802435AC func_802435AC__func_80243260
void func_802432C0(void *arg0, void *arg1);
void func_802435AC(s32 arg0, s32 arg1);

struct func_80243260_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

void func_80243260(struct func_80243260_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0;
    if (func_80133A24(0x16F) == 0) {
        func_800058DC(arg0, &func_802432C0);
        return;
    }
    func_800058DC(arg0, &func_802435AC);
}
#undef func_802432C0
#undef func_802435AC

#define func_8024332C func_8024332C__func_802432C0

extern void func_8024332C();

void func_802432C0(void *arg0, void *arg1) {
    if (func_801C3D20(410.0f, 660.0f, 40.0f) != 0) {
        ((s16 *)arg0)[0x3C / 2] = 0;
        ((s16 *)arg0)[0x90 / 2] = 1;
        ((s16 *)arg0)[0x92 / 2] = 8;
        func_80020718(0x155);
        func_800058DC(arg0, func_8024332C);
    }
}
#undef func_8024332C

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/D_80246B00.s")

extern struct func_80243D1C_Struct D_801BBBF0;
typedef struct func_80243D1C_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x434 - 6];
    u8 unk434;
} func_80243D1C_Struct;

struct func_8024332C_Sub2 { u8 pad[4]; f32 unk4; };
struct func_8024332C_Sub { u8 pad[0x2C]; struct func_8024332C_Sub2 *unk2C; };
struct func_8024332C_Glob { u8 pad[0x1D]; u8 unk1D; u8 pad2[0xC2]; struct func_8024332C_Sub *unkE0; };
struct func_8024332C_Struct { u8 pad[0x3C]; u16 unk3C; u8 pad2[0x52]; u16 unk90; u16 unk92; };


void func_8024332C(struct func_8024332C_Struct *arg0, s32 arg1) {
    s32 t;
    t = arg0->unk3C++;
    if (t >= 0x3C && !(t % 2)) {
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (!(t % 4)) {
        arg0->unk92 = arg0->unk92 + 1;
    }
    if ((t % arg0->unk90) == 0) {
        func_80129FB8(350.0f, (f32)(((f64)(func_8012C6B4(0x12C) - 0x96) / 10.0) + 25.0), (f32)(((f64)(func_8012C6B4(0xC8) - 0x64) / 10.0) + 750.0), 0.0f, 0.0f, -12.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xB4, -(s32)arg0->unk92, (f32)(((f64)func_8012C6B4(0x32) / 100.0) + 0.45), 0xB, 0);
    }
    if (t < 0x3C) {
        if (((struct func_8024332C_Glob *)&D_801BBBF0)->unkE0->unk2C->unk4 >= 320.0f && ((struct func_8024332C_Glob *)&D_801BBBF0)->unkE0->unk2C->unk4 < 360.0f) {
            func_8037BB4C(0x1000, 0x3E99999A, 0x3F4CCCCD, D_80244738[((struct func_8024332C_Glob *)&D_801BBBF0)->unk1D]);
        }
    }
    if (t >= 0x5A) {
        func_80020718(0x1A0);
        func_800058DC(arg0, func_802435AC);
    }
}


void func_802435AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_8024363C func_8024363C__func_802435B8
#define func_80243B04 func_80243B04__func_802435B8
void func_8024363C(void *arg0, s32 arg1);
extern void func_80243B04(s32 arg0, s32 arg1);
void func_80243B04(s32 arg0, s32 arg1);


void func_802435B8(void *arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x170) != 0) {
            func_800058DC(arg0, func_80243B04);
            return;
        }
        D_80246C70 = func_8015105C(0x4057);
        D_801BC3D8[0x3BA] = 1;
        func_800058DC(arg0, func_8024363C);
    }
}
#undef func_8024363C
#undef func_80243B04

#define func_802436C0 func_802436C0__func_8024363C
struct func_802436C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1);


void func_8024363C(void *arg0, s32 arg1) {
    if (func_801517CC(D_80246C70) != 0) {
        func_801512CC(D_80246C70, 0xC3A18CCD, 0.0, 0x43F2199A);
        func_80151430(D_80246C70, 0xD55);
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, &func_802436C0);
    }
}
#undef func_802436C0

#define func_80243724 func_80243724__func_802436C0



extern void func_80243724();

void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1) {
    if (func_80150584() == 0) {
        if (func_801C3D20(-200.0f, 650.0f, 40.0f) != 0) {
            func_80133A24(0x170);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80243724);
        }
    }
}
#undef func_80243724

#define func_802437F0 func_802437F0__func_80243724

extern void func_802437F0();

struct func_80243724_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_80243724_Sub2 {
    u8 pad[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
};

struct func_80243724_Sub {
    u8 pad[0x2C];
    struct func_80243724_Sub2 *unk2C;
};

void func_80243724(struct func_80243724_Struct *arg0, s32 arg1) {
    u16 temp_v0;
    struct func_80243724_Sub2 *temp_v0_2;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if ((s32) temp_v0 >= 2) {
        if (temp_v0 == 2) {
            func_801C3B2C(2);
            func_801C3B10(1);
        }
        temp_v0_2 = ((struct func_80243724_Sub *) D_801BBCD8)->unk2C;
        if (func_801C3DC8(arg0, temp_v0_2->unk30, temp_v0_2->unk34, temp_v0_2->unk38, (-217.5f), 15.3000002f, 628.700012f, 0.200000003f, 35.0f) == 0) {
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802437F0);
        }
    }
}
#undef func_802437F0

/* hh-block asm/nonmatchings/file020/80243260/_ro_func_802437F0.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file020/80243260/func_802437F0.s","D_80246B18"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/_ro_func_802437F0.s")

#define func_802438F8 func_802438F8__func_802437F0
typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;
void func_802438F8(func_802438F8_Struct *arg0, s32 arg1);


struct func_802437F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802437F0(struct func_802437F0_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x3C) {
        func_800179B0(D_802444D0);
        func_8011AAF4(D_80246B18, 0x1C2, (s32)arg0, 0, 1, 0.0f, (-301.600006f), 11.3999996f, 505.100006f, 0.0f, (-321.600006f), 12.5f, 482.200012f, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, func_802438F8);
    }
}
#undef func_802438F8

#define func_802439B4 func_802439B4__func_802438F8


extern void func_802439B4();

void func_802438F8(func_802438F8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_80151790(D_80246C70) == 0) {
        temp_v0 = arg0->unk3C;
        arg0->unk3C = temp_v0 + 1;
        if (temp_v0 == 0) {
            func_8015115C(D_80246C70, D_8024443C);
        }
    }
    if (func_80017910() != 0) {
        func_8015115C(D_80246C70, D_80244430);
        arg0->unk3C = 0;
    }
    if (func_800178E8() != 0) {
        func_8015122C(D_80246C70, D_80244448, 5);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802439B4);
    }
}
#undef func_802439B4

#define func_80243A74 func_80243A74__func_802439B4

void func_80243A74(s32 arg0, s32 arg1);

struct func_802439B4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802439B4(struct func_802439B4_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk3C++;
    if (temp == 0x3C) goto c3C;
    if (temp == 0x3D) goto end;
    if (temp == 0x87) goto c87;
    if (temp == 0xF0) goto cF0;
    if (temp != 0x10E) goto end;
    if (1) goto c10E;
c3C:
    func_8015115C(D_80246C70, D_80244454);
    func_801514B0(D_80246C70, -0x9C7);
    if (1) goto end;
c87:
    func_8015122C(D_80246C70, D_80244460, 0x14);
    if (1) goto end;
cF0:
    func_801FA2E0();
    if (1) goto end;
c10E:
    func_800058DC(arg0, (void *)func_80243A74);
end:
    ;
}
#undef func_80243A74

#define func_80243B04 func_80243B04__func_80243A74

extern void func_80243B04(s32 arg0, s32 arg1);

typedef struct func_80243A74_Sub {
    u8 pad0[0x4];
    f32 unk4;
} func_80243A74_Sub;

void func_80243A74(s32 arg0, s32 arg1)
{
  func_80243A74_Sub *temp_v0;
  if (func_801270C0(D_80246C70) != 0)
  {
    func_80126968();
    *((s16 *) (D_801BBF90 + 4)) = 0x170;
    func_801268CC(0);
    if (1)
    {
      func_80020744(10);
      ;
    }
    (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 = (*((func_80243A74_Sub **) (*((u8 **) ((u8 *) &D_801BBBF0 + 0xE0)) + 0x2C)))->unk4 - 40.0f;
    *((u8 *) &D_801BBBF0 + 0xBA2) = 0;
    func_800058DC((void *) arg0, (void *) func_80243B04);
  }
}
#undef func_80243B04


void func_80243B04(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80243B3C func_80243B3C__func_80243B10

extern void func_80243B3C();

void func_80243B10(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_80243B3C);
}
#undef func_80243B3C

#define func_80243B88 func_80243B88__func_80243B3C

extern void func_80243B88();

typedef struct func_80243B3C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80243B3C_Struct;


void func_80243B3C(func_80243B3C_Struct *arg0, void *arg1)
{
  s32 temp_v0;
  temp_v0 = arg0->unk3C;
  arg0->unk3C += 1;
  if ((temp_v0 >= 0x3C) != (((temp_v0 >= 0x3C) != 0) * 0))
  {
    D_801BBFAC[0x78] = 1;
    func_800058DC(arg0, func_80243B88);
  }
}
#undef func_80243B88

/* hh-block asm/nonmatchings/file020/80243260/_ro_func_80243B88.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file020/80243260/func_80243B88.s","D_80246B64"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/_ro_func_80243B88.s")

#define func_80243C84 func_80243C84__func_80243B88


extern void func_80243C84();

void func_80243B88(s32 arg0, s32 arg1) {
    if (func_801C3D20(-65.0f, 295.0f, 25.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_80246B64, 0x249, arg0, 0, 1, 0.0f, (-138.800003f), 17.2000008f, 370.200012f, 0.0f, (-43.7999992f), 28.7999992f, 271.299988f, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, func_80243C84);
    }
}
#undef func_80243C84

#define func_80243D1C func_80243D1C__func_80243C84
struct func_80243C84_Struct {
    f32 a, b, c;
    s16 d; s16 pad;
    s32 e;
    f32 f;
    s16 g, h, i;
};
void func_80243D1C(s32 arg0, s32 arg1);
void func_80243C84(s32 arg0, s32 arg1) {
    struct func_80243C84_Struct s;
    if (func_801C2FF8() != 0) {
        s.a = -42.0f;
        s.b = 272.0f;
        s.c = 0.0f;
        s.f = 1.0f;
        s.d = 0x1100;
        s.e = 0x0168003E;
        s.g = 0;
        s.h = 0x96;
        s.i = 0x1C00;
        func_801C2F0C(6, (s16 *)&s);
        func_800058DC((void *)arg0, func_80243D1C);
    }
}
#undef func_80243D1C

#define func_80243D88 func_80243D88__func_80243D1C


extern s32 func_8012FE50(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80243D88(s32 arg0, s32 arg1);

void func_80243D1C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801BBBF0.unk434 = 4;
        D_801BBBF0.unk4 = 0x48;
        func_8012FE50(9, D_801BBBF0.unk4, 1, 1, 1);
        func_800058DC(arg0, func_80243D88);
    }
}
#undef func_80243D88


void func_80243D88(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80243D94_Sub {
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
    u32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80243D94_Obj {
    u8 pad[0x30];
    struct func_80243D94_Sub *unk30;
};
struct func_80243D94_Arg {
    u8 pad[0x3C];
    s16 unk3C;
    u8 pad3E[0x56];
    f32 unk94;
};
struct func_80243D94_Vec { s32 a, b, c, d; };
extern struct func_80243D94_Vec D_80164F40;

void func_80243D94(struct func_80243D94_Arg *arg0, struct func_80243D94_Obj **arg1) {
    struct func_80243D94_Vec sp28;
    f32 t;

    if (D_801BBCCC != 0) {
        sp28 = D_80164F40;
        sp28.b = 0x80000600;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x294, 2);
        (*arg1)->unk30->unk24 |= 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk20 = 1.0f;
        t = (*arg1)->unk30->unk20;
        (*arg1)->unk30->unk1C = t;
        (*arg1)->unk30->unk18 = t;
        (*arg1)->unk30->unk4 = 0.0f;
        (*arg1)->unk30->unk8 = 20.0f;
        (*arg1)->unk30->unkC = 0.0f;
        (*arg1)->unk30->unk12 = 0;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        arg0->unk94 = 0.0f;
        func_801FBB30(&D_801BBBF0);
        func_80020718(0x1AD);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243F38);
    }
}

#undef func_80243F38
/* hh-block asm/nonmatchings/file020/80243260/_ro_func_80243F38.s {"functions":[],"rodata":[[".rodata","asm/nonmatchings/file020/80243260/func_80243F38.s","D_80246B9C"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/_ro_func_80243F38.s")

#define D_80246B9C D_80246B9C__func_80243F38
#define func_801C3BC8 func_801C3BC8__func_80243F38
#define func_801C3C3C func_801C3C3C__func_80243F38
#define func_80244074 func_80244074__func_80243F38
#define func_80243F38 func_80243F38_data
#undef func_80243F38

typedef struct func_80243F38_Sub2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80243F38_Sub2;

typedef struct func_80243F38_Sub {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x14];
    f32 unk44;
} func_80243F38_Sub;

typedef struct func_80243F38_Sub3 {
    u8 pad0[0x2C];
    func_80243F38_Sub2 *unk2C;
} func_80243F38_Sub3;

typedef struct func_80243F38_Struct {
    u8 pad0[0xDC];
    func_80243F38_Sub *unkDC;
    func_80243F38_Sub3 *unkE0;
} func_80243F38_Struct;
extern void func_801C3BC8();
void func_80244074(s32 arg0, s32 arg1);
extern void func_801C3C3C(s32);
extern u8 D_80246B9C[];

void func_80243F38(s32 arg0, s32 arg1) {
    func_801C3BC8();
    func_801C3C3C(0);
    ((func_80243F38_Struct *)&D_801BBBF0)->unkDC->unk2C &= ~0x40;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkDC->unk44 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk4 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk8 = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unkC = 0.0f;
    ((func_80243F38_Struct *)&D_801BBBF0)->unkE0->unk2C->unk12 = 0x1C00;
    func_801C3B2C(2);
    func_801C3B10(1);
    func_8011AAF4(D_80246B9C, 0x2C3, arg0, 0, 1, 0.0f, 1.10000002f, 10.6999998f, 19.7999992f, 0.0f, (-0.300000012f), 14.1000004f, 1.79999995f, 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, func_80244074);
}
#undef D_80246B9C
#undef func_801C3BC8
#undef func_801C3C3C
#undef func_80244074
#define func_80243F38 func_80243F38__decl

#define func_802440D8 func_802440D8__func_80244074

extern void func_802440D8();

typedef struct func_80244074_Struct {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
} func_80244074_Struct;

void func_80244074(s32 arg0, s32 arg1) {
    u8 pad2[0x8];
    u8 pad[0xC];
    func_80244074_Struct sp18;

    if (func_801C2FF8() != 0) {
        sp18.unk0 = 0x1100;
        sp18.unk4 = 0x01680041;
        sp18.unk8 = 2.0f;
        func_801C2F0C(4, &sp18.unk0);
        func_800058DC(arg0, func_802440D8);
    }
}
#undef func_802440D8

#define func_80244248 func_80244248__func_802440D8

struct func_802440D8_Struct {
    u8 pad[0x8];
    f32 unk8;
};
struct func_802440D8_Struct2 {
    u8 pad[0x30];
    struct func_802440D8_Struct *unk30;
};
struct func_802440D8_Struct3 {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
};

void func_80244248(s32 arg0, s32 arg1);

void func_802440D8(struct func_802440D8_Struct3 *arg0, struct func_802440D8_Struct2 **arg1) {
    s32 t;
    struct func_802440D8_Struct *p;

    t = arg0->unk3C++;
    if (t >= 0x1E) {
        if (t < 0x5A) {
            arg0->unk94 = arg0->unk94 - 0.008333333333333333;
        } else if (t >= 0xF0 && t < 0x12D) {
            arg0->unk94 = arg0->unk94 + 0.008333333333333333;
        }
    }
    if (t == 0x12C) {
        func_80020718(0x666);
        func_80020718(0x1AB);
        func_80020718(0xA);
        func_80133980(0x1A0);
        *(u16 *)((u8 *)&D_801BBBF0 + 6) = 0x21;
        D_801BBBF0.unk4 = 0x50;
        func_8012FE50(0x10, D_801BBBF0.unk4, 1, 1, 2);
        func_800058DC(arg0, func_80244248);
        return;
    }
    p = (*arg1)->unk30;
    p->unk8 = p->unk8 + arg0->unk94;
    p = (*arg1)->unk30;
    if (p->unk8 <= 10.0) {
        p->unk8 = p->unk8 + 20.0;
    }
}
#undef func_80244248


void func_80244248(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

