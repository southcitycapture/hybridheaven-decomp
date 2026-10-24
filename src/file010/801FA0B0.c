#include "common.h"

extern f32 D_80218E08;
extern f32 D_80218E0C;
extern f32 D_80218E28;
extern f32 D_80218E2C;
extern f32 D_80218E40;
extern f32 func_8001EAD0(s16);
extern f64 D_80218E10;
extern f64 D_80218E18;
extern f64 D_80218E20;
extern f64 D_80218E30;
extern f64 D_80218E48;
extern f64 D_80218E50;
extern s16 D_8021B0D2;
extern s32 D_80116E80(s32);
extern s32 D_801BBC2C;
extern s32 D_801BBCDC;
extern s32 D_802170B0;
extern s32 D_802170B4;
extern s32 D_802170B8;
extern s32 D_802170BC;
extern s32 D_802170C0;
extern s32 func_800058DC(s32, void *);
extern s32 func_8000C3B0(void *);
extern s32 func_80126A0C(void *, s32, s32);
extern s32 func_80126B14(void *, void *, u16, s32);
extern s32 func_80126CC0(void *, void *);
extern s32 func_80133A24(s32);                             /* extern */
extern s32 func_801F546C(void);
extern s32 func_801FA13C(u16);
extern s32 func_801FA248(void *, s32);
extern s32 func_801FA624();
extern s8 D_8021B0D0;
extern u8 D_801BBBF0[];
extern u8 D_80216F30[];
extern u8 D_80216F98[];
extern u8 D_80217014[];
extern void func_80005670(void *, void *);
extern void func_80005700(s32);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80116E80(s32);
extern void func_8012636C(void *, s32);
extern void func_80126E88(u16, void *);
extern void func_80126EAC(void);
extern void func_8012C784(void *, s32, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D8C8(void *, s32, s32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_80145310(s32, s32, s32);
extern void func_80145390(s32);
extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern void func_80146208(void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_801FA0B0(u16, u8);
extern void func_801FA864(s32 arg0, s32 arg1);
extern void func_801FA870(s32 arg0, s32 arg1);
extern void func_801FAAB8();
extern void func_801FABC8();
extern void func_801FAE08();
extern void func_801FAE34();
extern void func_801FB13C();
extern void func_801FB488();



void func_801FA0B0(u16 arg0, u8 arg1) {
    u8 i;

    arg0++;
    for (i = 0; i < 5; ) {
        if (arg1 & 1) {
            func_80133980(arg0);
        } else {
            func_801339D0(arg0);
        }
        i++;
        arg1 = (s32)arg1 >> 1;
        arg0++;
    }
}



s32 func_801FA13C(u16 arg0) {
    u8 var_s1;
    u8 var_s2;
    u8 var_s3;

    var_s1 = 1;
    var_s3 = 0;
    arg0 = arg0 + 1;
    for (var_s2 = 0; var_s2 < 5; var_s2++) {
        if (func_80133A24(arg0) != 0) {
            var_s3 += var_s1;
        }
        var_s1 <<= 1;
        arg0++;
    }
    return var_s3;
}



s32 func_801FA1C4(void) {
    s32 temp_v0;
    u8 var_a1;

    if (func_801F546C() != 0) {
        temp_v0 = func_801FA13C((u16) D_8021B0D2);
        var_a1 = temp_v0;
        if (temp_v0 > 0) {
            var_a1 = temp_v0;
            var_a1--;
        }
        func_801FA0B0((u16) D_8021B0D2, var_a1);
        return 1;
    }
    return 0;
}



struct func_801FA220_Struct_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_801FA220_Struct {
    u8 pad[0x38];
    struct func_801FA220_Struct_Inner *unk38;
};

void func_801FA220(struct func_801FA220_Struct *arg0) {
    D_8021B0D2 = arg0->unk38->unk10 >> 0x10;
    D_8021B0D0 = arg0->unk38->unk10 & 0xFF;
}


struct func_801FA248_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_801FA248_Struct {
    u8 pad[0x10];
    struct func_801FA248_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FA248_StructInner *unk30;
};

s32 func_801FA248(void *arg0, s32 arg1) {
    void *data;
    s16 temp;
    s32 result;

    *(s32 *)((u8 *)&data + 8) = arg1;
    arg1 &= 0xFF;
    result = 1;
    if (arg0 != NULL) {
        do {
            temp = ((struct func_801FA248_Struct *)arg0)->unk30->unk4B;
            temp = temp - arg1 * 1;
            if (temp < 0) {
                ((struct func_801FA248_Struct *)arg0)->unk22 = 0;
                result = 0;
            }
            ((struct func_801FA248_Struct *)arg0)->unk30->unk4B = temp;
            arg0 = ((struct func_801FA248_Struct *)arg0)->unk10;
        } while (arg0 != NULL);
    }
    return result;
}


struct func_801FA29C_Inner {
    u8 pad0[0xB];
    u8 unkB;
};

struct func_801FA29C_Struct {
    u8 pad0[0x10];
    struct func_801FA29C_Struct *unk10;
    u8 pad14[0x22 - 0x14];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FA29C_Inner *unk30;
};

void func_801FA29C(struct func_801FA29C_Struct *arg0) {
    s16 temp_v0;

    if (arg0 != NULL) {
        do {
            temp_v0 = arg0->unk30->unkB - 0x11;
            if (temp_v0 < 0) {
                arg0->unk22 = 0;
            }
            arg0->unk30->unkB = (u8) temp_v0;
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}


struct func_801FA2E0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801FA2E0_Struct D_80217028;
s32 func_8012C4D0(s32, struct func_801FA2E0_Struct, s32);

s32 func_801FA2E0(void) {
    if (D_802170B4 == 0) {
        D_802170B4 = func_8012C4D0(D_801BBC2C, D_80217028, 8);
        if (D_802170B4 != 0) {
            return 1;
        }
    }
    return 0;
}


struct func_801FA374_Struct {
    u8 pad0[0xAF];
    u8 unkAF;
};

extern struct func_801FA2E0_Struct D_8021703C;

s32 func_801FA374(u8 arg0)
{
  s32 temp_v0;
  s32 *temp_t0;
  s32 *new_var;
  new_var = &D_802170B4;
  temp_t0 = new_var;
  if ((*new_var) == 0)
  {
    temp_v0 = (*(&D_802170B4) = func_8012C4D0(0, D_8021703C, 8));
    if (temp_v0 != 0)
    {
      ((struct func_801FA374_Struct *) temp_v0)->unkAF = arg0;
      return 1;
    }
  }
  return 0;
}


extern struct func_801FA2E0_Struct D_80217064;
extern struct func_801FA2E0_Struct D_80217078;

struct func_801FA410_Struct {
    u8 pad0[0x72];
    u16 unk72;
    u8 pad74[0xAC - 0x74];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA410(struct func_801FA410_Struct *arg0) {
    if (arg0 != NULL) {
        D_802170B8 = func_8012C4D0(0, D_80217064, 1);
        if (D_802170B8 != 0) {
            ((struct func_801FA410_Struct *)D_802170B8)->unk72 = arg0->unk72;
            arg0->unkAC = D_802170B8;
        }
        D_802170BC = func_8012C4D0(0, D_80217078, 1);
        if (D_802170BC != 0) {
            ((struct func_801FA410_Struct *)D_802170BC)->unk72 = arg0->unk72;
            arg0->unkB0 = D_802170BC;
        }
        return 1;
    }
    return 0;
}



struct func_801FA51C_Struct {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA51C(struct func_801FA51C_Struct *arg0) {
    if (arg0 != NULL) {
        func_800058DC(arg0->unkAC, (void *) func_801FAAB8);
        func_800058DC(arg0->unkB0, (void *) func_801FAE08);
        return 1;
    }
    return 0;
}



struct func_801FA570_Struct {
    u8 pad0[0xAC];
    s32 unkAC;
    s32 unkB0;
};

s32 func_801FA570(struct func_801FA570_Struct *arg0) {
    if (arg0 != NULL) {
        func_800058DC(arg0->unkAC, (void *) func_801FABC8);
        func_800058DC(arg0->unkB0, (void *) func_801FAE34);
        return 1;
    }
    return 0;
}



s32 func_801FA5C4(void) {
    if (D_802170C0 != 0) {
        func_800058DC(D_802170C0, func_801FB13C);
        return 1;
    }
    return 0;
}


typedef struct func_801FA600_Struct {
    u8 pad[0x38];
    struct func_801FA600_Struct2 *unk38;
} func_801FA600_Struct;

typedef struct func_801FA600_Struct2 {
    u8 pad[0x10];
    u32 unk10;
} func_801FA600_Struct2;

s32 func_801FA600(func_801FA600_Struct *arg0) {
    if (arg0 != NULL) {
        return (arg0->unk38->unk10 >> 0x18) & 0xFF;
    }
    return 0;
}


struct func_801FA624_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    u16 unk94;
};

extern struct func_801FA2E0_Struct D_8021708C;

s32 func_801FA624(s32 arg0) {
    struct func_801FA624_Struct *temp_v0;

    temp_v0 = (struct func_801FA624_Struct *) func_8012C4D0(D_801BBC2C, D_8021708C, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk3C = 5;
        temp_v0->unk94 = *(u16 *) ((u8 *) &arg0 + 2);
        return 1;
    }
    return 0;
}


struct func_801FA6B0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    u16 unk94;
};


void func_801FA6B0(struct func_801FA6B0_Struct *arg0, s32 arg1) {
    if (--arg0->unk3C == 0) {
        func_80126E88(arg0->unk94, arg0);
        func_80005700((s32)arg0);
    }
}


struct func_801FA6FC_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_801FA6FC_Obj {
    u8 pad0[0x10];
    s32 unk10;
};
struct func_801FA6FC_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801FA6FC_Outer {
    u8 pad0[0x30];
    struct func_801FA6FC_Inner *unk30;
};

extern struct func_801FA6FC_Local D_80164F40;

void func_801FA6FC(struct func_801FA6FC_Obj *arg0, struct func_801FA6FC_Outer **arg1) {
    struct func_801FA6FC_Local sp28;
    f32 fv;
    s32 r;

    sp28 = D_80164F40;
    D_802170B0 = (s32) arg0;
    arg0->unk10 = 2;
    if (func_80126CC0(arg0, &func_801FA870) != 0) {
        func_8001F74C(arg0);
        sp28.unk4 = 0x80000C00;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, 0);
        (*arg1)->unk30->unk24 = 0x15;
        r = func_8000C3B0(*arg1);
        fv = D_80218E08;
        (*arg1)->unk30->unk30 = r;
        (*arg1)->unk30->unk18 = fv;
        (*arg1)->unk30->unk1C = fv;
        (*arg1)->unk30->unk20 = fv;
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        func_800058DC((s32) arg0, &func_801FA864);
    }
}


void func_801FA864(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_801FA870(s32 arg0, s32 arg1) {
    D_802170B0 = 0;
    func_800058DC(arg0, func_80126EAC);
}


struct func_801FA8A0_Struct4 { s32 a, b, c, d; };
struct func_801FA8A0_Q {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; s16 unk10; s16 unk12; s16 unk14; u8 pad16[2];
    f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30; u8 pad34[0x4B - 0x34]; u8 unk4B;
};
struct func_801FA8A0_Outer {
    u8 pad0[0x30]; struct func_801FA8A0_Q *unk30;
};
struct func_801FA8A0_H {
    u8 pad0[0x30]; struct func_801FA8A0_Q *unk30;
};
struct func_801FA8A0_G { u8 pad0[0x24]; struct func_801FA8A0_H *unk24; };
struct func_801FA8A0_Obj {
    u8 pad0[0x72]; u16 unk72; u8 pad74[0x92 - 0x74]; s16 unk92;
};

struct func_801FAAA4_Struct;
void func_801FAAA4(struct func_801FAAA4_Struct *arg0, s32 arg1);

void func_801FA8A0(struct func_801FA8A0_Obj *arg0, struct func_801FA8A0_Outer **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp28;

    *(struct func_801FA6FC_Local *)&sp28 = D_80164F40;
    if (func_80126B14(arg0, func_80126EAC,arg0->unk72, 0x227) != 0) {
        func_8001F74C(arg0);
        sp28.a[1] =0x80000600;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C((s32)arg0, 0, 0x227, 2);
        func_8012D8C8(arg0, 0x227, 1, 0.1f, 1, 0);
        k = D_80218E0C;
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32)D_80216F30 | 0x40000000;
        (*arg1)->unk30->unk4 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk8;
        (*arg1)->unk30->unkC = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = 0.0f;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk10 = 0;
        (*arg1)->unk30->unk12 = ((struct func_801FA8A0_G *)D_802170B0)->unk24->unk30->unk12;
        (*arg1)->unk30->unk14 = 0;
        func_80145310((s32)*arg1, 3, 3);
        (*arg1)->unk30->unk4B = 0x96;
        arg0->unk92 = -0x800;
        func_80145390(0x1800);
        func_800058DC((s32)arg0, func_801FAAA4);
    }
}


struct func_801FAAA4_Struct_Inner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801FAAA4_Struct {
    u8 pad0[0x24];
    struct func_801FAAA4_Struct_Inner *unk24;
    u8 pad1[0x3C - 0x28];
    u16 unk3C;
};

void func_801FAAA4(struct func_801FAAA4_Struct *arg0, s32 arg1) {
    arg0->unk24->unk22 = 0;
    arg0->unk3C = 0;
}


struct func_801FAAB8_StructInner {
    u8 pad[0x22];
    u8 unk22;
};
struct func_801FAAB8_Struct {
    u8 pad[0x24];
    struct func_801FAAB8_StructInner *unk24;
    u8 pad28[0x3C - 0x28];
    u16 unk3C;
    u8 pad3E[0x92 - 0x3E];
    s16 unk92;
};
struct func_801FAAB8_StructSub {
    u8 pad[0x1C];
    f32 unk1C;
};
struct func_801FAAB8_StructObj {
    u8 pad[0x30];
    struct func_801FAAB8_StructSub *unk30;
};
struct func_801FAB94_Struct;
extern void func_801FAB94(s32, struct func_801FAB94_Struct **);

void func_801FAAB8(struct func_801FAAB8_Struct *arg0, struct func_801FAAB8_StructObj **arg1) {
    arg0->unk24->unk22 = 1;
    if (arg0->unk3C++ < 0x10) {
        func_801453CC(*arg1, 0x100, 0, 3, 1, 3, 5);
    }
    (*arg1)->unk30->unk1C = (f32) ((f64) (func_8001EAD0(arg0->unk92) + 1.0f) * D_80218E10);
    arg0->unk92 = arg0->unk92 + 0x100;
    if (arg0->unk92 >= 0x1001) {
        func_800058DC((s32) arg0, func_801FAB94);
    }
}


struct func_801FAB94_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_801FAB94_Struct {
    u8 pad[0x30];
    struct func_801FAB94_Inner *unk30;
};

void func_801FAB94(s32 arg0, struct func_801FAB94_Struct **arg1) {
    s16 var_v0;

    var_v0 = (*arg1)->unk30->unk4B - 0xA;
    if (var_v0 < 0x64) {
        var_v0 = 0x64;
    }
    (*arg1)->unk30->unk4B = (u8) var_v0;
}



struct func_801FABC8_Sub {
    u8 pad0[0x1C];
    f32 unk1C;
};

struct func_801FABC8_Obj {
    u8 pad0[0x30];
    struct func_801FABC8_Sub *unk30;
};

void func_801FABC8(s32 arg0, struct func_801FABC8_Obj **arg1) {
    struct func_801FABC8_Sub *temp_v0;
    f32 temp_fv0;

    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk1C;
    temp_fv0 = (f32) ((f64) temp_fv0 * D_80218E18);
    if ((f64) temp_fv0 < D_80218E20) {
        D_802170B8 = 0;
        func_80005700(arg0);
        func_801FA624(0x12C);
        return;
    }
    temp_v0->unk1C = temp_fv0;
}


struct func_801FAC3C_B {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x4B - 0x34];
    u8 unk4B;
};
struct func_801FAC3C_A {
    u8 pad0[0x24];
    struct func_801FAC3C_A *unk24;
    u8 pad28[8];
    struct func_801FAC3C_B *unk30;
    u8 pad34[0x72 - 0x34];
    u16 unk72;
};
struct func_801FADFC_Struct;
void func_801FADFC(struct func_801FADFC_Struct *arg0, s32 arg1);

void func_801FAC3C(struct func_801FAC3C_A *arg0, struct func_801FAC3C_A **arg1) {
    register f32 k;
    struct { s32 a[3]; } sp20;

    *(struct func_801FA6FC_Local *)&sp20 = D_80164F40;
    if (func_80126B14(arg0, func_80126EAC, arg0->unk72, 0x227) != 0) {
        func_8001F74C(arg0);
        sp20.a[1] = 0x800002FF;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C((s32)arg0, 0, 0x227, 2);
        k = D_80218E28;
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (u32)D_80216F98 | 0x40000000;
        (*arg1)->unk30->unk4 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk8;
        (*arg1)->unk30->unkC = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = D_80218E2C;
        (*arg1)->unk30->unk20 = k;
        (*arg1)->unk30->unk10 = 0;
        (*arg1)->unk30->unk12 = ((struct func_801FAC3C_A *)D_802170B0)->unk24->unk30->unk12;
        (*arg1)->unk30->unk14 = 0;
        (*arg1)->unk30->unk4B = 0;
        func_800058DC((s32)arg0, func_801FADFC);
    }
}


struct func_801FADFC_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
};

void func_801FADFC(struct func_801FADFC_Struct *arg0, s32 arg1) {
    arg0->unk3C = 0;
}



struct func_801FAE08_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_801FAE08_Struct {
    u8 pad[0x30];
    struct func_801FAE08_Inner *unk30;
};

void func_801FAE08(s32 arg0, struct func_801FAE08_Struct **arg1) {
    struct func_801FAE08_Inner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80218E30);
}



void func_801FAE34(s32 arg0, s32 arg1) {
    D_802170BC = 0;
    func_80005700(arg0);
    func_801FA624(0x12C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FA0B0/func_801FAE64.s")


struct func_801FB100_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};


void func_801FB100(struct func_801FB100_Struct *arg0, s32 arg1) {
    if (!((++arg0->unk3C) & 0x1F)) {
        func_80005670(arg0, D_80217014);
    }
}


struct func_801FB13C_Struct {
    u8 pad[0x24];
    s32 unk24;
};


void func_801FB13C(struct func_801FB13C_Struct *arg0, s32 arg1) {
    if (func_801FA248(arg0->unk24, 5) == 0) {
        func_80005700(arg0);
        D_802170C0 = 0;
        func_801FA624(0x12A);
    }
}


struct func_801FB2FC_Obj;
void func_801FB2FC(s32 arg0, struct func_801FB2FC_Obj **arg1);

struct func_801FB188_StructC { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_801FB188_StructB { u8 pad0[0x24]; struct func_801FB188_StructB *unk24; u8 pad28[4]; struct func_801FB188_StructC *unk2C; };
struct func_801FB188_StructG { u8 pad0[0xEC]; struct func_801FB188_StructB *unkEC; };
struct func_801FB188_StructS { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u16 pad10; u8 pad12[6]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8]; s32 unk30; };
struct func_801FB188_StructO { u8 pad0[0x30]; struct func_801FB188_StructS *unk30; };

void func_801FB188(s32 arg0, struct func_801FB188_StructO **arg1) {
    f32 k;
    func_8001F74C((void *)arg0);
    if (D_801BBCDC != 0) {
        func_80005E44((void *)arg0, &D_80164F40);
        func_80006214((void *)arg0);
        func_8012C89C(arg0, 0, 0x225, 2);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32)D_80216F30 | 0x40000000;
        func_80145310((s32)*arg1, 1, 0xD);
        k = D_80218E40;
        (*arg1)->unk30->unk4 = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unk4;
        (*arg1)->unk30->unk8 = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unk8 + D_80218E48;
        (*arg1)->unk30->unkC = ((struct func_801FB188_StructG *)D_801BBBF0)->unkEC->unk24->unk2C->unkC;
        (*arg1)->unk30->unk18 = k;
        (*arg1)->unk30->unk1C = k;
        (*arg1)->unk30->unk20 = k;
        *(s16 *)((u8 *)(*arg1)->unk30 + 0x10) = -0x800;
    } else {
        func_80005700(arg0);
    }
    func_800058DC(arg0, (void *)func_801FB2FC);
}


struct func_801FB2FC_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801FB2FC_Obj {
    u8 pad0[0x30];
    struct func_801FB2FC_Sub *unk30;
};


void func_801FB2FC(s32 arg0, struct func_801FB2FC_Obj **arg1) {
    f64 scale;
    struct func_801FB2FC_Sub *temp_v0;

    scale = D_80218E50;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk18 = (f32) ((f64) temp_v0->unk18 * scale);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk1C = (f32) ((f64) temp_v0->unk1C * scale);
    if (func_801FA248(*arg1, 2) == 0) {
        func_80005700(arg0);
    }
}


struct func_801FB374_Struct {
    u8 pad0[0x90];
    u8 unk90;
};

struct func_801FB374_Arg1 {
    s32 unk0;
    s32 unk4;
};


void func_801FB374(struct func_801FB374_Struct *arg0, struct func_801FB374_Arg1 *arg1) {
    u8 sp47;

    if (func_80126A0C(arg0, 0x112, 0) != 0) {
        func_80116E80(0x200);
        func_80146208(arg0, &sp47, 0x66, 0x78, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 0);
        func_80146208(arg0, &sp47, 0x66, 0xB8, 0x96, 0x10, 0x20, 0, 0, 0xFF, 0x20D, 1);
        func_80145310(arg1->unk0, 0, 0);
        func_80145310(arg1->unk4, 0, 0);
        arg0->unk90 = 0;
        func_800058DC((s32)arg0, (void *)func_801FB488);
    }
}

struct func_801FB554_Inner {
    u8 pad0[0x9];
    u8 unk9;
    u8 unkA;
};
struct func_801FB554_Sub {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FB554_Inner *unk30;
};
struct func_801FB554_Args {
    struct func_801FB554_Sub *unk0;
    struct func_801FB554_Sub *unk4;
};
struct func_801FB554_Obj {
    u8 pad0[0x24];
    void *unk24;
};
void func_801FB554(struct func_801FB554_Obj *arg0, struct func_801FB554_Args *arg1);

struct func_801FB488_Struct {
    u8 pad[0x90];
    u8 unk90;
};
struct func_801FB488_StructArgs {
    s32 unk0;
    s32 unk4;
};

void func_801FB488(struct func_801FB488_Struct *arg0, struct func_801FB488_StructArgs *arg1) {
    s32 value;

    value = ++arg0->unk90;
    if (value == 2) goto two;
    if (value != 4) goto end;
    goto four;
two:
    func_80145310(arg1->unk0, 1, 1);
    func_80145310(arg1->unk4, 1, 1);
    value = arg0->unk90;
    goto end;
four:
    func_80145310(arg1->unk0, 3, 3);
    func_80145310(arg1->unk4, 3, 3);
    value = arg0->unk90;
end:
    if ((s32)value >= 0x3D) {
        func_800058DC((s32)arg0, (void *)func_801FB554);
    }
}







void func_801FB554(struct func_801FB554_Obj *arg0, struct func_801FB554_Args *arg1) {
    func_801FA29C((struct func_801FA29C_Struct *) arg0->unk24);
    arg1->unk0->unk30->unkA = (u8) (arg1->unk0->unk30->unkA + 0xF);
    arg1->unk0->unk30->unk9 = arg1->unk0->unk30->unkA;
    arg1->unk4->unk30->unkA = (u8) (arg1->unk4->unk30->unkA + 0xF);
    arg1->unk4->unk30->unk9 = arg1->unk4->unk30->unkA;
    if (arg1->unk0->unk22 == 0) {
        D_802170B4 = 0;
        func_80005700((s32) arg0);
        func_801FA624(0x112);
    }
}


struct func_801FB5F0_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAF - 0x91];
    u8 unkAF;
};

