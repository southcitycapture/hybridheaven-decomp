#include "common.h"

extern void D_8038C158(void);
s32 func_801C0B8C(u64 time);
extern s32 func_8038D28C(s32);

extern void func_8038BEC8(f32 f);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x8D);
        func_8038D28C(0x500);
        D_8038C158();
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E1C44.s")


extern void func_8038BE98(f32 f);
extern void func_8038BD50(f32 f0, f32 f1, s32 a2);
extern void D_8038BD88(f32 f0, f32 f1, s32 a2);
extern f32 D_801E5954;
extern f32 D_801E5958;
extern f32 D_801E595C;
extern f32 D_801E5960;
extern f32 D_801E5964;

s32 func_801E1D00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        D_8038C158();
        return 3;
    }
    if (func_801C0B8C(0x7EA5E0) != 0) {
        func_8038BE98(D_801E5954);
        func_8038BD50(D_801E5958, D_801E595C, 0xC2943333);
        D_8038BD88(D_801E5960, D_801E5964, 0x4195999A);
    }
    return 2;
}


extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801E5968;
extern f32 D_801E596C;
extern f32 D_801E5970;
extern f32 D_801E5974;
extern f32 D_801E5978;
extern f32 D_801E597C;
extern f32 D_801E5980;
extern f32 D_801E5984;
extern f32 D_801E5988;

s32 func_801E1DA0(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    a = D_801E5968;
    b = D_801E596C;
    c = D_801E5970;
    d = D_801E5974;
    if (D_8038C17C(0.0f, D_801E5978, 0xC2040000, 0x41700000, D_801E597C, D_801E5980, D_801E5984, D_801E5988, a, b, c, a, b, c, d, d) != 0) {
        return 4;
    }
    return 3;
}

struct func_801E47B0_Struct *func_801BF6B0(s32 arg0);

extern f32 D_801E598C;
extern f32 D_801E5990;
extern f32 D_801E5994;

s32 func_801E1E54(s32 arg0, s32 arg1) {
    if (*(s32 *)((u8 *)func_801BF6B0(4) + 0x3C) >= 6) {
        func_8038BE98(D_801E598C);
        func_8038BD50(0.0f, D_801E5990, 0x41980000);
        D_8038BD88(0.0f, D_801E5994, 0x420D999A);
        return 5;
    }
    return 4;
}


