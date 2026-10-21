#include "common.h"


extern void func_8038D28C(s32 arg0);
extern void func_8038BED4(void);

s32 func_801E1C00(s32 arg0, s32 arg1) {
    func_8038D28C(0x71);
    func_8038BED4();
    return 1;
}

s32 func_8038BEF8(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13);

extern f32 D_8020874C;
extern f32 D_80208750;
extern f32 D_80208754;
extern f32 D_80208758;
extern f32 D_8020875C;
extern f32 D_80208760;
extern f32 D_80208764;
extern f32 D_80208768;

s32 func_801E1C34(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 6.0f, -7.3f, 1.6f, D_8020874C, -5.5f, D_80208750, D_80208754, D_80208758, D_8020875C, D_80208760, 3.5f, D_80208764, D_80208768) != 0) {
        return 2;
    }
    return 1;
}


s32 func_801E1CF8(s32 arg0, s32 arg1) {
    return 3;
}

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);

extern f32 D_8020876C;
extern f32 D_80208770;
extern f32 D_80208774;

s32 func_801E1D08(s32 arg0, s32 arg1) {
    func_8038BD50(D_8020876C, D_80208770, 0x42B46666);
    D_8038BD88(D_80208774, 6.5f, 0x42653333);
    return 4;
}


struct func_801E1ED0_Struct *func_801BF6B0(s32);

struct func_801E1D64_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E1D64(s32 arg0, s32 arg1) {
    if ((((struct func_801E1D64_Struct *) func_801BF6B0(7))->unkC < 0x10) || (func_801C1B1C() == 0)) {
        return 4;
    }
    func_8038BED4();
    return 5;
}


extern f32 D_80208778;
extern f32 D_8020877C;
extern f32 D_80208780;
extern f32 D_80208784;
extern f32 D_80208788;
extern f32 D_8020878C;
extern f32 D_80208790;

s32 func_801E1DC0(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 0.4f, 1.1f, D_80208778, 0.0f, D_8020877C, D_80208780, D_80208784, 6.5f, D_80208788, D_8020878C, 5.5f, D_80208790) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801C1B1C(void);

s32 func_801E1E7C(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


struct func_801E1ED0_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E1ED0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 7;
    }
    func_8038BED4();
    return 8;
}


extern f32 D_80208794;
extern f32 D_80208798;
extern f32 D_8020879C;
extern f32 D_802087A0;
extern f32 D_802087A4;


s32 func_801E1F2C(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;
    f32 temp_c;

    temp_a = D_80208794;
    temp_b = D_80208798;
    temp_c = D_8020879C;
    if (func_8038BEF8(0.0f, 5.0f, -10.4f, 57.5f, -62.0f, D_802087A0, 47.0f, D_802087A4, temp_a, temp_b, temp_c, temp_a, temp_b, temp_c) != 0) {
        return 9;
    }
    return 8;
}


s32 func_801E1FD4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


s32 func_801E2028(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2D) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


extern f32 D_802087A8;
extern f32 D_802087AC;
extern f32 D_802087B0;

s32 func_801E207C(s32 arg0, s32 arg1) {
    func_8038BD50(-8.0f, D_802087A8, 0x42406666);
    D_8038BD88(D_802087AC, D_802087B0, 0xC164CCCD);
    return 0xC;
}


s32 func_801E20D8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x32) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E212C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x35) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


extern f32 D_802087B4;
extern f32 D_802087B8;
extern f32 D_802087BC;
extern f32 D_802087C0;

s32 func_801E2180(s32 arg0, s32 arg1) {
    func_8038BD50(D_802087B4, D_802087B8, 0x41480000);
    D_8038BD88(D_802087BC, D_802087C0, 0xC20F3333);
    return 0xF;
}


s32 func_801E21D8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801E222C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x3D || func_801C1B1C() == 0) {
        return 0x10;
    }
    func_8038BED4();
    return 0x11;
}


extern f32 D_802087C4;
extern f32 D_802087C8;
extern f32 D_802087CC;
extern f32 D_802087D0;
extern f32 D_802087D4;
extern f32 D_802087D8;
extern f32 D_802087DC;

s32 func_801E2288(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = D_802087C4;
    temp_fv1 = D_802087C8;
    if (func_8038BEF8(0.0f, 2.0f, 6.9f, 1.2f, 12.5f, D_802087CC, D_802087D0, D_802087D4, temp_fv0, D_802087D8, temp_fv1, temp_fv0, D_802087DC, temp_fv1) != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801E233C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x40) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E2390(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


extern f32 D_802087E0;
extern f32 D_802087E4;
extern f32 D_802087E8;

s32 func_801E23E4(s32 arg0, s32 arg1) {
    func_8038BD50(D_802087E0, D_802087E4, 0x419F3333);
    D_8038BD88(D_802087E8, 13.5f, 0xC1E4CCCD);
    return 0x15;
}


s32 func_801E2440(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x46) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E2494(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4C) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


extern f32 D_802087EC;

s32 func_801E24E8(s32 arg0, s32 arg1) {
    func_8038BD50(D_802087EC, 2.0f, 0x41EF3333);
    D_8038BD88(-106.5f, 5.0f, 0x41840000);
    return 0x18;
}


s32 func_801E2540(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x50) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801E2594(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x59) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


extern f32 D_802087F0;
extern f32 D_802087F4;

s32 func_801E25E8(s32 arg0, s32 arg1) {
    func_8038BD50(-15.0f, D_802087F0, 0x42280000);
    D_8038BD88(0.0f, D_802087F4, 0xC1380000);
    return 0x1B;
}


s32 func_801E2638(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5C) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}


s32 func_801E268C(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p = func_801BF6B0(7);

    if ((p->unkC < 0x67) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


extern f32 D_802087F8;

s32 func_801E26E0(s32 arg0, s32 arg1) {
    func_8038BD50(3.5f, 5.5f, 0xC1580000);
    D_8038BD88(D_802087F8, 11.0f, 0xC20ECCCD);
    return 30;
}


s32 func_801E2738(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6C) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E278C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x77) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    return 0x20;
}


s32 func_801E27E0(s32 arg0, s32 arg1) {
    extern f32 D_802087FC;
    extern f32 D_80208800;

    func_8038BD50(D_802087FC, 2.5f, 0x418B3333);
    D_8038BD88(-0.5f, D_80208800, 0xC20F999A);
    return 0x21;
}



s32 func_801E283C(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x7C) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801E2890(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x85) {
        goto ret22;
    }
    if (func_801C1B1C() != 0) {
        goto call;
    }
ret22:
    return 0x22;
call:
    func_8038BED4();
    return 0x23;
}


extern f32 D_80208804;
extern f32 D_80208808;
extern f32 D_8020880C;
extern f32 D_80208810;
extern f32 D_80208814;
extern f32 D_80208818;

s32 func_801E28EC(s32 arg0, s32 arg1)
{
  int new_var;
  f32 t0 = -0.5f;
  f32 t1 = D_80208804;
  f32 t2 = D_80208808;
  if (!t0)
  {
  }
  if (t0 && t0)
  {
  }
  new_var = 0;
  if (func_8038BEF8(0.0f, 2.0f, -13.7f, 2.5f, D_8020880C, D_80208810, D_80208814, D_80208818, t0, t1, t2, t0, t1, t2) != new_var)
  {
    return 0x24;
  }
  return 0x23;
}


s32 func_801E2994(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x88) || (func_801C1B1C() == 0)) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801E29E8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 0x25;
    }
    return 0x26;
}


extern f32 D_8020881C;
extern f32 D_80208820;
extern f32 D_80208824;

s32 func_801E2A3C(s32 arg0, s32 arg1) {
    func_8038BD50(D_8020881C, 34.5f, 0x421B3333);
    D_8038BD88(D_80208820, D_80208824, 0xC1F00000);
    return 0x27;
}


s32 func_801E2A94(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x95) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}


s32 func_801E2AE8(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x98) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


extern f32 D_80208828;
extern f32 D_8020882C;
extern f32 D_80208830;

s32 func_801E2B3C(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208828, 21.5f, 0x42120000);
    D_8038BD88(D_8020882C, D_80208830, 0xC20ECCCD);
    return 0x2A;
}


s32 func_801E2B94(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x9D) || (func_801C1B1C() == 0)) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801E2BE8(s32 arg0, s32 arg1) {
    return 44;
}


s32 func_801E2BF8(s32 arg0, s32 arg1) {
    return 44;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2C08(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32);
extern void func_801CCE50(s32, s32, s32);
extern void func_801CCE88(s32, s32, s32, s32);
extern void func_801CCEC8(s32, s32, s32, s32);

s32 func_801E2C44(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xC8, 0xFF);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E2CA8(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801CD074(s32);

s32 func_801E2CB8(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x10 || func_801C1B1C() == 0) {
        return 3;
    }
    func_801CD074(0);
    return 4;
}


extern s32 func_801CD098(s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2D14(s32 arg0, s32 arg1) {
    if (func_801CD098(0, 0, 0x40400000, 0.0f, 200.0f, 255.0f, 0.0f, 200.0f, 255.0f, 0.0f, 0.0f, -100.0f, 0.0f, 0.0f, 100.0f) != 0) {
        return 5;
    }
    return 4;
}



s32 func_801E2DA4(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}


s32 func_801E2DF8(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if (p->unkC < 0x21 || func_801C1B1C() == 0) {
        return 6;
    }
    return 7;
}



s32 func_801E2E4C(s32 arg0, s32 arg1) {
    func_801CCE88(0, 0, 0xC8, 0xFF);
    func_801CCEC8(0, 0, 0x64, 0);
    return 8;
}


s32 func_801E2E98(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E2EA8(s32 arg0, s32 arg1) {
    return 9;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2EB8(s32 arg0, s32 arg1) {
    func_801C2420(0x2D5, func_8038DD54 + 0x14);
    return 1;
}


struct func_801E2EEC_StructR {
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

struct func_801E2EEC_StructQ {
    u8 pad0[0x2C];
    struct func_801E2EEC_StructR *unk2C;
};

struct func_801E2EEC_StructP {
    struct func_801E2EEC_StructQ *unk0;
};

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 func_8038D830[];
extern s32 func_8038D850;
extern struct func_801E2EEC_StructP *func_8038D854;
extern u8 D_8017AE98[];

s32 func_801E2EEC(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2D5, 0);
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


s32 func_801E2FE4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2FF4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3004(s32 arg0, s32 arg1) {
    return 4;
}

extern void D_8038BA70(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];

s32 func_801E3014(s32 arg0, s32 arg1) {
    func_801C2420(0x2D6, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    return 1;
}


typedef struct func_801E3068_Struct2 {
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
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801E3068_Struct2;

typedef struct func_801E3068_Struct1 {
    u8 pad0[0x30];
    func_801E3068_Struct2 *unk30;
} func_801E3068_Struct1;

extern s32 D_8038D8CC;
extern u8 D_8038D89C[];
extern u8 D_801D9110[];
extern struct func_801FCB44_Struct *D_8038D8D0;

#define OBJ ((func_801E3068_Struct1 **)D_8038D8D0)

s32 func_801E3068(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 3; i++) {
        func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    }
    for (i = 0; i != 3; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 2, 0x2D6, 0);
    func_8012C89C(D_8038D8CC, 3, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D7, 0);
    OBJ[0]->unk30->unk4 = -100.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = -28.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = -79.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = -28.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = -58.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = -28.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = -100.0f;
    OBJ[3]->unk30->unk8 = -2.0f;
    OBJ[3]->unk30->unkC = -29.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[3]->unk30->unk24 = 0x100;
    OBJ[3]->unk30->unk48 = 0x66;
    OBJ[3]->unk30->unk49 = 0xE5;
    OBJ[3]->unk30->unk4A = 0xE5;
    OBJ[3]->unk30->unk4B = 0x7F;
    OBJ[4]->unk30->unk4 = -79.0f;
    OBJ[4]->unk30->unk8 = -2.0f;
    OBJ[4]->unk30->unkC = -29.0f;
    OBJ[4]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0x66;
    OBJ[4]->unk30->unk49 = 0xE5;
    OBJ[4]->unk30->unk4A = 0xE5;
    OBJ[4]->unk30->unk4B = 0x7F;
    OBJ[5]->unk30->unk4 = -58.0f;
    OBJ[5]->unk30->unk8 = -2.0f;
    OBJ[5]->unk30->unkC = -29.0f;
    OBJ[5]->unk30->unk12 = 0;
    OBJ[5]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[5]->unk30->unk24 = 0x100;
    OBJ[5]->unk30->unk48 = 0x66;
    OBJ[5]->unk30->unk49 = 0xE5;
    OBJ[5]->unk30->unk4A = 0xE5;
    OBJ[5]->unk30->unk4B = 0x7F;
    return 2;
}


s32 func_801E3484(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3494(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E34A4(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E34B4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E34F8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3508(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3518(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3528(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E356C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E357C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E358C(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E359C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E35E0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E35F0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3600(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3610(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3654(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3664(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3674(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3684(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E36C8(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E36D8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E36E8(s32 arg0, s32 arg1) {
    return 3;
}


extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);
extern u8 func_801DAE70[];
extern u8 D_801E0A48[];
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801DB334[];
extern u8 D_801DB338[];
extern u8 D_801DB354[];
extern u8 D_801DB358[];
extern u8 D_801DB374[];
extern u8 D_801DADFC[];
extern u8 D_801DB5A8[];

s32 func_801E36F8(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    func_801CC4C0(0, func_801DAE70 + 0x60);
    func_801C2420(0x2F, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB314);
    func_801CC4C0(1, D_801DB318);
    func_801CC458(2, D_801DB334);
    func_801CC4C0(2, D_801DB338);
    func_801CC458(3, D_801DB354);
    func_801CC4C0(3, D_801DB358);
    func_801CC458(4, D_801DB374);
    func_801C2420(0x30, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(5, D_801DADFC);
    func_801CC458(6, D_801DB5A8);
    return 1;
}

extern u8 func_801DAAF0[];
extern void func_80005670(void *, void *);
extern void func_801CFD28(s32);
extern void func_801CFD34(s32);
extern void func_801CC530(void);

struct func_801E3814_StructNode {
    u8 pad[8];
    struct func_801E3814_StructNode *next;
};

extern void func_801D367C(s32);
extern u8 D_801DADE8[];
extern u8 D_801DB300[];
extern u8 D_801DB320[];
extern u8 D_801DB340[];
extern u8 D_801DB360[];
extern u8 D_801DB594[];

#define BASE (((struct func_801E3814_StructNode **)func_801DAAF0)[9])
#define B2 (*(struct func_801E3814_StructNode **)(func_801DAE70 - 0x35C))

s32 func_801E3814(s32 arg0, s32 arg1) {
    extern u8 func_801DAAF0[];
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(BASE, func_801DAE70 + 0x48);
    func_80005670(B2->next, D_801DB300);
    func_80005670(BASE->next->next, D_801DB320);
    func_80005670(B2->next->next->next, D_801DB340);
    func_801D367C(1);
    func_80005670(BASE->next->next->next->next, D_801DB360);
    func_80005670(B2->next->next->next->next->next, D_801DADE8);
    func_80005670(BASE->next->next->next->next->next->next, D_801DB594);
    func_801CC530();
    return 2;
}


extern struct func_801E3D90_StructA *D_801DAB14;
s32 func_801CC470(s32, s32, s32, s32, f32);

typedef struct func_801E3938_StructS {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
} func_801E3938_StructS;

typedef struct func_801E3938_StructR {
    u8 pad0[0x2C];
    func_801E3938_StructS *unk2C;
} func_801E3938_StructR;

typedef struct func_801E3938_StructQ {
    u8 pad0[0x24];
    func_801E3938_StructR *unk24;
} func_801E3938_StructQ;

typedef struct func_801E3938_StructP {
    u8 pad0[0x8];
    func_801E3938_StructQ *unk8;
} func_801E3938_StructP;

s32 func_801E3938(s32 arg0, s32 arg1) {
    func_801E3938_StructR *temp_v0;

    temp_v0 = ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unkC = 90.0f;
        ((func_801E3938_StructP *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480018, 0, 0, 3.0f);
        return 3;
    }
    return 2;
}


s32 func_801CFD50(void);

s32 func_801E39F8(s32 arg0, s32 arg1) {
    if (func_801CFD50() != 0) {
        return 0x4;
    }
    return 0x3;
}


s32 func_801E3A28(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_80208E1C;

s32 func_801E3A38(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 5;
    }
    D_80208E1C = 0;
    return 6;
}

extern s32 D_801CFD40();
extern void func_801C0D04(s32, s32);
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24();
extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_8038D33C(f32, f32, s32, s32, f32, f32);
extern f32 D_80208834;
extern f64 D_80208838;
extern f32 D_80208840;
extern f32 D_80208844;

struct func_801E3A90_S3 { u8 pad0[4]; f32 u4; f32 u8; f32 uC; u8 pad10[2]; s16 u12; };
struct func_801E3A90_S2 { u8 pad[0x2C]; struct func_801E3A90_S3 *u2C; };
struct func_801E3A90_S1 { u8 pad[0x24]; struct func_801E3A90_S2 *u24; };
struct func_801E3A90_S0 { u8 pad[8]; struct func_801E3A90_S1 *u8; };

#define B ((struct func_801E3A90_S0 *)D_801DAB14)

s32 func_801E3A90(s32 arg0, s32 arg1) {
    u64 t;
    struct func_801E3A90_S3 *p;

    if (D_80208E1C == 0) goto c0;
    if (D_80208E1C == 1) goto c1;
    if (D_80208E1C == 2) goto c2;
    return 6;
c0:
    B->u8->u24->u2C->u4 = 0.0f;
    B->u8->u24->u2C->u8 = 0.0f;
    B->u8->u24->u2C->uC = D_80208834;
    B->u8->u24->u2C->u12 = 0x1000;
    func_801CC470(0, 0x01680003, 0, 0x1100, 1.0f);
    func_801C0D04(4, 0);
    D_80208E1C = 1;
    goto done;
c1:
    {
        if (func_801C0DE4(4, 0, 0x40000000) != 0) {
            func_801C0EB0(4, 0);
            func_801CC4D8(0, 0x03480010, 0, 1, 15.0f);
            D_80208E1C = 2;
        } else {
            t = func_801C0F18(4, 0);
            B->u8->u24->u2C->uC = (f32)((f32)(func_80034C24(t) / D_80208838) * 0.5f * -33.0f) + D_80208840;
            if (func_801CFE28(0x01680003, 0x14) != 0 || func_801CFE28(0x01680003, 0x28) != 0) {
                p = B->u8->u24->u2C;
                func_8038D33C(p->u4, p->u8, *(s32 *)&p->uC, 0x4A2, D_80208844, 1.0f);
                return 6;
            }
        }
        goto done;
    }
c2:
    {
        if (D_801CFD40() == 0) {
            return 7;
        }
    }
done:
    return 6;
}


s32 func_801E3CD8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 0x8;
}


s32 func_801E3D2C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3D3C(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E3D4C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E3D90_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E3D90_StructE;

typedef struct func_801E3D90_StructD {
    u8 pad0[0x2C];
    func_801E3D90_StructE *unk2C;
} func_801E3D90_StructD;

typedef struct func_801E3D90_StructC {
    u8 pad0[0x24];
    func_801E3D90_StructD *unk24;
} func_801E3D90_StructC;

typedef struct func_801E3D90_StructB {
    u8 pad0[8];
    func_801E3D90_StructC *unk8;
} func_801E3D90_StructB;

typedef struct func_801E3D90_StructA {
    u8 pad0[8];
    func_801E3D90_StructB *unk8;
} func_801E3D90_StructA;

extern f32 D_80208848;

s32 func_801E3D90(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208848;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E3E5C(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801CC550(s32 arg0);

s32 func_801E3E6C(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 4;
}

extern s32 func_801CC564(s32, void *, s32, s32, s32, f32, void *, s32, s32, s32, f32);
extern u8 func_801D2BC4[];

s32 func_801E3E98(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001C, 0, 0, 3.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 5;
    }
    return 4;
}


s32 func_801E3F20(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 5) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}


s32 func_801E3F74(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 8 || func_801C1B1C() == 0) {
        return 6;
    }
    return 7;
}


extern s32 D_80208E24;

s32 func_801E3FC8(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x0320001D, 0, 0, 3.0f);
    D_80208E24 = 0;
    return 8;
}


s32 func_801E4014(s32 arg0, s32 arg1) {
    if (D_80208E24 == 0) {
        goto case0;
    }
    if (D_80208E24 == 1) {
        goto case1;
    }
    return 8;
case0:
    if (func_801D2C10() != 0) {
        func_801CC550(1);
        D_80208E24 = 1;
    }
    goto done;
case1:
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001E, 0, 0, 3.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 9;
    }
done:
    return 8;
}


s32 func_801E40E8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xD) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


s32 func_801E413C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x16) || (func_801C1B1C() == 0)) {
        return 10;
    }
    return 11;
}



s32 func_801E4190(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 12;
}



s32 func_801E41BC(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x03200021, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xD;
    }
    return 0xC;
}


s32 func_801E4244(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}



s32 func_801E4298(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 14;
    }
    D_80208E24 = 0;
    return 15;
}


extern s32 func_801D2C5C();
extern f32 D_8020884C;
extern f32 D_80208850;

#define B() ((u8 *)D_801DAB14)
#define P(b) (*(u8 **)((b) + 8))
#define Q() (*(u8 **)(P(P(B())) + 0x24))
#define OBJ() (*(u8 **)(Q() + 0x2C))

s32 func_801E42F0(s32 arg0, s32 arg1) {
    u8 *o;
    if (D_80208E24 != 0) {
        if (D_80208E24 == 1) goto c1;
        if (D_80208E24 == 2) goto c2;
        return 0xF;
    }
    *(f32 *)(OBJ() + 4) = 0.0f;
    *(f32 *)(OBJ() + 8) = 0.0f;
    *(f32 *)(OBJ() + 0xC) = D_8020884C;
    *(s16 *)(OBJ() + 0x12) = 0x1000;
    func_801CC470(1, 0x0320001B, 0, 0x100, 3.0f);
    D_80208E24 = 1;
    goto done;
c1:
    if (*(f32 *)(OBJ() + 0xC) < D_80208850) {
        func_801CC4D8(1, 0x0320001A, 0, 1, 30.0f);
        D_80208E24 = 2;
    } else if (func_801D2C5C(0x0320001B, 0) != 0 || func_801D2C5C(0x0320001B, 0x12) != 0) {
        o = OBJ();
        func_8038D33C(*(f32 *)(o + 4), *(f32 *)(o + 8), *(s32 *)(o + 0xC), 0x4A1, 1.5f, 1.0f);
    }
    goto done;
c2:
    if (func_801D2C00() == 0) {
        return 0x10;
    }
done:
    return 0xF;
}


s32 func_801E44EC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2A) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}



s32 func_801E4540(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2D) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    D_80208E24 = 0;
    return 0x12;
}


s32 func_801E4598(s32 arg0, s32 arg1) {
    if (D_80208E24 == 0) {
        goto case0;
    }
    if (D_80208E24 == 1) {
        goto case1;
    }
    return 0x12;

case0:
    func_801CC470(1, 0x03200028, 0, 0, 6.0f);
    *(u16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1000;
    D_80208E24 = 1;
    goto done;

case1:
    if (func_801D2C10() != 0) {
        return 0x13;
    }
    goto done;

done:
    return 0x12;
}


s32 func_801E4648(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x32) || (func_801C1B1C() == 0)) {
        return 0x13;
    }
    return 0x14;
}


s32 func_801E469C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x35) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}



typedef struct func_801E46F0_StructE {
    u8 pad0[0x12];
    s16 unk12;
} func_801E46F0_StructE;

typedef struct func_801E46F0_StructD {
    u8 pad0[0x2C];
    func_801E46F0_StructE *unk2C;
} func_801E46F0_StructD;

typedef struct func_801E46F0_StructC {
    u8 pad0[0x24];
    func_801E46F0_StructD *unk24;
} func_801E46F0_StructC;

typedef struct func_801E46F0_StructB {
    u8 pad0[8];
    func_801E46F0_StructC *unk8;
} func_801E46F0_StructB;

typedef struct func_801E46F0_StructA {
    u8 pad0[8];
    func_801E46F0_StructB *unk8;
} func_801E46F0_StructA;

s32 func_801E46F0(s32 arg0, s32 arg1)
{
  func_801E46F0_StructE *temp_t0;
  ;
  (*((func_801E46F0_StructA **) (func_801DAAF0 + 0x24)))->unk8->unk8->unk24->unk2C->unk12 = 0;
  func_801CC550(1);
  return 0x16;
}


s32 func_801E4738(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001F, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x17;
    }
    return 0x16;
}


s32 func_801E47C0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}


s32 func_801E4814(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}



s32 func_801E4868(s32 arg0, s32 arg1)
{
  unsigned char new_var;
  u8 **gp;
  new_var = 0x24;
  gp = (u8 **) (((u8 *) (&func_801DAAF0)) + new_var);
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x4)) = -100.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x8)) = 0.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0xC)) = -29.0f;
  *((s16 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*gp) + 0x8))) + 0x8))) + new_var))) + 0x2C))) + 0x12)) = 0;
  func_801CC470(1, 0x03200031, 0, 0x1001, 1.0f);
  return 0x1A;
}


s32 func_801E492C(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E493C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x46) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}


s32 func_801E4990(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x59) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


extern f32 D_80208854;

s32 func_801E49E4(s32 arg0, s32 arg1) {
    func_801E3D90_StructA **p;

    p = &D_801DAB14;
    (*p)->unk8->unk8->unk24->unk2C->unk4 = 0.0f;
    (*p)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*p)->unk8->unk8->unk24->unk2C->unkC = D_80208854;
    (*p)->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
    return 0x1E;
}


s32 func_801E4AA0(s32 arg0, s32 arg1) {
    return 31;
}


s32 func_801E4AB0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5C) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    return 0x20;
}


s32 func_801E4B04(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5F) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}



s32 func_801E4B58(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 34;
}



s32 func_801E4B84(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x03200022, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x23;
    }
    return 0x22;
}


s32 func_801E4C0C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x64) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E4C60(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p = func_801BF6B0(7);

    if ((p->unkC < 0x67) || (func_801C1B1C() == 0)) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801E4CB4(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03200022, 0, 0, 10.0f);
    return 0x26;
}


s32 func_801D2C10(void);

s32 func_801E4CFC(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x27;
    }
    return 0x26;
}


s32 func_801E4D2C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6C) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}


s32 func_801E4D80(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6F) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E4DD4(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0320001A, 0, 1, 60.0f);
    return 0x2A;
}


s32 func_801D2C00();

s32 func_801E4E1C(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        return 0x2B;
    }
    return 0x2A;
}


s32 func_801E4E4C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x74) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}


s32 func_801E4EA0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x77) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}



s32 func_801E4EF4(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 46;
}


s32 func_801E4F20(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001C, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x2F;
    }
    return 0x2E;
}



s32 func_801E4FA8(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x7C) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    return 0x30;
}


s32 func_801E4FFC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}



s32 func_801E5050(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 50;
}


s32 func_801E507C(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x03200020, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x33;
    }
    return 0x32;
}


s32 func_801E5104(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x95) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


s32 func_801E5158(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x98) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}



s32 func_801E51AC(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 54;
}



s32 func_801E51D8(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x03200025, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x37;
    }
    return 0x36;
}


s32 func_801E5260(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x9D) || (func_801C1B1C() == 0)) {
        return 0x37;
    }
    return 0x38;
}


s32 func_801E52B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA0) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}



s32 func_801E5308(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 58;
}



s32 func_801E5334(s32 arg0, s32 arg1) {
    if (func_801CC564(1, func_801D2BC4 + 0x4C, 0x0320001C, 0, 0, 10.0f, func_801D2BC4 + 0x3C, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x3B;
    }
    return 0x3A;
}


struct func_801E53BC_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E53BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA5) || (func_801C1B1C() == 0)) {
        return 0x3B;
    }
    return 0x3C;
}


s32 func_801E5410(s32 arg0, s32 arg1) {
    return 61;
}


s32 func_801E5420(s32 arg0, s32 arg1) {
    return 61;
}