struct func_801FB910_Struct;
void func_801FB910(struct func_801FB910_Struct *arg0, s32 *arg1);

void func_801FB5F0(struct func_801FB5F0_Struct *arg0, s32 *arg1) {
    u8 sp4F;
    u8 i;

    if (func_80126A0C(arg0, 0x112, 0) != 0) {
        D_80116E80(0x200);
        {
            u8 t = arg0->unkAF;
            if (t == 1) goto case1;
            if (t != 2) goto end;
            goto case2;
        }
case1:
        func_80146208(arg0, &sp4F, 0x66, 0x20, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 6);
        func_80146208(arg0, &sp4F, 0x66, 0x60, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 7);
        func_80146208(arg0, &sp4F, 0x66, 0xA0, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 8);
        func_80146208(arg0, &sp4F, 0x66, 0xE0, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 9);
        goto end;
case2:
        func_80146208(arg0, &sp4F, 0x66, 0x3C, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 2);
        func_80146208(arg0, &sp4F, 0x66, 0x7C, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 3);
        func_80146208(arg0, &sp4F, 0x66, 0xBC, 0x96, 0x40, 0x20, 0, 0, 0xFF, 0x20D, 4);
        func_80146208(arg0, &sp4F, 0x66, 0xFC, 0x96, 8, 0x20, 0, 0, 0xFF, 0x20D, 5);
end:
        for (i = 0; i < 4; i++) {
            func_80145310(arg1[i], 0, 0);
        }
        arg0->unk90 = 0;
        func_800058DC((s32)arg0, func_801FB910);
    }
}