s32 func_801E1ECC(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E1EDC(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E1F18(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(0, -0x40, -0x40, 0x1A);
    func_801CCE88(1, 0xB3, 0xB3, 0xB3);
    func_801CCEC8(1, 0x40, 0x40, -0x1A);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}


s32 func_801E1FA4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E1FB4(s32 arg0, s32 arg1) {
    return 3;
}


extern void D_8038BA70();
extern void func_801C2420();
extern s32 func_801C2570();
extern void func_8038BA8C();
extern s32 D_8038DD90[];
extern s32 D_8038DF70[];

s32 func_801E1FC4(s32 arg0, s32 arg1) {
    func_801C2420(0x470, D_8038DD90);
    D_8038BA70();
    D_8038DF70[1] = 0x800;
    if (func_801C2570(0x378, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[4] = 0x1000;
    if (func_801C2570(0x471, &D_8038DF70[3]) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801E2054_StructInit { s32 w[4]; } func_801E2054_StructInit;
typedef struct func_801E2054_StructData {
    s16 unk0; u8 pad2[2];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14; u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24; void *unk28; s16 unk2C; u8 pad2E[2];
    s32 unk30; u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_801E2054_StructData;
typedef struct func_801E2054_StructNode {
    u8 pad[0x22]; u8 unk22; u8 pad23[0xD];
    func_801E2054_StructData *unk30;
} func_801E2054_StructNode;
typedef struct func_801E2054_StructRoot {
    func_801E2054_StructNode *nodes[10];
} func_801E2054_StructRoot;
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012CF8C(s32, void *, s32, s32);
extern s32 func_8038D8B8[];
extern u8 D_801D96C8[], D_801D9768[], D_801D9908[], D_801DA058[], D_801DA0B8[];
extern func_801E2054_StructInit D_801E5738, D_801E5748, D_801E5758, D_801E5768;
extern func_801E2054_StructInit D_801E5778, D_801E5788, D_801E5798, D_801E57A8;
extern s32 D_8038D8CC;
extern struct func_801E2B54_Struct_A *D_8038D8D0;
#define HANDLE D_8038D8CC
#define NODE(i) (((func_801E2054_StructRoot *)D_8038D8D0)->nodes[i])
#define DATA(i) (NODE(i)->unk30)
#define POS(i,z) DATA(i)->unk4 = 0.0f; DATA(i)->unk8 = 0.0f; DATA(i)->unkC = z; DATA(i)->unk12 = 0
#define SCALE(i) DATA(i)->unk18 = 1.0f; DATA(i)->unk1C = 1.0f; DATA(i)->unk20 = 1.0f
#define COLOR(i,r,g,b,a) DATA(i)->unk48 = r; DATA(i)->unk49 = g; DATA(i)->unk4A = b; DATA(i)->unk4B = a

s32 func_801E2054(s32 arg0, s32 arg1) {
    func_801E2054_StructInit sp98 = D_801E5738;
    func_801E2054_StructInit sp88 = D_801E5748;
    func_801E2054_StructInit sp78 = D_801E5758;
    func_801E2054_StructInit sp68 = D_801E5768;
    func_801E2054_StructInit sp58 = D_801E5778;
    func_801E2054_StructInit sp48 = D_801E5788;
    func_801E2054_StructInit sp38 = D_801E5798;
    func_801E2054_StructInit sp28 = D_801E57A8;
    u8 pad[8];
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp88);
    func_80005E44(HANDLE, &sp58);
    func_80005E44(HANDLE, &sp48);
    func_80005E44(HANDLE, &sp48);
    func_80005E44(HANDLE, &sp58);
    func_80006214(HANDLE);
    func_8012C89C(HANDLE, 0, 0x470, 6);
    func_8012C89C(HANDLE, 1, 0x470, 7);
    func_8012C89C(HANDLE, 2, 0x470, 6);
    func_8012C89C(HANDLE, 3, 0x470, 7);
    func_8012C89C(HANDLE, 4, 0x470, 0);
    func_8012C89C(HANDLE, 5, 0x470, 2);
    func_8012C89C(HANDLE, 6, 0x470, 3);
    func_8012C89C(HANDLE, 7, 0x470, 4);
    func_8012C89C(HANDLE, 8, 0x470, 8);
    DATA(9)->unk30 = 0;
    DATA(9)->unk28 = D_801D9908;
    DATA(9)->unk0 = 0;
    DATA(9)->unk2C = 0;
    func_8012CF8C(HANDLE, (u8 *)DATA(9) + 0x40, 0x378, 0);
    POS(0,125.0f); SCALE(0);
    POS(1,125.0f); SCALE(1);
    POS(2,-125.0f); SCALE(2);
    POS(3,-125.0f); SCALE(3);
    POS(4,0.0f); SCALE(4);
    POS(5,0.0f);
    DATA(5)->unk30 = (s32)D_801D9768 | 0x40000000;
    DATA(5)->unk24 = 0x100;
    COLOR(5,255,255,255,255);
    SCALE(5);
    POS(6,0.0f);
    DATA(6)->unk30 = (s32)D_801D96C8 | 0x40000000;
    DATA(6)->unk24 = 0x100;
    COLOR(6,255,255,255,255);
    POS(7,0.0f);
    DATA(7)->unk30 = (s32)D_801DA058 | 0x40000000;
    DATA(7)->unk24 = 0x100;
    COLOR(7,255,255,255,127);
    POS(8,0.0f);
    DATA(8)->unk30 = (s32)D_801DA0B8 | 0x40000000;
    DATA(8)->unk24 = 0x300;
    COLOR(8,0,0,0,127);
    DATA(8)->unk4C = 0x3F;
    DATA(8)->unk4D = 0x5D;
    DATA(8)->unk4E = 0x29;
    DATA(8)->unk4F = 0x7F;
    NODE(8)->unk22 = 0;
    DATA(9)->unk4 = 0.0f;
    DATA(9)->unk8 = 0.0f;
    DATA(9)->unkC = 0.0f;
    DATA(9)->unk10 = 0x800;
    DATA(9)->unk12 = 0;
    DATA(9)->unk14 = 0;
    SCALE(9);
    DATA(9)->unk24 = 0x300;
    COLOR(9,0,200,255,127);
    DATA(9)->unk4C = 255;
    DATA(9)->unk4D = 255;
    DATA(9)->unk4E = 255;
    DATA(9)->unk4F = 127;
    NODE(9)->unk22 = 0;
    return 2;
}


extern s32 D_801E57B8;

s32 func_801E2A5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7EA5E0) != 0) {
        D_801E57B8 = 0;
        return 3;
    }
    return 2;
}

extern void func_801C1000(s32 arg0, s32 arg1);

struct func_801E2AA4_Struct_C {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E2AA4_Struct_B {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_801E2AA4_Struct_C *unk30;
};

struct func_801E2AA4_Struct_A {
    u8 pad[0x24];
    struct func_801E2AA4_Struct_B *unk24;
};

extern f32 D_801E5998;

s32 func_801E2AA4(s32 arg0, s32 arg1) {
    if (D_801E57B8 >= 0x10) {
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unk4 = 0.0f;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unk8 = 0.0f;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk30->unkC = D_801E5998;
        ((struct func_801E2AA4_Struct_A *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 0);
        func_8038D28C(0x210);
        return 4;
    }
    D_801E57B8 += 1;
    return 3;
}


struct func_801E2B54_Struct_C {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
};

struct func_801E2B54_Struct_B {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0xD];
    struct func_801E2B54_Struct_C *unk30;
};

struct func_801E2B54_Struct_A {
    u8 pad[0x24];
    struct func_801E2B54_Struct_B *unk24;
};

extern u32 func_801C1134(s32 a0, s32 a1);
extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);

s32 func_801E2B54(s32 arg0, s32 arg1) {
    f32 temp_fv0;

    f32 temp_ft3;

    temp_ft3 = (f32) func_801C1134(3, 0) / 30.0f;
    temp_fv0 = 30.0f * temp_ft3;
    D_8038D8D0->unk24->unk30->unk18 = temp_fv0;
    D_8038D8D0->unk24->unk30->unk1C = temp_fv0;
    if (func_801C1088(3, 0, 0x1E) != 0) {
        func_801C10D8(3, 0);
        D_8038D8D0->unk24->unk22 = 0;
        return 5;
    }
    return 4;
}


s32 func_801E2C10(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2C20(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E2C30(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E2C40(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E2C50(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E2C60(s32 arg0, s32 arg1) {
    return 10;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E2C70(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E57E8;

s32 func_801E2CB4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAC6CA0) != 0) {
        D_801E57E8 = 0;
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file052/801E1BE0/func_801E2CFC.s")


struct func_801E3300_Struct {
    u8 pad[0x24];
    s32 unk24;
};

s32 func_801E3300(s32 arg0, s32 arg1) {
    if (((struct func_801E3300_Struct *) func_801BF6B0(4))->unk24 < 6) {
        D_801E57E8 = 0;
        return 2;
    }
    return 3;
}



s32 func_801E3348(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E57FC;
extern s32 D_801E5800;

void func_801E338C(void) {
    D_801E57FC = 0;
    D_801E5800 = 1;
}



struct func_801E33A4_Struct1 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E33A4_Struct2 {
    u8 pad0[0x30];
    struct func_801E33A4_Struct1 *unk30;
};
struct func_801E33A4_Struct3 {
    u8 pad0[0x18];
    struct func_801E33A4_Struct2 *unk18;
};

s32 func_801E33A4() {
    f32 t;
    u8 v;
    t = (f32) D_801E57FC / 30.0f;
    if (D_801E5800 != 0) {
        v = (u8)(255.0f * t);
    } else {
        v = (u8)(-255.0f * t + 255.0f);
    }
    ((struct func_801E33A4_Struct3 *)D_8038D8D0)->unk18->unk30->unk4B = v;
    D_801E57FC += 1;
    if (D_801E57FC >= 31) {
        if (D_801E5800 != 0) {
            D_801E5800 = 0;
        } else {
            D_801E5800 = 1;
        }
        D_801E57FC = 0;
    }
}


extern s32 D_801E5804;
extern s32 D_801E5808;

void func_801E3570(void) {
    D_801E5804 = 0;
    D_801E5808 = 1;
}



struct func_801E3588_Struct1 {
    u8 pad0[0x4B];
    u8 unk4B;
};
struct func_801E3588_Struct2 {
    u8 pad0[0x30];
    struct func_801E3588_Struct1 *unk30;
};
struct func_801E3588_Struct3 {
    u8 pad0[0x1C];
    struct func_801E3588_Struct2 *unk18;
};

s32 func_801E3588() {
    f32 t;
    u8 v;
    t = (f32) D_801E5804 / 30.0f;
    if (D_801E5808 != 0) {
        v = (u8)(255.0f * t);
    } else {
        v = (u8)(-255.0f * t + 255.0f);
    }
    ((struct func_801E3588_Struct3 *)D_8038D8D0)->unk18->unk30->unk4B = v;
    D_801E5804 += 1;
    if (D_801E5804 >= 31) {
        if (D_801E5808 != 0) {
            D_801E5808 = 0;
        } else {
            D_801E5808 = 1;
        }
        D_801E5804 = 0;
    }
}


extern s32 D_801E580C;
extern s32 D_801E5810;

void func_801E3754(void) {
    D_801E580C = 0;
    D_801E5810 = 1;
}


extern f32 D_801E5814;
extern f32 D_801E5818;
extern f32 D_801E581C;

s32 func_801E376C(void)
{
  f32 t;
  f32 r;
  f32 g;
  f32 b;
  s32 ir;
  s32 ig;
  u32 ib;
  t = ((f32) D_801E580C) / 30.0f;
  if (D_801E5810 != 0)
  {
    r = (u8) ((215.0f * t) + 40.0f);
    g = (u8) (((-40.0f) * t) + 40.0f);
    b = g;
  }
  else
  {
    r = (u8) (((-215.0f) * t) + 255.0f);
    g = (u8) (40 * t);
    b = g;
  }
  ir = (u8) r;
  if (ir)
  {
  }
  ig = (u8) g;
  if (ig)
  {
  }
 do { ib = (u8) b; if (ib) { } D_801E5814 = r; D_801E5818 = g; D_801E581C = b; func_801CCE50(ir, ig, ib); } while (0);
  if ((++D_801E580C) >= 31)
  {
    if (D_801E5810 != 0)
    {
      D_801E5810 = 0;
    }
    else
    {
      D_801E5810 = 1;
    }
    D_801E580C = 0;
  }
}


struct func_801E3C98_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3C98(s32 arg0, s32 arg1) {
    struct func_801E3C98_Struct *p;

    p = (struct func_801E3C98_Struct *) func_801BF6B0(1);
    if (p->unkC < 2) {
        return 1;
    }
    func_801E338C();
    func_801E3570();
    func_801E3754();
    return 2;
}



s32 func_801E3CF4(s32 arg0, s32 arg1) {
    func_801E33A4();
    func_801E3588();
    func_801E376C();
    return 2;
}


extern u8 D_801E0A48[];
extern u8 func_801DAC30[];
extern u8 D_801DBAD4[];
extern u8 D_801DBAD8[];
extern u8 D_801DBB74[];
extern u8 D_801DBB78[];
extern void func_801CC318();
extern void func_801CC458(s32, void *);
extern void func_801CC4C0(s32, void *);

s32 func_801E3D2C(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x11D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DBAD4);
    func_801CC4C0(1, D_801DBAD8);
    func_801C2420(0x11E, D_801E0A48 + 0x30);
    func_801CC318();
    func_801CC458(2, D_801DBB74);
    func_801CC4C0(2, D_801DBB78);
    return 1;
}


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern u8 D_801DBAC0[];
extern u8 D_801DBB60[];
extern u8 func_801DAAF0[];

s32 func_801E3DF8(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(((void **)*(void **)(func_801DAAF0 + 0x24))[2], D_801DBAC0);
    func_80005670(((void **)((void **)*(void **)(func_801DAAF0 + 0x24))[2])[2], D_801DBB60);
    func_801CC530();
    return 2;
}

void func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

typedef struct func_801E3E6C_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E3E6C_StructD;

typedef struct func_801E3E6C_StructC {
    u8 pad0[0x2C];
    func_801E3E6C_StructD *unk2C;
} func_801E3E6C_StructC;

typedef struct func_801E3E6C_StructB {
    u8 pad0[0x24];
    func_801E3E6C_StructC *unk24;
} func_801E3E6C_StructB;

typedef struct func_801E3E6C_StructA {
    u8 pad0[8];
    func_801E3E6C_StructB *unk8;
} func_801E3E6C_StructA;

extern f32 D_801E5A64;
extern u8 *D_801DAB14[];

s32 func_801E3E6C(s32 arg0, s32 arg1) {
    func_801E3E6C_StructC *temp_v0;

    temp_v0 = ((func_801E3E6C_StructA *) D_801DAB14[0])->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 0.0f;
        ((func_801E3E6C_StructA *) D_801DAB14[0])->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3E6C_StructA *) D_801DAB14[0])->unk8->unk24->unk2C->unkC = D_801E5A64;
        ((func_801E3E6C_StructA *) D_801DAB14[0])->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x04100026, 0, 0x110, 3.0f);
        return 3;
    }
    return 2;
}


s32 func_801E3F28(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 D_801E583C;

s32 func_801E3F38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7EA5E0) != 0) {
        D_801E583C = 0;
        return 5;
    }
    return 4;
}


extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E3F80(s32 arg0, s32 arg1) {
    if (D_801E583C >= 0x1F) {
        func_801CC4D8(0, 0x04100044, 0, 0, 5.0f);
        return 6;
    }
    D_801E583C += 1;
    return 5;
}


s32 func_801CE274();

s32 func_801E3FEC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100044, 0, 0, 3.0f);
        return 7;
    }
    return 6;
}