s32 func_801E5430(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


#define FUNC_801E5474_NEXT(p, off) (*(void **)((u8 *)(p) + (off)))
#define FUNC_801E5474_BASE FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(D_801DAB14, 0x8), 0x8), 0x8)
#define FUNC_801E5474_OBJ FUNC_801E5474_NEXT(FUNC_801E5474_BASE, 0x24)
#define FUNC_801E5474_E ((func_801E3D90_StructE *)FUNC_801E5474_NEXT(FUNC_801E5474_NEXT(FUNC_801E5474_BASE, 0x24), 0x2C))

s32 func_801E5474(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = FUNC_801E5474_OBJ;
    if (temp_v0 != NULL) {
        ((func_801E3D90_StructE *)FUNC_801E5474_NEXT(temp_v0, 0x2C))->unk4 = 5120.0f;
        FUNC_801E5474_E->unk8 = 0.0f;
        FUNC_801E5474_E->unkC = 0.0f;
        FUNC_801E5474_E->unk12 = 0;
        func_801CC470(2, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E554C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E555C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}


typedef struct func_801E55B0_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E55B0_StructD;

typedef struct func_801E55B0_StructB {
    u8 pad0[0x2C];
    func_801E55B0_StructD *unk2C;
} func_801E55B0_StructB;

typedef struct func_801E55B0_StructA {
    u8 pad0[8];
    struct func_801E55B0_StructA *unk8;
    u8 pad1[0x18];
    func_801E55B0_StructB *unk24;
} func_801E55B0_StructA;

s32 func_801E55B0(s32 arg0, s32 arg1) {
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk4 = -79.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
    ((func_801E55B0_StructA *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(2, 0x03200031, 0, 0x1001, 1.0f);
    return 5;
}


s32 func_801E5684(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5694(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x46) || (func_801C1B1C() == 0)) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801E56E8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E56F8(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E5708(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E574C_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E574C_StructE {
    u8 pad0[0x2C];
    struct func_801E574C_StructF *unk2C;
};

struct func_801E574C_StructD {
    u8 pad0[8];
    struct func_801E574C_StructD *unk8;
    u8 pad1[0x18];
    struct func_801E574C_StructE *unk24;
};

s32 func_801E574C(s32 arg0, s32 arg1) {
    struct func_801E574C_StructE *temp_v0;

    temp_v0 = ((struct func_801E574C_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E574C_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E574C_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E574C_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(3, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5834(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5844(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}



struct func_801E5898_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

#define func_801E5898_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define func_801E5898_BASE() func_801E5898_NEXT(func_801E5898_NEXT(func_801E5898_NEXT(func_801E5898_NEXT(D_801DAB14))))
#define func_801E5898_OBJ() (*(u8 **)((u8 *)func_801E5898_BASE() + 0x24))
#define func_801E5898_E() ((struct func_801E5898_Target *)(*(u8 **)((u8 *)func_801E5898_OBJ() + 0x2C)))

s32 func_801E5898(s32 arg0, s32 arg1) {
    func_801E5898_E()->unk4 = -58.0f;
    func_801E5898_E()->unk8 = 0.0f;
    func_801E5898_E()->unkC = -29.0f;
    func_801E5898_E()->unk12 = 0;
    func_801CC470(3, 0x03200031, 0, 0x1001, 1.0f);
    return 5;
}


s32 func_801E597C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E598C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x46) || (func_801C1B1C() == 0)) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801E59E0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E59F0(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E5A00(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E5A44_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5A44_StructE {
    u8 pad0[0x2C];
    struct func_801E5A44_StructF *unk2C;
};

struct func_801E5A44_StructD {
    u8 pad0[8];
    struct func_801E5A44_StructD *unk8;
    u8 pad1[0x18];
    struct func_801E5A44_StructE *unk24;
};

s32 func_801E5A44(s32 arg0, s32 arg1) {
    struct func_801E5A44_StructE *temp_v0;

    temp_v0 = ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E5A44_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(4, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5B3C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5B4C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}


extern f32 D_80208858;

#define func_801E5BA0_NEXT(p, off) (*(void **)((u8 *)(p) + (off)))
#define func_801E5BA0_BASE func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_NEXT(D_801DAB14, 0x8), 0x8), 0x8), 0x8), 0x8)
#define func_801E5BA0_OBJ func_801E5BA0_NEXT(func_801E5BA0_NEXT(func_801E5BA0_BASE, 0x24), 0x2C)

s32 func_801E5BA0(s32 arg0, s32 arg1) {
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 4) = -100.0f;
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 8) = 0.0f;
    *(f32 *)((u8 *)func_801E5BA0_OBJ + 0xC) = D_80208858;
    *(s16 *)((u8 *)func_801E5BA0_OBJ + 0x12) = 0;

    func_801CC470(4, 0x0320002C, 0, 0x1100, 6.0f);
    return 5;
}


s32 func_801E5C94(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5CA4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5CB4(s32 arg0, s32 arg1) {
    return 7;
}



s32 func_801E5CC4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E5D08_Sub {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801E5D08_Obj {
    u8 pad0[0x2C];
    struct func_801E5D08_Sub *unk2C;
};

struct func_801E5D08_Node {
    u8 pad0[8];
    struct func_801E5D08_Node *unk8;
    u8 pad1[0x18];
    struct func_801E5D08_Obj *unk24;
};

#define FUNC_801E5D08_BASE (((struct func_801E5D08_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8)

s32 func_801E5D08(s32 arg0, s32 arg1) {
    struct func_801E5D08_Obj *temp_v0;

    temp_v0 = FUNC_801E5D08_BASE->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unk8 = 0.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unkC = 0.0f;
        FUNC_801E5D08_BASE->unk24->unk2C->unk12 = 0;
        func_801CC470(5, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E5E10(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E5E20(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7F) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}


struct func_801E5E74_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
};

struct func_801E5E74_P {
    u8 pad0[0x2C];
    struct func_801E5E74_Obj *unk2C;
};

struct func_801E5E74_N {
    u8 pad0[8];
    struct func_801E5E74_N *unk8;
    u8 pad1[0x18];
    struct func_801E5E74_P *unk24;
};

extern s32 func_801CF514(s32, s32, s32, s32, s32, s32);

s32 func_801E5E74(s32 arg0, s32 arg1)
{
  short new_var;
  struct func_801E5E74_N **head;
  new_var = 9;
  head = (struct func_801E5E74_N **) func_801DAAF0;
  ;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -9.0f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -25.5f;
  (*(head + new_var))->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
  func_801CF514(1, 5, 0x3FC00000, 0, 0x7F, 1);
  return 5;
}


s32 func_801CF590(void);

s32 func_801E5F78(s32 arg0, s32 arg1) {
    if (func_801CF590() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801E5FA8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x82) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}



s32 func_801E5FFC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 7;
    }
    func_801CF514(1, 5, 0x3FC00000, 0x7F, 0, 1);
    return 8;
}



s32 func_801E606C(s32 arg0, s32 arg1) {
    if (func_801CF590() != 0) {
        return 0x9;
    }
    return 0x8;
}


s32 func_801E609C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x95) || (func_801C1B1C() == 0)) {
        return 0x9;
    }
    return 0xA;
}


s32 func_801E60F0(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E6100(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801E6110(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E6154_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E6154_StructC;

typedef struct func_801E6154_StructB {
    u8 pad0[0x2C];
    func_801E6154_StructC *unk2C;
} func_801E6154_StructB;

typedef struct func_801E6154_StructA {
    u8 pad0[8];
    struct func_801E6154_StructA *unk8;
    u8 pad1[0x18];
    func_801E6154_StructB *unk24;
} func_801E6154_StructA;

#define func_801E6154_SUB (((func_801E6154_StructA *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24)

s32 func_801E6154(s32 arg0, s32 arg1) {
    func_801E6154_StructB *temp_v0;

    temp_v0 = func_801E6154_SUB;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        func_801E6154_SUB->unk2C->unk8 = 0.0f;
        func_801E6154_SUB->unk2C->unkC = 0.0f;
        func_801E6154_SUB->unk2C->unk12 = 0;
        func_801CC470(6, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E626C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E627C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7F) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}


typedef struct func_801E62D0_Node {
    u8 pad0[8];
    struct func_801E62D0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E62D0_Mid *unk24;
} func_801E62D0_Node;

typedef struct func_801E62D0_Mid {
    u8 pad0[0x2C];
    struct func_801E62D0_Target *unk2C;
} func_801E62D0_Mid;

typedef struct func_801E62D0_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E62D0_Target;

extern s32 func_801D4A6C(s32, s32, s32, s32, s32, s32);

s32 func_801E62D0(s32 arg0, s32 arg1) {
    func_801E62D0_Node **pp;

    pp = (func_801E62D0_Node **)&D_801DAB14;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -9.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -25.5f;
    (*pp)->unk8->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
    func_801CC470(6, 0x03480000, 0, 0x1001, 1.0f);
    func_801D4A6C(1, 6, 0x3FC00000, 0, 0x7F, 1);
    return 5;
}


s32 func_801D4AE8(void);

s32 func_801E6404(s32 arg0, s32 arg1) {
    if (func_801D4AE8() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801E6434(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x82) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


extern s32 D_80208E20;

s32 func_801E6488(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x85) || (func_801C1B1C() == 0)) {
        return 7;
    }
    D_80208E20 = 0;
    return 8;
}


extern f64 D_80208860;

s32 func_801E64E0(s32 arg0, s32 arg1) {
    if (D_80208E20 == 0) {
        goto case0;
    }
    if (D_80208E20 == 1) {
        goto case1;
    }
    return 8;
case0:
    func_801C0D04(4, 6);
    D_80208E20 = 1;
    goto end;
case1:
    if (func_801C0DE4(4, 6, 0x40000000) != 0) {
        func_801C0EB0(4, 6);
        return 9;
    }
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 0x24) + 0x2C) + 4) = (f32) (((f32) (func_80034C24(func_801C0F18(4, 6)) / D_80208860) * 0.5f * 18.0f) + -9.0f);
end:
    return 8;
}


s32 func_801E65E4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x88) || (func_801C1B1C() == 0)) {
        return 0x9;
    }
    return 0xA;
}



s32 func_801E6638(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x90) || (func_801C1B1C() == 0)) {
        return 10;
    }
    func_801D4A6C(1, 6, 0x3FC00000, 0x7F, 0, 1);
    return 11;
}



s32 func_801E66A8(s32 arg0, s32 arg1) {
    if (func_801D4AE8() != 0) {
        return 0xC;
    }
    return 0xB;
}


s32 func_801E66D8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x95) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E672C(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E673C(s32 arg0, s32 arg1) {
    return 14;
}


extern s32 D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E674C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 2);
    return 1;
}



s32 func_801E67B8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E67E8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E67F8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1E) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}


s32 func_801E684C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x5A, 0, 1);
    return 5;
}



s32 func_801E68B8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    return 6;
}


s32 func_801E68E0(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if (p->unkC < 0x21 || func_801C1B1C() == 0) {
        return 6;
    }
    return 7;
}


s32 func_801E6934(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}


s32 func_801E6988(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 9;
}



s32 func_801E69E0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 9;
    }
    D_80089354 = 0;
    return 10;
}


s32 func_801E6A10(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x3D || func_801C1B1C() == 0) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801E6A64(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
    return 12;
}



s32 func_801E6AD0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 12;
    }
    return 13;
}


s32 func_801E6AF8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x40) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801E6B4C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x43) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E6BA0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 15;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 2);
    return 16;
}



s32 func_801E6C0C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 16;
    }
    D_80089354 = 0;
    return 17;
}


s32 func_801E6C3C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x46) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


typedef struct func_801E6C90_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6C90_Struct;

s32 func_801E6C90(s32 arg0, s32 arg1) {
    if (((func_801E6C90_Struct *)func_801BF6B0(7))->unkC < 0x53 || func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801E6CE4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 19;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
    return 20;
}



s32 func_801E6D50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 20;
    }
    return 21;
}


struct func_801E6D78_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801E6D78(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x56) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E6DCC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x59) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801E6E20(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 23;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 2);
    return 24;
}



s32 func_801E6E8C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 24;
    }
    D_80089354 = 0;
    return 25;
}


s32 func_801E6EBC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5C) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


s32 func_801E6F10(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC >= 0xA7) {
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E6F50(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x1B;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
    func_8038D28C(8);
    return 0x1C;
}



s32 func_801E6FC4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 28;
    }
    return 29;
}


s32 func_801E6FEC(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E6FFC(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E700C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801E7048(s32 arg0, s32 arg1) {
    return 2;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_80201140[];

s32 func_801E7058(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201140);
    return 3;
}


s32 func_8038CBF0(void);

s32 func_801E708C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4;
    }
    return 0x3;
}


typedef struct func_801E70BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E70BC_Struct;

extern func_801E70BC_Struct D_80205988;

s32 func_801E70BC(s32 arg0, s32 arg1) {
    func_801E70BC_Struct sp1C;

    sp1C = D_80205988;
    func_801C18CC(1, &sp1C);
    return 5;
}



s32 func_801E710C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5;
    }
    return 0x6;
}

extern s32 func_801C1974();

s32 func_801E713C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7;
}


typedef struct func_801E7164_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7164_Struct;

extern func_801E7164_Struct D_80205994;

s32 func_801E7164(s32 arg0, s32 arg1) {
    func_801E7164_Struct sp1C;

    sp1C = D_80205994;
    func_801C18CC(1, (void *) &sp1C);
    return 0x8;
}



s32 func_801E71B4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8;
    }
    return 0x9;
}


extern u8 D_80201394[];

s32 func_801E71E4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201394);
    return 10;
}



s32 func_801E7218(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801E7248(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC;
}


typedef struct func_801E7270_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7270_Struct;

extern func_801E7270_Struct D_802059A0;

s32 func_801E7270(s32 arg0, s32 arg1) {
    func_801E7270_Struct sp1C;

    sp1C = D_802059A0;
    func_801C18CC(1, (void *) &sp1C);
    return 0xD;
}



s32 func_801E72C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801E72F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xF;
}


typedef struct func_801E7318_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7318_Struct;

extern func_801E7318_Struct D_802059AC;

s32 func_801E7318(s32 arg0, s32 arg1) {
    func_801E7318_Struct sp18;

    sp18 = D_802059AC;
    func_801C18CC(2, (void *) &sp18);
    return 0x10;
}



s32 func_801E7380(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801E73B0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801E73D8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E73D8_Struct;

extern func_801E73D8_Struct D_802059C4;

s32 func_801E73D8(s32 arg0, s32 arg1) {
    func_801E73D8_Struct sp18;

    sp18 = D_802059C4;
    func_801C18CC(2, (void *) &sp18);
    return 0x13;
}



s32 func_801E7440(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


s32 func_801E7470(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x15;
}


typedef struct func_801E7498_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7498_Struct;

extern func_801E7498_Struct D_802059DC;

s32 func_801E7498(s32 arg0, s32 arg1) {
    func_801E7498_Struct sp1C;

    sp1C = D_802059DC;
    func_801C18CC(1, (void *) &sp1C);
    return 0x16;
}



s32 func_801E74E8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x16;
    }
    return 0x17;
}


extern u8 D_80201518[];

s32 func_801E7518(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201518);
    return 24;
}



s32 func_801E754C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x19;
    }
    return 0x18;
}


s32 func_801E757C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801E75A4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E75A4_Struct;

extern func_801E75A4_Struct D_802059E8;

s32 func_801E75A4(s32 arg0, s32 arg1) {
    func_801E75A4_Struct sp1C;

    sp1C = D_802059E8;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}



s32 func_801E75F4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


s32 func_801E7624(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1D;
}


typedef struct func_801E764C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E764C_Struct;

extern func_801E764C_Struct D_802059F4;

s32 func_801E764C(s32 arg0, s32 arg1) {
    func_801E764C_Struct sp1C;

    sp1C = D_802059F4;
    func_801C18CC(1, &sp1C);
    return 0x1E;
}



s32 func_801E769C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E76CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x20;
}


typedef struct func_801E76F4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E76F4_Struct;

extern func_801E76F4_Struct D_80205A00;

s32 func_801E76F4(s32 arg0, s32 arg1) {
    func_801E76F4_Struct sp18;

    sp18 = D_80205A00;
    func_801C18CC(2, (void *) &sp18);
    return 0x21;
}



s32 func_801E775C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801E778C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x23;
}


typedef struct func_801E77B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E77B4_Struct;

extern func_801E77B4_Struct D_80205A18;

s32 func_801E77B4(s32 arg0, s32 arg1) {
    func_801E77B4_Struct sp1C;

    sp1C = D_80205A18;
    func_801C18CC(1, (void *) &sp1C);
    return 0x24;
}



s32 func_801E7804(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801E7834(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x26;
}


typedef struct func_801E785C_Struct {
    s32 w[9];
} func_801E785C_Struct;

s32 func_801C18CC(s32 arg0, func_801E785C_Struct *arg1);
extern func_801E785C_Struct D_80205A24;

s32 func_801E785C(s32 arg0, s32 arg1) {
    func_801E785C_Struct sp1C;

    sp1C = D_80205A24;
    func_801C18CC(3, &sp1C);
    return 39;
}



s32 func_801E78C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x27;
    }
    return 0x28;
}


s32 func_801E78F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x29;
}


typedef struct func_801E7918_Struct {
    s32 w[9];
} func_801E7918_Struct;

extern func_801E7918_Struct D_80205A48;

s32 func_801E7918(s32 arg0, s32 arg1) {
    func_801E7918_Struct sp1C;

    sp1C = D_80205A48;
    func_801C18CC(3, &sp1C);
    return 42;
}



s32 func_801E797C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2A;
    }
    return 0x2B;
}


s32 func_801E79AC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2C;
}


typedef struct func_801E79D4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E79D4_Struct;

extern func_801E79D4_Struct D_80205A6C;

s32 func_801E79D4(s32 arg0, s32 arg1) {
    func_801E79D4_Struct sp18;

    sp18 = D_80205A6C;
    func_801C18CC(2, &sp18);
    return 0x2D;
}



s32 func_801E7A3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2D;
    }
    return 0x2E;
}


extern u8 D_802015D0[];

s32 func_801E7A6C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802015D0);
    return 47;
}



s32 func_801E7AA0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x30;
    }
    return 0x2F;
}


s32 func_801E7AD0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x31;
}


typedef struct func_801E7AF8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7AF8_Struct;

extern func_801E7AF8_Struct D_80205A84;

s32 func_801E7AF8(s32 arg0, s32 arg1) {
    func_801E7AF8_Struct sp18;

    sp18 = D_80205A84;
    func_801C18CC(2, &sp18);
    return 0x32;
}



s32 func_801E7B60(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x32;
    }
    return 0x33;
}


s32 func_801E7B90(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x34;
}


typedef struct func_801E7BB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7BB8_Struct;

extern func_801E7BB8_Struct D_80205A9C;

s32 func_801E7BB8(s32 arg0, s32 arg1) {
    func_801E7BB8_Struct sp18;

    sp18 = D_80205A9C;
    func_801C18CC(2, &sp18);
    return 0x35;
}



s32 func_801E7C20(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x35;
    }
    return 0x36;
}


extern u8 D_802016FC[];

s32 func_801E7C50(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802016FC);
    return 55;
}



s32 func_801E7C84(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x38;
    }
    return 0x37;
}


s32 func_801E7CB4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x39;
}


typedef struct func_801E7CDC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7CDC_Struct;

extern func_801E7CDC_Struct D_80205AB4;

s32 func_801E7CDC(s32 arg0, s32 arg1) {
    func_801E7CDC_Struct sp18;

    sp18 = D_80205AB4;
    func_801C18CC(2, &sp18);
    return 0x3A;
}



s32 func_801E7D44(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3A;
    }
    return 0x3B;
}


s32 func_801E7D74(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3C;
}


typedef struct func_801E7D9C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7D9C_Struct;

extern func_801E7D9C_Struct D_80205ACC;

s32 func_801E7D9C(s32 arg0, s32 arg1) {
    func_801E7D9C_Struct sp18;

    sp18 = D_80205ACC;
    func_801C18CC(2, &sp18);
    return 0x3D;
}



s32 func_801E7E04(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3D;
    }
    return 0x3E;
}


s32 func_801E7E34(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3F;
}


typedef struct func_801E7E5C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E7E5C_Struct;

extern func_801E7E5C_Struct D_80205AE4;

s32 func_801E7E5C(s32 arg0, s32 arg1) {
    func_801E7E5C_Struct sp18;

    sp18 = D_80205AE4;
    func_801C18CC(2, &sp18);
    return 0x40;
}



s32 func_801E7EC4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x40;
    }
    return 0x41;
}


s32 func_801E7EF4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x42;
}


typedef struct func_801E7F1C_Struct {
    s32 w[18];
} func_801E7F1C_Struct;

extern func_801E7F1C_Struct D_80205AFC;

s32 func_801E7F1C(s32 arg0, s32 arg1) {
    func_801E7F1C_Struct sp18;

    sp18 = D_80205AFC;
    func_801C18CC(6, (func_801E785C_Struct *) &sp18);
    return 0x43;
}



s32 func_801E7F80(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x43;
    }
    return 0x44;
}


s32 func_801E7FB0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x45;
}


typedef struct func_801E7FD8_Struct {
    s32 w[15];
} func_801E7FD8_Struct;
extern func_801E7FD8_Struct D_80205B44;

s32 func_801E7FD8(s32 arg0, s32 arg1) {
    func_801E7FD8_Struct sp1C;

    sp1C = D_80205B44;
    func_801C18CC(5, (func_801E785C_Struct *) &sp1C);
    return 0x46;
}



s32 func_801E803C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x46;
    }
    return 0x47;
}


extern u8 D_8020186C[];

s32 func_801E806C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_8020186C);
    return 72;
}



s32 func_801E80A0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x49;
    }
    return 0x48;
}


s32 func_801E80D0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4A;
}


typedef struct func_801E80F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E80F8_Struct;

extern func_801E80F8_Struct D_80205B80;

s32 func_801E80F8(s32 arg0, s32 arg1) {
    func_801E80F8_Struct sp1C;

    sp1C = D_80205B80;
    func_801C18CC(1, &sp1C);
    return 0x4B;
}



s32 func_801E8148(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4B;
    }
    return 0x4C;
}


extern u8 D_80201A90[];

s32 func_801E8178(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201A90);
    return 77;
}



s32 func_801E81AC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4E;
    }
    return 0x4D;
}


s32 func_801E81DC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4F;
}


typedef struct func_801E8204_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8204_Struct;

extern func_801E8204_Struct D_80205B8C;

s32 func_801E8204(s32 arg0, s32 arg1) {
    func_801E8204_Struct sp1C;

    sp1C = D_80205B8C;
    func_801C18CC(1, &sp1C);
    return 0x50;
}



s32 func_801E8254(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x50;
    }
    return 0x51;
}


s32 func_801E8284(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x52;
}


typedef struct func_801E82AC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E82AC_Struct;

extern func_801E82AC_Struct D_80205B98;

s32 func_801E82AC(s32 arg0, s32 arg1) {
    func_801E82AC_Struct sp1C;

    sp1C = D_80205B98;
    func_801C18CC(1, &sp1C);
    return 0x53;
}



s32 func_801E82FC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x53;
    }
    return 0x54;
}


s32 func_801E832C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x55;
}


typedef struct func_801E8354_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8354_Struct;

extern func_801E8354_Struct D_80205BA4;

s32 func_801E8354(s32 arg0, s32 arg1) {
    func_801E8354_Struct sp1C;

    sp1C = D_80205BA4;
    func_801C18CC(1, &sp1C);
    return 0x56;
}



s32 func_801E83A4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x56;
    }
    return 0x57;
}


s32 func_801E83D4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x58;
}


typedef struct func_801E83FC_Struct {
    s32 w[9];
} func_801E83FC_Struct;

extern func_801E83FC_Struct D_80205BB0;

s32 func_801E83FC(s32 arg0, s32 arg1) {
    func_801E83FC_Struct sp1C;

    sp1C = D_80205BB0;
    func_801C18CC(3, &sp1C);
    return 89;
}



s32 func_801E8460(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x59;
    }
    return 0x5A;
}


s32 func_801E8490(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5B;
}


typedef struct func_801E84B8_Struct {
    s32 w[9];
} func_801E84B8_Struct;

extern func_801E84B8_Struct D_80205BD4;

s32 func_801E84B8(s32 arg0, s32 arg1) {
    func_801E84B8_Struct sp1C;

    sp1C = D_80205BD4;
    func_801C18CC(3, &sp1C);
    return 92;
}



s32 func_801E851C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5C;
    }
    return 0x5D;
}


s32 func_801E854C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5E;
}


typedef struct func_801E8574_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8574_Struct;

extern func_801E8574_Struct D_80205BF8;

s32 func_801E8574(s32 arg0, s32 arg1) {
    func_801E8574_Struct sp1C;

    sp1C = D_80205BF8;
    func_801C18CC(1, &sp1C);
    return 0x5F;
}



s32 func_801E85C4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5F;
    }
    return 0x60;
}


extern u8 D_80201C08[];

s32 func_801E85F4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201C08);
    return 97;
}



s32 func_801E8628(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x62;
    }
    return 0x61;
}


s32 func_801E8658(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x63;
}


typedef struct func_801E8680_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8680_Struct;

extern func_801E8680_Struct D_80205C04;

s32 func_801E8680(s32 arg0, s32 arg1) {
    func_801E8680_Struct sp1C;

    sp1C = D_80205C04;
    func_801C18CC(1, &sp1C);
    return 0x64;
}



s32 func_801E86D0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x64;
    }
    return 0x65;
}


s32 func_801E8700(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x66;
}


typedef struct func_801E8728_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8728_Struct;

extern func_801E8728_Struct D_80205C10;

s32 func_801E8728(s32 arg0, s32 arg1) {
    func_801E8728_Struct sp18;

    sp18 = D_80205C10;
    func_801C18CC(2, &sp18);
    return 0x67;
}



s32 func_801E8790(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x67;
    }
    return 0x68;
}


extern u8 D_80201E48[];

s32 func_801E87C0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80201E48);
    return 105;
}



s32 func_801E87F4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6A;
    }
    return 0x69;
}


s32 func_801E8824(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6B;
}


typedef struct func_801E884C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E884C_Struct;

extern func_801E884C_Struct D_80205C28;

s32 func_801E884C(s32 arg0, s32 arg1) {
    func_801E884C_Struct sp18;

    sp18 = D_80205C28;
    func_801C18CC(2, &sp18);
    return 0x6C;
}



s32 func_801E88B4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6C;
    }
    return 0x6D;
}


s32 func_801E88E4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6E;
}


typedef struct func_801E890C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E890C_Struct;

extern func_801E890C_Struct D_80205C40;

s32 func_801E890C(s32 arg0, s32 arg1) {
    func_801E890C_Struct sp1C;

    sp1C = D_80205C40;
    func_801C18CC(1, &sp1C);
    return 0x6F;
}



s32 func_801E895C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6F;
    }
    return 0x70;
}


extern u8 D_80202018[];

s32 func_801E898C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202018);
    return 113;
}



s32 func_801E89C0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x72;
    }
    return 0x71;
}


s32 func_801E89F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x73;
}


typedef struct func_801E8A18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8A18_Struct;

extern func_801E8A18_Struct D_80205C4C;

s32 func_801E8A18(s32 arg0, s32 arg1) {
    func_801E8A18_Struct sp1C;

    sp1C = D_80205C4C;
    func_801C18CC(1, &sp1C);
    return 0x74;
}



s32 func_801E8A68(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x74;
    }
    return 0x75;
}


s32 func_801E8A98(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x76;
}


typedef struct func_801E8AC0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8AC0_Struct;

extern func_801E8AC0_Struct D_80205C58;

s32 func_801E8AC0(s32 arg0, s32 arg1) {
    func_801E8AC0_Struct sp18;

    sp18 = D_80205C58;
    func_801C18CC(2, &sp18);
    return 0x77;
}



s32 func_801E8B28(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x77;
    }
    return 0x78;
}


extern u8 D_802020B0[];

s32 func_801E8B58(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802020B0);
    return 121;
}



s32 func_801E8B8C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x7A;
    }
    return 0x79;
}


s32 func_801E8BBC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7B;
}


typedef struct func_801E8BE4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8BE4_Struct;

extern func_801E8BE4_Struct D_80205C70;

s32 func_801E8BE4(s32 arg0, s32 arg1) {
    func_801E8BE4_Struct sp18;

    sp18 = D_80205C70;
    func_801C18CC(2, &sp18);
    return 0x7C;
}



s32 func_801E8C4C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7C;
    }
    return 0x7D;
}


s32 func_801E8C7C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7E;
}


typedef struct func_801E8CA4_Struct {
    s32 w[9];
} func_801E8CA4_Struct;

extern func_801E8CA4_Struct D_80205C88;

s32 func_801E8CA4(s32 arg0, s32 arg1) {
    func_801E8CA4_Struct sp1C;

    sp1C = D_80205C88;
    func_801C18CC(3, &sp1C);
    return 127;
}



s32 func_801E8D08(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7F;
    }
    return 0x80;
}


s32 func_801E8D38(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x81;
}


typedef struct func_801E8D60_Struct {
    s32 w[9];
} func_801E8D60_Struct;

extern func_801E8D60_Struct D_80205CAC;

s32 func_801E8D60(s32 arg0, s32 arg1) {
    func_801E8D60_Struct sp1C;

    sp1C = D_80205CAC;
    func_801C18CC(3, &sp1C);
    return 130;
}



s32 func_801E8DC4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x82;
    }
    return 0x83;
}


s32 func_801E8DF4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x84;
}


typedef struct func_801E8E1C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8E1C_Struct;

extern func_801E8E1C_Struct D_80205CD0;

s32 func_801E8E1C(s32 arg0, s32 arg1) {
    func_801E8E1C_Struct sp18;

    sp18 = D_80205CD0;
    func_801C18CC(2, &sp18);
    return 0x85;
}



s32 func_801E8E84(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x85;
    }
    return 0x86;
}


s32 func_801E8EB4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x87;
}


typedef struct func_801E8EDC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8EDC_Struct;

extern func_801E8EDC_Struct D_80205CE8;

s32 func_801E8EDC(s32 arg0, s32 arg1) {
    func_801E8EDC_Struct sp18;

    sp18 = D_80205CE8;
    func_801C18CC(2, &sp18);
    return 0x88;
}



s32 func_801E8F44(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x88;
    }
    return 0x89;
}


s32 func_801E8F74(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x8A;
}


s32 func_801E8F9C(s32 arg0, s32 arg1) {
    return 139;
}


s32 func_801E8FAC(s32 arg0, s32 arg1) {
    return 140;
}


extern u8 D_80202254[];

s32 func_801E8FBC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202254);
    return 141;
}



s32 func_801E8FF0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x8E;
    }
    return 0x8D;
}


s32 func_801E9020(s32 arg0, s32 arg1) {
    return 143;
}


typedef struct func_801E9030_Struct {
    s32 w[12];
} func_801E9030_Struct;

extern func_801E9030_Struct D_80205D00;

s32 func_801E9030(s32 arg0, s32 arg1) {
    func_801E9030_Struct sp18;

    sp18 = D_80205D00;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x90;
}



s32 func_801E9094(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x90;
    }
    return 0x91;
}


extern u8 D_80202424[];

s32 func_801E90C4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202424);
    return 146;
}



s32 func_801E90F8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x93;
    }
    return 0x92;
}


s32 func_801E9128(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x94;
}


typedef struct func_801E9150_Struct {
    s32 w[12];
} func_801E9150_Struct;

extern func_801E9150_Struct D_80205D30;

s32 func_801E9150(s32 arg0, s32 arg1) {
    func_801E9150_Struct sp18;

    sp18 = D_80205D30;
    func_801C18CC(4, &sp18);
    return 0x95;
}



s32 func_801E91B4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x95;
    }
    return 0x96;
}


