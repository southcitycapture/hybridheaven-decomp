#include "common.h"

extern void func_800058DC(void *, void *);
void func_802432C0(void *arg0, void *arg1);
void func_802435AC(s32 arg0, s32 arg1);
extern s32 func_80133A24();

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


extern void func_80020718(s32);
extern s32 func_801C3D20(f32, f32, f32);
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
extern f64 D_80246BD8;
extern f64 D_80246BE0;
extern s16 D_80244738[];
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern void func_8037BB4C();

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
        func_80129FB8(350.0f, (f32)(((f64)(func_8012C6B4(0x12C) - 0x96) / 10.0) + 25.0), (f32)(((f64)(func_8012C6B4(0xC8) - 0x64) / 10.0) + D_80246BD8), 0.0f, 0.0f, -12.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xB4, -(s32)arg0->unk92, (f32)(((f64)func_8012C6B4(0x32) / 100.0) + D_80246BE0), 0xB, 0);
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

extern s32 D_80246C70;
void func_8024363C(void *arg0, s32 arg1);
extern void func_80243B04(s32 arg0, s32 arg1);
void func_80243B04(s32 arg0, s32 arg1);

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern s32 func_8015105C(s32);
extern u8 D_801BC3D8[];

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

struct func_802436C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};
void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1);

extern u8 D_80244430[];
extern void func_8015115C(s32, void *);
extern s32 func_801517CC(s32);
extern void func_801512CC(s32, s32, f32, s32);
extern void func_80151430(s32, s32);

void func_8024363C(void *arg0, s32 arg1) {
    if (func_801517CC(D_80246C70) != 0) {
        func_801512CC(D_80246C70, 0xC3A18CCD, 0.0, 0x43F2199A);
        func_80151430(D_80246C70, 0xD55);
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, &func_802436C0);
    }
}



extern s32 func_80150584(void);
extern f32 D_80246BE8;
extern void func_80243724();

void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1) {
    if (func_80150584() == 0) {
        if (func_801C3D20(-200.0f, D_80246BE8, 40.0f) != 0) {
            func_80133A24(0x170);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80243724);
        }
    }
}


extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern void func_802437F0();
extern void *D_801BBCD8;
extern f32 D_80246BEC;
extern f32 D_80246BF0;
extern f32 D_80246BF4;
extern f32 D_80246BF8;

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
        if (func_801C3DC8(arg0, temp_v0_2->unk30, temp_v0_2->unk34, temp_v0_2->unk38, D_80246BEC, D_80246BF0, D_80246BF4, D_80246BF8, 35.0f) == 0) {
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802437F0);
        }
    }
}

typedef struct func_802438F8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438F8_Struct;
void func_802438F8(func_802438F8_Struct *arg0, s32 arg1);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern void func_800179B0(void *);
extern u8 D_802444D0[];
extern u8 D_80246B18[];
extern f32 D_80246BFC;
extern f32 D_80246C00;
extern f32 D_80246C04;
extern f32 D_80246C08;
extern f32 D_80246C0C;

struct func_802437F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802437F0(struct func_802437F0_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x3C) {
        func_800179B0(D_802444D0);
        func_8011AAF4(D_80246B18, 0x1C2, (s32)arg0, 0, 1, 0.0f, D_80246BFC, D_80246C00, D_80246C04, 0.0f, D_80246C08, 12.5f, D_80246C0C, 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_8015115C(D_80246C70, D_80244430);
        func_800058DC(arg0, func_802438F8);
    }
}



extern s32 func_800178E8(void);
extern s32 func_80017910(void);
extern void func_8015122C(s32, void *, s32);
extern s32 func_80151790(s32);
extern u8 D_8024443C[];
extern u8 D_80244448[];
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

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_802439B4.s")


extern u8 D_801BBF90[];
extern void func_80126968(void);
extern void func_801268CC(s32);
extern s32 func_80020744(s32);
extern s32 func_801270C0(s32);

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


void func_80243B04(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


extern void func_80243B3C();

void func_80243B10(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_80243B3C);
}


extern void func_80243B88();

typedef struct func_80243B3C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80243B3C_Struct;

extern u8 D_801BBFAC[];

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


extern void func_801FBB30();
extern u8 D_80246B64[];
extern f32 D_80246C10;
extern f32 D_80246C14;
extern f32 D_80246C18;
extern f32 D_80246C1C;
extern f32 D_80246C20;
extern f32 D_80246C24;
extern f32 D_80246C28;
extern void func_80243C84();

void func_80243B88(s32 arg0, s32 arg1) {
    if (func_801C3D20(-65.0f, D_80246C10, 25.0f) != 0) {
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_80246B64, 0x249, arg0, 0, 1, 0.0f, D_80246C14, D_80246C18, D_80246C1C, 0.0f, D_80246C20, D_80246C24, D_80246C28, 0.0f, 35.0f, -1, -1);
        func_800058DC((void *)arg0, func_80243C84);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243C84.s")



extern s32 func_801C3044(void);
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
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8000C3B0(void *);
extern u8 func_80243F38[];
extern struct func_80243D94_Vec D_80164F40;
extern s32 D_801BBCCC;

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

#pragma GLOBAL_ASM("asm/nonmatchings/file020/80243260/func_80243F38.s")


extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C2FF8(void);
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
extern void func_80133980(s32);
extern f64 D_80246C48;
extern f64 D_80246C50;
void func_80244248(s32 arg0, s32 arg1);

void func_802440D8(struct func_802440D8_Struct3 *arg0, struct func_802440D8_Struct2 **arg1) {
    s32 t;
    struct func_802440D8_Struct *p;

    t = arg0->unk3C++;
    if (t >= 0x1E) {
        if (t < 0x5A) {
            arg0->unk94 = arg0->unk94 - D_80246C48;
        } else if (t >= 0xF0 && t < 0x12D) {
            arg0->unk94 = arg0->unk94 + D_80246C50;
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


void func_80244248(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