s32 func_801E4044(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4054(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4064(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4074(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E4084(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E40C8_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_801E40C8_Struct3 {
    u8 pad0[0x2C];
    struct func_801E40C8_Struct4 *unk2C;
};
struct func_801E40C8_Struct2 {
    u8 pad0[0x24];
    struct func_801E40C8_Struct3 *unk24;
};
struct func_801E40C8_Struct1 {
    u8 pad0[8];
    struct func_801E40C8_Struct2 *unk8;
};
struct func_801E40C8_Struct0 {
    u8 pad0[8];
    struct func_801E40C8_Struct1 *unk8;
};

extern f32 D_801E5A68;
extern f32 D_801E5A6C;

s32 func_801E40C8(s32 arg0, s32 arg1) {
    struct func_801E40C8_Struct3 *temp_t0;
    struct func_801E40C8_Struct4 *temp_v0;

    temp_t0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24;
    if (temp_t0 != NULL) {
        f32 scale = D_801E5A68;

        temp_t0->unk2C->unk4 = 0.0f;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unkC = D_801E5A6C;
        ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk18 = temp_v0->unk18 * scale;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk1C = temp_v0->unk1C * scale;
        temp_v0 = ((struct func_801E40C8_Struct0 *) D_801DAB14[0])->unk8->unk8->unk24->unk2C;
        temp_v0->unk20 = temp_v0->unk20 * scale;
        func_801CC470(1, 0x01B80046, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E4200(s32 arg0, s32 arg1) {
    return 3;
}


extern f32 D_801E5A80[];

void func_801E4210(void) {
    u8 *v0;
    f32 *dst;

    func_801C78C0();
    v0 = *(u8 **)(func_801DAAF0 + 0x24);
    dst = D_801E5A80;
    dst[0] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4);
    dst[1] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8);
    dst[2] = *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC);
}


f32 func_801C78F8();

void func_801E4284(void) {
    f32 v;

    v = func_801C78F8() - 0.5f;
    *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = D_801E5A80[0] + v;
}


extern void func_801D82B8(s32 arg0);

s32 func_801E42D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        func_801E4210();
        func_801D82B8(0xFF);
        func_801CC470(1, 0x01B80046, 0, 0x100, 6.0f);
        func_8038D28C(0x211);
        return 4;
    }
    return 3;
}



s32 func_801E4358(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xAC6CA0) != 0) {
        func_801C1000(4, 1);
        return 5;
    }
    func_801E4284();
    return 4;
}


typedef struct func_801E43AC_Struct5 { u8 pad0[4]; f32 f4; f32 f8; } func_801E43AC_Struct5;
typedef struct func_801E43AC_Struct4 { u8 pad0[0x2C]; func_801E43AC_Struct5 *p2c; } func_801E43AC_Struct4;
typedef struct func_801E43AC_Struct3 { u8 pad0[0x24]; func_801E43AC_Struct4 *p24; } func_801E43AC_Struct3;
typedef struct func_801E43AC_Struct2 { u8 pad0[8]; func_801E43AC_Struct3 *p8; } func_801E43AC_Struct2;
typedef struct func_801E43AC_Struct1 { u8 pad0[8]; func_801E43AC_Struct2 *p8; } func_801E43AC_Struct1;

s32 func_801E43AC(s32 arg0, s32 arg1) {
    u32 v;
    f32 t;

    v = func_801C1134(4, 1);
    if (v >= 0x50) {
        t = (f32)(v - 0x50) / 80.0f;
        ((func_801E43AC_Struct1 *)D_801DAB14[0])->p8->p8->p24->p2c->f8 = -15.0f * t;
    }
    t = (f32)v / 160.0f;
    func_801D82B8((u32)(-255.0f * t + 255.0f) & 0xFF);
    if (func_801C1088(4, 1, 0xA0) != 0) {
        func_801C10D8(4, 1);
        ((func_801E43AC_Struct1 *)D_801DAB14[0])->p8->p8->p24->p2c->f4 = 5120.0f;
        return 6;
    }
    func_801E4284();
    return 5;
}


s32 func_801E455C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E456C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E457C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E458C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E459C(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E45AC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E5A70;

struct func_801E45F0_Node {
    u8 pad0[8];
    struct func_801E45F0_Node *unk8;
    u8 pad1[0x18];
    struct func_801E45F0_Mid *unk24;
};

struct func_801E45F0_Mid {
    u8 pad0[0x2C];
    struct func_801E45F0_Target *unk2C;
};

struct func_801E45F0_Target {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

s32 func_801E45F0(s32 arg0, s32 arg1) {
    struct func_801E45F0_Mid *temp_v0;

    temp_v0 = ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E5A70;
        ((struct func_801E45F0_Node *) D_801DAB14[0])->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x03480066, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}


s32 func_801E46D8(s32 arg0, s32 arg1) {
    return 3;
}


extern f32 D_801E5A74;

s32 func_801E46E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x9D2A60) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 4) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 0xC) = D_801E5A74;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(D_801DAB14[0] + 8) + 8) + 8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        return 4;
    }
    return 3;
}