s32 func_801E91E4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x97;
}


typedef struct func_801E920C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E920C_Struct;

extern func_801E920C_Struct D_80205D60;

s32 func_801E920C(s32 arg0, s32 arg1) {
    func_801E920C_Struct sp18;

    sp18 = D_80205D60;
    func_801C18CC(2, &sp18);
    return 0x98;
}



s32 func_801E9274(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x98;
    }
    return 0x99;
}


extern u8 D_8020261C[];

s32 func_801E92A4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_8020261C);
    return 154;
}



s32 func_801E92D8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x9B;
    }
    return 0x9A;
}


s32 func_801E9308(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9C;
}


typedef struct func_801E9330_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9330_Struct;

extern func_801E9330_Struct D_80205D78;

s32 func_801E9330(s32 arg0, s32 arg1) {
    func_801E9330_Struct sp18;

    sp18 = D_80205D78;
    func_801C18CC(2, &sp18);
    return 0x9D;
}



s32 func_801E9398(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9D;
    }
    return 0x9E;
}


s32 func_801E93C8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9F;
}


typedef struct func_801E93F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E93F0_Struct;

extern func_801E93F0_Struct D_80205D90;

s32 func_801E93F0(s32 arg0, s32 arg1) {
    func_801E93F0_Struct sp1C;

    sp1C = D_80205D90;
    func_801C18CC(1, &sp1C);
    return 0xA0;
}



s32 func_801E9440(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA0;
    }
    return 0xA1;
}


extern u8 D_80202870[];

s32 func_801E9470(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202870);
    return 162;
}



s32 func_801E94A4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA3;
    }
    return 0xA2;
}


s32 func_801E94D4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA4;
}


typedef struct func_801E94FC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E94FC_Struct;

extern func_801E94FC_Struct D_80205D9C;

s32 func_801E94FC(s32 arg0, s32 arg1) {
    func_801E94FC_Struct sp1C;

    sp1C = D_80205D9C;
    func_801C18CC(1, &sp1C);
    return 0xA5;
}



s32 func_801E954C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA5;
    }
    return 0xA6;
}


s32 func_801E957C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA7;
}


s32 func_801E95A4(s32 arg0, s32 arg1) {
    return 168;
}


s32 func_801E95B4(s32 arg0, s32 arg1) {
    return 168;
}


s32 func_801E95C4(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E95D4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E95E4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E95F4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7F) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}



s32 func_801E9648(s32 arg0, s32 arg1) {
    func_8038D28C(0x171);
    return 5;
}


s32 func_801E9674(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x82) || (func_801C1B1C() == 0)) {
        return 5;
    }
    return 6;
}


s32 func_801E96C8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E96D8(s32 arg0, s32 arg1) {
    return 7;
}


extern f32 D_80208868;
extern f32 D_8020886C;

s32 func_801E96E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x72);
        func_8038BED4();
        return 1;
    }
    func_8038BD50(D_80208868, 72.5f, 0x41EA6666);
    D_8038BD88(1.0f, D_8020886C, 0xC0800000);
    return 0;
}


extern f32 D_80208870;
extern f32 D_80208874;
extern f32 D_80208878;
extern f32 D_8020887C;
extern f32 D_80208880;
extern f32 D_80208884;

s32 func_801E976C(s32 arg0, s32 arg1)
{
  int new_var;
  f32 t0 = -2.0f;
  f32 t1 = D_80208870;
  f32 t2 = D_80208874;
  if (!t0)
  {
  }
  if (t0 && t0)
  {
  }
  new_var = 0;
  if (func_8038BEF8(0.0f, 3.0f, -7.6f, -0.4f, D_80208878, D_8020887C, D_80208880, D_80208884, t0, t1, t2, t0, t1, t2) != new_var)
  {
    return 2;
  }
  return 1;
}


s32 func_801E9818(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}


extern f32 D_80208888;
extern f32 D_8020888C;
extern f32 D_80208890;
extern f32 D_80208894;
extern f32 D_80208898;
extern f32 D_8020889C;

s32 func_801E9864(s32 arg0, s32 arg1) {
    f32 temp_a;
    f32 temp_b;

    temp_a = D_80208888;
    temp_b = D_8020888C;
    if (func_8038BEF8(0.0f, 1.5f, -0.9f, 5.7f, D_80208890, D_80208894, D_80208898, D_8020889C, 0.0f, temp_a, temp_b, 0.0f, temp_a, temp_b) != 0) {
        return 4;
    }
    return 3;
}


s32 func_801E9908(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x632EA0) != 0) {
        func_8038BED4();
        return 5;
    }
    return 4;
}


extern f32 D_802088A0;
extern f32 D_802088A4;
extern f32 D_802088A8;
extern f32 D_802088AC;
extern f32 D_802088B0;
extern f32 D_802088B4;

s32 func_801E9954(s32 arg0, s32 arg1) {
    f32 sp20 = D_802088A0;
    f32 sp24 = D_802088A4;
    f32 sp28 = D_802088A8;

    if (func_8038BEF8(0.0f, 5.5f, 16.6f, 39.9f, D_802088AC, D_802088B0, D_802088B4, 49.5f, sp20, sp24, sp28, sp20, sp24, sp28) != 0) {
        return 6;
    }
    return 5;
}


s32 func_801E9A00(s32 arg0, s32 arg1) {
    return 7;
}


extern f32 D_802088B8;
extern f32 D_802088BC;

s32 func_801E9A10(s32 arg0, s32 arg1) {
    func_8038BD50(D_802088B8, 3.0f, 0x41F4CCCD);
    D_8038BD88(0.0f, D_802088BC, 0x40200000);
    return 8;
}


s32 func_801E9A64(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 8;
    }
    return 9;
}


s32 func_801E9AB8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}


extern f32 D_802088C0;
extern f32 D_802088C4;
extern f32 D_802088C8;
extern void func_8038BD88(f32, f32, f32);

s32 func_801E9B0C(volatile s32 arg0, volatile s32 arg1) {
    func_8038BD50(D_802088C0, D_802088C4, 0xC2353333);
    func_8038BD88(D_802088C8, 15.0f, D_802088C8);
    return 0xB;
}


s32 func_801E9B68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801E9BBC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


extern f32 D_802088CC;
extern f32 D_802088D0;
extern f32 D_802088D4;

s32 func_801E9C10(s32 arg0, s32 arg1) {
    func_8038BD50(D_802088CC, D_802088D0, 0x415E6666);
    D_8038BD88(D_802088D4, 11.0f, 0x3F99999A);
    return 0xE;
}


s32 func_801E9C6C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E9CC0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


extern f32 D_802088D8;
extern f32 D_802088DC;
extern f32 D_802088E0;

s32 func_801E9D14(s32 arg0, s32 arg1) {
    func_8038BD50(D_802088D8, D_802088DC, 0xC1E26666);
    D_8038BD88(0.5f, D_802088E0, 0x4059999A);
    return 0x11;
}


s32 func_801E9D70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801E9DC4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


extern f32 D_802088E4;
extern f32 D_802088E8;
extern f32 D_802088EC;

s32 func_801E9E18(s32 arg0, s32 arg1) {
    func_8038BD50(D_802088E4, D_802088E8, 0x4109999A);
    D_8038BD88(-1.0f, D_802088EC, 0xC1E80000);
    return 0x14;
}


s32 func_801E9E70(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x34 || func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801E9EC4(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x3D || func_801C1B1C() == 0) {
        return 0x15;
    }
    func_8038BED4();
    return 0x16;
}


extern f32 D_802088F0;
extern f32 D_802088F4;
extern f32 D_802088F8;
extern f32 D_802088FC;
extern f32 D_80208900;
extern f32 D_80208904;

s32 func_801E9F20(s32 arg0, s32 arg1) {
    f32 f0;

    f0 = D_802088F0;
    if (func_8038BEF8(0.0f, 3.0f, -13.9f, 8.9f, -11.5f, D_802088F4, D_802088F8, D_802088FC, -4.5f, D_80208900, f0, -5.5f, D_80208904, f0) != 0) {
        return 0x17;
    }
    return 0x16;
}


s32 func_801E9FDC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x40) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}


s32 func_801EA030(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}


extern f32 D_80208908;
extern f32 D_8020890C;
extern f32 D_80208910;

s32 func_801EA084(s32 arg0, s32 arg1) {
    func_8038BD50(24.0f, D_80208908, 0x419A6666);
    D_8038BD88(D_8020890C, D_80208910, 0xBF99999A);
    return 0x1A;
}


struct func_801EA0E0_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801EA0E0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x1A;
    }
    return 0x1B;
}



s32 func_801EA134(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}


extern f32 D_80208914;
extern f32 D_80208918;

s32 func_801EA188(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208914, D_80208918, 0x42533333);
    D_8038BD88(-13.0f, 5.5f, 0xC1400000);
    return 0x1D;
}


s32 func_801EA1E0(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801EA234(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x65) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    func_8038BED4();
    return 0x1F;
}


extern f32 D_8020891C;
extern f32 D_80208920;
extern f32 D_80208924;
extern f32 D_80208928;
extern f32 D_8020892C;

s32 func_801EA290(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 36.3f, 29.3f, D_8020891C, 1.0f, D_80208920, D_80208924,
                      -13.0f, 5.5f, -12.0f, D_80208928, D_8020892C, -25.0f) != 0) {
        return 0x20;
    }
    return 0x1F;
}


s32 func_801EA354(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801EA3A8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6D) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}


extern f32 D_80208930;
extern f32 D_80208934;
extern f32 D_80208938;

s32 func_801EA3FC(s32 arg0, s32 arg1) {
    func_8038BD50(24.0f, D_80208930, 0x419A6666);
    D_8038BD88(D_80208934, D_80208938, 0xBF99999A);
    return 0x23;
}


s32 func_801EA458(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x72) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801EA4AC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x75) || (func_801C1B1C() == 0)) {
        return 0x24;
    }
    return 0x25;
}


extern f32 D_8020893C;

s32 func_801EA500(s32 arg0, s32 arg1) {
    func_8038BD50(-6.5f, 20.0f, 0xC1C5999A);
    D_8038BD88(D_8020893C, 5.5f, 0x41B1999A);
    return 0x26;
}


s32 func_801EA55C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7A) || (func_801C1B1C() == 0)) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801EA5B0(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x7D) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}


extern f32 D_80208940;
extern f32 D_80208944;
extern f32 D_80208948;

s32 func_801EA604(s32 arg0, s32 arg1) {
    func_8038BD50(24.0f, D_80208940, 0x419A6666);
    D_8038BD88(D_80208944, D_80208948, 0xBF99999A);
    return 0x29;
}


s32 func_801EA660(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x82) || (func_801C1B1C() == 0)) {
        return 41;
    }
    return 42;
}


s32 func_801EA6B4(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x85) {
        goto ret22;
    }
    if (func_801C1B1C() != 0) {
        goto call;
    }
ret22:
    return 0x2A;
call:
    func_8038BED4();
    return 0x2B;
}


extern f32 D_8020894C;
extern f32 D_80208950;
extern f32 D_80208954;
extern f32 D_80208958;
extern f32 D_8020895C;
extern f32 D_80208960;

s32 func_801EA710(s32 arg0, s32 arg1) {
    f32 tmp;

    tmp = D_8020894C;
    if (func_8038BEF8(0.0f, 3.0f, 20.4f, 4.7f, D_80208950, D_80208954, D_80208958, D_8020895C, 4.5f, 10.0f, tmp, D_80208960, 11.0f, tmp) != 0) {
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801EA7CC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x88) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801EA820(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x8D) || (func_801C1B1C() == 0)) {
        return 0x2D;
    }
    return 0x2E;
}


extern f32 D_80208964;
extern f32 D_80208968;

s32 func_801EA874(s32 arg0, s32 arg1) {
    func_8038BD50(23.0f, -0.5f, 0x418CCCCD);
    D_8038BD88(D_80208964, D_80208968, 0x3E4CCCCD);
    return 0x2F;
}


s32 func_801EA8D0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x92) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    return 0x30;
}


s32 func_801EA924(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x9D) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    func_8038BED4();
    return 0x31;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801EA980.s")


s32 func_801EAA24(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA0) || (func_801C1B1C() == 0)) {
        return 0x32;
    }
    return 0x33;
}


/* context.h cannot be included: its lines 149 and 152 declare func_801CF514 as both
   s32 and void, so every compile of it fails. Declare only what this function uses. */
struct func_801EAA78_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801EAA78(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB3) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


extern f32 D_80208980;
extern f32 D_80208984;

s32 func_801EAACC(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208980, 31.5f, 0x4200CCCD);
    D_8038BD88(22.0f, D_80208984, -0x3E280000);
    return 0x35;
}


s32 func_801EAB24(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xB8) || (func_801C1B1C() == 0)) {
        return 0x35;
    }
    return 0x36;
}


s32 func_801EAB78(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBB) || (func_801C1B1C() == 0)) {
        return 0x36;
    }
    func_8038BED4();
    return 0x37;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801EABD4.s")


s32 func_801EAC7C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}


s32 func_801EACD0(s32 arg0, s32 arg1) {
    return 58;
}


s32 func_801EACE0(s32 arg0, s32 arg1) {
    return 58;
}



s32 func_801EACF0(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


s32 func_801EAD2C(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xC8, 0xFF);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE50(0x87, 0x63, 0x1C);
    return 2;
}


s32 func_801EAD90(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EADA0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EADB0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EADC0(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801EADD0(s32 arg0, s32 arg1) {
    func_801C2420(0x2D8, func_8038DD54 + 0x14);
    return 1;
}


struct func_801EAE04_StructR {
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

struct func_801EAE04_StructQ {
    u8 pad0[0x2C];
    struct func_801EAE04_StructR *unk2C;
};

struct func_801EAE04_StructP {
    struct func_801EAE04_StructQ *unk0;
};


s32 func_801EAE04(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2D8, 0);
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


s32 func_801EAEFC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EAF0C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EAF1C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EAF2C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801EAF3C(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    return 1;
}


#define O ((func_801E3068_Struct1 **)D_8038D8D0)

s32 func_801EAF90(s32 arg0, s32 arg1) {
    u32 d = (u32)D_801D9110 | 0x40000000;

    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 4, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 5, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 4);
    O[0]->unk30->unk4 = 22.0f;
    O[0]->unk30->unk8 = 0.0f;
    O[0]->unk30->unkC = -28.0f;
    O[0]->unk30->unk12 = 0;
    O[1]->unk30->unk4 = 22.0f;
    O[1]->unk30->unk8 = 0.0f;
    O[1]->unk30->unkC = -28.0f;
    O[1]->unk30->unk12 = 0;
    O[2]->unk30->unk4 = 22.0f;
    O[2]->unk30->unk8 = 0.0f;
    O[2]->unk30->unkC = -28.0f;
    O[2]->unk30->unk12 = 0x1E00;
    O[2]->unk30->unk30 = d;
    O[2]->unk30->unk24 = 0x100;
    O[2]->unk30->unk48 = 0x66;
    O[2]->unk30->unk49 = 0xE5;
    O[2]->unk30->unk4A = 0xE5;
    O[2]->unk30->unk4B = 0x7F;
    O[3]->unk30->unk4 = -22.0f;
    O[3]->unk30->unk8 = 0.0f;
    O[3]->unk30->unkC = -28.0f;
    O[3]->unk30->unk12 = 0;
    O[4]->unk30->unk4 = -22.0f;
    O[4]->unk30->unk8 = 0.0f;
    O[4]->unk30->unkC = -28.0f;
    O[4]->unk30->unk12 = 0;
    O[5]->unk30->unk4 = -22.0f;
    O[5]->unk30->unk8 = 0.0f;
    O[5]->unk30->unkC = -28.0f;
    O[5]->unk30->unk12 = 0x200;
    O[5]->unk30->unk30 = d;
    O[5]->unk30->unk24 = 0x100;
    O[5]->unk30->unk48 = 0x66;
    O[5]->unk30->unk49 = 0xE5;
    O[5]->unk30->unk4A = 0xE5;
    O[5]->unk30->unk4B = 0x7F;
    O[6]->unk30->unk4 = 0.0f;
    O[6]->unk30->unk8 = 0.0f;
    O[6]->unk30->unkC = 0.0f;
    O[6]->unk30->unk12 = 0;
    return 2;
}


s32 func_801EB394(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB3A4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB3B4(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801EB3C4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB408(s32 arg0, s32 arg1) {
    return 2;
}


extern s32 D_802061E8;

s32 func_801EB418(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xBB || func_801C1B1C() == 0) {
        return 2;
    }
    D_802061E8 = 0;
    return 3;
}


extern f64 D_802089A0;

s32 func_801EB470(s32 arg0, s32 arg1) {
    if (D_802061E8 == 0) {
        goto case0;
    }
    if (D_802061E8 == 1) {
        goto case1;
    }
    return 3;
case0:
    func_801C0D04(3, 1);
    D_802061E8 = 1;
    goto end;
case1:
    if (func_801C0DE4(3, 1, 0x40400000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    *(s16 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 4) + 0x30) + 0x12) = (s16)(s32)((((f32)(func_80034C24(func_801C0F18(3, 1)) / D_802089A0) / 3.0f) * 180.0f * 2048.0f) / 90.0f);
end:
    return 3;
}


s32 func_801EB570(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0x4;
    }
    return 0x5;
}


s32 func_801EB5C4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EB5D4(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801EB5E4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB628(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EB638(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB648(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB658(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801EB668(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB6AC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EB6BC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB6CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB6DC(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801EB6EC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB730(s32 arg0, s32 arg1) {
    return 2;
}


extern s32 D_80206230;

s32 func_801EB740(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x65) || (func_801C1B1C() == 0)) {
        return 2;
    }
    D_80206230 = 0;
    return 3;
}


extern f64 D_802089A8;

s32 func_801EB798(s32 arg0, s32 arg1) {
    u64 r;

    if (D_80206230 == 0) goto c0;
    if (D_80206230 == 1) goto c1;
    if (D_80206230 == 2) goto c2;
    return 3;
c0:
    func_801C0D04(3, 4);
    D_80206230 = 1;
    goto end;
c1:
    if (func_801C0DE4(3, 4, 0x3FC00000) != 0) {
        func_801C0EB0(3, 4);
        func_801C0D04(3, 4);
        D_80206230 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(3, 4, 0x3FC00000) != 0) {
        func_801C0EB0(3, 4);
        return 4;
    }
    r = func_801C0F18(3, 4);
    *(f32 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x10) + 0x30) + 8) = ((f32)(func_80034C24(r) / D_802089A8) / 1.5f) * -23.0f;
end:
    return 3;
}


s32 func_801EB8B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x4;
    }
    return 0x5;
}


s32 func_801EB908(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EB918(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801EB928(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB96C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EB97C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EB98C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EB99C(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801EB9AC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801EB9F0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801EBA00(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EBA10(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801EBA20(s32 arg0, s32 arg1) {
    return 4;
}


extern u8 D_801DB164[];
extern u8 D_801DB660[];
extern u8 D_801DB664[];

s32 func_801EBA30(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801CC458(2, D_801DB354);
    func_801CC4C0(2, D_801DB358);
    func_801C2420(0x11C, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(3, func_801DAE70 + 0x5C);
    func_801CC4C0(3, func_801DAE70 + 0x60);
    func_801C2420(0x2B, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(4, D_801DB164);
    func_801C2420(0x11B, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(5, D_801DB660);
    func_801CC4C0(5, D_801DB664);
    return 1;
}


struct func_801EBB64_StructNode {
    u8 pad[8];
    struct func_801EBB64_StructNode *next;
};

extern void func_801D517C(s32);
extern void func_801D5188(s32);
extern u8 D_801DB150[];
extern u8 D_801DB64C[];

#define FUNC_801EBB64_A (*(struct func_801EBB64_StructNode **)(func_801DAAF0 + 0x24))
#define FUNC_801EBB64_B ((struct func_801EBB64_StructNode *)D_801DAB14)
#define FUNC_801EBB64_C (*(struct func_801EBB64_StructNode **)(func_801DAE70 - 0x35C))

s32 func_801EBB64(s32 arg0, s32 arg1) {
    func_80005670(FUNC_801EBB64_A, D_801DB300);
    func_80005670(FUNC_801EBB64_B->next, D_801DB320);
    func_80005670(FUNC_801EBB64_C->next->next, D_801DB340);
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(FUNC_801EBB64_A->next->next->next, func_801DAE70 + 0x48);
    func_80005670(FUNC_801EBB64_B->next->next->next->next, D_801DB150);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(FUNC_801EBB64_C->next->next->next->next->next, D_801DB64C);
    func_801CC530();
    return 2;
}


typedef struct func_801EBC64_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801EBC64_StructE;

typedef struct func_801EBC64_StructD {
    u8 pad0[0x2C];
    func_801EBC64_StructE *unk2C;
} func_801EBC64_StructD;

typedef struct func_801EBC64_StructA {
    u8 pad0[8];
    struct func_801EBC64_StructA *unk8;
    u8 pad1[0x18];
    func_801EBC64_StructD *unk24;
} func_801EBC64_StructA;

s32 func_801EBC64(s32 arg0, s32 arg1) {
    func_801EBC64_StructD *temp_v0;

    temp_v0 = ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unkC = 90.0f;
        ((func_801EBC64_StructA *)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03480010, 0, 0x1001, 6.0f);
        return 3;
    }
    return 2;
}


extern s32 D_80206298;

s32 func_801EBD2C(s32 arg0, s32 arg1)
{
  func_801E3D90_StructB **p;
  unsigned short new_var;
  if (func_801C0B8C(0x53EC60) != 0)
  {
    new_var = 0x24;
    p = func_801DAAF0 + new_var;
    (*p)->unk8->unk24->unk2C->unk4 = 0.0f;
    (*p)->unk8->unk24->unk2C->unk8 = 21.0f;
    (*p)->unk8->unk24->unk2C->unkC = 17.0f;
    (*p)->unk8->unk24->unk2C->unk12 = 0x1000;
    func_801CC470(0, 0x0320002B, 0, 1, 1.0f);
    D_80206298 = 0;
    func_801C0D04(4, 0);
    return 4;
  }
  return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801EBE14.s")


s32 func_801EC0A8(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801EC0B8(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xF || func_801C1B1C() == 0) {
        return 6;
    }
    D_80206298 = 0;
    return 7;
}

struct func_801EC110_StructC { u8 pad0[4]; f32 x; f32 y; f32 z; };
struct func_801EC110_StructB { u8 pad[0x2C]; struct func_801EC110_StructC *c; };
struct func_801EC110_StructA { u8 pad[0x24]; struct func_801EC110_StructB *b; };
struct func_801EC110_Struct { u8 pad[8]; struct func_801EC110_StructA *a; };
extern f32 D_802089D4;
#define ROOT ((struct func_801EC110_Struct *)D_801DAB14)

s32 func_801EC110(s32 arg0, s32 arg1) {
    s32 v = D_80206298;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 7;
c0:
    func_801CC4D8(0, 0x0320001B, 0, 0, 6.0f);
    D_80206298 = 1;
    goto end;
c1:
    if (func_801D2C00() == 0) {
        func_801CC470(0, 0x0320001B, 0, 0x100, 3.0f);
        D_80206298 = 2;
    }
    goto end;
c2:
    if ((f64)ROOT->a->b->c->z < -30.0) {
        return 8;
    }
    if (func_801D2C5C(0x0320001B, 0) != 0 || func_801D2C5C(0x0320001B, 0x12) != 0) {
        func_8038D33C(ROOT->a->b->c->x, ROOT->a->b->c->y, *(s32 *)&ROOT->a->b->c->z, 0x4A1, D_802089D4, 1.0f);
    }
end:
    return 7;
}


s32 func_801EC274(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EC284(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x9;
    }
    return 0xA;
}


s32 func_801EC2D8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801EC32C(s32 arg0, s32 arg1) {
    *(s16 *)(*(s32 *)(*(s32 *)(*(s32 *)(*(s32 *)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x12) = 0;
    func_801CC470(0, 0x03480010, 0, 0x1001, 1.0f);
    return 0xC;
}


s32 func_801EC38C(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801EC39C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801EC3F0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801EC444(s32 arg0, s32 arg1)
{
  u8 *base;
  u8 **pp;
  int new_var;
  base = func_801DAAF0;
  new_var = (0x24 & 0xFFFFu) & 0xFFFFu;
  ;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (base + (((((new_var & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu)))) + 0x8))) + 0x24))) + 0x2C))) + 0x4)) = 7.0f;
  *((f32 *) ((*((u8 **) ((*((u8 **) ((*((u8 **) ((*((u8 **) (base + (((((new_var & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu) & 0xFFFFu)))) + 0x8))) + 0x24))) + 0x2C))) + 0xC)) = -28.0f;
  func_801CC470(0, 0x0320001A, 0, 0x100, 5.0f);
  return 0x10;
}


s32 func_801EC4CC(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801EC4DC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x34 || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801EC530(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801EC540(s32 arg0, s32 arg1) {
    return 19;
}



s32 func_801EC550(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_802089D8;
extern f32 D_802089DC;
extern s32 D_80208E28;

s32 func_801EC594(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_802089D8;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_802089DC;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x238;
        func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
        D_80208E28 = 0;
        return 2;
    }
    return 1;
}



s32 func_801EC674(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CC470(1, 0x03200022, 0, 0, 10.0f);
        return 3;
    }
    return 2;
}


s32 func_801D2F40(void);

s32 func_801EC6D8(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x4;
    }
    return 0x3;
}

extern s32 func_801C0B8C(u64);

s32 func_801EC708(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_801CC4D8(1, 0x0320001A, 0, 1, 15.0f);
        return 5;
    }
    return 4;
}


s32 func_801D2F30();

s32 func_801EC76C(s32 arg0, s32 arg1) {
    if (func_801D2F30() == 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801EC79C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x632EA0) != 0) {
        func_801CC550(1);
        return 7;
    }
    return 6;
}


s32 func_801EC7E8(s32 arg0, s32 arg1) {
    if (func_801CC564(1, &func_801D2F40, 0x03200020, 0, 0, 10.0f, &func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 8;
    }
    return 7;
}


s32 func_801EC870(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EC880(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 7) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}



s32 func_801EC8D4(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 11;
}


s32 func_801EC900(s32 arg0, s32 arg1) {
    if (func_801CC564(1, (void *) &func_801D2F40, 0x03200020, 0, 0, 10.0f, (void *) &func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xC;
    }
    return 0xB;
}


typedef struct func_801EC988_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801EC988_Struct;


s32 func_801EC988(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xC) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801EC9DC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xF) || (func_801C1B1C() == 0)) {
        return 13;
    }
    return 0xE;
}



s32 func_801ECA30(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 15;
}


s32 func_801ECA5C(s32 arg0, s32 arg1) {
    if (func_801CC564(1, (void *) func_801D2F40, 0x0320001F, 0, 0, 10.0f, (void *) func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801ECAE4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x14) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801ECB38(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x17) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}



s32 func_801ECB8C(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x0320001D, 0, 0, 3.0f);
    D_80208E28 = 0;
    return 19;
}


s32 func_801ECBD8(s32 arg0, s32 arg1) {
    if (D_80208E28 == 0) {
        goto case0;
    }
    if (D_80208E28 == 1) {
        goto case1;
    }
    return 0x13;
case0:
    if (func_801D2F40() != 0) {
        func_801CC550(1);
        D_80208E28 = 1;
    }
    goto ret13;
case1:
    if (func_801CC564(1, (void *)func_801D2F40, 0x0320001E, 0, 0, 3.0f, (void *)func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x14;
    }
ret13:
    return 0x13;
}


s32 func_801ECCAC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1C) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801ECD00(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1F) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}



s32 func_801ECD54(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 23;
}


s32 func_801ECD80(s32 arg0, s32 arg1) {
    if (func_801CC564(1, (void *)func_801D2F40, 0x0320001C, 0, 0, 10.0f, (void *)func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x18;
    }
    return 0x17;
}


s32 func_801ECE08(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x24) || (func_801C1B1C() == 0)) {
        return 24;
    }
    return 25;
}


s32 func_801ECE5C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x27) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}



s32 func_801ECEB0(s32 arg0, s32 arg1) {
    func_801CC550(0x1);
    return 27;
}


s32 func_801ECEDC(s32 arg0, s32 arg1) {
    if (func_801CC564(1, &func_801D2F40, 0x03200021, 0, 0, 10.0f, &func_801D2F30, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801ECF64(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2C) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801ECFB8(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801ECFC8(s32 arg0, s32 arg1) {
    return 30;
}



s32 func_801ECFD8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_802089E0;

#define FUNC_801ED01C_N8(p) (*(void **)((u8 *)(p) + 0x8))
#define FUNC_801ED01C_N24(p) (*(void **)((u8 *)(p) + 0x24))
#define FUNC_801ED01C_N2C(p) (*(void **)((u8 *)(p) + 0x2C))
#define FUNC_801ED01C_OBJ FUNC_801ED01C_N2C(FUNC_801ED01C_N24(FUNC_801ED01C_N8(FUNC_801ED01C_N8(FUNC_801ED01C_N8(*(void **)&D_801DAB14)))))

s32 func_801ED01C(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = (s32)FUNC_801ED01C_N24(FUNC_801ED01C_N8(FUNC_801ED01C_N8(FUNC_801ED01C_N8(*(void **)&D_801DAB14))));
    if (temp_v0 != 0) {
        *(f32 *)((u8 *)FUNC_801ED01C_N2C((void *)temp_v0) + 0x4) = 7.0f;
        *(f32 *)((u8 *)FUNC_801ED01C_OBJ + 0x8) = 0.0f;
        *(f32 *)((u8 *)FUNC_801ED01C_OBJ + 0xC) = D_802089E0;
        *(u16 *)((u8 *)FUNC_801ED01C_OBJ + 0x12) = 0x1E38;
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801ED104(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(2, 0x03200022, 0, 0, 10.0f);
        return 3;
    }
    return 2;
}


s32 func_801D3270(void);

s32 func_801ED168(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x4;
    }
    return 0x3;
}


s32 func_801ED198(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4C4B40) != 0) {
        func_801CC4D8(2, 0x0320001A, 0, 1, 15.0f);
        return 5;
    }
    return 4;
}


s32 func_801D3260();

s32 func_801ED1FC(s32 arg0, s32 arg1) {
    if (func_801D3260() == 0) {
        return 0x6;
    }
    return 0x5;
}



s32 func_801ED22C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6ACFC0) != 0) {
        func_801CC550(2);
        return 7;
    }
    return 6;
}


extern u8 func_801D3200[];

s32 func_801ED278(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200020, 0, 0, 20.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 20.0f) != 0) {
        return 8;
    }
    return 7;
}