struct func_801FBA3C_Struct {
    u8 pad0[0x24];
    void *unk24;
    u8 pad28[0xAF - 0x28];
    u8 unkAF;
};
struct func_801FBA3C_Inner {
    u8 pad0[0x8];
    u8 unk8;
    u8 unk9;
    u8 unkA;
};
struct func_801FBA3C_Entry {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    struct func_801FBA3C_Inner *unk30;
};
void func_801FBA3C(struct func_801FBA3C_Struct *arg0, struct func_801FBA3C_Entry **arg1);


struct func_801FB910_Struct {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xAF - 0x91];
    u8 unkAF;
};

void func_801FB910(struct func_801FB910_Struct *arg0, s32 *arg1) {
    u8 i;
    u8 j;

    arg0->unk90++;
    if (arg0->unk90 == 2) {
        goto case2;
    }
    if (arg0->unk90 != 4) {
        goto end;
    }
    goto case4;
case2:
    for (i = 0; i < 4; i++) {
        func_80145310(arg1[i], 1, 1);
    }
    goto end;
case4:
    if (arg0->unkAF == 1) {
        for (i = 0; i < 4; i++) {
            func_80145310(arg1[i], 3, 3);
        }
    } else {
        for (j = 0; j < 4; j++) {
            func_80145310(arg1[j], 0x1B, 0x1B);
        }
    }
end:
    if (arg0->unk90 >= 0x51) {
        func_800058DC((s32)arg0, (void *)func_801FBA3C);
    }
}





void func_801FBA3C(struct func_801FBA3C_Struct *arg0, struct func_801FBA3C_Entry **arg1) {
    s32 var_a0;
    struct func_801FBA3C_Inner *temp_v0;

    func_801FA29C(arg0->unk24);
    var_a0 = 0;
    do {
        if (arg0->unkAF == 1) {
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unkA = temp_v0->unkA + 0xF;
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unk9 = temp_v0->unkA;
        } else {
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unkA = temp_v0->unkA + 0xF;
            temp_v0 = arg1[var_a0]->unk30;
            temp_v0->unk8 = temp_v0->unkA;
        }
        var_a0 = (var_a0 + 1) & 0xFF;
    } while (var_a0 < 4);
    if (arg1[0]->unk22 == 0) {
        D_802170B4 = 0;
        func_80005700((s32)arg0);
        func_801FA624(0x112);
    }
}