struct func_801E47B0_Struct {
    u8 pad[0x24];
    s32 unk24;
};


s32 func_801E47B0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(4)->unk24 >= 6) {
        func_801CC470(2, 0x03480066, 0, 0, 4.0f);
        return 5;
    }
    return 4;
}


s32 func_801D89C8(void);

s32 func_801E4814(s32 arg0, s32 arg1) {
    if (func_801D89C8() != 0) {
        return 0x6;
    }
    return 0x5;
}


s32 func_801E4844(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01036640) != 0) {
        func_801CC4D8(2, 0x01900016, 0, 0, 30.0f);
        return 7;
    }
    return 6;
}

s32 func_801D89B8(void);

s32 func_801E48A8(s32 arg0, s32 arg1) {
    if (func_801D89B8() == 0) {
        func_801CC470(2, 0x01900016, 0, 0x100, 1.0f);
        return 0x8;
    }
    return 0x7;
}


s32 func_801E4900(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4910(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4920(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4930(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x493E0) != 0) {
        return 1;
    }
    return 0;
}


s32 func_801E496C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E497C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E498C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E499C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E49AC(s32 arg0, s32 arg1) {
    return 6;
}


extern s32 D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern s32 D_801D8D60;

s32 func_801E49BC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01406F40) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}


extern u8 D_801BBD54;

s32 func_801E4A38(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E4A60(s32 arg0, s32 arg1) {
    return 8;
}