s32 func_801ED2F8(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801ED308(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 10;
}



s32 func_801ED334(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200021, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801ED3BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 11;
    }
    return 12;
}


s32 func_801ED410(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}



s32 func_801ED464(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 14;
}



s32 func_801ED490(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001C, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0xF;
    }
    return 0xE;
}


struct func_801ED518_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801ED518(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801ED56C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}


extern s32 D_80206368;

s32 func_801ED5C0(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    D_80206368 = 0;
    return 18;
}


s32 func_801ED5F0(s32 arg0, s32 arg1) {
    s32 s = D_80206368;
    if (s != 0) {
        if (s != 1) {
            if (s == 2) goto c2;
            return 0x12;
        }
        goto c1;
    }
c0:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001A, 0, 0, 1.0f, func_801D3200 + 0x60, 0x0320002A, 0, 1, 6.0f) != 0) {
        func_801CC550(2);
        D_80206368 = 1;
    }
    goto def;
c1:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320002A, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320002A, 0, 1, 1.0f) != 0) {
        func_801CC550(2);
        D_80206368 = 2;
    }
    goto def;
c2:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320002A, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 6.0f) == 0) {
        goto def;
    }
    return 0x13;
def:
    return 0x12;
}


s32 func_801ED794(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x52) {
        goto ret13;
    }
    if (func_801C1B1C() != 0) {
        goto ret14;
    }
ret13:
    return 0x13;
ret14:
    return 0x14;
}



s32 func_801ED7E8(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}



s32 func_801ED83C(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 22;
}


s32 func_801ED868(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001F, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x17;
    }
    return 0x16;
}


s32 func_801ED8F0(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x17;
    }
    return 0x18;
}


s32 func_801ED944(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x5D) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}



s32 func_801ED998(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x0320001D, 0, 0, 3.0f);
    D_80206368 = 0;
    return 26;
}


s32 func_801ED9E4(s32 arg0, s32 arg1) {
    if (D_80206368 == 0) {
        goto block_c0;
    }
    if (D_80206368 == 1) {
        goto block_c1;
    }
    return 0x1A;
block_c0:
    if (func_801D3270() == 0) {
        goto block_ret;
    }
    func_801CC550(2);
    D_80206368 = 1;
    goto block_ret;
block_c1:
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001E, 0, 0, 3.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x1B;
    }
block_ret:
    return 0x1A;
}


s32 func_801EDAB8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x62) || (func_801C1B1C() == 0)) {
        return 0x1B;
    }
    return 0x1C;
}


s32 func_801EDB0C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x6D) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}



s32 func_801EDB60(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 30;
}


s32 func_801EDB8C(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200021, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801EDC14(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x72) || (func_801C1B1C() == 0)) {
        return 0x1F;
    }
    return 0x20;
}


s32 func_801EDC68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x75) || (func_801C1B1C() == 0)) {
        return 0x20;
    }
    return 0x21;
}



s32 func_801EDCBC(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 34;
}


s32 func_801EDCE8(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200020, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x23;
    }
    return 0x22;
}


s32 func_801EDD70(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7A) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801EDDC4(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x7D) || (func_801C1B1C() == 0)) {
        return 0x24;
    }
    return 0x25;
}



s32 func_801EDE18(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 38;
}


s32 func_801EDE44(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001C, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x27;
    }
    return 0x26;
}


s32 func_801EDECC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x82) || (func_801C1B1C() == 0)) {
        return 39;
    }
    return 40;
}


s32 func_801EDF20(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x85) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801EDF74(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200027, 0, 0, 6.0f);
    return 0x2A;
}



s32 func_801EDFBC(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x2B;
    }
    return 0x2A;
}


s32 func_801EDFEC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x88) || (func_801C1B1C() == 0)) {
        return 0x2B;
    }
    return 0x2C;
}


s32 func_801EE040(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x8D) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801EE094(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320001A, 0, 1, 45.0f);
    return 0x2E;
}



s32 func_801EE0DC(s32 arg0, s32 arg1) {
    if (func_801D3260() == 0) {
        return 0x2F;
    }
    return 0x2E;
}


s32 func_801EE10C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x92) || (func_801C1B1C() == 0)) {
        return 0x2F;
    }
    return 0x30;
}


s32 func_801EE160(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x95) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801EE1B4(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200022, 0, 0, 10.0f);
    return 0x32;
}



s32 func_801EE1FC(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x33;
    }
    return 0x32;
}


s32 func_801EE22C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x9A) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


s32 func_801EE280(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0x9D) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801EE2D4(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320001A, 0, 1, 60.0f);
    return 0x36;
}



s32 func_801EE31C(s32 arg0, s32 arg1) {
    if (func_801D3260() == 0) {
        return 0x37;
    }
    return 0x36;
}


s32 func_801EE34C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA0) || (func_801C1B1C() == 0)) {
        return 0x37;
    }
    return 0x38;
}


s32 func_801EE3A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA3) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}



s32 func_801EE3F4(s32 arg0, s32 arg1) {
    func_801CC550(0x2);
    return 58;
}


s32 func_801EE420(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x0320001C, 0, 0, 10.0f, func_801D3200 + 0x60, 0x0320001A, 0, 1, 15.0f) != 0) {
        return 0x3B;
    }
    return 0x3A;
}


s32 func_801EE4A8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xA8) || (func_801C1B1C() == 0)) {
        return 0x3B;
    }
    return 0x3C;
}


s32 func_801EE4FC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xAB) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801EE550(s32 arg0, s32 arg1) {
    func_801CC470(2, 0x03200027, 0, 0, 6.0f);
    return 0x3E;
}



s32 func_801EE598(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x3F;
    }
    return 0x3E;
}


s32 func_801EE5C8(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xB0 || func_801C1B1C() == 0) {
        return 0x3F;
    }
    return 0x40;
}


s32 func_801EE61C(s32 arg0, s32 arg1) {
    return 65;
}


s32 func_801EE62C(s32 arg0, s32 arg1) {
    return 65;
}



s32 func_801EE63C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


#define FUNC_801EE680_NX(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EE680_OBJ (*(u8 **)(FUNC_801EE680_NX(FUNC_801EE680_NX(FUNC_801EE680_NX(FUNC_801EE680_NX((u8 *)D_801DAB14)))) + 0x24))

s32 func_801EE680(s32 arg0, s32 arg1) {
    if (FUNC_801EE680_OBJ != NULL) {
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x4) = 5120.0f;
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x8) = 3.0f;
        *(f32 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0xC) = -28.0f;
        *(s16 *)(*(u8 **)(FUNC_801EE680_OBJ + 0x2C) + 0x12) = 0;
        func_801CC470(3, 0x03480011, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


extern s32 D_80206474;
extern f32 D_802089E4;

#define FUNC_801EE778_NX(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EE778_BASE (FUNC_801EE778_NX(FUNC_801EE778_NX(FUNC_801EE778_NX(FUNC_801EE778_NX(*pp)))))
#define FUNC_801EE778_SUB (*(u8 **)((u8 *)FUNC_801EE778_BASE + 0x24))
#define FUNC_801EE778_OBJ (*(u8 **)((u8 *)FUNC_801EE778_SUB + 0x2C))

s32 func_801EE778(s32 arg0, s32 arg1) {
    u8 **pp;

    if (func_801C0B8C(0x5B8D80) != 0) {
        pp = (u8 **)&D_801DAB14;
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0x4) = 0.0f;
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0x8) = 21.0f;
        *(f32 *)((u8 *)FUNC_801EE778_OBJ + 0xC) = D_802089E4;
        *(u16 *)((u8 *)FUNC_801EE778_OBJ + 0x12) = 0x1000;
        func_801CC470(3, 0x03480011, 0, 1, 1.0f);
        func_801C0D04(4, 3);
        D_80206474 = 0;
        return 3;
    }
    return 2;
}


extern f64 D_802089E8;

s32 func_801EE890(s32 arg0, s32 arg1) {
    u8 *p;
    if (D_80206474 == 0) goto c0;
    if (D_80206474 == 1) goto c1;
    if (D_80206474 == 2) goto c2;
    return 3;
c0:
    if (func_801C0DE4(4, 3, 0x3F000000) != 0) {
        func_801C0EB0(4, 3);
        func_801CC470(3, 0x03480011, 0, 0, 3.0f);
        func_8038D28C(0x168);
        D_80206474 = 1;
    } else {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 8) + 0x24) + 0x2C) + 8) = (f32)(((f64)((f32)(func_80034C24(func_801C0F18(4, 3)) / D_802089E8) / 0.5f) * -21.0) + 21.0);
    }
    goto done;
c1:
    if (func_801CFD50() != 0 && func_801C0B8C(0x632EA0) != 0) {
        func_801CC470(3, 0x03480010, 0, 0, 6.0f);
        D_80206474 = 2;
    }
    goto done;
c2:
    if (func_801CFD50() != 0) {
        return 4;
    }
done:
    return 3;
}


s32 func_801EEA28(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801EEA38(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x0348007A, 0, 0x100, 10.0f);
    return 6;
}


s32 func_801EEA80(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801EEA90(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 4) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}


s32 func_801EEAE4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EEAF4(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801EEB04(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801EEB48_StructF {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801EEB48_StructE {
    u8 pad0[0x2C];
    struct func_801EEB48_StructF *unk2C;
};

struct func_801EEB48_StructD {
    u8 pad0[8];
    struct func_801EEB48_StructD *unk8;
    u8 pad1[0x18];
    struct func_801EEB48_StructE *unk24;
};

s32 func_801EEB48(s32 arg0, s32 arg1) {
    struct func_801EEB48_StructE *temp_v0;

    temp_v0 = ((struct func_801EEB48_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801EEB48_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EEB48_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801EEB48_StructD *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(4, 0x03480000, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801EEC40(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801EEC50(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}


extern s32 func_801D1B10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5);

#define FUNC_801EECA4_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EECA4_P5() FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(FUNC_801EECA4_NEXT(D_801DAB14)))))
#define FUNC_801EECA4_E() ((func_801E3D90_StructD *)(*(u8 **)((u8 *)FUNC_801EECA4_P5() + 0x24)))->unk2C

s32 func_801EECA4(s32 arg0, s32 arg1) {
    FUNC_801EECA4_E()->unk4 = -4.0f;
    FUNC_801EECA4_E()->unk8 = 3.0f;
    FUNC_801EECA4_E()->unkC = -33.0f;
    FUNC_801EECA4_E()->unk12 = 0;
    func_801CC470(4, 0x0348007A, 0, 1, 10.0f);
    func_801D1B10(1, 4, 0x3FC00000, 0, 0x7F, 1);
    return 5;
}


s32 func_801D1B90(void);

s32 func_801EEDC0(s32 arg0, s32 arg1) {
    if (func_801D1B90() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801EEDF0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801EEE44(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x75) || (func_801C1B1C() == 0)) {
        return 0x7;
    }
    return 0x8;
}


#define FUNC_801EEE98_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801EEE98_BASE (*(u8 **)(func_801DAAF0 + 0x24))
#define FUNC_801EEE98_CHAIN FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_BASE)))))
#define FUNC_801EEE98_G (*(u8 **)((u8 *)FUNC_801EEE98_CHAIN + 0x24))
#define FUNC_801EEE98_H (*(u8 **)((u8 *)FUNC_801EEE98_G + 0x2C))

s32 func_801EEE98(s32 arg0, s32 arg1) {
    *(f32 *)((u8 *)FUNC_801EEE98_H + 0x4) = 5120.0f;
    return 9;
}


s32 func_801EEED8(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x7A) || (func_801C1B1C() == 0)) {
        return 0x9;
    }
    return 0xA;
}


s32 func_801EEF2C(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801EEF3C(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801EEF4C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801EEF90_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801EEF90_Sub {
    u8 pad0[0x2C];
    struct func_801EEF90_Data *unk2C;
};

struct func_801EEF90_Node {
    u8 pad0[8];
    struct func_801EEF90_Node *unk8;
    u8 pad1[0x18];
    struct func_801EEF90_Sub *unk24;
};

s32 func_801EEF90(s32 arg0, s32 arg1) {
    struct func_801EEF90_Sub *sub;

    sub = ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24;
    if (sub != NULL) {
        sub->unk2C->unk4 = 5120.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801EEF90_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(5, 0x03480023, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801EF09C(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801EF0AC(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x3;
    }
    return 0x4;
}

struct func_802005CC_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};
struct func_802005CC_Struct2 {
    u8 pad0[0x2C];
    struct func_802005CC_Struct3 *unk2C;
};
struct func_802005CC_Struct1 {
    u8 pad0[8];
    struct func_802005CC_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_802005CC_Struct2 *unk24;
};

s32 func_801EF100(s32 arg0, s32 arg1) {
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -22.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 3.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -28.0f;
    ((struct func_802005CC_Struct1 *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x200;

    func_801CC470(5, 0x03480023, 0, 1, 1.0f);
    return 5;
}


s32 func_801EF20C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801EF21C(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *p;

    p = func_801BF6B0(7);
    if ((p->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801EF270(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801EF280(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801EF290(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 2);
    return 1;
}



s32 func_801EF2FC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801EF32C(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 D_80206510;

s32 func_801EF33C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xBB || func_801C1B1C() == 0) {
        return 3;
    }
    D_80206510 = 0;
    return 4;
}



s32 func_801EF394(s32 arg0, s32 arg1) {
    if (D_80206510 == 0) {
        goto block_0;
    }
    if (D_80206510 == 1) {
        goto block_1;
    }
    return 4;
block_0:
    func_801C0D04(6, 0);
    D_80206510 = 1;
    goto ret4;
block_1:
    if (func_801C0DE4(6, 0, 0x40000000) != 0) {
        func_801C0EB0(6, 0);
        return 5;
    }
ret4:
    return 4;
}


s32 func_801EF418(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x5;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    func_8038D28C(8);
    return 0x6;
}



s32 func_801EF48C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    return 7;
}


s32 func_801EF4B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0x7;
    }
    return 0x8;
}


s32 func_801EF508(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EF518(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801EF528(s32 arg0, s32 arg1) {
    return 1;
}


extern u8 D_802028EC[];

s32 func_801EF538(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802028EC);
    return 2;
}



s32 func_801EF56C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}


typedef struct func_801EF59C_Struct {
    s32 w[9];
} func_801EF59C_Struct;

extern func_801EF59C_Struct D_80206544;

s32 func_801EF59C(s32 arg0, s32 arg1) {
    func_801EF59C_Struct sp1C;

    sp1C = D_80206544;
    func_801C18CC(3, &sp1C);
    return 4;
}



s32 func_801EF600(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}


s32 func_801EF630(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801EF658_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EF658_Struct;

extern func_801EF658_Struct D_80206568;

s32 func_801EF658(s32 arg0, s32 arg1) {
    func_801EF658_Struct sp1C;

    sp1C = D_80206568;
    func_801C18CC(1, &sp1C);
    return 0x7;
}



s32 func_801EF6A8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_80202B18[];

s32 func_801EF6D8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202B18);
    return 9;
}



s32 func_801EF70C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801EF73C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}


typedef struct func_801EF764_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EF764_Struct;

extern func_801EF764_Struct D_80206574;

s32 func_801EF764(s32 arg0, s32 arg1) {
    func_801EF764_Struct sp1C;

    sp1C = D_80206574;
    func_801C18CC(1, &sp1C);
    return 0xC;
}



s32 func_801EF7B4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801EF7E4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


typedef struct func_801EF80C_Struct {
    s32 w[9];
} func_801EF80C_Struct;

extern func_801EF80C_Struct D_80206580;

s32 func_801EF80C(s32 arg0, s32 arg1) {
    func_801EF80C_Struct sp1C;

    sp1C = D_80206580;
    func_801C18CC(3, &sp1C);
    return 15;
}



s32 func_801EF870(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xF;
    }
    return 0x10;
}


extern u8 D_80202C08[];

s32 func_801EF8A0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202C08);
    return 17;
}



s32 func_801EF8D4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x12;
    }
    return 0x11;
}


s32 func_801EF904(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x13;
}


typedef struct func_801EF92C_Struct {
    s32 w[9];
} func_801EF92C_Struct;

extern func_801EF92C_Struct D_802065A4;

s32 func_801EF92C(s32 arg0, s32 arg1) {
    func_801EF92C_Struct sp1C;

    sp1C = D_802065A4;
    func_801C18CC(3, &sp1C);
    return 20;
}



s32 func_801EF990(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801EF9C0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x16;
}


typedef struct func_801EF9E8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EF9E8_Struct;

extern func_801EF9E8_Struct D_802065C8;

s32 func_801EF9E8(s32 arg0, s32 arg1) {
    func_801EF9E8_Struct sp18;

    sp18 = D_802065C8;
    func_801C18CC(2, &sp18);
    return 0x17;
}



s32 func_801EFA50(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x17;
    }
    return 0x18;
}


extern u8 D_80202DC8[];

s32 func_801EFA80(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202DC8);
    return 25;
}



s32 func_801EFAB4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1A;
    }
    return 0x19;
}


s32 func_801EFAE4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1B;
}


typedef struct func_801EFB0C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFB0C_Struct;

extern func_801EFB0C_Struct D_802065E0;

s32 func_801EFB0C(s32 arg0, s32 arg1) {
    func_801EFB0C_Struct sp18;

    sp18 = D_802065E0;
    func_801C18CC(2, &sp18);
    return 0x1C;
}



s32 func_801EFB74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801EFBA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1E;
}


typedef struct func_801EFBCC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFBCC_Struct;

extern func_801EFBCC_Struct D_802065F8;

s32 func_801EFBCC(s32 arg0, s32 arg1) {
    func_801EFBCC_Struct sp1C;

    sp1C = D_802065F8;
    func_801C18CC(1, &sp1C);
    return 0x1F;
}



s32 func_801EFC1C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1F;
    }
    return 0x20;
}


extern u8 D_80202F50[];

s32 func_801EFC4C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80202F50);
    return 33;
}



s32 func_801EFC80(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x22;
    }
    return 0x21;
}


s32 func_801EFCB0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x23;
}


typedef struct func_801EFCD8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFCD8_Struct;

extern func_801EFCD8_Struct D_80206604;

s32 func_801EFCD8(s32 arg0, s32 arg1) {
    func_801EFCD8_Struct sp1C;

    sp1C = D_80206604;
    func_801C18CC(1, &sp1C);
    return 0x24;
}



s32 func_801EFD28(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}


s32 func_801EFD58(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x26;
}


typedef struct func_801EFD80_Struct {
    s32 w[9];
} func_801EFD80_Struct;

extern func_801EFD80_Struct D_80206610;

s32 func_801EFD80(s32 arg0, s32 arg1) {
    func_801EFD80_Struct sp1C;

    sp1C = D_80206610;
    func_801C18CC(3, &sp1C);
    return 39;
}



s32 func_801EFDE4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x27;
    }
    return 0x28;
}


extern u8 D_80203160[];

s32 func_801EFE14(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203160);
    return 41;
}



s32 func_801EFE48(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2A;
    }
    return 0x29;
}


s32 func_801EFE78(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2B;
}


typedef struct func_801EFEA0_Struct {
    s32 w[9];
} func_801EFEA0_Struct;

extern func_801EFEA0_Struct D_80206634;

s32 func_801EFEA0(s32 arg0, s32 arg1) {
    func_801EFEA0_Struct sp1C;

    sp1C = D_80206634;
    func_801C18CC(3, &sp1C);
    return 44;
}



s32 func_801EFF04(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801EFF34(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2E;
}


typedef struct func_801EFF5C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801EFF5C_Struct;

extern func_801EFF5C_Struct D_80206658;

s32 func_801EFF5C(s32 arg0, s32 arg1) {
    func_801EFF5C_Struct sp18;

    sp18 = D_80206658;
    func_801C18CC(2, &sp18);
    return 0x2F;
}



s32 func_801EFFC4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2F;
    }
    return 0x30;
}


extern u8 D_802032F8[];

s32 func_801EFFF4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802032F8);
    return 49;
}



s32 func_801F0028(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x32;
    }
    return 0x31;
}


s32 func_801F0058(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}


typedef struct func_801F0080_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0080_Struct;

extern func_801F0080_Struct D_80206670;

s32 func_801F0080(s32 arg0, s32 arg1) {
    func_801F0080_Struct sp18;

    sp18 = D_80206670;
    func_801C18CC(2, &sp18);
    return 0x34;
}



s32 func_801F00E8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801F0118(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x36;
}


typedef struct func_801F0140_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0140_Struct;

extern func_801F0140_Struct D_80206688;

s32 func_801F0140(s32 arg0, s32 arg1) {
    func_801F0140_Struct sp18;

    sp18 = D_80206688;
    func_801C18CC(2, &sp18);
    return 0x37;
}



s32 func_801F01A8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}


s32 func_801F01D8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x39;
}


typedef struct func_801F0200_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0200_Struct;

extern func_801F0200_Struct D_802066A0;

s32 func_801F0200(s32 arg0, s32 arg1) {
    func_801F0200_Struct sp18;

    sp18 = D_802066A0;
    func_801C18CC(2, &sp18);
    return 0x3A;
}



s32 func_801F0268(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3A;
    }
    return 0x3B;
}


s32 func_801F0298(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3C;
}


typedef struct func_801F02C0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F02C0_Struct;

extern func_801F02C0_Struct D_802066B8;

s32 func_801F02C0(s32 arg0, s32 arg1) {
    func_801F02C0_Struct sp1C;

    sp1C = D_802066B8;
    func_801C18CC(1, &sp1C);
    return 0x3D;
}



s32 func_801F0310(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3D;
    }
    return 0x3E;
}


s32 func_801F0340(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3F;
}


typedef struct func_801F0368_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0368_Struct;

extern func_801F0368_Struct D_802066C4;

s32 func_801F0368(s32 arg0, s32 arg1) {
    func_801F0368_Struct sp1C;

    sp1C = D_802066C4;
    func_801C18CC(1, &sp1C);
    return 0x40;
}



s32 func_801F03B8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x40;
    }
    return 0x41;
}


s32 func_801F03E8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x42;
}


extern u8 D_8020338C[];

s32 func_801F0410(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_8020338C);
    return 67;
}



s32 func_801F0444(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x44;
    }
    return 0x43;
}


typedef struct func_801F0474_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0474_Struct;

extern func_801F0474_Struct D_802066D0;

s32 func_801F0474(s32 arg0, s32 arg1) {
    func_801F0474_Struct sp18;

    sp18 = D_802066D0;
    func_801C18CC(2, &sp18);
    return 0x45;
}



s32 func_801F04DC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x45;
    }
    return 0x46;
}


extern u8 D_802035CC[];

s32 func_801F050C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802035CC);
    return 71;
}



s32 func_801F0540(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x48;
    }
    return 0x47;
}


s32 func_801F0570(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x49;
}


typedef struct func_801F0598_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0598_Struct;

extern func_801F0598_Struct D_802066E8;

s32 func_801F0598(s32 arg0, s32 arg1) {
    func_801F0598_Struct sp18;

    sp18 = D_802066E8;
    func_801C18CC(2, &sp18);
    return 0x4A;
}



s32 func_801F0600(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4A;
    }
    return 0x4B;
}


s32 func_801F0630(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4C;
}


typedef struct func_801F0658_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0658_Struct;

extern func_801F0658_Struct D_80206700;

s32 func_801F0658(s32 arg0, s32 arg1) {
    func_801F0658_Struct sp1C;

    sp1C = D_80206700;
    func_801C18CC(1, &sp1C);
    return 0x4D;
}



s32 func_801F06A8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4D;
    }
    return 0x4E;
}


extern u8 D_80203940[];

s32 func_801F06D8(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203940);
    return 79;
}



s32 func_801F070C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x50;
    }
    return 0x4F;
}


s32 func_801F073C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x51;
}


typedef struct func_801F0764_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0764_Struct;

extern func_801F0764_Struct D_8020670C;

s32 func_801F0764(s32 arg0, s32 arg1) {
    func_801F0764_Struct sp1C;

    sp1C = D_8020670C;
    func_801C18CC(1, &sp1C);
    return 0x52;
}



s32 func_801F07B4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x52;
    }
    return 0x53;
}


s32 func_801F07E4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x54;
}


typedef struct func_801F080C_Struct {
    s32 w[9];
} func_801F080C_Struct;

extern func_801F080C_Struct D_80206718;

s32 func_801F080C(s32 arg0, s32 arg1) {
    func_801F080C_Struct sp1C;

    sp1C = D_80206718;
    func_801C18CC(3, &sp1C);
    return 85;
}



s32 func_801F0870(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x55;
    }
    return 0x56;
}


extern u8 D_80203A98[];

s32 func_801F08A0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203A98);
    return 87;
}



s32 func_801F08D4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x58;
    }
    return 0x57;
}


s32 func_801F0904(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x59;
}


typedef struct func_801F092C_Struct {
    s32 w[9];
} func_801F092C_Struct;

extern func_801F092C_Struct D_8020673C;

s32 func_801F092C(s32 arg0, s32 arg1) {
    func_801F092C_Struct sp1C;

    sp1C = D_8020673C;
    func_801C18CC(3, &sp1C);
    return 90;
}



s32 func_801F0990(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5A;
    }
    return 0x5B;
}


s32 func_801F09C0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5C;
}


typedef struct func_801F09E8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F09E8_Struct;

extern func_801F09E8_Struct D_80206760;

s32 func_801F09E8(s32 arg0, s32 arg1) {
    func_801F09E8_Struct sp1C;

    sp1C = D_80206760;
    func_801C18CC(1, &sp1C);
    return 0x5D;
}



s32 func_801F0A38(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5D;
    }
    return 0x5E;
}


extern u8 D_80203BF0[];

s32 func_801F0A68(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203BF0);
    return 95;
}



s32 func_801F0A9C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x60;
    }
    return 0x5F;
}


s32 func_801F0ACC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x61;
}


typedef struct func_801F0AF4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F0AF4_Struct;

extern func_801F0AF4_Struct D_8020676C;

s32 func_801F0AF4(s32 arg0, s32 arg1) {
    func_801F0AF4_Struct sp1C;

    sp1C = D_8020676C;
    func_801C18CC(1, &sp1C);
    return 0x62;
}



s32 func_801F0B44(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x62;
    }
    return 0x63;
}


s32 func_801F0B74(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x64;
}


typedef struct func_801F0B9C_Struct {
    s32 w[9];
} func_801F0B9C_Struct;

extern func_801F0B9C_Struct D_80206778;

s32 func_801F0B9C(s32 arg0, s32 arg1) {
    func_801F0B9C_Struct sp1C;

    sp1C = D_80206778;
    func_801C18CC(3, &sp1C);
    return 101;
}



s32 func_801F0C00(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x65;
    }
    return 0x66;
}


s32 func_801F0C30(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x67;
}


typedef struct func_801F0C58_Struct {
    s32 w[9];
} func_801F0C58_Struct;

extern func_801F0C58_Struct D_8020679C;

s32 func_801F0C58(s32 arg0, s32 arg1) {
    func_801F0C58_Struct sp1C;

    sp1C = D_8020679C;
    func_801C18CC(3, &sp1C);
    return 104;
}



s32 func_801F0CBC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x68;
    }
    return 0x69;
}


s32 func_801F0CEC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6A;
}


extern u8 D_80203DC4[];

s32 func_801F0D14(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203DC4);
    return 107;
}



s32 func_801F0D48(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x6C;
    }
    return 0x6B;
}


typedef struct func_801F0D78_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0D78_Struct;

extern func_801F0D78_Struct D_802067C0;

s32 func_801F0D78(s32 arg0, s32 arg1) {
    func_801F0D78_Struct sp18;

    sp18 = D_802067C0;
    func_801C18CC(2, &sp18);
    return 0x6D;
}



s32 func_801F0DE0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6D;
    }
    return 0x6E;
}


extern u8 D_80203F78[];

s32 func_801F0E10(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80203F78);
    return 111;
}



s32 func_801F0E44(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x70;
    }
    return 0x6F;
}


s32 func_801F0E74(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x71;
}


typedef struct func_801F0E9C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F0E9C_Struct;

extern func_801F0E9C_Struct D_802067D8;

s32 func_801F0E9C(s32 arg0, s32 arg1) {
    func_801F0E9C_Struct sp18;

    sp18 = D_802067D8;
    func_801C18CC(2, &sp18);
    return 0x72;
}



s32 func_801F0F04(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x72;
    }
    return 0x73;
}


s32 func_801F0F34(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x74;
}


typedef struct func_801F0F5C_Struct {
    s32 w[9];
} func_801F0F5C_Struct;

extern func_801F0F5C_Struct D_802067F0;

s32 func_801F0F5C(s32 arg0, s32 arg1) {
    func_801F0F5C_Struct sp1C;

    sp1C = D_802067F0;
    func_801C18CC(3, &sp1C);
    return 117;
}



s32 func_801F0FC0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x75;
    }
    return 0x76;
}


extern u8 D_802041E4[];

s32 func_801F0FF0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802041E4);
    return 119;
}



s32 func_801F1024(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x78;
    }
    return 0x77;
}


s32 func_801F1054(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x79;
}


typedef struct func_801F107C_Struct {
    s32 w[9];
} func_801F107C_Struct;

extern func_801F107C_Struct D_80206814;

s32 func_801F107C(s32 arg0, s32 arg1) {
    func_801F107C_Struct sp1C;

    sp1C = D_80206814;
    func_801C18CC(3, &sp1C);
    return 122;
}



s32 func_801F10E0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7A;
    }
    return 0x7B;
}


s32 func_801F1110(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x7C;
}


typedef struct func_801F1138_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1138_Struct;

extern func_801F1138_Struct D_80206838;

s32 func_801F1138(s32 arg0, s32 arg1) {
    func_801F1138_Struct sp18;

    sp18 = D_80206838;
    func_801C18CC(2, &sp18);
    return 0x7D;
}



s32 func_801F11A0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7D;
    }
    return 0x7E;
}


extern u8 D_80204240[];

s32 func_801F11D0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204240);
    return 127;
}



s32 func_801F1204(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x80;
    }
    return 0x7F;
}


s32 func_801F1234(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x81;
}


typedef struct func_801F125C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F125C_Struct;

extern func_801F125C_Struct D_80206850;

s32 func_801F125C(s32 arg0, s32 arg1) {
    func_801F125C_Struct sp18;

    sp18 = D_80206850;
    func_801C18CC(2, &sp18);
    return 0x82;
}



s32 func_801F12C4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x82;
    }
    return 0x83;
}


s32 func_801F12F4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x84;
}


typedef struct func_801F131C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F131C_Struct;

extern func_801F131C_Struct D_80206868;

s32 func_801F131C(s32 arg0, s32 arg1) {
    func_801F131C_Struct sp18;

    sp18 = D_80206868;
    func_801C18CC(2, &sp18);
    return 0x85;
}



s32 func_801F1384(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x85;
    }
    return 0x86;
}


s32 func_801F13B4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x87;
}


typedef struct func_801F13DC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F13DC_Struct;

extern func_801F13DC_Struct D_80206880;

s32 func_801F13DC(s32 arg0, s32 arg1) {
    func_801F13DC_Struct sp18;

    sp18 = D_80206880;
    func_801C18CC(2, &sp18);
    return 0x88;
}



s32 func_801F1444(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x88;
    }
    return 0x89;
}


s32 func_801F1474(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x8A;
}


extern u8 D_80204460[];

s32 func_801F149C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204460);
    return 139;
}



s32 func_801F14D0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x8C;
    }
    return 0x8B;
}


typedef struct func_801F1500_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1500_Struct;

extern func_801F1500_Struct D_80206898;

s32 func_801F1500(s32 arg0, s32 arg1) {
    func_801F1500_Struct sp18;

    sp18 = D_80206898;
    func_801C18CC(2, &sp18);
    return 0x8D;
}



s32 func_801F1568(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x8D;
    }
    return 0x8E;
}


extern u8 D_80204614[];

s32 func_801F1598(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204614);
    return 143;
}



s32 func_801F15CC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x90;
    }
    return 0x8F;
}


s32 func_801F15FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x91;
}


typedef struct func_801F1624_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1624_Struct;

extern func_801F1624_Struct D_802068B0;

s32 func_801F1624(s32 arg0, s32 arg1) {
    func_801F1624_Struct sp18;

    sp18 = D_802068B0;
    func_801C18CC(2, &sp18);
    return 0x92;
}



s32 func_801F168C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x92;
    }
    return 0x93;
}


s32 func_801F16BC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x94;
}


typedef struct func_801F16E4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F16E4_Struct;

extern func_801F16E4_Struct D_802068C8;

s32 func_801F16E4(s32 arg0, s32 arg1) {
    func_801F16E4_Struct sp1C;

    sp1C = D_802068C8;
    func_801C18CC(1, &sp1C);
    return 0x95;
}



s32 func_801F1734(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x95;
    }
    return 0x96;
}


extern u8 D_80204754[];

s32 func_801F1764(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204754);
    return 151;
}



s32 func_801F1798(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x98;
    }
    return 0x97;
}


s32 func_801F17C8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x99;
}


typedef struct func_801F17F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F17F0_Struct;

extern func_801F17F0_Struct D_802068D4;

s32 func_801F17F0(s32 arg0, s32 arg1) {
    func_801F17F0_Struct sp1C;

    sp1C = D_802068D4;
    func_801C18CC(1, &sp1C);
    return 0x9A;
}



s32 func_801F1840(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9A;
    }
    return 0x9B;
}


s32 func_801F1870(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9C;
}


typedef struct func_801F1898_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1898_Struct;

extern func_801F1898_Struct D_802068E0;

s32 func_801F1898(s32 arg0, s32 arg1) {
    func_801F1898_Struct sp18;

    sp18 = D_802068E0;
    func_801C18CC(2, &sp18);
    return 0x9D;
}



s32 func_801F1900(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x9D;
    }
    return 0x9E;
}


s32 func_801F1930(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9F;
}


typedef struct func_801F1958_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801F1958_Struct;

extern func_801F1958_Struct D_802068F8;

s32 func_801F1958(s32 arg0, s32 arg1) {
    func_801F1958_Struct sp18;

    sp18 = D_802068F8;
    func_801C18CC(2, &sp18);
    return 0xA0;
}



s32 func_801F19C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA0;
    }
    return 0xA1;
}


s32 func_801F19F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA2;
}


typedef struct func_801F1A18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1A18_Struct;

extern func_801F1A18_Struct D_80206910;

s32 func_801F1A18(s32 arg0, s32 arg1) {
    func_801F1A18_Struct sp1C;

    sp1C = D_80206910;
    func_801C18CC(1, &sp1C);
    return 0xA3;
}



s32 func_801F1A68(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA3;
    }
    return 0xA4;
}


extern u8 D_8020480C[];

s32 func_801F1A98(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_8020480C);
    return 165;
}



s32 func_801F1ACC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA6;
    }
    return 0xA5;
}


s32 func_801F1AFC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA7;
}


typedef struct func_801F1B24_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1B24_Struct;

extern func_801F1B24_Struct D_8020691C;

s32 func_801F1B24(s32 arg0, s32 arg1) {
    func_801F1B24_Struct sp1C;

    sp1C = D_8020691C;
    func_801C18CC(1, &sp1C);
    return 0xA8;
}



s32 func_801F1B74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA8;
    }
    return 0xA9;
}


s32 func_801F1BA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xAA;
}


typedef struct func_801F1BCC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1BCC_Struct;

extern func_801F1BCC_Struct D_80206928;

s32 func_801F1BCC(s32 arg0, s32 arg1) {
    func_801F1BCC_Struct sp1C;

    sp1C = D_80206928;
    func_801C18CC(1, &sp1C);
    return 0xAB;
}



s32 func_801F1C1C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xAB;
    }
    return 0xAC;
}


extern u8 D_802049B4[];

s32 func_801F1C4C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_802049B4);
    return 173;
}



s32 func_801F1C80(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xAE;
    }
    return 0xAD;
}


s32 func_801F1CB0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xAF;
}


typedef struct func_801F1CD8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1CD8_Struct;

extern func_801F1CD8_Struct D_80206934;

s32 func_801F1CD8(s32 arg0, s32 arg1) {
    func_801F1CD8_Struct sp1C;

    sp1C = D_80206934;
    func_801C18CC(1, &sp1C);
    return 0xB0;
}



s32 func_801F1D28(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB0;
    }
    return 0xB1;
}


s32 func_801F1D58(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB2;
}


typedef struct func_801F1D80_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1D80_Struct;

extern func_801F1D80_Struct D_80206940;

s32 func_801F1D80(s32 arg0, s32 arg1) {
    func_801F1D80_Struct sp1C;

    sp1C = D_80206940;
    func_801C18CC(1, &sp1C);
    return 0xB3;
}



s32 func_801F1DD0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB3;
    }
    return 0xB4;
}


extern u8 D_80204A24[];

s32 func_801F1E00(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204A24);
    return 181;
}



s32 func_801F1E34(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xB6;
    }
    return 0xB5;
}


s32 func_801F1E64(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB7;
}


typedef struct func_801F1E8C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F1E8C_Struct;

extern func_801F1E8C_Struct D_8020694C;

s32 func_801F1E8C(s32 arg0, s32 arg1) {
    func_801F1E8C_Struct sp1C;

    sp1C = D_8020694C;
    func_801C18CC(1, &sp1C);
    return 0xB8;
}



s32 func_801F1EDC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB8;
    }
    return 0xB9;
}


s32 func_801F1F0C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xBA;
}


typedef struct func_801F1F34_Struct {
    s32 w[12];
} func_801F1F34_Struct;

extern func_801F1F34_Struct D_80206958;

s32 func_801F1F34(s32 arg0, s32 arg1) {
    func_801F1F34_Struct sp18;

    sp18 = D_80206958;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0xBB;
}



s32 func_801F1F98(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xBB;
    }
    return 0xBC;
}


s32 func_801F1FC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xBD;
}


typedef struct func_801F1FF0_Struct {
    s32 w[12];
} func_801F1FF0_Struct;

extern func_801F1FF0_Struct D_80206988;

s32 func_801F1FF0(s32 arg0, s32 arg1) {
    func_801F1FF0_Struct sp18;

    sp18 = D_80206988;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0xBE;
}



s32 func_801F2054(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xBE;
    }
    return 0xBF;
}


s32 func_801F2084(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC0;
}


s32 func_801F20AC(s32 arg0, s32 arg1) {
    return 193;
}


s32 func_801F20BC(s32 arg0, s32 arg1) {
    return 193;
}


extern s32 D_80206CC8;

s32 func_801F20CC(s32 arg0, s32 arg1) {
    D_80206CC8 = 0;
    return 0x1;
}



s32 func_801F20E4(s32 arg0, s32 arg1) {
    if (D_80206CC8 == 0) {
        goto body;
    }
    if (D_80206CC8 == 1) {
        goto ret2;
    }
    return 1;
body:
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x166);
        D_80206CC8 = 1;
    }
    goto ret1;
ret2:
    return 2;
ret1:
    return 1;
}


s32 func_801F2160(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F2170(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}



s32 func_801F21C4(s32 arg0, s32 arg1) {
    func_8038D28C(0x171);
    return 5;
}


s32 func_801F21F0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3A) || (func_801C1B1C() == 0)) {
        return 0x5;
    }
    return 0x6;
}



s32 func_801F2244(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x65) || (func_801C1B1C() == 0)) {
        return 6;
    }
    D_80206CC8 = 0;
    return 7;
}



s32 func_801F229C(s32 arg0, s32 arg1) {
    if (D_80206CC8 == 0) {
        goto case0;
    }
    if (D_80206CC8 == 1) {
        goto case1;
    }
    return 7;
case0:
    func_801C0D04(8, 0);
    D_80206CC8 = 1;
    goto done;
case1:
    if (func_801C0DE4(8, 0, 0x3FC00000) != 0) {
        func_8038D28C(0x169);
        func_801C0EB0(8, 0);
        return 8;
    }
done:
    return 7;
}


s32 func_801F232C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x68) || (func_801C1B1C() == 0)) {
        return 0x8;
    }
    return 0x9;
}


s32 func_801F2380(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xBB || func_801C1B1C() == 0) {
        return 9;
    }
    return 0xA;
}



s32 func_801F23D4(s32 arg0, s32 arg1) {
    func_8038D28C(0x16A);
    return 11;
}


s32 func_801F2400(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0xBE) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801F2454(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801F2464(s32 arg0, s32 arg1) {
    return 13;
}


extern s32 D_80206D30;
extern f32 D_802089F0;
extern f32 D_802089F4;
extern f32 D_802089F8;
extern f32 D_802089FC;

s32 func_801F2474(s32 arg0, s32 arg1) {
    func_8038BD50(D_802089F0, D_802089F4, 0x41E40000);
    D_8038BD88(D_802089F8, D_802089FC, 0xC1D33333);
    D_80206D30 = 0;
    return 1;
}


extern f32 D_80208A00;
extern f32 D_80208A04;
extern f32 D_80208A08;
extern f32 D_80208A0C;

s32 func_801F24D0(s32 arg0, s32 arg1) {
    s32 state;

    state = D_80206D30;
    if (state == 0) {
        goto case0;
    }
    if (state != 1) {
        goto ret1;
    }
    goto case1;

case0:
    func_8038D28C(0x92);
    D_80206D30 = 1;
    goto ret1;

case1:
    if (func_801C0B8C(0) != 0) {
        func_8038BD50(D_80208A00, D_80208A04, 0xC25F3333);
        D_8038BD88(D_80208A08, D_80208A0C, 0xC20CCCCD);
        return 2;
    }

ret1:
    return 1;
}



s32 func_801F2578(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        func_8038BED4();
        return 3;
    }
    return 2;
}


extern f32 D_80208A10;
extern f32 D_80208A14;
extern f32 D_80208A18;
extern f32 D_80208A1C;
extern f32 D_80208A20;

s32 func_801F25C4(s32 arg0, s32 arg1)
{
  f32 sp20 = 22.5f;
  f32 sp24 = D_80208A10;
  f32 sp28 = D_80208A14;
  if (sp20 && sp20)
  {
  }
  if (!sp20)
  {
  }
  if (func_8038BEF8(0.0f, 9.0f, 9.1f, 58.8f, D_80208A18, D_80208A1C, D_80208A20, -4.0f, sp20, sp24, sp28, sp20, sp24, sp28) != 0)
  {
    return 4;
  }
  return 3;
}


s32 func_801F2670(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F2680(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F2690(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


s32 func_801F26CC(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xC8, 0xFF);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE50(0x87, 0x63, 0x1C);
    return 2;
}


s32 func_801F2730(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F2740(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        return 4;
    }
    return 3;
}


s32 func_801F277C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F278C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F279C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F27AC(s32 arg0, s32 arg1) {
    func_801C2420(0x2D8, func_8038DD54 + 0x14);
    return 1;
}


struct func_801F27E0_StructR {
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

struct func_801F27E0_StructQ {
    u8 pad0[0x2C];
    struct func_801F27E0_StructR *unk2C;
};

struct func_801F27E0_StructP {
    struct func_801F27E0_StructQ *unk0;
};


s32 func_801F27E0(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2D8, 0);
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


s32 func_801F28D8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F28E8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F28F8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F2908(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    return 1;
}


struct func_801F295C_StructB {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    u8 pad10[2];
    s16 s12;
    u8 pad14[0x10];
    s32 s24;
    u8 pad28[8];
    s32 s30;
    u8 pad34[0x14];
    u8 b48;
    u8 b49;
    u8 b4A;
    u8 b4B;
};
struct func_801F295C_StructA {
    u8 pad0[0x30];
    struct func_801F295C_StructB *p30;
};
#define P(i) ((*(struct func_801F295C_StructA ***)&D_8038D8D0)[i]->p30)

s32 func_801F295C(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 4, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 5, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 4);
    P(0)->f4 = 22.0f;
    P(0)->f8 = 0.0f;
    P(0)->fC = -28.0f;
    P(0)->s12 = 0;
    P(1)->f4 = 22.0f;
    P(1)->f8 = 0.0f;
    P(1)->fC = -28.0f;
    P(1)->s12 = 0x1000;
    P(2)->f4 = 22.0f;
    P(2)->f8 = 0.0f;
    P(2)->fC = -28.0f;
    P(2)->s12 = 0x1E00;
    P(2)->s30 = (s32)D_801D9110 | 0x40000000;
    P(2)->s24 = 0x100;
    P(2)->b48 = 0x66;
    P(2)->b49 = 0xE5;
    P(2)->b4A = 0xE5;
    P(2)->b4B = 0x7F;
    P(3)->f4 = -22.0f;
    P(3)->f8 = 0.0f;
    P(3)->fC = -28.0f;
    P(3)->s12 = 0;
    P(4)->f4 = -22.0f;
    P(4)->f8 = 0.0f;
    P(4)->fC = -28.0f;
    P(4)->s12 = 0;
    P(5)->f4 = -22.0f;
    P(5)->f8 = 0.0f;
    P(5)->fC = -28.0f;
    P(5)->s12 = 0x200;
    P(5)->s30 = (s32)D_801D9110 | 0x40000000;
    P(5)->s24 = 0x100;
    P(5)->b48 = 0x66;
    P(5)->b49 = 0xE5;
    P(5)->b4A = 0xE5;
    P(5)->b4B = 0x7F;
    P(6)->f4 = 0.0f;
    P(6)->f8 = 0.0f;
    P(6)->fC = 0.0f;
    P(6)->s12 = 0;
    return 2;
}


s32 func_801F2D64(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F2D74(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F2D84(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801F2D94(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F2DD8(s32 arg0, s32 arg1) {
    return 2;
}



s32 func_801F2DE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x401640) != 0) {
        func_801C0D04(3, 1);
        return 3;
    }
    return 2;
}


extern f64 D_80208A28;
extern f64 D_80208A30;
extern f64 D_80208A38;
extern f64 D_80208A40;

struct func_801F2E34_Struct3 {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_801F2E34_Struct2 {
    u8 pad0[0x30];
    struct func_801F2E34_Struct3 *unk30;
};
struct func_801F2E34_Struct1 {
    u8 pad0[4];
    struct func_801F2E34_Struct2 *unk4;
};

s32 func_801F2E34(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40C00000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801F2E34_Struct1 *) D_8038D8D0)->unk4->unk30->unk12 = (s16) (s32) (((f32) ((((f64) (f32) (func_80034C24(temp_ret) / D_80208A28) / D_80208A30) * D_80208A38) + D_80208A40) * 2048.0f) / 90.0f);
    return 3;
}


s32 func_801F2F0C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F2F1C(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F2F2C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F2F70(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F2F80(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F2F90(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F2FA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F2FE4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F2FF4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F3004(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F3014(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F3058(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F3068(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F3078(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F3088(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F30CC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F30DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F30EC(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F30FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F3140(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F3150(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F3160(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F3170(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801CC458(2, D_801DB354);
    func_801CC4C0(2, D_801DB358);
    func_801C2420(0x11C, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(3, func_801DAE70 + 0x5C);
    func_801CC4C0(3, func_801DAE70 + 0x60);
    return 1;
}



s32 func_801F3244(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), D_801DB300);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB320);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB340);
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x8), func_801DAE70 + 0x48);
    func_801CC530();
    return 2;
}


s32 func_801F32E8(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 4.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unkC = -34.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03200029, 0, 1, 10.0f);
        return 3;
    }
    return 2;
}


s32 func_801F33B0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F33C0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F33D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC470(0, 0x03200029, 0, 0, 10.0f);
        return 6;
    }
    return 5;
}



s32 func_801F3430(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x7;
    }
    return 0x6;
}


s32 func_801F3460(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F3470(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801F3480(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208A48;
extern f32 D_80208A4C;

s32 func_801F34C4(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_80208A48;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208A4C;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0xA7D;
        func_801CC470(1, 0x0320001A, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801F359C(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_801F35CC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F35DC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F35EC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F35FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208A50;

struct func_801F3640_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F3640_StructD {
    u8 pad0[0x2C];
    struct func_801F3640_StructE *unk2C;
};

struct func_801F3640_StructC {
    u8 pad0[8];
    struct func_801F3640_StructC *unk8;
    u8 pad1[0x18];
    struct func_801F3640_StructD *unk24;
};

#define FUNC_801F3640_OBJ (((struct func_801F3640_StructC *)D_801DAB14)->unk8->unk8->unk8->unk24)

s32 func_801F3640(s32 arg0, s32 arg1) {
    struct func_801F3640_StructD *temp_v0;

    temp_v0 = FUNC_801F3640_OBJ;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 24.0f;
        FUNC_801F3640_OBJ->unk2C->unk8 = 0.0f;
        FUNC_801F3640_OBJ->unk2C->unkC = D_80208A50;
        FUNC_801F3640_OBJ->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x0320001A, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_801F3728(s32 arg0, s32 arg1) {
    if (func_801D3270() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_801F3758(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F3768(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F3778(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F3788(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F37CC_Data {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F37CC_Node {
    u8 pad0[8];
    struct func_801F37CC_Node *unk8;
    u8 pad1[0x18];
    struct func_801F37CC_Node *unk24;
    u8 pad2[4];
    struct func_801F37CC_Data *unk2C;
};

s32 func_801F37CC(s32 arg0, s32 arg1) {
    struct func_801F37CC_Node *temp_v0;

    temp_v0 = ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 22.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F37CC_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(3, 0x0348007A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F38C8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F38D8(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801F38E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        func_801CC470(3, 0x03480010, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}


s32 func_801F394C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F395C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F396C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 2);
    return 1;
}



s32 func_801F39D8(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801F3A08(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F3A18(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6DDD00) != 0) {
        if (D_801BBD54 != 0) {
            return 3;
        }
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x5A, 0, 1);
        return 4;
    }
    return 3;
}



s32 func_801F3AA0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801F3AC8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F3AD8(s32 arg0, s32 arg1) {
    return 6;
}


extern u8 D_80204A9C[];

s32 func_801F3AE8(s32 arg0, s32 arg1) {
    if (func_801BF6B0(6)->unkC >= 2) {
        func_8038CB60(0.0f, D_80204A9C);
        return 1;
    }
    return 0;
}



s32 func_801F3B3C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2;
    }
    return 0x1;
}


s32 func_801F3B6C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F3B7C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F3B8C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F3B9C(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801F3BAC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F3BBC(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F3BCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x401640) != 0) {
        func_8038D28C(0x16B);
        return 4;
    }
    return 3;
}


s32 func_801F3C18(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F3C28(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F3C38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 1;
    }
    return 0;
}


extern f32 D_80208A54;
extern f32 D_80208A58;
extern f32 D_80208A5C;
extern f32 D_80208A60;
extern f32 D_80208A64;
extern f32 D_80208A68;
extern f32 D_80208A6C;
extern f32 D_80208A70;
extern f32 D_80208A74;
extern f32 D_80208A78;
extern f32 D_80208A7C;
extern f32 D_80208A80;

s32 func_801F3C80(volatile s32 arg0, volatile s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 201.3f, 27.1f,
        D_80208A54, D_80208A58, D_80208A5C, D_80208A60,
        D_80208A64, 0.0f, D_80208A68, D_80208A6C,
        D_80208A70, 0.0f) != 0) {
        func_8038BD50(D_80208A74, D_80208A78, 0x4134CCCD);
        func_8038BD88(D_80208A7C, D_80208A80, 0.0f);
        func_8038BED4();
        return 2;
    }
    return 1;
}

extern f32 D_80208A84;
extern f32 D_80208A88;
extern f32 D_80208A8C;
extern f32 D_80208A90;
extern f32 D_80208A94;
extern f32 D_80208A98;
extern f32 D_80208A9C;
extern f32 D_80208AA0;
extern f32 D_80208AA4;
extern f32 D_80208AA8;
extern f32 D_80208AAC;
extern f32 D_80208AB0;
extern f32 D_80208AB4;

s32 func_801F3D74(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 218.7f, 14.4f, D_80208A84, D_80208A88, D_80208A8C, D_80208A90, D_80208A94, D_80208A98, 0.0f, D_80208A9C, D_80208AA0, D_80208AA4) != 0) {
        func_8038BD50(D_80208AA8, D_80208AAC, 0xC0C00000);
        D_8038BD88(D_80208AB0, D_80208AB4, 0xC0D33333);
        return 3;
    }
    return 2;
}


s32 func_801F3E68(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_8038BED4();
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F3EB4.s")



s32 func_801F3F98(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_8038BED4();
        return 6;
    }
    return 5;
}


extern f32 D_80208AE4;
extern f32 D_80208AE8;
extern f32 D_80208AEC;
extern f32 D_80208AF0;
extern f32 D_80208AF4;
extern f32 D_80208AF8;
extern f32 D_80208AFC;
extern f32 D_80208B00;
extern f32 D_80208B04;

s32 func_801F3FE4(s32 arg0, s32 arg1) {
    f32 x = D_80208AE4;
    f32 y = D_80208AE8;
    f32 z = D_80208AEC;

    if (func_8038BEF8(0.0f, 4.0f, 176.4f, 2.1f, 16.0f,
        D_80208AF0, D_80208AF4, D_80208AF8,
        x, y, z, x, y, z) != 0) {
        func_8038BD50(D_80208AFC, D_80208B00, 0xC0D33333);
        D_8038BD88(D_80208B04, 12.5f, 0xC0C00000);
        return 8;
    }
    return 6;
}


s32 func_801F40C8(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801F40D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF42400) != 0) {
        func_8038BED4();
        return 9;
    }
    return 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F4124.s")


s32 func_801F4218(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01312D00) != 0) {
        func_8038BED4();
        return 0xB;
    }
    return 0xA;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F4264.s")


s32 func_801F4310(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801F4320(s32 arg0, s32 arg1) {
    return 13;
}



s32 func_801F4330(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}



s32 func_801F436C(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0xFF, 0xFF, 0xFF);
    func_801CCEC8(0, -0x7B, -0x20, 0);
    func_801CCE50(0x87, 0x63, 0x1C);
    return 2;
}


s32 func_801F43D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        return 3;
    }
    return 2;
}


s32 func_801F4408(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F4418(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        return 5;
    }
    return 4;
}


s32 func_801F4454(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F4464(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x01312D00) != 0) {
        return 7;
    }
    return 6;
}


s32 func_801F44A0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F44B0(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F44C0(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801F44D0(s32 arg0, s32 arg1) {
    func_801C2420(0x2DA, func_8038DD54 + 0x14);
    return 1;
}


struct func_801F4504_StructR {
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

struct func_801F4504_StructQ {
    u8 pad0[0x2C];
    struct func_801F4504_StructR *unk2C;
};

struct func_801F4504_StructP {
    struct func_801F4504_StructQ *unk0;
};


s32 func_801F4504(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2DA, 0);
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


s32 func_801F45FC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F460C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F461C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F462C(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801F463C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F464C(s32 arg0, s32 arg1) {
    return 2;
}


extern u8 func_801DAC30[];
extern u8 D_801DB084[];
extern u8 D_801DB088[];

s32 func_801F465C(s32 arg0, s32 arg1) {
    func_801C2420(0x11C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAE70 + 0x5C);
    func_801CC4C0(0, func_801DAE70 + 0x60);
    func_801C2420(0x29, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, func_801DAC30 + 0x40);
    func_801CC4C0(1, func_801DAC30 + 0x44);
    func_801C2420(0x141, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DB084);
    func_801CC4C0(2, D_801DB088);
    return 1;
}


extern s32 func_801D11AC(s32);
extern s32 func_801D11B8(s32);
extern u8 func_801DAAC30[];
extern u8 D_801DB070[];

s32 func_801F4728(s32 arg0, s32 arg1) {
    func_801CFD28(0);
    func_801CFD34(0);
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAE70 + 0x48);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), func_801DAC30 + 0x2C);
    func_801D11AC(0);
    func_801D11B8(0);
    func_80005670(*(void **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8), D_801DB070);
    func_801CC530();
    return 2;
}


struct func_801F47BC_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801F47BC_Struct_D {
    u8 pad[0x2C];
    struct func_801F47BC_Struct_F *unk2C;
};

struct func_801F47BC_Struct_C {
    u8 pad[0x24];
    struct func_801F47BC_Struct_D *unk24;
};

struct func_801F47BC_Struct_B {
    u8 pad[0x8];
    struct func_801F47BC_Struct_C *unk8;
};

s32 func_801F47BC(s32 arg0, s32 arg1) {
    struct func_801F47BC_Struct_D *temp_v0;

    temp_v0 = (*(struct func_801F47BC_Struct_B **)&D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 200.0f;
        (*(struct func_801F47BC_Struct_B **)&D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801F47BC_Struct_B **)&D_801DAB14)->unk8->unk24->unk2C->unkC = 0.0f;
        (*(struct func_801F47BC_Struct_B **)&D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x02A80012, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}



s32 func_801F4878(s32 arg0, s32 arg1) {
    if (func_801CFD50() != 0) {
        return 0x4;
    }
    return 0x3;
}


extern s32 func_801CFD9C(s32, s32, s32, s32, s32, s32);

s32 func_801F48A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801CFD9C(1, 0, 0x40800000, 0xFF, 0x7F, 0);
        return 5;
    }
    return 4;
}


s32 func_801CFE18(void);

s32 func_801F4908(s32 arg0, s32 arg1) {
    if (func_801CFE18() != 0) {
        return 0x6;
    }
    return 0x5;
}



s32 func_801F4938(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01312D00) != 0) {
        func_801CFD9C(1, 0, 0x40800000, 0x7F, 0, 0);
        return 7;
    }
    return 6;
}



s32 func_801F4994(s32 arg0, s32 arg1) {
    if (func_801CFE18() != 0) {
        return 0x8;
    }
    return 0x7;
}


s32 func_801F49C4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F49D4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F49E4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801F49F4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F4A38(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 200.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CE308(1, 1, 0x3F000000, 0, 0, 0);
        return 2;
    }
    return 1;
}


s32 D_801CE384();

s32 func_801F4AFC(s32 arg0, s32 arg1) {
    if (D_801CE384() != 0) {
        func_801CC470(1, 0x02A80012, 0, 0x1000, 6.0f);
        return 3;
    }
    return 2;
}


s32 func_801CE284(void);

s32 func_801F4B54(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x4;
    }
    return 0x3;
}


extern s32 func_801CE308(s32, s32, s32, s32, s32, s32);

s32 func_801F4B84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB71B00) != 0) {
        func_801CE308(1, 1, 0x40800000, 0, 0x7F, 0);
        return 5;
    }
    return 4;
}



s32 func_801F4BE4(s32 arg0, s32 arg1) {
    if (D_801CE384() != 0) {
        return 0x6;
    }
    return 0x5;
}



s32 func_801F4C14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01312D00) != 0) {
        func_801CE308(1, 1, 0x40800000, 0x7F, 0xFF, 0);
        return 7;
    }
    return 6;
}



s32 func_801F4C74(s32 arg0, s32 arg1) {
    if (D_801CE384() != 0) {
        return 0x8;
    }
    return 0x7;
}


s32 func_801F4CA4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F4CB4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F4CC4(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801F4CD4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208B40;
extern f32 D_80208B44;

struct func_801F4D18_Pos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F4D18_Ent {
    u8 pad0[0x2C];
    struct func_801F4D18_Pos *unk2C;
};

struct func_801F4D18_Link {
    u8 pad0[8];
    struct func_801F4D18_Link *unk8;
    u8 pad1[0x18];
    struct func_801F4D18_Ent *unk24;
};

s32 func_801F4D18(s32 arg0, s32 arg1) {
    struct func_801F4D18_Ent *temp_v0;

    temp_v0 = ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_80208B40;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208B44;
        ((struct func_801F4D18_Link *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(2, 0x02A80002, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F4E00(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F4E10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF42400) != 0) {
        func_801CC470(2, 0x02A80002, 0, 0x1000, 12.0f);
        return 4;
    }
    return 3;
}


s32 func_801D11D4(void);

s32 func_801F4E74(s32 arg0, s32 arg1) {
    if (func_801D11D4() != 0) {
        return 0x5;
    }
    return 0x4;
}


s32 func_801F4EA4(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_80207058;

s32 func_801F4EB4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801BF6B0(3)->unkC > 0) {
        func_801C3718(0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x5A);
        D_80207058 = 0;
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F4F48.s")


extern s32 func_801C3808(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801F4FFC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016E3600) != 0) {
        func_801C3808(0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF);
        return 3;
    }
    return 2;
}


s32 func_801C37FC();

s32 func_801F5078(s32 arg0, s32 arg1) {
    if (func_801C37FC() == 0) {
        return 0x4;
    }
    return 0x3;
}



s32 func_801F50A8(s32 arg0, s32 arg1) {
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 1, 0, 1);
    return 5;
}



s32 func_801F5100(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    return 6;
}

extern void func_801C37F0();

s32 func_801F5128(s32 arg0, s32 arg1) {
    func_801C37F0();
    return 0x7;
}


s32 func_801F5150(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F5160(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801F5170(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F5180(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F5190(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F51A0(s32 arg0, s32 arg1) {
    return 4;
}


extern f32 D_80208B48;
extern f32 D_80208B4C;
extern f32 D_80208B50;

s32 func_801F51B0(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208B48, D_80208B4C, 0x42500000);
    D_8038BD88(D_80208B50, 3.5f, 0xC1D80000);
    return 1;
}



s32 func_801F5204(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 1;
    }
    return 2;
}



s32 func_801F5258(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 2;
    }
    return 3;
}


extern f32 D_80208B54;
extern f32 D_80208B58;

s32 func_801F52AC(s32 arg0, s32 arg1) {
    func_8038BD50(10.5f, 1.0f, 0x41B5999A);
    D_8038BD88(D_80208B54, D_80208B58, 0xC1C9999A);
    return 4;
}


s32 func_801F5308(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F5318(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0x6;
}


extern f32 D_80208B5C;
extern f32 D_80208B60;
extern f32 D_80208B64;
extern f32 D_80208B68;
extern f32 D_80208B6C;
extern f32 D_80208B70;
extern f32 D_80208B74;
extern f32 D_80208B78;

s32 func_801F5340(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, 10.5f, 1.0f, D_80208B5C, D_80208B60, D_80208B64, D_80208B68, D_80208B6C, D_80208B70, D_80208B74, D_80208B78, 9.5f, -28.0f) != 0) {
        func_8038BED4();
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F540C.s")


extern f32 D_80208B8C;
extern f32 D_80208B90;
extern f32 D_80208B94;
extern f32 D_80208B98;

s32 func_801F54AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_8038BD50(D_80208B8C, D_80208B90, 0x40933333);
        D_8038BD88(D_80208B94, D_80208B98, 0x41F00000);
        func_8038D28C(0x89);
        return 9;
    }
    return 8;
}


s32 func_801F5528(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_8038BED4();
        return 0xA;
    }
    return 9;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801F5574.s")


extern f32 D_80208BB0;
extern f32 D_80208BB4;
extern f32 D_80208BB8;
extern f32 D_80208BBC;
extern f32 D_80208BC0;
extern f32 D_80208BC4;
extern f32 D_80208BC8;
extern f32 D_80208BCC;
extern f32 D_80208BD0;

s32 func_801F5630(s32 arg0, s32 arg1) {
    f32 temp = D_80208BB0;

    if (func_8038BEF8(0.0f, D_80208BB4, 22.7f, -6.0f, D_80208BB8, D_80208BBC, D_80208BC0, D_80208BC4, 0.0f, temp, D_80208BC8, D_80208BCC, temp, D_80208BD0) != 0) {
        return 0xC;
    }
    return 0xB;
}


s32 func_801F56E0(s32 arg0, s32 arg1) {
    return 13;
}



s32 func_801F56F0(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 13;
    }
    return 14;
}


extern f32 D_80208BD4;
extern f32 D_80208BD8;
extern f32 D_80208BDC;

s32 func_801F5744(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208BD4, D_80208BD8, 0xC1A5999A);
    D_8038BD88(0.5f, D_80208BDC, 0x4241999A);
    return 0xF;
}


s32 func_801F57A0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801F57F4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801F5848(s32 arg0, s32 arg1) {
    func_8038BED4();
    return 0x12;
}


extern f32 D_80208BE0;
extern f32 D_80208BE4;
extern f32 D_80208BE8;
extern f32 D_80208BEC;
extern f32 D_80208BF0;

s32 func_801F5870(s32 arg0, s32 arg1)
{
  f32 neg22;
  f32 be0;
  f32 be4;
  be4 = -22.0f;
 if (1) { } if (1) { }
  neg22 = be4;
  be0 = D_80208BE0;
  be4 = D_80208BE4;
  if (func_8038BEF8(0.0f, 1.5f, 24.5f, 35.3f, D_80208BE8, 0.0f, D_80208BEC, D_80208BF0, neg22, be0, be4, neg22, be0, be4))
  {
    return 0x13;
  }
  return 0x12;
}


s32 func_801F5910(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x26 || func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


s32 func_801F5964(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x29) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}


extern f32 D_80208BF4;
extern f32 D_80208BF8;

s32 func_801F59B8(s32 arg0, s32 arg1) {
    func_8038BD50(D_80208BF4, -6.0f, 0x41C33333);
    D_8038BD88(0.0f, D_80208BF8, 0x4249999A);
    return 0x16;
}


s32 func_801F5A10(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    return 0x17;
}


s32 func_801F5A64(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801F5A74(s32 arg0, s32 arg1) {
    return 24;
}



s32 func_801F5A84(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}



s32 func_801F5AC0(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE50(0x87, 0x63, 0x1C);
    return 2;
}


s32 func_801F5B24(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F5B34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CCE88(0, 0xE5, 0x4C, 0);
        func_801CCEC8(0, 0, 0, 0x64);
        func_801CCE50(0x25, 0x1B, 7);
        return 4;
    }
    return 3;
}


s32 func_801F5BAC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F5BBC(s32 arg0, s32 arg1) {
    return 6;
}


extern void func_801CD354();
extern s32 D_80208E2C;
extern s32 D_80208E30;

s32 func_801F5BCC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        func_801CD074(0);
        func_801CD354();
        D_80208E2C = 0;
        D_80208E30 = 0;
        return 7;
    }
    return 6;
}


extern s32 func_801CD378(f32, f32, s32, s32, f32, f32, f32);
extern f32 D_80208BFC;
extern f32 D_80208C00;
extern f32 D_80208C04;
extern f32 D_80208C08;
extern f32 D_80208C0C;

s32 func_801F5C30(s32 arg0, s32 arg1) {
    if (D_80208E2C == 0) {
        if (func_801CD098(0, 0, 0x40400001, 255.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 100.0f, 0.0f, 0.0f, 100.0f) != 0) {
            D_80208E2C = 1;
        }
    }
    if (D_80208E30 == 0) {
        if (func_801CD378(D_80208BFC, D_80208C00, 0x41DA6666, 0x40F66666, D_80208C04, D_80208C08, D_80208C0C) != 0) {
            D_80208E30 = 1;
        }
    }
    if (D_80208E2C != 0 && D_80208E30 != 0) {
        return 8;
    }
    return 7;
}


s32 func_801F5D4C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F5D5C(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801F5D6C(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801F5D7C(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801F5D8C(s32 arg0, s32 arg1) {
    func_801C2420(0x2D8, func_8038DD54 + 0x14);
    return 1;
}


struct func_801F5DC0_StructR {
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

struct func_801F5DC0_StructQ {
    u8 pad0[0x2C];
    struct func_801F5DC0_StructR *unk2C;
};

struct func_801F5DC0_StructP {
    struct func_801F5DC0_StructQ *unk0;
};


s32 func_801F5DC0(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2D8, 0);
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


s32 func_801F5EB8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F5EC8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F5ED8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F5EE8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F5EF8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F5F08(s32 arg0, s32 arg1) {
    return 7;
}


struct func_801F5F18_StructDF70 {
    u8 pad[4];
    u32 unk4;
};

extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C();
extern u8 D_8038DDC0[];
extern struct func_801F5F18_StructDF70 D_8038DF70;

s32 func_801F5F18(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    D_8038DF70.unk4 = 0xE000;
    if (func_801C2570(0x2DD, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801F5FAC_StructB {
    u8 pad0[0x22];
    u8 unk22;
} func_801F5FAC_StructB;

typedef struct func_801F5FAC_StructA {
    u8 pad0[0x30];
    func_801E3068_Struct2 *unk30;
} func_801F5FAC_StructA;

#undef OBJ
#define OBJ ((func_801E3068_Struct1 **)D_8038D8D0)

s32 func_801F5FAC(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D9, 4);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 5);
    OBJ[0]->unk30->unk4 = 22.0f;
    OBJ[0]->unk30->unk8 = 0.0f;
    OBJ[0]->unk30->unkC = -28.0f;
    OBJ[0]->unk30->unk12 = 0;
    OBJ[1]->unk30->unk4 = 22.0f;
    OBJ[1]->unk30->unk8 = 0.0f;
    OBJ[1]->unk30->unkC = -28.0f;
    OBJ[1]->unk30->unk12 = 0;
    OBJ[2]->unk30->unk4 = -22.0f;
    OBJ[2]->unk30->unk8 = 0.0f;
    OBJ[2]->unk30->unkC = -28.0f;
    OBJ[2]->unk30->unk12 = 0;
    OBJ[3]->unk30->unk4 = -22.0f;
    OBJ[3]->unk30->unk8 = -23.0f;
    OBJ[3]->unk30->unkC = -28.0f;
    OBJ[3]->unk30->unk12 = 0;
    OBJ[4]->unk30->unk4 = -22.0f;
    OBJ[4]->unk30->unk8 = 0.0f;
    OBJ[4]->unk30->unkC = -28.0f;
    OBJ[4]->unk30->unk12 = 0x200;
    OBJ[4]->unk30->unk30 = (s32)D_801D9110 | 0x40000000;
    OBJ[4]->unk30->unk24 = 0x100;
    OBJ[4]->unk30->unk48 = 0x66;
    OBJ[4]->unk30->unk49 = 0xE5;
    OBJ[4]->unk30->unk4A = 0xE5;
    OBJ[4]->unk30->unk4B = 0x7F;
    OBJ[5]->unk30->unk4 = 0.0f;
    OBJ[5]->unk30->unk8 = 0.0f;
    OBJ[5]->unk30->unkC = 0.0f;
    OBJ[5]->unk30->unk12 = 0;
    ((func_801F5FAC_StructB *)OBJ[5])->unk22 = 1;
    OBJ[6]->unk30->unk4 = 0.0f;
    OBJ[6]->unk30->unk8 = 0.0f;
    OBJ[6]->unk30->unkC = 0.0f;
    OBJ[6]->unk30->unk12 = 0;
    ((func_801F5FAC_StructB *)OBJ[6])->unk22 = 0;
    return 2;
}


s32 func_801F6364(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F6374(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6384(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6394(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F63A4(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F63B4(s32 arg0, s32 arg1) {
    return 7;
}



s32 func_801F63C4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F6408(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F6418(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F6428(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6438(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6448(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801F6458(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F649C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F64AC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F64BC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F64CC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F64DC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F64EC(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F64FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F6540(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F6550(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F6560(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6570(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6580(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6590(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F65A0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F65E4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801F65F4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F6604(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F6614(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6624(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6634(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F6644(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F6688(s32 arg0, s32 arg1) {
    return 2;
}


struct func_801F6698_StructA {
    u8 pad[0x14];
    u8 *unk14;
};

struct func_801F6698_StructB {
    u8 pad[0x22];
    u8 unk22;
};

s32 func_801F6698(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        ((struct func_801F6698_StructB *)((struct func_801F6698_StructA *)D_8038D8D0)->unk14)->unk22 = 0;
        return 3;
    }
    return 2;
}


s32 func_801F66E8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F66F8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F6708(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6718(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801F6728(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801F676C(s32 arg0, s32 arg1) {
    return 2;
}



struct func_801F677C_Struct {
    u8 pad[0x18];
    u8 *unk18;
};

s32 func_801F677C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        ((struct func_801F677C_Struct *)D_8038D8D0)->unk18[0x22] = 1;
        return 3;
    }
    return 2;
}


s32 func_801F67D0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F67E0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F67F0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6800(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F6810(s32 arg0, s32 arg1) {
    return 1;
}


void func_801C4028(s32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 arg4, s32 arg5, s32 arg6, f32 arg7, f32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15);

s32 func_801F6820(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801C4028(0, 6.0f, 9.0f, 45.0f, 0, 0xC2, 0x148, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(0, -5.0f, 9.0f, 44.0f, 0, 0xC2, 0, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 2;
    }
    return 1;
}


s32 func_801F6934(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x27AC40) != 0) {
        func_801C4028(0, 0, 13.0f, 40.0f, 0, 0xC2, 0, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 3;
    }
    return 2;
}


s32 func_801F69DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2932E0) != 0) {
        func_801C4028(0, 4.0f, 15.0f, 38.0f, 0, 0xC2, 5, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(0, -5.0f, 16.0f, 34.0f, 0, 0xC2, 0x11F, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 4;
    }
    return 3;
}


s32 func_801F6AF4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2AB980) != 0) {
        func_801C4028(0, -4.0f, 20.0f, 36.0f, 0, 0xC2, 5, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(0, 0.0f, 19.0f, 36.0f, 0, 0xC2, 0x137, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 5;
    }
    return 4;
}


s32 func_801F6C0C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2C4020) != 0) {
        func_801C4028(0, 3.0f, 21.0f, 35.0f, 0, 0xC2, 0x150, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 6;
    }
    return 5;
}


s32 func_801F6CB8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F6CC8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F6CD8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F6CE8(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801F6CF8(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801F6D08(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801F6D18(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801F6D28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x67C280) != 0) {
        return 0xE;
    }
    return 0xD;
}


s32 func_801F6D64(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801F6D74(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801F6D84(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801F6D94(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801F6DA4(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801F6DB4(s32 arg0, s32 arg1) {
    return 19;
}


extern u8 func_801DAEE8[];
extern u8 D_801DB258[];
extern u8 D_801DB25C[];
extern u8 D_801DAFD8[];
extern u8 D_801DAFDC[];

s32 func_801F6DC4(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801CC458(2, D_801DB354);
    func_801CC4C0(2, D_801DB358);
    func_801C2420(0x32, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(3, D_801DB258);
    func_801CC4C0(3, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(4, func_801DAEE8 + 0x30);
    func_801CC4C0(4, func_801DAEE8 + 0x34);
    func_801CC458(5, D_801DAFD8);
    func_801CC4C0(5, D_801DAFDC);
    func_801C2420(0x11B, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(6, D_801DB660);
    func_801CC4C0(6, D_801DB664);
    return 1;
}

extern u8 D_801DB244[];
extern void func_801D03E0(s32 a0);
extern void func_801D03EC(s32 a0);
extern void func_801D048C(s32 a0);
extern void func_801D2704(s32 a0);
extern void func_801D2710(s32 a0);

extern void func_801D0A68(s32 a0);
extern u8 D_801DAFC4[];

#define FUNC_801F6F28_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801F6F28_BASE_A ((u8 *)D_801DAB14)
#define FUNC_801F6F28_BASE_B (*(u8 **)(func_801DAAF0 + 0x24))

s32 func_801F6F28(s32 arg0, s32 arg1) {
    func_80005670(FUNC_801F6F28_BASE_B, D_801DB300);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_A), D_801DB320);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_B)), D_801DB340);
    func_801D2704(0);
    func_801D2710(0);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_A))), D_801DB244);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_B)))), func_801DAEE8 + 0x1C);
    func_801D0A68(0);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_A))))), D_801DAFC4);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_NEXT(FUNC_801F6F28_BASE_B)))))), D_801DB64C);
    func_801CC530();
    return 2;
}


#define FUNC_801F7074_NEXT(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801F7074_CHAIN() FUNC_801F7074_NEXT(FUNC_801F7074_NEXT((u8 *)D_801DAB14, 0x8), 0x24)

s32 func_801F7074(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = FUNC_801F7074_CHAIN();
    if (temp_v0 != NULL) {
        *(f32 *)(FUNC_801F7074_NEXT(temp_v0, 0x2C) + 0x4) = 12.0f;
        *(f32 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0xC) = -1.0f;
        *(s16 *)(FUNC_801F7074_NEXT(FUNC_801F7074_CHAIN(), 0x2C) + 0x12) = 0x1871;
        func_801CC470(0, 0x0320001A, 0, 1, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801F713C(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801F714C(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}



s32 func_801F71A0(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x03200024, 0, 0, 3.0f);
    return 6;
}



s32 func_801F71E8(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x7;
    }
    return 0x6;
}


s32 func_801F7218(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F7228(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CC470(0, 0x03200026, 0, 1, 3.0f);
        return 9;
    }
    return 8;
}


s32 func_801F728C(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801F729C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(0, 0x03200026, 0, 0, 3.0f);
        return 0xB;
    }
    return 0xA;
}



s32 func_801F7300(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0xC;
    }
    return 0xB;
}


s32 func_801F7330(s32 arg0, s32 arg1) {
    return 13;
}



s32 func_801F7340(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 13;
    }
    return 14;
}


s32 func_801F7394(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x03200024, 0, 0, 10.0f);
    return 0xF;
}



s32 func_801F73DC(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801F740C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801F7460(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801F74B4(s32 arg0, s32 arg1) {
    func_801CC470(0, 0x03480010, 0, 0x1000, 1.0f);
    return 0x13;
}



s32 func_801F74FC(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x14;
    }
    return 0x13;
}


s32 func_801F752C(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x26 || func_801C1B1C() == 0) {
        return 0x14;
    }
    return 0x15;
}


s32 func_801F7580(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801F7590(s32 arg0, s32 arg1) {
    return 22;
}



s32 func_801F75A0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208C10;
extern f32 D_80208C14;

s32 func_801F75E4(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_80208C10;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208C14;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x67D;
        func_801CC470(1, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F76BC(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F76CC(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}


s32 func_801F7720(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03200023, 0, 0, 3.0f);
    return 5;
}



s32 func_801F7768(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801F7798(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F77A8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CC470(1, 0x03200026, 0, 1, 3.0f);
        return 8;
    }
    return 7;
}


s32 func_801F780C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F781C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC470(1, 0x03200026, 0, 0, 3.0f);
        return 0xA;
    }
    return 9;
}



s32 func_801F7880(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801F78B0(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801F78C0(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 12;
    }
    return 13;
}


s32 func_801F7914(s32 arg0, s32 arg1) {
    func_801CC470(1, 0x03200024, 0, 0, 10.0f);
    return 0xE;
}



s32 func_801F795C(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0xF;
    }
    return 0xE;
}


s32 func_801F798C(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0xF;
    }
    return 0x10;
}


s32 func_801F79E0(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801F79F0(s32 arg0, s32 arg1) {
    return 17;
}



s32 func_801F7A00(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208C18;

struct func_801F7A44_StructE {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_801F7A44_StructD {
    u8 pad0[0x2C];
    struct func_801F7A44_StructE *unk2C;
};

struct func_801F7A44_StructC {
    u8 pad0[0x24];
    struct func_801F7A44_StructD *unk24;
};

struct func_801F7A44_StructA {
    u8 pad0[8];
    struct func_801F7A44_StructA *unk8;
};

#define FUNC_801F7A44_C() ((struct func_801F7A44_StructC *)((struct func_801F7A44_StructA *)D_801DAB14)->unk8->unk8->unk8)

s32 func_801F7A44(s32 arg0, s32 arg1) {
    struct func_801F7A44_StructD *temp_v0;

    temp_v0 = FUNC_801F7A44_C()->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        FUNC_801F7A44_C()->unk24->unk2C->unk8 = 0.0f;
        FUNC_801F7A44_C()->unk24->unk2C->unkC = D_80208C18;
        FUNC_801F7A44_C()->unk24->unk2C->unk12 = 0xCFA;
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F7B24(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801F7B34(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}



s32 func_801F7B88(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 4) {
        func_801CC470(2, 0x0320001A, 0, 1, 1.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 8) + 8) + 8) + 0x24) + 0x2C) + 0x12) = 0;
        return 5;
    }
    return 4;
}


s32 func_801F7C0C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F7C1C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F7C2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_801CC470(2, 0x03200026, 0, 1, 3.0f);
        return 8;
    }
    return 7;
}


s32 func_801F7C90(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801F7CA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2DC6C0) != 0) {
        func_801CC550(2);
        return 0xA;
    }
    return 9;
}



s32 func_801F7CEC(s32 arg0, s32 arg1) {
    if (func_801CC564(2, func_801D3200 + 0x70, 0x03200026, 0, 0, 3.0f, func_801D3200 + 0x60, 0x0320001A, 0, 0, 15.0f) != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_801F7D70(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801F7D80(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801F7D90(s32 arg0, s32 arg1) {
    return 13;
}



s32 func_801F7DA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F7DE4_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F7DE4_Mid {
    u8 pad0[0x2C];
    struct func_801F7DE4_Obj *unk2C;
};

struct func_801F7DE4_Struct {
    u8 pad0[8];
    struct func_801F7DE4_Struct *unk8;
    u8 pad1[0x18];
    struct func_801F7DE4_Mid *unk24;
};

s32 func_801F7DE4(s32 arg0, s32 arg1) {
    struct func_801F7DE4_Mid *temp_v0;

    temp_v0 = ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F7DE4_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(3, 0x03200000, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F7EDC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F7EEC(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 D_802073A4;

typedef struct func_801F7EFC_Vec {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801F7EFC_Vec;

typedef struct func_801F7EFC_Mid {
    u8 pad0[0x2C];
    func_801F7EFC_Vec *unk2C;
} func_801F7EFC_Mid;

typedef struct func_801F7EFC_Node {
    u8 pad0[8];
    struct func_801F7EFC_Node *unk8;
    u8 pad1[0x18];
    func_801F7EFC_Mid *unk24;
} func_801F7EFC_Node;

s32 func_801F7EFC(s32 arg0, s32 arg1) {
    func_801F7EFC_Node **pp;
    if (func_801C0B8C(0x39FBBF) != 0) {
        pp = (func_801F7EFC_Node **)&D_801DAB14;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = -1.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 49.0f;
        (*pp)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x01680003, 0, 0x1100, 1.0f);
        D_802073A4 = 0;
        return 5;
    }
    return 4;
}


extern s32 func_801D27D8(s32, s32);
extern f32 D_80208C1C;
extern f32 D_80208C20;
extern f32 D_80208C24;
extern f32 D_80208E3C;

#define N(p) (*(u8 **)((u8 *)(p) + 0x8))
#define CH() (*(u8 **)(*(u8 **)(N(N(N(N(*(u8 **)(func_801DAAF0 + 0x24))))) + 0x24) + 0x2C))

s32 func_801F8008(s32 arg0, s32 arg1) {
    u8 *v;

    if (D_802073A4 == 0) goto c0;
    if (D_802073A4 == 1) goto c1;
    if (D_802073A4 == 2) goto c2;
    return 5;
c0:
    D_80208E3C = (D_80208C1C - *(f32 *)(CH() + 0xC)) / (f32)(u32)(D_80208C20 * 30.0f);
    func_801C0D04(4, 3);
    D_802073A4 = 1;
    goto done;
c1:
    if (func_801C0DE4(4, 3, 0x40400001) != 0) {
        func_801C0EB0(4, 3);
        func_801CC4D8(3, 0x03200000, 0, 0, 15.0f);
        D_802073A4 = 2;
    }
    v = CH();
    *(f32 *)(v + 0xC) = *(f32 *)(v + 0xC) + D_80208E3C;
    if (!(func_801D27D8(0x01680003, 0x14) != 0 || func_801D27D8(0x01680003, 0x28) != 0)) {
        goto done;
    }
    v = CH();
    func_8038D33C(*(f32 *)(v + 4), *(f32 *)(v + 8), *(s32 *)(v + 0xC), 0x4A2, D_80208C24, 1.0f);
    return 5;
c2:
    if (func_801D277C() == 0) {
        return 6;
    }
    goto done;
done:
    return 5;
}


s32 func_801F8278(s32 arg0, s32 arg1) {
    return 7;
}


extern s32 func_801D271C(s32 a0);

s32 func_801F8288(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200008, 0, 0, 5.0f);
    func_801D271C(1);
    return 8;
}


s32 func_801D278C(void);

s32 func_801F82D8(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 9;
    }
    return 8;
}


s32 func_801F8318(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x10) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 0xA;
}



s32 func_801F836C(s32 arg0, s32 arg1) {
    if ((*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0x13) || (func_801C1B1C() == 0)) {
        return 10;
    }
    return 11;
}



s32 func_801F83C0(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200004, 0, 0, 3.0f);
    func_801D271C(1);
    return 0xC;
}



s32 func_801F8410(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 13;
    }
    return 12;
}


s32 func_801F8450(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x18) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


s32 func_801F84A4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x1B) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}



s32 func_801F84F8(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200002, 0, 0, 3.0f);
    func_801D271C(1);
    return 0x10;
}



s32 func_801F8548(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 17;
    }
    return 16;
}


s32 func_801F8588(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x20) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801F85DC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x29) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}


s32 func_801F8630(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200016, 0, 0, 6.0f);
    func_801D271C(1);
    return 0x14;
}



s32 func_801F8680(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 21;
    }
    return 20;
}


s32 func_801F86C0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0x15;
    }
    return 0x16;
}



s32 func_801F8714(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x31) || (func_801C1B1C() == 0)) {
        return 0x16;
    }
    D_802073A4 = 0;
    func_801CC4D8(3, 0x03200012, 0, 0, 15.0f);
    func_801D271C(1);
    return 0x17;
}


extern s32 func_801D277C();

s32 func_801F8798(s32 arg0, s32 arg1) {
    if (func_801D277C() == 0) {
        func_801CC470(3, 0x03200012, 0, 0, 3.0f);
        return 0x18;
    }
    return 0x17;
}



s32 func_801F87F0(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 25;
    }
    return 24;
}


struct func_801F8830_Struct {
    u8 pad[0xC];
    s32 unkC;
};


s32 func_801F8830(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x36) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


s32 func_801F8884(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x39) {
        goto ret17;
    }
    if (func_801C1B1C() != 0) {
        goto ret18;
    }
ret17:
    return 0x1A;
ret18:
    return 0x1B;
}


s32 func_801F88D8(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x0320000D, 0, 0, 5.0f);
    func_801D271C(1);
    return 0x1C;
}



s32 func_801F8928(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 29;
    }
    return 28;
}


s32 func_801F8968(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x3E) || (func_801C1B1C() == 0)) {
        return 0x1D;
    }
    return 0x1E;
}


s32 func_801F89BC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x47) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}



s32 func_801F8A10(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200009, 0, 0, 5.0f);
    func_801D271C(1);
    return 0x20;
}



s32 func_801F8A60(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        func_801D271C(0);
        return 33;
    }
    return 32;
}


s32 func_801F8AA0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x4C) || (func_801C1B1C() == 0)) {
        return 0x21;
    }
    return 0x22;
}


s32 func_801F8AF4(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801F8B04(s32 arg0, s32 arg1) {
    return 35;
}



s32 func_801F8B14(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F8B58_Node {
    u8 pad0[8];
    struct func_801F8B58_Node *unk8;
    u8 pad10[0x18];
    func_801E3D90_StructD *unk24;
};

s32 func_801F8B58(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 2.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = -29.0f;
        ((struct func_801F8B58_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(4, 0x03480000, 0, 0x1000, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801D0408(void);

s32 func_801F8C60(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_801F8C90(s32 arg0, s32 arg1) {
    return 4;
}


extern f32 D_80208C28;
extern f32 D_80208C2C;

struct func_801F8CA0_Leaf {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801F8CA0_Mid {
    u8 pad0[0x2C];
    struct func_801F8CA0_Leaf *unk2C;
};

struct func_801F8CA0_Node {
    u8 pad0[8];
    struct func_801F8CA0_Node *unk8;
    u8 pad1[0x18];
    struct func_801F8CA0_Mid *unk24;
};

s32 func_801F8CA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk4 = D_80208C28;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208C2C;
        ((struct func_801F8CA0_Node *) D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1266;
        return 5;
    }
    return 4;
}


s32 func_801F8D90(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F8DA0(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x29) || (func_801C1B1C() == 0)) {
        return 0x6;
    }
    return 0x7;
}


s32 func_801F8DF4(s32 arg0, s32 arg1) {
    func_801CC470(4, 0x03480000, 0, 0x1000, 1.0f);
    return 8;
}



s32 func_801F8E38(s32 arg0, s32 arg1) {
    if (func_801D0408() != 0) {
        return 0x9;
    }
    return 0x8;
}


s32 func_801F8E68(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0x9;
    }
    return 0xA;
}


extern s32 D_80207438;

s32 func_801F8EBC(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x41) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    D_80207438 = 0;
    return 0xB;
}


extern f32 D_80208C30;
extern f32 D_80208C34;
extern f32 D_80208E14;
extern f32 D_80208E18;
extern s32 func_801D03F8();
extern s32 func_801D0454(s32, s32);

typedef struct func_801F8F14_Struct {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801F8F14_Struct;

#define P801F8F14 ((func_801F8F14_Struct *)FUNC_801EEE98_H)

#define Q801F8F14 ((func_801F8F14_Struct *)*(u8 **)(*(u8 **)(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT(FUNC_801EEE98_NEXT((u8 *)D_801DAB14)))) ) + 0x24) + 0x2C))

s32 func_801F8F14(s32 arg0, s32 arg1) {
    f32 d;
    f32 k;
    f32 m;
    func_801F8F14_Struct *p;

    if (D_80207438 == 0) goto c0;
    if (D_80207438 == 1) goto c1;
    if (D_80207438 == 2) goto c2;
    if (D_80207438 == 3) goto c3;
    return 0xB;
c0:
    func_801CC4D8(4, 0x01680003, 0, 0, 15.0f);
    D_80207438 = 1;
    goto end;
c1:
    if (func_801D03F8() == 0) {
        k = (f32)2.0;
        m = 30.0f;
        p = P801F8F14;
        d = (u32)(k * m);
        D_80208E14 = (D_80208C30 - p->unk4) / d;
        D_80208E18 = (35.5f - p->unkC) / d;
        func_801CC470(4, 0x01680003, 0, 0x1100, 1.0f);
        func_801C0D04(4, 4);
        D_80207438 = 2;
    }
    goto end;
c2:
    if (func_801C0DE4(4, 4, 0x40000000) != 0) {
        func_801C0EB0(4, 4);
        func_801CC4D8(4, 0x03480000, 0, 0, 15.0f);
        D_80207438 = 3;
    }
    Q801F8F14->unk4 = Q801F8F14->unk4 + D_80208E14;
    Q801F8F14->unkC = Q801F8F14->unkC + D_80208E18;
    if (func_801D0454(0x01680003, 0x14) != 0 || func_801D0454(0x01680003, 0x28) != 0) {
        func_8038D33C(P801F8F14->unk4, P801F8F14->unk8, *(s32 *)&P801F8F14->unkC, 0x676, D_80208C34, 1.0f);
        return 0xB;
    }
    goto end;
c3:
    if (func_801D03F8() == 0) {
        return 0xC;
    }
end:
    return 0xB;
}


s32 func_801F9240(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x44) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801F9294(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801F92A4(s32 arg0, s32 arg1) {
    return 14;
}



s32 func_801F92B4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801F92F8_Node {
    u8 pad0[8];
    struct func_801F92F8_Node *unk8;
    u8 pad1[0x18];
    struct func_801F92F8_Mid *unk24;
};

struct func_801F92F8_Mid {
    u8 pad0[0x2C];
    struct func_801F92F8_Obj *unk2C;
};

struct func_801F92F8_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

#define FUNC_801F92F8_NODE ((struct func_801F92F8_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk8

s32 func_801F92F8(s32 arg0, s32 arg1) {
    struct func_801F92F8_Mid *temp_v0;

    temp_v0 = FUNC_801F92F8_NODE->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unk8 = 2.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unkC = -29.0f;
        FUNC_801F92F8_NODE->unk24->unk2C->unk12 = 0x1DDD;
        func_801CC470(5, 0x03480000, 0, 0x1000, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801D0A34(void);

s32 func_801F9410(s32 arg0, s32 arg1) {
    if (func_801D0A34() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_801F9440(s32 arg0, s32 arg1) {
    return 4;
}



#define FUNC_801F9450_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define FUNC_801F9450_SUB(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801F9450_TGT(p) FUNC_801F9450_SUB(FUNC_801F9450_SUB(p, 0x24), 0x2C)
#define FUNC_801F9450_CHAIN(p) FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(FUNC_801F9450_NEXT(p))))))

s32 func_801F9450(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x4) = 6.5f;
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x8) = 0.0f;
        *(f32 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0xC) = 52.5f;
        *(s16 *)(FUNC_801F9450_TGT(FUNC_801F9450_CHAIN(D_801DAB14)) + 0x12) = 0xFD2;
        func_801CC470(5, 0x03480010, 0, 0x1100, 6.0f);
        return 5;
    }
    return 4;
}


s32 func_801F9574(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F9584(s32 arg0, s32 arg1) {
    return 7;
}

/* starting point: func_801F57A0 (file028), whose assembly is 95% the same as this function's */

s32 func_801F9594(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x7;
    }
    return 0x8;
}



s32 func_801F95E8(s32 arg0, s32 arg1) {
    func_801CC4D8(5, 0x01B80013, 0, 1, 30.0f);
    return 9;
}


s32 func_801D0A24();

s32 func_801F9630(s32 arg0, s32 arg1) {
    if (func_801D0A24() == 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801F9660(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0x26 || func_801C1B1C() == 0) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801F96B4(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x29) || (func_801C1B1C() == 0)) {
        return 0xB;
    }
    return 0xC;
}


s32 func_801F9708(s32 arg0, s32 arg1) {
    func_801CC470(5, 0x01B80013, 0, 1, 1.0f);
    return 0xD;
}


s32 func_801F9750(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801F9760(s32 arg0, s32 arg1) {
    if ((func_801BF6B0(7)->unkC < 0x2E) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801F97B4(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801F97C4(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801F97D4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


#define func_801F9818_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))
#define func_801F9818_CHAIN func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT(func_801F9818_NEXT((u8 *)D_801DAB14)))))))

s32 func_801F9818(s32 arg0, s32 arg1) {
    u8 *obj;

    obj = *(u8 **)((u8 *)func_801F9818_CHAIN + 0x24);
    if (obj != NULL) {
        *(f32 *)(*(u8 **)(obj + 0x2C) + 0x4) = -22.0f;
        *(f32 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0x8) = 3.0f;
        *(f32 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0xC) = -28.0f;
        *(s16 *)(*(u8 **)(*(u8 **)((u8 *)func_801F9818_CHAIN + 0x24) + 0x2C) + 0x12) = 0;
        func_801CC470(6, 0x03480023, 0, 0x1001, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801F9940(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801F9950(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801F9960(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801F9970(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F9980(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801F9990(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801F99A0(s32 arg0, s32 arg1) {
    return 8;
}


extern s32 D_80207500;
extern s32 D_80207504;

s32 func_801F99B0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80207500 = 0;
    D_80207504 = 0;
    return 1;
}


s32 func_801F99E8(s32 arg0, s32 arg1) {
    s32 v = D_80207500;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    return 1;
c0:
    D_80207504 += 1;
    if ((u32)D_80207504 >= 0x10U) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0xFF, 0xFF, 0xFF, 0x1E, 0, 2);
        D_80207500 = 1;
    }
    goto ret1;
c1:
    if (D_801BBD54 == 0) {
        D_80089354 = 0;
        return 2;
    }
ret1:
    return 1;
}


s32 func_801F9AA8(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 func_801C3718(s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801F9AB8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x39FBBF) != 0) {
        func_801C3718(0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0, 0x5A);
        return 4;
    }
    return 3;
}



s32 func_801F9B30(s32 arg0, s32 arg1) {
    if (func_801C37FC() == 0) {
        func_801C37F0();
        return 5;
    }
    return 4;
}


s32 func_801F9B70(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801F9B80(s32 arg0, s32 arg1) {
    struct func_801E1ED0_Struct *temp;

    temp = func_801BF6B0(7);
    if ((temp->unkC < 0x4F) || (func_801C1B1C() == 0)) {
        return 6;
    }
    return 7;
}


s32 func_801F9BD4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    return 8;
}



s32 func_801F9C40(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 8;
    }
    return 9;
}


s32 func_801F9C68(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801F9C78(s32 arg0, s32 arg1) {
    return 10;
}


extern u8 D_80204B78[];

s32 func_801F9C88(s32 arg0, s32 arg1) {
    if (func_801BF6B0(6)->unkC >= 2) {
        func_8038CB60(0.0f, D_80204B78);
        return 1;
    }
    return 0;
}



s32 func_801F9CDC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2;
    }
    return 0x1;
}


typedef struct func_801F9D0C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F9D0C_Struct;

extern func_801F9D0C_Struct D_8020753C;

s32 func_801F9D0C(s32 arg0, s32 arg1) {
    func_801F9D0C_Struct sp1C;

    sp1C = D_8020753C;
    func_801C18CC(1, &sp1C);
    return 0x3;
}



s32 func_801F9D5C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


s32 func_801F9D8C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5;
}


typedef struct func_801F9DB4_Struct {
    s32 w[12];
} func_801F9DB4_Struct;
extern func_801F9DB4_Struct D_80207548;

s32 func_801F9DB4(s32 arg0, s32 arg1) {
    func_801F9DB4_Struct sp18;

    sp18 = D_80207548;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 6;
}



s32 func_801F9E18(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6;
    }
    return 0x7;
}


extern u8 D_80204CFC[];

s32 func_801F9E48(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204CFC);
    return 8;
}



s32 func_801F9E7C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x9;
    }
    return 0x8;
}


s32 func_801F9EAC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


s32 func_801F9ED4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801F9EE4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801F9EF4(s32 arg0, s32 arg1) {
    return 13;
}


extern u8 D_80204D90[];

s32 func_801F9F04(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204D90);
    return 14;
}



s32 func_801F9F38(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xF;
    }
    return 0xE;
}


typedef struct func_801F9F68_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801F9F68_Struct;

extern func_801F9F68_Struct D_80207578;

s32 func_801F9F68(s32 arg0, s32 arg1) {
    func_801F9F68_Struct sp1C;

    sp1C = D_80207578;
    func_801C18CC(1, &sp1C);
    return 0x10;
}



s32 func_801F9FB8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x10;
    }
    return 0x11;
}


s32 func_801F9FE8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x12;
}


typedef struct func_801FA010_Struct {
    s32 raw[12];
} func_801FA010_Struct;

extern func_801FA010_Struct D_80207584;

s32 func_801FA010(s32 arg0, s32 arg1) {
    func_801FA010_Struct sp18;

    sp18 = D_80207584;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x13;
}



s32 func_801FA074(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x13;
    }
    return 0x14;
}


extern u8 D_80204E90[];

s32 func_801FA0A4(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204E90);
    return 21;
}



s32 func_801FA0D8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x16;
    }
    return 0x15;
}


s32 func_801FA108(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x17;
}


typedef struct func_801FA130_Struct {
    s32 w[12];
} func_801FA130_Struct;
extern func_801FA130_Struct D_802075B4;

s32 func_801FA130(s32 arg0, s32 arg1) {
    func_801FA130_Struct sp18;

    sp18 = D_802075B4;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x18;
}



s32 func_801FA194(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x18;
    }
    return 0x19;
}


s32 func_801FA1C4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1A;
}


typedef struct func_801FA1EC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA1EC_Struct;

extern func_801FA1EC_Struct D_802075E4;

s32 func_801FA1EC(s32 arg0, s32 arg1) {
    func_801FA1EC_Struct sp1C;

    sp1C = D_802075E4;
    func_801C18CC(1, &sp1C);
    return 0x1B;
}



s32 func_801FA23C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1B;
    }
    return 0x1C;
}


extern u8 D_80204FF0[];

s32 func_801FA26C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80204FF0);
    return 29;
}



s32 func_801FA2A0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801FA2D0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801FA2F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA2F8_Struct;

extern func_801FA2F8_Struct D_802075F0;

s32 func_801FA2F8(s32 arg0, s32 arg1) {
    func_801FA2F8_Struct sp1C;

    sp1C = D_802075F0;
    func_801C18CC(1, &sp1C);
    return 0x20;
}



s32 func_801FA348(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}


s32 func_801FA378(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}


typedef struct func_801FA3A0_Struct {
    s32 w[9];
} func_801FA3A0_Struct;

extern func_801FA3A0_Struct D_802075FC;

s32 func_801FA3A0(s32 arg0, s32 arg1) {
    func_801FA3A0_Struct sp1C;

    sp1C = D_802075FC;
    func_801C18CC(3, &sp1C);
    return 35;
}



s32 func_801FA404(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801FA434(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x25;
}


typedef struct func_801FA45C_Struct {
    s32 w[9];
} func_801FA45C_Struct;

extern func_801FA45C_Struct D_80207620;

s32 func_801FA45C(s32 arg0, s32 arg1) {
    func_801FA45C_Struct sp1C;

    sp1C = D_80207620;
    func_801C18CC(3, &sp1C);
    return 38;
}



s32 func_801FA4C0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x26;
    }
    return 0x27;
}


s32 func_801FA4F0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x28;
}


typedef struct func_801FA518_Struct {
    s32 w[12];
} func_801FA518_Struct;

extern func_801FA518_Struct D_80207644;

s32 func_801FA518(s32 arg0, s32 arg1) {
    func_801FA518_Struct sp18;

    sp18 = D_80207644;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x29;
}



s32 func_801FA57C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x29;
    }
    return 0x2A;
}


extern u8 D_80205064[];

s32 func_801FA5AC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80205064);
    return 43;
}



s32 func_801FA5E0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801FA610(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2D;
}


struct func_801FA638_Struct {
    u8 pad[0x30];
};

extern struct func_801FA638_Struct D_80207674;

s32 func_801FA638(s32 arg0, s32 arg1) {
    struct func_801FA638_Struct sp18;

    sp18 = D_80207674;
    func_801C18CC(4, (func_801E785C_Struct *) &sp18);
    return 0x2E;
}



s32 func_801FA69C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}


s32 func_801FA6CC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x30;
}


typedef struct func_801FA6F4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA6F4_Struct;

extern func_801FA6F4_Struct D_802076A4;

s32 func_801FA6F4(s32 arg0, s32 arg1) {
    func_801FA6F4_Struct sp1C;

    sp1C = D_802076A4;
    func_801C18CC(1, &sp1C);
    return 0x31;
}



s32 func_801FA744(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x31;
    }
    return 0x32;
}


extern u8 D_8020513C[];

s32 func_801FA774(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_8020513C);
    return 51;
}



s32 func_801FA7A8(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x34;
    }
    return 0x33;
}


s32 func_801FA7D8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x35;
}


typedef struct func_801FA800_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA800_Struct;

extern func_801FA800_Struct D_802076B0;

s32 func_801FA800(s32 arg0, s32 arg1) {
    func_801FA800_Struct sp1C;

    sp1C = D_802076B0;
    func_801C18CC(1, &sp1C);
    return 0x36;
}



s32 func_801FA850(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x36;
    }
    return 0x37;
}


s32 func_801FA880(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x38;
}


typedef struct func_801FA8A8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA8A8_Struct;

extern func_801FA8A8_Struct D_802076BC;

s32 func_801FA8A8(s32 arg0, s32 arg1) {
    func_801FA8A8_Struct sp1C;

    sp1C = D_802076BC;
    func_801C18CC(1, &sp1C);
    return 0x39;
}



s32 func_801FA8F8(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x39;
    }
    return 0x3A;
}


extern u8 D_80205240[];

s32 func_801FA928(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80205240);
    return 59;
}



s32 func_801FA95C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3C;
    }
    return 0x3B;
}


s32 func_801FA98C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3D;
}


typedef struct func_801FA9B4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FA9B4_Struct;

extern func_801FA9B4_Struct D_802076C8;

s32 func_801FA9B4(s32 arg0, s32 arg1) {
    func_801FA9B4_Struct sp1C;

    sp1C = D_802076C8;
    func_801C18CC(1, &sp1C);
    return 0x3E;
}



s32 func_801FAA04(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3E;
    }
    return 0x3F;
}


s32 func_801FAA34(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x40;
}


typedef struct func_801FAA5C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FAA5C_Struct;

extern func_801FAA5C_Struct D_802076D4;

s32 func_801FAA5C(s32 arg0, s32 arg1) {
    func_801FAA5C_Struct sp1C;

    sp1C = D_802076D4;
    func_801C18CC(1, &sp1C);
    return 0x41;
}



s32 func_801FAAAC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x41;
    }
    return 0x42;
}


s32 func_801FAADC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x43;
}


typedef struct func_801FAB04_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FAB04_Struct;

extern func_801FAB04_Struct D_802076E0;

s32 func_801FAB04(s32 arg0, s32 arg1) {
    func_801FAB04_Struct sp1C;

    sp1C = D_802076E0;
    func_801C18CC(1, &sp1C);
    return 0x44;
}



s32 func_801FAB54(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x44;
    }
    return 0x45;
}


s32 func_801FAB84(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x46;
}


typedef struct func_801FABAC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FABAC_Struct;

extern func_801FABAC_Struct D_802076EC;

s32 func_801FABAC(s32 arg0, s32 arg1) {
    func_801FABAC_Struct sp1C;

    sp1C = D_802076EC;
    func_801C18CC(1, &sp1C);
    return 0x47;
}



s32 func_801FABFC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x47;
    }
    return 0x48;
}


extern u8 D_80205284[];

s32 func_801FAC2C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80205284);
    return 73;
}



s32 func_801FAC60(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x4A;
    }
    return 0x49;
}


s32 func_801FAC90(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4B;
}


typedef struct func_801FACB8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FACB8_Struct;

extern func_801FACB8_Struct D_802076F8;

s32 func_801FACB8(s32 arg0, s32 arg1) {
    func_801FACB8_Struct sp1C;

    sp1C = D_802076F8;
    func_801C18CC(1, &sp1C);
    return 0x4C;
}



s32 func_801FAD08(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4C;
    }
    return 0x4D;
}


s32 func_801FAD38(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4E;
}


typedef struct func_801FAD60_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801FAD60_Struct;

extern func_801FAD60_Struct D_80207704;

s32 func_801FAD60(s32 arg0, s32 arg1) {
    func_801FAD60_Struct sp1C;

    sp1C = D_80207704;
    func_801C18CC(1, &sp1C);
    return 0x4F;
}



s32 func_801FADB0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4F;
    }
    return 0x50;
}


s32 func_801FADE0(s32 arg0, s32 arg1) {
    return 81;
}


s32 func_801FADF0(s32 arg0, s32 arg1) {
    return 81;
}


s32 func_801FAE00(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801FAE10(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801FAE20(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801FAE30(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2625A0) != 0) {
        func_8038D28C(0x16C);
        return 4;
    }
    return 3;
}


s32 func_801FAE7C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FAE8C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FAE9C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801FAEAC(s32 arg0, s32 arg1) {
    return 7;
}


extern void func_8038BEC8(f32);
extern f32 D_80208C38;
extern f32 D_80208C3C;
extern f32 D_80208C40;

s32 func_801FAEBC(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    func_8038BD50(-24.0f, D_80208C38, (s32) 0xC184CCCD);
    D_8038BD88(D_80208C3C, D_80208C40, (s32) 0x4212CCCD);
    return 1;
}



s32 func_801FAF24(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 1;
    }
    return 2;
}


s32 func_801FAF78(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801FAF88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038BED4();
        return 0x4;
    }
    return 0x3;
}


extern f32 D_80208C44;
extern f32 D_80208C48;
extern f32 D_80208C4C;
extern f32 D_80208C50;
extern f32 D_80208C54;
extern f32 D_80208C58;
extern f32 D_80208C5C;
extern f32 D_80208C60;

s32 func_801FAFD0(s32 arg0, s32 arg1)
{
  float new_var;
  f32 m24;
  f32 c44;
  f32 c48;
  new_var = (-24.0f) * 1.0f;
 do { m24 = new_var; c44 = D_80208C44; c48 = D_80208C48; new_var = 0.0f; } while (0);
  if (func_8038BEF8(new_var, 2.0f, m24, c44, c48, m24, c44, c48, D_80208C4C, D_80208C50, D_80208C54, D_80208C58, D_80208C5C, D_80208C60) != 0)
  {
    return 5;
  }
  return 4;
}


extern f32 D_80208C64;
extern f32 D_80208C68;

s32 func_801FB084(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x419CE0) != 0) {
        func_8038BD50(D_80208C64, 75.0f, 0x41BD999A);
        D_8038BD88(0.0f, D_80208C68, 0x40266666);
        return 6;
    }
    return 5;
}


s32 func_801FB0F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E00) != 0) {
        func_8038BED4();
        return 7;
    }
    return 6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FB144.s")


extern f32 D_80208C7C;
extern f32 D_80208C80;
extern f32 D_80208C84;
extern f32 D_80208C88;
extern f32 D_80208C8C;
extern f32 D_80208C90;
extern f32 D_80208C94;

s32 func_801FB1FC(s32 arg0, s32 arg1) {
    f32 a = D_80208C7C;
    f32 b = D_80208C80;

    if (func_8038BEF8(0.0f, 1.0f, a, 44.0f, 19.0f, a, D_80208C84, D_80208C88, b,
                      D_80208C8C, D_80208C90, b, D_80208C94, -23.0f) != 0) {
        func_8038BED4();
        return 9;
    }
    return 8;
}


extern f32 D_80208C98;
extern f32 D_80208C9C;
extern f32 D_80208CA0;
extern f32 D_80208CA4;
extern f32 D_80208CA8;
extern f32 D_80208CAC;

s32 func_801FB2C0(s32 arg0, s32 arg1)
{
  f32 m2;
  int new_var2;
  f32 new_var;
  f32 m1;
  f32 m5;
  m5 = -1.0f;
  m1 = D_80208C98;
  new_var2 = 9;
  m2 = D_80208C9C;
  if (m5)
  {
  }
  new_var = m5;
  m5 = m2;
  if (func_8038BEF8(0.0f, 1.0f, -1.9f, 9.2f, D_80208CA0, D_80208CA4, D_80208CA8, D_80208CAC, new_var, m1, m2, new_var, m1, m5) != 0)
  {
    func_8038BED4();
    return 0xA;
  }
  return new_var2;
}


extern f32 D_80208CB0;
extern f32 D_80208CB4;
extern f32 D_80208CB8;
extern f32 D_80208CBC;
extern f32 D_80208CC0;
extern f32 D_80208CC4;

s32 func_801FB37C(s32 arg0, s32 arg1)
{
  f32 m2;
  int new_var2;
  f32 new_var;
  f32 m1;
  f32 m5;
  m5 = -0.5f;
  m1 = D_80208CB0;
  new_var2 = 0xA;
  m2 = D_80208CB4;
  if (m5)
  {
  }
  new_var = m5;
  m5 = m2;
  if (func_8038BEF8(0.0f, 2.0f, 23.5f, 9.8f, D_80208CB8, D_80208CBC, D_80208CC0, D_80208CC4, new_var, m1, m2, new_var, m1, m5) != 0)
  {
    func_8038BED4();
    return 0xB;
  }
  return new_var2;
 dummy_label_296910: ;
}


extern f32 D_80208CC8;
extern f32 D_80208CCC;
extern f32 D_80208CD0;
extern f32 D_80208CD4;
extern f32 D_80208CD8;
extern f32 D_80208CDC;

s32 func_801FB434(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.5f, 16.2f, 4.6f, D_80208CC8, 8.0f, D_80208CCC,
                      D_80208CD0, 4.5f, D_80208CD4, -38.5f, 4.5f, D_80208CD8,
                      D_80208CDC) != 0) {
        func_8038BED4();
        return 0xC;
    }
    return 0xB;
}


extern f32 D_80208CE0;
extern f32 D_80208CE4;
extern f32 D_80208CE8;
extern f32 D_80208CEC;

s32 func_801FB500(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  a = D_80208CE0;
 goto dummy_label_630526; dummy_label_630526: ;
  b = 18.0f;
  c = -37.0f;
  if (func_8038BEF8(0.0f, 1.0f, -0.8f, 19.4f, D_80208CE4, -8.0f, D_80208CE8, D_80208CEC, a, b, c, a, b, c) != 0)
  {
    func_8038BED4();
    return 0xD;
  }
  return 0xC;
}

extern f32 D_80208CF0;
extern f32 D_80208CF4;
extern f32 D_80208CF8;
extern f32 D_80208CFC;
extern f32 D_80208D00;
extern f32 D_80208D04;
extern f32 D_80208D08;
extern f32 D_80208D0C;

s32 func_801FB5BC(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_80208CF0, 11.3f, 5.8f, D_80208CF4, D_80208CF8, 11.0f, D_80208CFC, 4.5f, D_80208D00, -38.5f, D_80208D04, D_80208D08, D_80208D0C) != 0) {
        func_8038BED4();
        return 0xE;
    }
    return 0xD;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FB690.s")


extern f32 D_80208D24;
extern f32 D_80208D28;
extern f32 D_80208D2C;

s32 func_801FB74C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, -2.6f, 19.7f, D_80208D24, 7.5f, D_80208D28, D_80208D2C, 34.5f, 6.0f, 0.0f, 34.5f, 6.0f, 0.0f) != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801FB7F0(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801FB800(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801FB810(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801FB820(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801FB830(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801FB840(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}



s32 func_801FB87C(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE50(0x87, 0x63, 0x1C);
    return 2;
}


s32 func_801FB8E0(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 D_80207908;

s32 func_801FB8F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801CCE0C(2);
        func_801CCE88(0, 0xFF, 0, 0);
        func_801CCEC8(0, 1, 0, 1);
        func_801CCE88(1, 0xE5, 0x4C, 0);
        func_801CCEC8(1, -2, 1, -2);
        D_80207908 = 0;
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FB994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FBCB8.s")



s32 func_801FBDBC(s32 arg0, s32 arg1) {
    func_801C2420(0x2D8, func_8038DD54 + 0x14);
    return 1;
}


struct func_801FBDF0_StructR {
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

struct func_801FBDF0_StructQ {
    u8 pad0[0x2C];
    struct func_801FBDF0_StructR *unk2C;
};

struct func_801FBDF0_StructP {
    struct func_801FBDF0_StructQ *unk0;
};


s32 func_801FBDF0(s32 arg0, s32 arg1) {
    func_80005E44(func_8038D850, func_8038D830);
    func_80006214(func_8038D850);
    func_8012C89C(func_8038D850, 0, 0x2D8, 0);
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


s32 func_801FBEE8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801FBEF8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801FBF08(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FBF18(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FBF28(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801FBF38(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801FBF48(s32 arg0, s32 arg1) {
    func_801C2420(0x2D9, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x2D7, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDC0);
    D_8038BA70();
    *(u32 *)((u8 *)&D_8038DF70 + 0x4) = 0xE000;
    if (func_801C2570(0x2DD, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(u32 *)((u8 *)&D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2570(0xA8, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801FC008_StructB {
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
} func_801FC008_StructB;
typedef struct func_801FC008_StructA {
    u8 pad0[0x30];
    func_801FC008_StructB *unk30;
} func_801FC008_StructA;

extern f32 D_80208DA0;
#define O(i) (((func_801FC008_StructA **)D_8038D8D0)[i])->unk30

s32 func_801FC008(s32 arg0, s32 arg1) {
    register f32 k;
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80005E44(D_8038D8CC, func_8038D830 + 0x5C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x2D9, 0);
    func_8012C89C(D_8038D8CC, 1, 0x2D9, 1);
    func_8012C89C(D_8038D8CC, 2, 0x2D9, 2);
    func_8012C89C(D_8038D8CC, 3, 0x2D9, 3);
    func_8012C89C(D_8038D8CC, 4, 0x2D7, 0);
    func_8012C89C(D_8038D8CC, 5, 0x2D9, 5);
    func_8012C89C(D_8038D8CC, 6, 0x2D9, 6);
    func_8012C89C(D_8038D8CC, 7, 0x2D9, 7);
    k = D_80208DA0;
    if (k) {
    }
    goto L;
L:
    O(0)->unk4 = 22.0f; O(0)->unk8 = 0.0f; O(0)->unkC = -28.0f; O(0)->unk12 = 0;
    O(1)->unk4 = 22.0f; O(1)->unk8 = 0.0f; O(1)->unkC = -28.0f; O(1)->unk12 = 0;
    O(2)->unk4 = -22.0f; O(2)->unk8 = 0.0f; O(2)->unkC = -28.0f; O(2)->unk12 = 0;
    O(3)->unk4 = -22.0f; O(3)->unk8 = 0.0f; O(3)->unkC = -28.0f; O(3)->unk12 = 0;
    O(4)->unk4 = 5120.0f; O(4)->unk8 = 0.0f; O(4)->unkC = -28.0f; O(4)->unk12 = 0x200;
    O(4)->unk30 = (s32)D_801D9110 | 0x40000000;
    O(4)->unk24 = 0x100;
    O(4)->unk48 = 0x66; O(4)->unk49 = 0xE5; O(4)->unk4A = 0xE5; O(4)->unk4B = 0x7F;
    O(5)->unk4 = 0.0f; O(5)->unk8 = 0.0f; O(5)->unkC = 0.0f; O(5)->unk12 = 0;
    O(6)->unk4 = 13.0f; O(6)->unk8 = 0.0f; O(6)->unkC = -12.0f; O(6)->unk12 = 0;
    O(6)->unk18 = k; O(6)->unk1C = k; O(6)->unk20 = k;
    O(7)->unk4 = 13.0f; O(7)->unk8 = 0.0f; O(7)->unkC = -12.0f; O(7)->unk12 = 0;
    O(7)->unk18 = k; O(7)->unk1C = k; O(7)->unk20 = k;
    return 2;
}


s32 func_801FC480(s32 arg0, s32 arg1) {
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FC490.s")


s32 func_801FC52C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801FC53C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FC54C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FC55C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801FC56C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801FC57C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801FC58C(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801FC59C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FC5E0(s32 arg0, s32 arg1) {
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FC5F0.s")


s32 func_801FC68C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801FC69C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FC6AC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_801FC6BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FC700(s32 arg0, s32 arg1) {
    return 2;
}


extern f32 D_80208DAC;

s32 func_801FC710(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        *(s16 *)((u8 *)O(2) + 0x10) += (s16)((2048.0f * D_80208DAC) / 90.0f);
    }
    return 2;
}


s32 func_801FC7AC(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801FC7BC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FC7CC(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FC7DC(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801FC7EC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FC830(s32 arg0, s32 arg1) {
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file028/801E1C00/func_801FC840.s")


s32 func_801FC8DC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801FC8EC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FC8FC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FC90C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801FC91C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FC960(s32 arg0, s32 arg1) {
    return 2;
}


extern f32 D_80208DB4;

struct func_801FC970_StructLeaf {
    u8 pad[0x10];
    s16 unk10;
};
struct func_801FC970_StructMid {
    u8 pad[0x30];
    struct func_801FC970_StructLeaf *unk30;
};
struct func_801FC970_StructRoot {
    u8 pad[0x10];
    struct func_801FC970_StructMid *unk10;
};

s32 func_801FC970(s32 arg0, s32 arg1) {
    struct func_801FC970_StructLeaf *temp_v0;

    if (func_801C0B8C(0xA4CB80) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x7704C0) != 0) {
        temp_v0 = ((struct func_801FC970_StructRoot *)D_8038D8D0)->unk10->unk30;
        temp_v0->unk10 += (s16)((2048.0f * D_80208DB4) / 90.0f);
    }
    return 2;
}


s32 func_801FCA0C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801FCA1C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FCA2C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FCA3C(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801FCA4C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FCA90(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801FCAA0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801FCAB0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801FCAC0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FCAD0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FCAE0(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801FCAF0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FCB34(s32 arg0, s32 arg1) {
    return 2;
}


typedef struct func_801FCB44_Struct {
    u8 pad[0x18];
    u8 *unk18;
} func_801FCB44_Struct;


s32 func_801FCB44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        D_8038D8D0->unk18[0x22] = 0;
        return 3;
    }
    return 2;
}


s32 func_801FCB94(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801FCBA4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801FCBE8(s32 arg0, s32 arg1) {
    return 2;
}


struct func_801FCBF8_StructData {
    u8 pad0[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
};
struct func_801FCBF8_StructMid {
    u8 pad0[0x30];
    struct func_801FCBF8_StructData *unk30;
};
struct func_801FCBF8_StructRoot {
    u8 pad0[0x1C];
    struct func_801FCBF8_StructMid *unk1C;
};
extern f32 D_80208DB8;
extern f32 D_80208DBC;

s32 func_801FCBF8(s32 arg0, s32 arg1) {
    struct func_801FCBF8_StructData *temp_v0;

    if (func_801C0B8C(0x3D0900) != 0) {
        return 3;
    }
    if (func_801C0B8C(0x1E8480) != 0) {
        temp_v0 = ((struct func_801FCBF8_StructRoot *)D_8038D8D0)->unk1C->unk30;
        temp_v0->unk8 = (f32)(temp_v0->unk8 + D_80208DB8);
        temp_v0 = ((struct func_801FCBF8_StructRoot *)D_8038D8D0)->unk1C->unk30;
        temp_v0->unk12 = (s16)(temp_v0->unk12 + (s16)((2048.0f * D_80208DBC) / 90.0f));
    }
    return 2;
}


s32 func_801FCCB8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0x1C) + 0x22) = 0;
        return 4;
    }
    return 3;
}


s32 func_801FCD08(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801FCD18(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801FCD28(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801FCD38(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801FCD48(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801FCD58(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801FCD68(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801FCD78(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801FCD88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x419CE0) != 0) {
        func_801C4028(0, 5.0f, 2.0f, -4.0f, 0x10E, 0, 0, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 2;
    }
    return 1;
}


s32 func_801FCE30(s32 arg0, s32 arg1) {
    f32 two;

    if (func_801C0B8C(0x432380) != 0) {
        two = 2.0f;
        func_801C4028(0, -4.0f, 3.0f, two, 0x10E, 0x14D, 0, two, two, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 3;
    }
    return 2;
}


s32 func_801FCEDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x44AA20) != 0) {
        func_801C4028(0, 7.0f, 6.0f, 8.0f, 0x10E, 0, 0, 2.0f, 2.0f, 0xC8, 0x68, 0x18, 0xB, 5, 5, 0x14);
        return 4;
    }
    return 3;
}


s32 func_801FCF88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4630C0) != 0) {
        return 5;
    }
    return 4;
}


s32 func_801FCFC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x47B760) != 0) {
        func_801C4028(0, 5.0f, 14.0f, 3.0f, 0x10E, 0x13B, 0, 2.0f, 2.0f, 0xC8, 0x68, 0x18, 0xB, 5, 5, 0x14);
        func_801C4028(0, 2.0f, 19.0f, -1.0f, 0x10E, 0x7F, 0, 2.0f, 2.0f, 0xC8, 0x68, 0x18, 0xB, 5, 5, 0x14);
        return 6;
    }
    return 5;
}


s32 func_801FD0E4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E00) != 0) {
        func_801C4028(0, 24.0f, 11.0f, -14.0f, 0, 0, 0x52, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 7;
    }
    return 6;
}


s32 func_801FD18C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4AC4A0) != 0) {
        func_801C4028(0, -9.0f, 6.0f, -15.0f, 0, 0, 0x2E, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 8;
    }
    return 7;
}


s32 func_801FD234(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4B87F0) != 0) {
        func_801C4028(0, 24.0f, 16.0f, -16.0f, 0, 0, 0x62, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 9;
    }
    return 8;
}


s32 func_801FD2DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4DD1E0) != 0) {
        return 0xA;
    }
    return 9;
}


s32 func_801FD318(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4E9530) != 0) {
        func_801C4028(0, 11.0f, 0, -11.0f, 0, 0, 0x85, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0xB;
    }
    return 0xA;
}


s32 func_801FD3C0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F5880) != 0) {
        func_801C4028(0, 5.0f, 5.0f, -12.0f, 0, 0, 0x66, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0xC;
    }
    return 0xB;
}


s32 func_801FD470(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x501BD0) != 0) {
        func_801C4028(0, -7.0f, 9.0f, -13.0f, 0, 0, 0x7F, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0xD;
    }
    return 0xC;
}


s32 func_801FD518(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x50DF20) != 0) {
        func_801C4028(0, 14.0f, 14.0f, -14.0f, 0, 0, 0xAF, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0xE;
    }
    return 0xD;
}


s32 func_801FD5C8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x532910) != 0) {
        func_801C4028(0, -18.0f, 10.0f, -17.0f, 0, 0, 0, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0xF;
    }
    return 0xE;
}


s32 func_801FD66C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        func_801C4028(0, 11.0f, 14.0f, -18.0f, 0, 0, 0x14E, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x10;
    }
    return 0xF;
}


s32 func_801FD714(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x54AFB0) != 0) {
        func_801C4028(0, 7.0f, 8.0f, -19.0f, 0, 0, 0, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x11;
    }
    return 0x10;
}


s32 func_801FD7B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x56F9A0) != 0) {
        func_801C4028(0, 23.0f, 31.0f, -15.0f, 0, 0, 0x2F, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x12;
    }
    return 0x11;
}


s32 func_801FD860(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x588040) != 0) {
        func_801C4028(0, 7.0f, 13.0f, -16.0f, 0, 0, 0x55, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x13;
    }
    return 0x12;
}


s32 func_801FD908(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5A06E0) != 0) {
        func_801C4028(0, -19.0f, 8.0f, -17.0f, 0, 0, 0x40, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x14;
    }
    return 0x13;
}


s32 func_801FD9B0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5B8D80) != 0) {
        func_801C4028(0, 6.0f, 8.0f, -17.0f, 0, 0, 0x129, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x15;
    }
    return 0x14;
}


s32 func_801FDA58(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5D1420) != 0) {
        func_801C4028(0, 3.0f, 8.0f, -18.0f, 0, 0, 0x14F, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x16;
    }
    return 0x15;
}


extern f32 D_80208DC0;

s32 func_801FDB00(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0x5F5E10) != 0) {
        temp = D_80208DC0;
        func_801C4028(0, 30.0f, 33.0f, -19.0f, 0, 0, 7, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x17;
    }
    return 0x16;
}


s32 func_801FDBA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x61A800) != 0) {
        func_801C4028(0, -2.0f, 10.0f, -20.0f, 0, 0, 0x158, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x18;
    }
    return 0x17;
}


s32 func_801FDC50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x626B50) != 0) {
        func_801C4028(0, -1.0f, 4.0f, -21.0f, 0, 0, 0x14, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x19;
    }
    return 0x18;
}


s32 func_801FDCF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x64B540) != 0) {
        return 0x1A;
    }
    return 0x19;
}


s32 func_801FDD34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x66FF30) != 0) {
        func_801C4028(0, 0.0f, 12.0f, -16.0f, 0, 0, 0x164, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801FDDDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6ACFC0) != 0) {
        func_801C4028(0, -2.0f, 14.0f, -17.0f, 0, 0, 0x22, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801FDE84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6DDD00) != 0) {
        func_801C4028(0, 1.0f, 9.0f, -17.0f, 0, 0x17, 0, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801FDF2C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x6EA050) != 0) {
        func_801C4028(0, -2.0f, 14.0f, -18.0f, 0, 0x17, 0x154, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x1E;
    }
    return 0x1D;
}


s32 func_801FDFD8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x70EA40) != 0) {
        func_801C4028(0, -6.0f, 16.0f, -20.0f, 0, 0x17, 0x142, 2.0f, 2.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801FE084(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7270E0) != 0) {
        func_801C4028(0, -5.0f, 25.0f, -12.0f, 0, 0, 0x34, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x20;
    }
    return 0x1F;
}


s32 func_801FE12C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x733430) != 0) {
        func_801C4028(0, -3.0f, 24.0f, -13.0f, 0, 0, 0x17, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x21;
    }
    return 0x20;
}


extern f32 D_80208DC4;

s32 func_801FE1D4(s32 arg0, s32 arg1) {
    f32 f;

    if (func_801C0B8C(0x73F780) != 0) {
        f = D_80208DC4;
        func_801C4028(0, -8.0f, 24.0f, -14.0f, 0, 0, 0x3C, f, f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x22;
    }
    return 0x21;
}


s32 func_801FE27C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x74BAD0) != 0) {
        func_801C4028(0, -18.0f, 9.0f, -14.0f, 0x2F, 0x16, 0x46, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x23;
    }
    return 0x22;
}


extern f32 D_80208DC8;

s32 func_801FE32C(s32 arg0, s32 arg1) {
    f32 f;

    if (func_801C0B8C(0x757E20) != 0) {
        f = D_80208DC8;
        func_801C4028(0, -20.0f, 12.0f, -16.0f, 3, 0x24, 0, f, f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x24;
    }
    return 0x23;
}


extern f32 D_80208DCC;

s32 func_801FE3D8(s32 arg0, s32 arg1) {
    f32 scale;

    if (func_801C0B8C(0x7704C0) != 0) {
        scale = D_80208DCC;
        func_801C4028(0, -7.0f, 9.0f, -12.0f, 0x22, 0xB, 0x48, scale, scale, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x25;
    }
    return 0x24;
}


s32 func_801FE488(s32 arg0, s32 arg1) {
    f32 scale;

    if (func_801C0B8C(0x7A1200) != 0) {
        scale = 1.5f;
        func_801C4028(0, -9.0f, 3.0f, -16.0f, 6, 9, 0xC, scale, scale, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x26;
    }
    return 0x25;
}


s32 func_801FE538(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7D1F40) != 0) {
        func_801C4028(0, -11.0f, 7.0f, -19.0f, 6, 9, 0x15A, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x27;
    }
    return 0x26;
}


s32 func_801FE5E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x802C80) != 0) {
        func_801C4028(0, -8.0f, 6.0f, -18.0f, 0, 0x17, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x28;
    }
    return 0x27;
}


extern f32 D_80208DD0;

s32 func_801FE690(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0x84C060) != 0) {
        temp = D_80208DD0;
        func_801C4028(0, -13.0f, 8.0f, -16.0f, 0x161, 0x14, 0x14E, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x29;
    }
    return 0x28;
}


s32 func_801FE740(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x864700) != 0) {
        return 0x2A;
    }
    return 0x29;
}


s32 func_801FE77C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x895440) != 0) {
        func_801C4028(0, -7.0f, 7.0f, -4.0f, 0, 0x35, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x2B;
    }
    return 0x2A;
}


s32 func_801FE824(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        func_801C4028(0, -31.0f, 9.0f, -5.0f, 0xF, 0x2B, 0x1A, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801FE8D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8C6180) != 0) {
        func_801C4028(0, -12.0f, 10.0f, -6.0f, 0x156, 0x31, 0x14F, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x2D;
    }
    return 0x2C;
}


extern f32 D_80208DD4;

s32 func_801FE984(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C0B8C(0x8F6EC0ULL) != 0) {
        temp = D_80208DD4;
        func_801C4028(0, -13.0f, 9.0f, -10.0f, 0xF, 0x2B, 0x1A, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x2E;
    }
    return 0x2D;
}


s32 func_801FEA34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x927C00) != 0) {
        func_801C4028(0, -6.0f, 6.0f, 4.0f, 0x125, 0x25, 0x11B, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x2F;
    }
    return 0x2E;
}


s32 func_801FEAE4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9402A0) != 0) {
        func_801C4028(0, -27.0f, 11.0f, -1.0f, 0x166, 0x39, 3, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x30;
    }
    return 0x2F;
}


s32 func_801FEB94(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x94C5F0) != 0) {
        func_801C4028(0, -24.0f, 13.0f, -1.0f, 0x133, 0x2E, 0x129, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x31;
    }
    return 0x30;
}


s32 func_801FEC44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x970FE0) != 0) {
        func_801C4028(0, -6.0f, 13.0f, 4.0f, 0, 0x3A, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x32;
    }
    return 0x31;
}


s32 func_801FECEC(s32 arg0, s32 arg1) {
    f32 one;
    f32 neg10;
    f32 eight;

    if (func_801C0B8C(0x989680) != 0) {
        one = 1.0f;
        neg10 = -10.0f;
        eight = 8.0f;
        func_801C4028(0, neg10, eight, 0, 0x136, 0x17, 0x116, one, one, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x33;
    }
    return 0x32;
}


s32 func_801FED9C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9959D0) != 0) {
        func_801C4028(0, -8.0f, 9.0f, -1.0f, 0, 0x41, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x34;
    }
    return 0x33;
}


s32 func_801FEE44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9A1D20) != 0) {
        func_801C4028(0, -7.0f, 9.0f, 4.0f, 0, 0x41, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x35;
    }
    return 0x34;
}


s32 func_801FEEEC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9BA3C0) != 0) {
        func_801C4028(0, -14.0f, 12.0f, 9.0f, 0x3F, 0x22, 0x46, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x36;
    }
    return 0x35;
}


s32 func_801FEF9C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9C6710) != 0) {
        func_801C4028(0, -13.0f, 10.0f, 1.0f, 0x138, 0x1E, 0x120, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x37;
    }
    return 0x36;
}



s32 func_801FF04C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        func_801C4028(0, -16.0f, 12.0f, 6.0f, 0x16, 0x46, 0x13, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        func_801C4028(0, -9.0f, 8.0f, -13.0f, 0x143, 0x15B, 0x100, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x38;
    }
    return 0x37;
}


s32 func_801FF16C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9DEDB0) != 0) {
        func_801C4028(0, -15.0f, 18.0f, 0.0f, 0x138, 0x1E, 0x120, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x39;
    }
    return 0x38;
}


s32 func_801FF21C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA037A0) != 0) {
        func_801C4028(0, -15.0f, 14.0f, 15.0f, 0x132, 0x44, 0x134, 1.5f, 1.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x3A;
    }
    return 0x39;
}


extern f32 D_80208DD8;

s32 func_801FF2CC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA1BE40) != 0) {
        f32 temp = D_80208DD8;

        func_801C4028(0, -19.0f, 20.0f, 12.0f, 0x116, 0x1F, 0x11D, temp, temp, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x3B;
    }
    return 0x3A;
}


s32 func_801FF37C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA28190) != 0) {
        func_801C4028(0, -21.0f, 11.0f, 8.0f, 0x114, 4, 0x111, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x3C;
    }
    return 0x3B;
}



s32 func_801FF42C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA344E0) != 0) {
        func_801C4028(0, -7.0f, 5.0f, -4.0f, 0x12A, 3, 0x113, 1.0f, 1.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 0x3D;
    }
    return 0x3C;
}

extern void func_801C48A4(f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, u8 *, s32);
extern u8 D_801D8FA0[];

extern f32 D_80208DDC;
extern s32 D_80207A4C;

s32 func_801FF4DC(s32 arg0, s32 arg1) {
    f32 k;
    if (D_80207A4C == 1) {
        return 0x3D;
    }
    if (func_801C0B8C(0xA4CB80) != 0) {
        func_801C48A4(0.0f, 6.0f, -17.0f, 0, 0, 0, 0.5f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        D_80207A4C = 1;
        func_801C48A4(25.0f, 7.0f, -16.0f, 0, 0, 0, 1.0f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(-3.0f, 3.0f, -16.0f, 0, 0, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(16.0f, 0.0f, -16.0f, 0, 0, 0, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(16.0f, 5.0f, -17.0f, 0, 0, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(7.0f, 3.0f, -15.0f, 0, 0, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        k = D_80208DDC;
        func_801C48A4(9.0f, 5.0f, -16.0f, 0, 0, 0, k, k, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        return 0x3E;
    }
    return 0x3D;
}



s32 func_801FF80C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016B28BF) != 0) {
        func_801C48A4(20.0f, 6.0f, -12.0f, 0, 0x10E, 0x157, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(21.0f, 7.0f, 9.0f, 0, 0x10E, 0x162, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        func_801C48A4(18.0f, 2.0f, 5.0f, 0, 0x10E, 0x15F, 1.0f, 1.0f, 0xFF, 0xFF, 0x78, 0xF4, 0, 0, D_801D8FA0, 2);
        return 0x3F;
    }
    return 0x3E;
}


s32 func_801FF9B4(s32 arg0, s32 arg1) {
    return 63;
}


s32 func_801FF9C4(s32 arg0, s32 arg1) {
    return 64;
}


s32 func_801FF9D4(s32 arg0, s32 arg1) {
    return 65;
}


s32 func_801FF9E4(s32 arg0, s32 arg1) {
    return 66;
}


s32 func_801FF9F4(s32 arg0, s32 arg1) {
    return 67;
}


s32 func_801FFA04(s32 arg0, s32 arg1) {
    return 68;
}


s32 func_801FFA14(s32 arg0, s32 arg1) {
    return 69;
}


s32 func_801FFA24(s32 arg0, s32 arg1) {
    return 70;
}


s32 func_801FFA34(s32 arg0, s32 arg1) {
    return 1;
}


void func_801C4644(f32 a0, f32 a1, f32 a2, f32 a3, f32 s4, f32 s5, s32 s6);

s32 func_801FFA44(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E00) != 0) {
        func_801C4644(0.0f, 30.0f, 15.0f, 0.0f, 0.0f, 0.0f, 10);
        return 2;
    }
    return 1;
}


s32 func_801FFAAC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x5265C0) != 0) {
        func_801C4644(-7.0f, 27.0f, 15.0f, 0.0f, 0.0f, 0.0f, 10);
        return 3;
    }
    return 2;
}


s32 func_801FFB1C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x61A800) != 0) {
        func_801C4644(0.0f, 30.0f, 6.0f, 0.0f, 0.0f, 9.0f, 0xA);
        return 4;
    }
    return 3;
}


s32 func_801FFB8C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x87CDA0) != 0) {
        func_801C4644(7.0f, 38.0f, -4.0f, 18.0f, 62.0f, 20.0f, 0xA);
        return 5;
    }
    return 4;
}



s32 func_801FFC08(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9402A0) != 0) {
        func_801C4644(2.0f, 33.0f, 6.0f, 43.0f, 77.0f, 43.0f, 0xA);
        return 6;
    }
    return 5;
}


extern f32 D_80208DE0;

s32 func_801FFC84(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA037A0) != 0) {
        func_801C4644(7.0f, 34.0f, 14.0f, 290.0f, 65.0f, D_80208DE0, 0xA);
        return 7;
    }
    return 6;
}


s32 func_801FFD00(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801FFD10(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801FFD20(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801FFD30(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801FFD40(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801FFD50(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801FFD60(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801FFD70(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801FFD80(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801FFD90(s32 arg0, s32 arg1) {
    return 17;
}


s32 func_801FFDA0(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801FFDB0(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801FFDC0(s32 arg0, s32 arg1) {
    return 19;
}



s32 func_801FFDD0(s32 arg0, s32 arg1) {
    func_801C2420(0x2F, D_801E0A48);
    func_801CC318();
    func_801CC458(0, D_801DB314);
    func_801CC4C0(0, D_801DB318);
    func_801CC458(1, D_801DB334);
    func_801CC4C0(1, D_801DB338);
    func_801C2420(0x29, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(2, func_801DAC30 + 0x40);
    func_801CC4C0(2, func_801DAC30 + 0x44);
    func_801C2420(0x32, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(3, D_801DB258);
    func_801CC4C0(3, D_801DB25C);
    func_801C2420(0x57, D_801E0A48 + 0x48);
    func_801CC318();
    func_801CC458(4, func_801DAEE8 + 0x30);
    func_801CC4C0(4, func_801DAEE8 + 0x34);
    return 1;
}



#define func_801FFEF4_NEXT(p) (*(u8 **)((u8 *)(p) + 0x8))

s32 func_801FFEF4(s32 arg0, s32 arg1) {
    func_80005670(*(u8 **)(func_801DAAF0 + 0x24), D_801DB300);
    func_80005670(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24)), D_801DB320);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24))), func_801DAC30 + 0x2C);
    func_801D2704(0);
    func_801D2710(0);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24)))), D_801DB244);
    func_801D048C(0);
    func_801D03E0(0);
    func_801D03EC(0);
    func_80005670(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(func_801FFEF4_NEXT(*(u8 **)(func_801DAAF0 + 0x24))))), func_801DAEE8 + 0x1C);
    func_801CC530();
    return 2;
}


extern f32 D_80208DE4;
extern f32 D_80208DE8;

s32 func_801FFFD4(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = *(void **)((u8 *)D_801DAB14->unk8 + 0x24);
    if (temp_v0 != NULL) {
        *(f32 *)(*(u8 **)((u8 *)temp_v0 + 0x2C) + 0x4) = D_80208DE4;
        *(f32 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0xC) = D_80208DE8;
        *(s16 *)(*(u8 **)((u8 *)*(void **)((u8 *)D_801DAB14->unk8 + 0x24) + 0x2C) + 0x12) = 0x1F33;
        func_801CC470(0, 0x0320001A, 0, 0, 1.0f);
        return 3;
    }
    return 2;
}



s32 func_8020009C(s32 arg0, s32 arg1) {
    if (func_801D2C10() != 0) {
        return 0x4;
    }
    return 0x3;
}


s32 func_802000CC(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_802000DC(s32 arg0, s32 arg1) {
    return 5;
}



s32 func_802000EC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208DEC;

s32 func_80200130(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_80208DEC;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0320001A, 0, 0, 1.0f);
        return 2;
    }
    return 1;
}



s32 func_80200204(s32 arg0, s32 arg1) {
    if (func_801D2F40() != 0) {
        return 0x3;
    }
    return 0x2;
}


s32 func_80200234(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_80200244(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_80200254(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_80208DF0;

struct func_80200298_Node {
    u8 pad0[8];
    struct func_80200298_Node *unk8;
    u8 pad1[0x18];
    struct func_80200298_Mid *unk24;
};

struct func_80200298_Mid {
    u8 pad0[0x2C];
    struct func_80200298_Target *unk2C;
};

struct func_80200298_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_80200298(s32 arg0, s32 arg1) {
    struct func_80200298_Mid *temp_v0;

    temp_v0 = ((struct func_80200298_Node *) D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_80200298_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_80200298_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = (f32) D_80208DF0;
        ((struct func_80200298_Node *) D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1CFA;
        func_801CC470(2, 0x03480016, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_80200380(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_80200390(s32 arg0, s32 arg1) {
    return 4;
}


struct func_802003A0_Struct3 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_802003A0_Struct2 {
    u8 pad0[0x2C];
    struct func_802003A0_Struct3 *unk2C;
};

struct func_802003A0_Struct1 {
    u8 pad0[8];
    struct func_802003A0_Struct1 *unk8;
    u8 pad1[0x18];
    struct func_802003A0_Struct2 *unk24;
};

extern f32 D_80208DF4;
extern f32 D_80208DF8;
extern f32 D_80208DFC;

#define FUNC_802003A0_ROOT ((struct func_802003A0_Struct1 *)D_801DAB14)

s32 func_802003A0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xA4CB80) != 0) {
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk4 = D_80208DF4;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk8 = D_80208DF8;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208DFC;
        FUNC_802003A0_ROOT->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(2, 0x03480016, 0, 0x1000, 4.0f);
        return 5;
    }
    return 4;
}



s32 func_80200494(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x6;
    }
    return 0x5;
}



s32 func_802004C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x010058FF) != 0) {
        func_801CC470(2, 0x03480017, 0, 0, 2.5f);
        return 7;
    }
    return 6;
}



s32 func_80200528(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x8;
    }
    return 0x7;
}


s32 func_80200558(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_80200568(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_80200578(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_80200588(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}





extern f32 D_80208E00;

s32 func_802005CC(s32 arg0, s32 arg1) {
    struct func_802005CC_Struct2 *temp_v0;

    temp_v0 = ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -1.0f;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = D_80208E00;
        ((struct func_802005CC_Struct1 *) D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(3, 0x03200007, 0, 0, 5.0f);
        return 2;
    }
    return 1;
}



s32 func_802006C4(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0x3;
    }
    return 0x2;
}



s32 func_802006F4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 3) || (func_801C1B1C() == 0)) {
        return 3;
    }
    return 4;
}



s32 func_80200748(s32 arg0, s32 arg1) {
    if ((((s32 *) func_801BF6B0(7))[3] < 6) || (func_801C1B1C() == 0)) {
        return 4;
    }
    return 5;
}



s32 func_8020079C(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200012, 0, 0, 3.0f);
    return 6;
}



s32 func_802007E4(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0x7;
    }
    return 0x6;
}


s32 func_80200814(s32 arg0, s32 arg1) {
    if (func_801BF6B0(7)->unkC < 0xB || func_801C1B1C() == 0) {
        return 7;
    }
    return 8;
}


s32 func_80200868(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_80200878(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC470(3, 0x03200015, 0, 0, 2.0f);
        return 0xA;
    }
    return 9;
}



s32 func_802008D8(s32 arg0, s32 arg1) {
    if (func_801D278C() != 0) {
        return 0xB;
    }
    return 0xA;
}


s32 func_80200908(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_80200918(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_80200928(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_80200938(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_80200948(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_80200958(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_8020099C_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_8020099C_Mid {
    u8 pad0[0x2C];
    struct func_8020099C_Target *unk2C;
};

struct func_8020099C_Node {
    u8 pad0[8];
    struct func_8020099C_Node *unk8;
    u8 pad1[0x18];
    struct func_8020099C_Mid *unk24;
};

s32 func_8020099C(s32 arg0, s32 arg1) {
    struct func_8020099C_Mid *temp_v0;

    temp_v0 = ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 6.5f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unkC = 56.5f;
        ((struct func_8020099C_Node *)D_801DAB14)->unk8->unk8->unk8->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(4, 0x03480013, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_80200AA0(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_80200AB0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_80200AC0(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_80200AD0(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_80200AE0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_80200AF0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_80200B00(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_80200B10(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_80200B20(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_80200B30(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
    return 1;
}



s32 func_80200B9C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_80200BCC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_80200BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0198EF7F) != 0) {
        return 4;
    }
    return 3;
}


s32 func_80200C18(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
    return 5;
}



s32 func_80200C84(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 5;
    }
    return 6;
}


s32 func_80200CAC(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_80200CBC(s32 arg0, s32 arg1) {
    return 7;
}


extern u8 D_80205378[];

s32 func_80200CCC(s32 arg0, s32 arg1) {
    if (func_801BF6B0(6)->unkC >= 2) {
        func_8038CB60(0.0f, D_80205378);
        func_8038D28C(8);
        return 1;
    }
    return 0;
}



s32 func_80200D28(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x2;
    }
    return 0x1;
}


typedef struct func_80200D58_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_80200D58_Struct;

extern func_80200D58_Struct D_80207CEC;

s32 func_80200D58(s32 arg0, s32 arg1) {
    func_80200D58_Struct sp18;

    sp18 = D_80207CEC;
    func_801C18CC(2, &sp18);
    return 0x3;
}



s32 func_80200DC0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3;
    }
    return 0x4;
}


s32 func_80200DF0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5;
}


typedef struct func_80200E18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80200E18_Struct;

extern func_80200E18_Struct D_80207D04;

s32 func_80200E18(s32 arg0, s32 arg1) {
    func_80200E18_Struct sp1C;

    sp1C = D_80207D04;
    func_801C18CC(1, &sp1C);
    return 0x6;
}



s32 func_80200E68(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x6;
    }
    return 0x7;
}


extern u8 D_80205470[];

s32 func_80200E98(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_80205470);
    return 8;
}



s32 func_80200ECC(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x9;
    }
    return 0x8;
}


s32 func_80200EFC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xA;
}


typedef struct func_80200F24_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80200F24_Struct;

extern func_80200F24_Struct D_80207D10;

s32 func_80200F24(s32 arg0, s32 arg1) {
    func_80200F24_Struct sp1C;

    sp1C = D_80207D10;
    func_801C18CC(1, &sp1C);
    return 0xB;
}



s32 func_80200F74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}


s32 func_80200FA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xD;
}


s32 func_80200FCC(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_80200FDC(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_80200FEC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_80200FFC(s32 arg0, s32 arg1) {
    return 2;
}


extern s32 D_80207D60;

s32 func_8020100C(s32 arg0, s32 arg1) {
    D_80207D60 = 0;
    return 0x3;
}



s32 func_80201024(s32 arg0, s32 arg1) {
    if (D_80207D60 == 0) {
        goto case0;
    }
    if (D_80207D60 == 1) {
        goto case1;
    }
    return 3;

case0:
    if (func_801C0B8C(0x1E8480) != 0) {
        func_8038D28C(0x16D);
        func_8038D28C(0x75);
        D_80207D60 = 1;
    }
    goto done;

case1:
    if (func_801C0B8C(0x419CE0) != 0) {
        func_8038D28C(0x16E);
        return 4;
    }

done:
    return 3;
}


s32 func_802010C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01A0909F) != 0) {
        func_8038D28C(0xA);
        return 5;
    }
    return 4;
}


s32 func_80201110(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_80201120(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_80201130(s32 arg0, s32 arg1) {
    return 7;
}

