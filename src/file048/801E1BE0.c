#include "common.h"

extern void func_8038BE98(f32 a0);
extern void func_8038BD50(f32 a0, f32 a1, f32 a2);
extern void D_8038BD88(f32 a0, f32 a1, f32 a2);
extern void D_8038C158();
s32 func_8038D28C(s32 a);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);

extern void func_8038BEC8(f32 a0);
extern f32 D_801EA460;
extern f32 D_801EA464;
extern f32 D_801EA468;

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x73);
        D_8038C158();
        return 1;
    }
    func_8038BE98(D_801EA460);
    func_8038BD50(0.0f, D_801EA464, 125.6f);
    D_8038BD88(0.0f, D_801EA468, 79.2f);
    return 0;
}


extern s32 D_8038C17C(f32, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA46C;
extern f32 D_801EA470;
extern f32 D_801EA474;
extern f32 D_801EA478;
extern f32 D_801EA47C;

s32 func_801E1C74(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    f32 e;

    a = D_801EA46C;
    b = D_801EA470;
    c = D_801EA474;
    d = D_801EA478;
    e = D_801EA47C;
    if (D_8038C17C(0.0f, e, 0.0f, 0x4220CCCD, a, 0.0f, 9.5f, a, 0.0f, b, c, 0.0f, b, c, d, d) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

extern f32 D_801EA480;
extern f32 D_801EA484;
extern f32 D_801EA488;
extern f32 D_801EA48C;
extern f32 D_801EA490;
extern f32 D_801EA494;
extern f32 D_801EA498;
extern f32 D_801EA49C;

s32 func_801E1D24(s32 arg0, s32 arg1) {
    f32 a = D_801EA480;
    f32 b = D_801EA484;
    if (D_8038C17C(0.0f, 2.0f, 0.0f, 0x41180000, D_801EA488, D_801EA48C, D_801EA490, D_801EA494, 0.0f, D_801EA498, a, 1.5f, D_801EA49C, a, b, b) != 0) {
        return 3;
    }
    return 2;
}


extern f32 D_801EA4A0;
extern f32 D_801EA4A4;
extern f32 D_801EA4A8;
extern f32 D_801EA4AC;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x73F780) != 0) {
        func_8038BE98(D_801EA4A0);
        func_8038BD50(-39.0f, D_801EA4A4, -11.0f);
        D_8038BD88(D_801EA4A8, D_801EA4AC, 64.4f);
        return 4;
    }
    return 3;
}



s32 func_801E1E60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC35000) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E1EAC.s")


extern f32 D_801EA4C4;
extern f32 D_801EA4C8;
extern f32 D_801EA4CC;

s32 func_801E1F5C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBFLL) != 0) {
        func_8038BE98(D_801EA4C4);
        func_8038BD50(0.0f, D_801EA4C8, 10.5f);
        D_8038BD88(0.0f, D_801EA4CC, 50.4f);
        return 7;
    }
    return 6;
}


extern f32 D_801EA4D0;
extern f32 D_801EA4D4;
extern f32 D_801EA4D8;

s32 func_801E1FD4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016B28BF) != 0) {
        func_8038BE98(D_801EA4D0);
        func_8038BD50(-20.0f, D_801EA4D4, 31.0f);
        D_8038BD88(3.0f, D_801EA4D8, 46.6f);
        return 8;
    }
    return 7;
}


typedef struct func_801E2054_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E2054_StructC;

typedef struct func_801E2054_StructB {
    u8 pad0[0x2C];
    func_801E2054_StructC *unk2C;
} func_801E2054_StructB;

typedef struct func_801E2054_StructA {
    u8 pad0[0x24];
    func_801E2054_StructB *unk24;
} func_801E2054_StructA;

typedef struct func_801E2054_StructV {
    u8 pad0[8];
    func_801E2054_StructA *unk8;
} func_801E2054_StructV;

extern f32 D_801E9CA8;
extern u8 func_801DAAF0[];

s32 func_801E2054(s32 arg0, s32 arg1) {
    func_801E2054_StructV *v;

    if (func_801C0B8C(0x019F09FE) != 0) {
        D_8038C158();
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        D_801E9CA8 = v->unk8->unk24->unk2C->unk4;
        v = *(func_801E2054_StructV **)(func_801DAAF0 + 0x24);
        v->unk8->unk24->unk2C->unk4 = 5120.0f;
        return 9;
    }
    return 8;
}


extern s32 func_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_801EA4DC;
extern f32 D_801EA4E0;
extern f32 D_801EA4E4;
extern f32 D_801EA4E8;
extern f32 D_801EA4EC;

s32 func_801E20D8(s32 arg0, s32 arg1) {
    f32 x;
    f32 y;

    do {
        x = D_801EA4DC;
        y = D_801EA4E0;
    } while (0);
    if (func_8038C17C(0.0f, D_801EA4E4, 0.0f, x,
                      y, 0.0f, x, y,
                      0.0f, 13.0f, 43.5f, 0.0f, 13.0f, 43.5f,
                      D_801EA4E8, D_801EA4EC) != 0) {
        return 10;
    }
    return 9;
}


extern f32 D_801EA4F0;
extern f32 D_801EA4F4;
extern f32 D_801EA4F8;
extern f32 D_801EA4FC;

s32 func_801E217C(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64) 0x0246E2BC) != 0) {
        func_8038BE98(D_801EA4F0);
        func_8038BD50(D_801EA4F4, D_801EA4F8, 27.9f);
        D_8038BD88(0.5f, D_801EA4FC, 49.9f);
        (*(func_801E2054_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C->unk4 = D_801E9CA8;
        return 0xB;
    }
    return 0xA;
}


s32 func_801E2220(s32 arg0, s32 arg1) {
    return 12;
}


extern f32 D_801EA500;
extern f32 D_801EA504;
extern f32 D_801EA508;

s32 func_801E2230(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EA500);
    func_8038BD50(D_801EA504, 26.5f, 15.8f);
    D_8038BD88(0.0f, D_801EA508, 0.3f);
    return 0xD;
}

typedef struct func_801E2500_Struct {
    u8 pad[0x3C];
    s32 unk3C;
} func_801E2500_Struct;
extern func_801E2500_Struct *func_801BF6B0();
s32 func_801C1B1C();

typedef struct func_801E2294_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2294_Struct;

s32 func_801E2294(s32 arg0, s32 arg1) {
    if ((((func_801E2294_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}


typedef struct func_801E22E8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E22E8_Struct;

s32 func_801E22E8(s32 arg0, s32 arg1) {
    func_801E22E8_Struct *obj;

    obj = (func_801E22E8_Struct *) func_801BF6B0(7);
    if (obj->unkC < 7 || func_801C1B1C() == 0) {
        return 0xE;
    }
    return 0xF;
}


extern f32 D_801EA50C;
extern f32 D_801EA510;
extern f32 D_801EA514;
extern f32 D_801EA518;

s32 func_801E233C(s32 arg0, s32 arg1) {
    func_8038BE98(D_801EA50C);
    func_8038BD50(D_801EA510, 23.5f, -29.9f);
    D_8038BD88(D_801EA514, D_801EA518, 6.4f);
    return 0x10;
}



s32 func_801E23A4(s32 arg0, s32 arg1) {
    if (((s32)*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0xC) || (func_801C1B1C() == 0)) {
        return 16;
    }
    return 0x11;
}


s32 func_801E23F8(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E2408(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E2418(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E2428(s32 arg0, s32 arg1) {
    return 20;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2438(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

extern void func_801CCE88();
void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);

extern void func_801CCE0C(s32 arg0);

s32 func_801E2474(s32 arg0, s32 arg1) {
    func_801CCE0C(2);
    func_801CCE88(0, 0xAA, 0xAA, 0xAA);
    func_801CCEC8(0, -0x14, -0x40, -0x35);
    func_801CCE88(1, 0x19, 0x70, 0xAF);
    func_801CCEC8(1, 0, 0x40, 0xA);
    func_801CCE50(0x28, 0x28, 0x28);
    return 2;
}




s32 func_801E2500(s32 arg0, s32 arg1) {
    if (func_801BF6B0(3)->unk3C >= 0xB) {
        func_801CCE88(0, 0, 0, 0);
        return 3;
    }
    return 2;
}

s32 func_801C1000(s32 a, s32 b);


s32 func_801E2554(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801C1000(1, 0);
        return 4;
    }
    if (func_801C0B8C(0xC35000) != 0) {
        func_801CCEC8(0, 0, -0xA, 0x40);
        func_801CCEC8(1, 0, 0x40, -0xA);
    }
    return 3;
}

extern s32 func_801C1088(s32 a0, s32 a1, s32 a2);
extern void func_801C10D8(s32 a0, s32 a1);
extern u32 func_801C1134(s32 a0, s32 a1);

s32 func_801E25DC(s32 arg0, s32 arg1) {
    u8 r;
    f32 q;
    extern void D_801CCE88(s32, u8, u8, u8);

    if (func_801C1088(1, 0, 30) != 0) {
        func_801C10D8(1, 0);
        return 5;
    }
    q = (f32)func_801C1134(1, 0) / 30.0f;
    r = (u32)(150.0f * q);
    D_801CCE88(0, r, r, r);
    return 4;
}


s32 func_801E2700(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7DF) != 0) {
        func_801C1000(1, 0);
        return 6;
    }
    return 5;
}



s32 func_801E274C(s32 arg0, s32 arg1)
{
  s32 temp_a1;
  float new_var2;
  int new_var;
  if (func_801C1088(1, 0, 0x3C) != 0)
  {
    func_801C10D8(1, 0);
    return 7;
  }
  new_var = 0xFF;
  new_var2 = ((f32) func_801C1134(1, 0)) / 60.0f;
  temp_a1 = ((u32) ((50.0f * new_var2) + 150.0f)) & new_var;
  func_801CCE88(0, temp_a1, temp_a1 & 0xFF, temp_a1 & new_var);
  return 6;
}


s32 func_801E287C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBF) != 0) {
        func_801CCEC8(0, 0, -0xA, 0x40);
        func_801CCEC8(1, 0, 0x40, 0x14);
        func_801C1000(1, 0);
        return 8;
    }
    return 7;
}



s32 func_801E28F0(s32 arg0, s32 arg1) {
    f32 t;

    if (func_801C1088(1, 0, 0x1E) != 0) {
        func_801C10D8(1, 0);
        return 9;
    }
    t = (f32) func_801C1134(1, 0) / 30.0f;
    func_801CCE88(1, 0, (u32) (100.0f * t) & 0xFF, (u32) (255.0f * t) & 0xFF);
    return 8;
}



s32 func_801E2AA4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        func_801CCE88(0, 0x50, 0x46, 0x5A);
        func_801CCEC8(0, -0x20, 0x40, 0x20);
        func_801CCE88(1, 0x50, 0x46, 0x5A);
        func_801CCEC8(1, 0x20, -0x40, -0x20);
        func_801CCE50(0xE6, 0xE6, 0xE6);
        return 0xA;
    }
    return 9;
}


s32 func_801E2B44(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E2B54(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E2B64(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E2B74(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E2B84(s32 arg0, s32 arg1) {
    return 14;
}


typedef struct func_801E2B94_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2B94_Struct;

s32 func_801E2B94(s32 arg0, s32 arg1) {
    if (((func_801E2B94_Struct *)func_801BF6B0(1))->unkC >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E2BD4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E2BE4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2BF4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2C04(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E2C14(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801C2420(s32 a0, void *a1);
extern s32 func_801C2570(s32 a0, void *a1);
extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern void D_8038DD90(void);
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 D_8038DF70[];

s32 func_801E2C24(s32 arg0, s32 arg1) {
    func_801C2420(0x46A, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x4D9, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x447, D_8038DDC0);
    D_8038BA70();
    *(s32 *)(D_8038DF70 + 0x4) = 0x4000;
    if (func_801C2570(0x46B, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x10) = 0x4000;
    if (func_801C2570(0x46C, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    *(s32 *)(D_8038DF70 + 0x1C) = 0x8000;
    if (func_801C2570(0x46D, D_8038DF70 + 0x18) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801E2D10_Sub {
    s16 unk0;
    u8 pad2[2];
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
    void *unk28;
    s16 unk2C;
    u8 pad2E[2];
    s32 unk30;
    u8 pad34[0xC];
    u8 unk40[8];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801E2D10_Sub;

typedef struct func_801E2D10_Obj {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E2D10_Sub *unk30;
} func_801E2D10_Obj;

typedef struct func_801E2D10_Top {
    func_801E2D10_Obj *e[23];
} func_801E2D10_Top;

extern struct func_801E58E4_P *D_8038D8D0;
extern s32 D_8038D8CC;
extern s32 func_8012CF8C(s32, s32, s32, s32);
extern u8 D_801D96C8[];
extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_8038D89C[];
extern u8 D_801E9D68[];
extern u8 D_801E9D78[];
extern u8 D_801D9628[];
extern u8 D_801D9718[];
extern u8 D_801D9768[];
extern u8 D_801D97C0[];
extern u8 D_801D9908[];
extern u8 D_801D9FE8[];
extern u8 func_801D9F00[];
extern f32 D_801EA51C;
extern f32 D_801EA520;
extern f32 D_801EA524;

#define T ((func_801E2D10_Top *)D_8038D8D0)
#define S(n) T->e[n]->unk30

s32 func_801E2D10(s32 arg0, f32 arg1) {
#define i arg0
#define f1 arg1
    f32 f2;

    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_8038D89C);
    for (i = 0; i < 3; i++) {
        func_80005E44(D_8038D8CC, D_801E9D78);
    }
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80005E44(D_8038D8CC, D_801E9D68);
    func_80005E44(D_8038D8CC, D_801E9D78);
    func_80005E44(D_8038D8CC, D_8038D89C);
    for (i = 0; i < 5; i++) {
        func_80005E44(D_8038D8CC, D_801E9D68);
    }
    for (i = 0; i < 4; i++) {
        func_80005E44(D_8038D8CC, D_8038D89C);
    }
    func_80005E44(D_8038D8CC, D_8038D89C);
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x46A, 0);
    func_8012C89C(D_8038D8CC, 1, 0x46A, 1);
    S(1)->unk30 = (s32)D_801D9768 | 0x40000000;
    S(1)->unk24 = 0x100;
    S(1)->unk48 = 0xFF;
    S(1)->unk49 = 0xFF;
    S(1)->unk4A = 0xFF;
    S(1)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 2, 0x46A, 2);
    S(2)->unk30 = (s32)D_801D97C0 | 0x40000000;
    S(2)->unk24 = 0x100;
    S(2)->unk48 = 0;
    S(2)->unk49 = 0;
    S(2)->unk4A = 0;
    S(2)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 3, 0x46A, 3);
    S(3)->unk30 = (s32)D_801D97C0 | 0x40000000;
    S(3)->unk24 = 0x100;
    S(3)->unk48 = 0xFF;
    S(3)->unk49 = 0xFF;
    S(3)->unk4A = 0xFF;
    S(3)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 4, 0x46A, 4);
    S(4)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(4)->unk24 = 0x100;
    S(4)->unk48 = 0;
    S(4)->unk49 = 0;
    S(4)->unk4A = 0;
    S(4)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 5, 0x46A, 4);
    S(5)->unk30 = (s32)D_801D9FE8 | 0x40000000;
    S(5)->unk24 = 0x300;
    S(5)->unk48 = 0x7F;
    S(5)->unk49 = 0xFF;
    S(5)->unk4A = 0xFF;
    S(5)->unk4B = 0;
    S(5)->unk4C = 0xFF;
    S(5)->unk4D = 0xFF;
    S(5)->unk4E = 0xFF;
    S(5)->unk4F = 0;
    T->e[5]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 6, 0x46A, 6);
    S(6)->unk30 = (s32)D_801D9FE8 | 0x40000000;
    func_8012CF8C(D_8038D8CC, (s32)S(6)->unk40, 0x46D, 0);
    S(6)->unk24 = 0x300;
    S(6)->unk48 = 0;
    S(6)->unk49 = 0xFF;
    S(6)->unk4A = 0xFF;
    S(6)->unk4B = 0;
    S(6)->unk4C = 0xFF;
    S(6)->unk4D = 0xFF;
    S(6)->unk4E = 0xFF;
    S(6)->unk4F = 0;
    func_8012C89C(D_8038D8CC, 7, 0x46A, 7);
    S(7)->unk30 = (s32)D_801D9FE8 | 0x40000000;
    func_8012CF8C(D_8038D8CC, (s32)S(7)->unk40, 0x46D, 0);
    S(7)->unk24 = 0x300;
    S(7)->unk48 = 0;
    S(7)->unk49 = 0xFF;
    S(7)->unk4A = 0xFF;
    S(7)->unk4B = 0;
    S(7)->unk4C = 0xFF;
    S(7)->unk4D = 0xFF;
    S(7)->unk4E = 0xFF;
    S(7)->unk4F = 0;
    func_8012C89C(D_8038D8CC, 8, 0x46A, 8);
    S(8)->unk30 = (s32)D_801D96C8 | 0x40000000;
    S(8)->unk24 = 0x100;
    S(8)->unk48 = 0xFF;
    S(8)->unk49 = 0xFF;
    S(8)->unk4A = 0xFF;
    S(8)->unk4B = 0;
    func_8012C89C(D_8038D8CC, 9, 0x447, 1);
    S(9)->unk30 = (s32)func_801D9F00 | 0x40000000;
    T->e[9]->unk22 = 0;
    S(9)->unk24 = 0x300;
    S(9)->unk48 = 0x48;
    S(9)->unk49 = 0xDC;
    S(9)->unk4A = 0;
    S(9)->unk4B = 0;
    S(9)->unk4C = 8;
    S(9)->unk4D = 0x1E;
    S(9)->unk4E = 0xFF;
    S(9)->unk4F = 0;
    func_8012C89C(D_8038D8CC, 0xA, 0x4D9, 0);
    S(10)->unk30 = (s32)D_801D9718 | 0x40000000;
    S(10)->unk24 = 0x100;
    S(10)->unk48 = 0xFF;
    S(10)->unk49 = 0xFF;
    S(10)->unk4A = 0xFF;
    S(10)->unk4B = 0;
    T->e[10]->unk22 = 0;
    S(11)->unk30 = 0;
    S(11)->unk28 = D_801D9908;
    S(11)->unk0 = 0;
    S(11)->unk2C = 0;
    func_8012CF8C(D_8038D8CC, (s32)S(11)->unk40, 0x46C, 0);
    S(11)->unk24 = 0x300;
    S(11)->unk48 = 0xFF;
    S(11)->unk49 = 0xFF;
    S(11)->unk4A = 0xFF;
    S(11)->unk4B = 0;
    S(11)->unk4C = 0xFF;
    S(11)->unk4D = 0xFF;
    S(11)->unk4E = 0xFF;
    S(11)->unk4F = 0;
    T->e[11]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0xC, 0x46A, 9);
    S(12)->unk30 = (s32)D_801D9FE8 | 0x40000000;
    S(12)->unk24 = 0x300;
    S(12)->unk48 = 0xFF;
    S(12)->unk49 = 0xFF;
    S(12)->unk4A = 0xFF;
    S(12)->unk4B = 0;
    S(12)->unk4C = 0xFF;
    S(12)->unk4D = 0xFF;
    S(12)->unk4E = 0xFF;
    S(12)->unk4F = 0;
    T->e[12]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0xD, 0x46A, 0xE);
    S(13)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(13)->unk24 = 0x100;
    S(13)->unk48 = 0;
    S(13)->unk49 = 0;
    S(13)->unk4A = 0;
    S(13)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 0xE, 0x46A, 0xF);
    S(14)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(14)->unk24 = 0x100;
    S(14)->unk48 = 0;
    S(14)->unk49 = 0;
    S(14)->unk4A = 0;
    S(14)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 0xF, 0x46A, 0x10);
    S(15)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(15)->unk24 = 0x100;
    S(15)->unk48 = 0;
    S(15)->unk49 = 0;
    S(15)->unk4A = 0;
    S(15)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 0x10, 0x46A, 0x11);
    S(16)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(16)->unk24 = 0x100;
    S(16)->unk48 = 0;
    S(16)->unk49 = 0;
    S(16)->unk4A = 0;
    S(16)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 0x11, 0x46A, 0x12);
    S(17)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(17)->unk24 = 0x100;
    S(17)->unk48 = 0;
    S(17)->unk49 = 0;
    S(17)->unk4A = 0;
    S(17)->unk4B = 0xFF;
    func_8012C89C(D_8038D8CC, 0x12, 0x46A, 0xA);
    S(18)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(18)->unk24 = 0x100;
    S(18)->unk48 = 0xFF;
    S(18)->unk49 = 0xFF;
    S(18)->unk4A = 0xFF;
    S(18)->unk4B = 0xFF;
    T->e[18]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0x13, 0x46A, 0xB);
    S(19)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(19)->unk24 = 0x100;
    S(19)->unk48 = 0xFF;
    S(19)->unk49 = 0xFF;
    S(19)->unk4A = 0xFF;
    S(19)->unk4B = 0xFF;
    T->e[19]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0x14, 0x46A, 0xC);
    S(20)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(20)->unk24 = 0x100;
    S(20)->unk48 = 0xFF;
    S(20)->unk49 = 0xFF;
    S(20)->unk4A = 0xFF;
    S(20)->unk4B = 0xFF;
    T->e[20]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0x15, 0x46A, 0xD);
    S(21)->unk30 = (s32)D_801D9628 | 0x40000000;
    S(21)->unk24 = 0x100;
    S(21)->unk48 = 0xFF;
    S(21)->unk49 = 0xFF;
    S(21)->unk4A = 0xFF;
    S(21)->unk4B = 0xFF;
    T->e[21]->unk22 = 0;
    func_8012C89C(D_8038D8CC, 0x16, 0x46A, 5);
    S(22)->unk30 = (s32)D_801D9FE8 | 0x40000000;
    S(22)->unk24 = 0x300;
    S(22)->unk48 = 0x7F;
    S(22)->unk49 = 0xFF;
    S(22)->unk4A = 0xFF;
    S(22)->unk4B = 0;
    S(22)->unk4C = 0xFF;
    S(22)->unk4D = 0xFF;
    S(22)->unk4E = 0xFF;
    S(22)->unk4F = 0;
    T->e[22]->unk22 = 0;

    S(0)->unk4 = 0.0f;
    S(0)->unk8 = 0.0f;
    S(0)->unkC = 0.0f;
    S(0)->unk12 = 0;
    S(0)->unk18 = 1.0f;
    S(0)->unk1C = 1.0f;
    S(0)->unk20 = 1.0f;
    S(1)->unk4 = 0.0f;
    S(1)->unk8 = 0.0f;
    S(1)->unkC = 0.0f;
    S(1)->unk12 = 0;
    S(1)->unk18 = 1.0f;
    S(1)->unk1C = 1.0f;
    S(1)->unk20 = 1.0f;
    S(2)->unk4 = 0.0f;
    S(2)->unk8 = 0.0f;
    S(2)->unkC = 0.0f;
    S(2)->unk12 = 0;
    S(2)->unk18 = 1.0f;
    S(2)->unk1C = 1.0f;
    S(2)->unk20 = 1.0f;
    S(3)->unk4 = 0.0f;
    S(3)->unk8 = 0.0f;
    S(3)->unkC = 68.0f;
    S(3)->unk12 = 0;
    S(3)->unk18 = 1.0f;
    S(3)->unk1C = 1.0f;
    S(3)->unk20 = 1.0f;
    S(4)->unk4 = 0.0f;
    S(4)->unk8 = 0.0f;
    S(4)->unkC = 0.0f;
    S(4)->unk12 = 0;
    S(4)->unk18 = 1.0f;
    S(4)->unk1C = 1.0f;
    S(4)->unk20 = 1.0f;
    S(5)->unk4 = 0.0f;
    S(5)->unk8 = 0.0f;
    S(5)->unkC = D_801EA51C;
    S(5)->unk12 = 0;
    S(5)->unk18 = 1.0f;
    S(5)->unk1C = 1.0f;
    S(5)->unk20 = 1.0f;
    for (i = 0; i < 3; i++) {
        S(i + 6)->unk4 = 0.0f;
        S(i + 6)->unk8 = 0.0f;
        S(i + 6)->unkC = 0.0f;
        S(i + 6)->unk12 = 0;
        S(i + 6)->unk18 = 1.0f;
        S(i + 6)->unk1C = 1.0f;
        S(i + 6)->unk20 = 1.0f;
    }
    f1 = D_801EA520;
    f2 = D_801EA524;
    S(9)->unk4 = 0.0f;
    S(9)->unk8 = 0.0f;
    S(9)->unkC = 0.0f;
    S(9)->unk12 = 0;
    S(9)->unk18 = f1;
    S(9)->unk1C = f1;
    S(9)->unk20 = f1;
    S(10)->unk4 = 0.0f;
    S(10)->unk8 = -20.0f;
    S(10)->unkC = 0.0f;
    S(10)->unk12 = 0x800;
    S(10)->unk18 = f2;
    S(10)->unk1C = f2;
    S(10)->unk20 = f2;
    S(11)->unk4 = 0.0f;
    S(11)->unk8 = 0.0f;
    S(11)->unkC = 0.0f;
    S(11)->unk12 = 0;
    S(11)->unk18 = 1.0f;
    S(11)->unk1C = 1.0f;
    S(11)->unk20 = 1.0f;
    S(12)->unk4 = 0.0f;
    S(12)->unk8 = 0.0f;
    S(12)->unkC = 0.0f;
    S(12)->unk12 = 0;
    S(12)->unk18 = 1.0f;
    S(12)->unk1C = 1.0f;
    S(12)->unk20 = 1.0f;
    for (i = 0; i < 5; i++) {
        S(i + 13)->unk4 = 0.0f;
        S(i + 13)->unk8 = 0.0f;
        S(i + 13)->unkC = 0.0f;
        S(i + 13)->unk12 = 0;
        S(i + 13)->unk18 = 1.0f;
        S(i + 13)->unk1C = 1.0f;
        S(i + 13)->unk20 = 1.0f;
    }
    S(18)->unk4 = 0.0f;
    S(18)->unk8 = 0.0f;
    S(18)->unkC = 0.0f;
    S(18)->unk12 = 0;
    S(18)->unk18 = 1.0f;
    S(18)->unk1C = 1.0f;
    S(18)->unk20 = 1.0f;
    for (i = 0; i < 4; i++) {
        S(i + 19)->unk4 = 0.0f;
        S(i + 19)->unk8 = 0.0f;
        S(i + 19)->unkC = 0.0f;
        S(i + 19)->unk12 = 0;
        S(i + 19)->unk18 = 1.0f;
        S(i + 19)->unk1C = 1.0f;
        S(i + 19)->unk20 = 1.0f;
    }
    return 2;
}


s32 func_801E4428(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4438(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4448(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4458(s32 arg0, s32 arg1) {
    return 5;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E4468(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E44AC_Struct {
    u8 pad0[8];
    u8 *unk8;
} func_801E44AC_Struct;

s32 func_801E44AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2285E3C) != 0) {
        func_801C1000(3, 1);
        ((func_801E44AC_Struct *) D_8038D8D0)->unk8[0x22] = 1;
        return 2;
    }
    return 1;
}


struct func_801E450C_Inner {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
};

struct func_801E450C_Mid {
    u8 pad0[0x30];
    struct func_801E450C_Inner *unk30;
};

struct func_801E450C_Outer {
    u8 pad0[0x8];
    struct func_801E450C_Mid *unk8;
};

s32 func_801E450C(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 temp_f0;

    if (func_801C1088(3, 1, 0x3C) != 0) {
        func_801C10D8(3, 1);
        return 3;
    }
    temp_f0 = (f32) func_801C1134(3, 1) / 60.0f;
    temp_v1 = (u32) (255.0f * temp_f0);
    ((struct func_801E450C_Outer *) D_8038D8D0)->unk8->unk30->unk48 = (u8) temp_v1;
    ((struct func_801E450C_Outer *) D_8038D8D0)->unk8->unk30->unk49 = (u8) temp_v1;
    ((struct func_801E450C_Outer *) D_8038D8D0)->unk8->unk30->unk4A = (u8) temp_v1;
    return 2;
}


s32 func_801E4654(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4664(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4674(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4684(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E4694(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E46D8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x557300) != 0) {
        func_801C1000(3, 2);
        func_8038D28C(0x207);
        return 2;
    }
    return 1;
}


s32 func_801E472C(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_ft4;
    u32 temp_v0;

    if (func_801C1088(3, 2, 0xA) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 3;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_ft4 = var_ft1 / 10.0f;
    *(f32 *) (*(u8 **) (*(u8 **) ((u8 *) D_8038D8D0 + 0xC) + 0x30) + 0xC) = (-3.0f * temp_ft4) + 68.0f;
    return 2;
}


s32 func_801E47E4(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 2, 5) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 4;
    }
    return 3;
}


typedef struct func_801E483C_StructB {
    u8 pad0[0x30];
    f32 *unk30;
} func_801E483C_StructB;

typedef struct func_801E483C_StructA {
    u8 pad0[0xC];
    func_801E483C_StructB *unkC;
} func_801E483C_StructA;

extern f32 D_801EA528;

s32 func_801E483C(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 quot;
    u32 temp_v0;

    if (func_801C1088(3, 2, 0x11) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 5;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 17.0f;
    ((func_801E483C_StructA *) D_8038D8D0)->unkC->unk30[1] = D_801EA528 * quot;
    return 4;
}


typedef struct func_801E48E8_StructC {
    f32 unk0;
    f32 unk4;
} func_801E48E8_StructC;

typedef struct func_801E48E8_StructB {
    u8 pad0[0x30];
    func_801E48E8_StructC *unk30;
} func_801E48E8_StructB;

typedef struct func_801E48E8_StructA {
    u8 pad0[0xC];
    func_801E48E8_StructB *unkC;
} func_801E48E8_StructA;

extern f32 D_801EA52C;
extern f32 D_801EA530;

s32 func_801E48E8(s32 arg0, s32 arg1) {
    f32 var_ft1;
    u32 temp_v0;
    f32 quot;

    if (func_801C1088(3, 2, 5) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 6;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 5.0f;
    ((func_801E48E8_StructA *) D_8038D8D0)->unkC->unk30->unk4 = (D_801EA52C * quot) + D_801EA530;
    return 5;
}


extern f32 D_801EA534;
extern f32 D_801EA538;

typedef struct func_801E49A0_Leaf {
    f32 unk0;
    f32 unk4;
} func_801E49A0_Leaf;

typedef struct func_801E49A0_Sub {
    u8 pad0[0x30];
    func_801E49A0_Leaf *unk30;
} func_801E49A0_Sub;

typedef struct func_801E49A0_Obj {
    u8 pad0[0xC];
    func_801E49A0_Sub *unkC;
} func_801E49A0_Obj;

s32 func_801E49A0(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 quot;
    u32 temp_v0;

    if (func_801C1088(3, 2, 3) != 0) {
        func_801C10D8(3, 2);
        return 7;
    }
    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    quot = var_ft1 / 3.0f;
    ((func_801E49A0_Obj *) D_8038D8D0)->unkC->unk30->unk4 = (D_801EA534 * quot) + D_801EA538;
    return 6;
}


s32 func_801E4A4C(s32 arg0, s32 arg1) {
    if (*(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0xC) < 60.0f) {
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x48) = 0;
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x49) = 0;
        *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0xC) + 0x30) + 0x4A) = 0;
        func_801C1000(3, 2);
        func_8038D28C(0x208);
        return 8;
    }
    return 7;
}


typedef struct func_801E4AF4_StructC {
    u8 pad0[4];
    f32 unk4;
} func_801E4AF4_StructC;

typedef struct func_801E4AF4_StructB {
    u8 pad0[0x30];
    func_801E4AF4_StructC *unk30;
} func_801E4AF4_StructB;

typedef struct func_801E4AF4_StructA {
    u8 pad0[0xC];
    func_801E4AF4_StructB *unkC;
} func_801E4AF4_StructA;

s32 func_801E4AF4(s32 arg0, s32 arg1) {
    u32 temp_v0;
    f32 var_ft1;
    f32 temp_ft4;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_ft4 = var_ft1 / 12.0f;
    ((func_801E4AF4_StructA *) D_8038D8D0)->unkC->unk30->unk4 = (f32) ((19.0f * temp_ft4) + -19.0f);
    if (func_801C1088(3, 2, 0xC) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 9;
    }
    return 8;
}


s32 func_801E4BAC(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 2, 8) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 10;
    }
    return 9;
}


typedef struct func_801E4C04_StructC {
    u8 pad0[0xC];
    f32 unkC;
} func_801E4C04_StructC;

typedef struct func_801E4C04_StructB {
    u8 pad0[0x30];
    func_801E4C04_StructC *unk30;
} func_801E4C04_StructB;

typedef struct func_801E4C04_StructA {
    u8 pad0[0xC];
    func_801E4C04_StructB *unkC;
} func_801E4C04_StructA;

s32 func_801E4C04(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_f;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_f = var_ft1 / 10.0f;
    ((func_801E4C04_StructA *) D_8038D8D0)->unkC->unk30->unkC = (f32) ((-3.0f * temp_f) + 65.0f);
    if (func_801C1088(3, 2, 0xA) != 0) {
        func_801C10D8(3, 2);
        return 0xB;
    }
    return 0xA;
}


typedef struct func_801E4CB0_Flags {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801E4CB0_Flags;

typedef struct func_801E4CB0_Mid {
    u8 pad0[0x30];
    func_801E4CB0_Flags *unk30;
} func_801E4CB0_Mid;

typedef struct func_801E4CB0_Top {
    u8 pad0[0xC];
    func_801E4CB0_Mid *unkC;
} func_801E4CB0_Top;

s32 func_801E4CB0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02191BFC) != 0) {
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk48 = 0xFF;
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk49 = 0xFF;
        ((func_801E4CB0_Top *) D_8038D8D0)->unkC->unk30->unk4A = 0xFF;
        return 0xC;
    }
    return 0xB;
}


s32 func_801E4D2C(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E4D3C(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E4D4C(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E4D5C(s32 arg0, s32 arg1) {
    return 16;
}



s32 func_801E4D6C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801C1000(3, 2);
        func_8038D28C(0x20C);
        return 0x11;
    }
    return 0x10;
}


typedef struct func_801E4DBC_StructC {
    u8 pad0[0xC];
    f32 unkC;
} func_801E4DBC_StructC;

typedef struct func_801E4DBC_StructB {
    u8 pad0[0x30];
    func_801E4DBC_StructC *unk30;
} func_801E4DBC_StructB;

typedef struct func_801E4DBC_StructA {
    u8 pad0[0xC];
    func_801E4DBC_StructB *unkC;
} func_801E4DBC_StructA;

s32 func_801E4DBC(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 temp_f;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    temp_f = var_ft1 / 10.0f;
    ((func_801E4DBC_StructA *) D_8038D8D0)->unkC->unk30->unkC = (3.0f * temp_f) + 62.0f;
    if (func_801C1088(3, 2, 0xA) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 0x12;
    }
    return 0x11;
}


s32 func_801E4E74(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 2, 5) != 0) {
        func_801C10D8(3, 2);
        func_801C1000(3, 2);
        return 19;
    }
    return 18;
}


struct func_801E4ECC_Inner {
    u8 pad0[4];
    f32 unk4;
};

struct func_801E4ECC_Mid {
    u8 pad0[0x30];
    struct func_801E4ECC_Inner *unk30;
};

struct func_801E4ECC_Top {
    u8 pad0[0xC];
    struct func_801E4ECC_Mid *unkC;
};

s32 func_801E4ECC(s32 arg0, s32 arg1) {
    f32 var_ft1;
    f32 scaled;
    u32 temp_v0;

    temp_v0 = func_801C1134(3, 2);
    var_ft1 = (f32) temp_v0;
    scaled = var_ft1 / 17.0f;
    ((struct func_801E4ECC_Top *) D_8038D8D0)->unkC->unk30->unk4 = -19.0f * scaled;
    if (func_801C1088(3, 2, 0x11) != 0) {
        func_801C10D8(3, 2);
        return 0x14;
    }
    return 0x13;
}


s32 func_801E4F6C(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E4F7C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}



s32 func_801E4FC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801C1000(3, 3);
        return 2;
    }
    return 1;
}


struct func_801E500C_Leaf {
    u8 pad0[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
};

struct func_801E500C_Mid {
    u8 pad0[0x30];
    struct func_801E500C_Leaf *unk30;
};

struct func_801E500C_Top {
    u8 pad0[0x10];
    struct func_801E500C_Mid *unk10;
};

s32 func_801E500C(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 temp_f0;

    if (func_801C1088(3, 3, 0x1E) != 0) {
        func_801C10D8(3, 3);
        return 3;
    }
    temp_f0 = (f32) func_801C1134(3, 3) / 30.0f;
    temp_v1 = (u32) (255.0f * temp_f0);
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk48 = (u8) temp_v1;
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk49 = (u8) temp_v1;
    ((struct func_801E500C_Top *) D_8038D8D0)->unk10->unk30->unk4A = (u8) temp_v1;
    return 2;
}


s32 func_801E5154(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E5164(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E5174(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5184(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5194(s32 arg0, s32 arg1) {
    return 7;
}



s32 func_801E51A4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void D_801C1000(s32, s32);

s32 func_801E51E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240)) {
        D_801C1000(3, 4);
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0x14) + 0x22) = 1;
        *(u8 *)(*(u8 **)((u8 *)D_8038D8D0 + 0x58) + 0x22) = 1;
        func_8038D28C(0x209);
        return 2;
    }
    return 1;
}


s32 func_801E5260(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;

    if (func_801C1088(3, 4, 0x1E) != 0) {
        func_801C10D8(3, 4);
        return 3;
    }
    q = (f32)func_801C1134(3, 4) / 30.0f;
    v = (u32)(127.0f * q);
    S(5)->unk4B = v;
    S(5)->unk4F = v;
    S(22)->unk4B = v;
    S(22)->unk4F = v;
    return 2;
}


s32 func_801E53B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE1D480) != 0) {
        func_801C1000(3, 4);
        return 4;
    }
    return 3;
}


s32 func_801E5404(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;

    if (func_801C1088(3, 4, 0x1E) != 0) {
        func_801C10D8(3, 4);
        return 5;
    }
    q = (f32)func_801C1134(3, 4) / 30.0f;
    v = (u32)(-127.0f * q + 127.0f);
    S(5)->unk4B = v;
    S(5)->unk4F = v;
    S(22)->unk4B = v;
    S(22)->unk4F = v;
    return 4;
}


s32 func_801E5568(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5578(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5588(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5598(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E55A8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E55B8(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E55C8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E560C.s")

extern s32 D_801E9E70;

extern s32 D_801EA420[];

typedef struct func_801E5690_Struct2 {
    u8 pad[0x30];
    s32 unk30;
} func_801E5690_Struct2;

typedef struct func_801E5690_Struct1 {
    u8 pad[0x1C];
    func_801E5690_Struct2 *unk2C;
} func_801E5690_Struct1;

s32 func_801E5690(void) {
    func_8012CF8C(D_8038D8CC,
        ((func_801E5690_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40,
        0x46D, D_801EA420[D_801E9E70]);
    D_801E9E70++;
    D_801E9E70 %= 8;
}


extern s32 D_801E9E6C;

typedef struct func_801E5714_Inner {
    u8 pad[0x22];
    u8 unk22;
} func_801E5714_Inner;

typedef struct func_801E5714_Struct {
    u8 pad[0x20];
    func_801E5714_Inner *unk20;
} func_801E5714_Struct;

s32 func_801E5714(s32 arg0, s32 arg1) {
    D_801E9E6C = 0;
    D_801E9E70 = 0;
    ((func_801E5714_Struct *)D_8038D8D0)->unk20->unk22 = 0;
    return 2;
}

extern void func_801E560C();

s32 func_801E5744(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7DF) != 0) {
        func_801C1000(3, 5);
        return 3;
    }
    func_801E560C();
    return 2;
}


typedef struct func_801E5798_Sub { u8 pad[0x4B]; u8 unk4B; } func_801E5798_Sub;
typedef struct func_801E5798_Obj { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801E5798_Sub *unk30; } func_801E5798_Obj;
typedef struct func_801E5798_Top { func_801E5798_Obj *e[23]; } func_801E5798_Top;

s32 func_801E5798(s32 arg0, s32 arg1) {
    u32 v;
    f32 q;
    if (func_801C1088(3, 5, 0x3C) != 0) {
        func_801C10D8(3, 5);
        return 4;
    }
    q = (f32)func_801C1134(3, 5) / 60.0f;
    v = (u32)(127.0f * q);
#define U ((func_801E5798_Top *)D_8038D8D0)
    U->e[6]->unk30->unk4B = v;
    U->e[8]->unk30->unk4B = v;
    U->e[8]->unk22 = 1;
    func_801E560C(&D_8038D8D0);
    return 3;
}


struct func_801E58E4_Hdr {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E58E4_Q {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_801E58E4_S {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0xC];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
};

struct func_801E58E4_R {
    u8 pad0[0x30];
    struct func_801E58E4_S *unk30;
};

struct func_801E58E4_P {
    u8 pad0[0x18];
    struct func_801E58E4_Q *unk18;
    struct func_801E58E4_R *unk1C;
};

extern f32 D_801EA53C;

s32 func_801E58E4(s32 arg0, s32 arg1) {
    if (((struct func_801E58E4_Hdr *) func_801BF6B0(0))->unkC >= 7) {
        D_8038D8D0->unk18->unk22 = 0;
        D_8038D8D0->unk1C->unk30->unk4B = 0x7F;
        D_8038D8D0->unk1C->unk30->unk1C = D_801EA53C;
        D_8038D8D0->unk1C->unk30->unk4 = 0.0f;
        D_8038D8D0->unk1C->unk30->unk8 = 1.5f;
        D_8038D8D0->unk1C->unk30->unkC = 0.0f;
        return 5;
    }
    func_801E560C();
    return 4;
}



s32 func_801E59AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01EB553C) != 0) {
        func_801C1000(3, 5);
        return 6;
    }
    func_801E5690();
    return 5;
}


typedef struct func_801E5A00_Sub { u8 pad0[0x4B]; u8 unk4B; } func_801E5A00_Sub;
typedef struct func_801E5A00_Obj { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; func_801E5A00_Sub *unk30; } func_801E5A00_Obj;
typedef struct func_801E5A00_Top { u8 pad0[0x1C]; func_801E5A00_Obj *unk1C; func_801E5A00_Obj *unk20; } func_801E5A00_Top;
#define Q (*(func_801E5A00_Top **)&D_8038D8D0)

s32 func_801E5A00(s32 arg0, s32 arg1) {
    u8 v;
    f32 t;
    if (func_801C1088(3, 5, 0x3C) != 0) {
        func_801C10D8(3, 5);
        Q->unk1C->unk22 = 0;
        Q->unk20->unk22 = 0;
        return 7;
    }
    t = (f32)func_801C1134(3, 5) / 60.0f;
    v = (u32)(-127.0f * t + 127.0f);
    Q->unk1C->unk30->unk4B = v;
    Q->unk20->unk30->unk4B = v;
    func_801E5690();
    return 6;
}


s32 func_801E5B64(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5B74(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5B84(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5B94(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5BA4(s32 arg0, s32 arg1) {
    return 11;
}



s32 func_801E5BB4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


void func_801E5BF8(void) {
}


struct func_801E5C00_Mid {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad1[0x48 - 0x16];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 pad2;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_801E5C00_Inner {
    u8 pad0[0x30];
    struct func_801E5C00_Mid *unk30;
};

struct func_801E5C00_Top {
    u8 pad0[0x24];
    struct func_801E5C00_Inner *unk24;
};

void func_801E5C00(void) {
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk48 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk49 + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4A + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4C + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4D + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E = (u8) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk4E + 0x14);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk10 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk12 + 0x71);
    ((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 = (s16) (((struct func_801E5C00_Top *) D_8038D8D0)->unk24->unk30->unk14 + 0x71);
}


extern s32 D_801E9EB0;
extern s32 D_801E9EB4;

void func_801E5CE4(void) {
    D_801E9EB0 = 0;
    D_801E9EB4 = 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E5CFC.s")


extern f32 D_801EA54C;

struct func_801E5DF8_Obj30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801E5DF8_Obj24 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E5DF8_Obj30 *unk30;
};

struct func_801E5DF8_Top {
    u8 pad0[0x24];
    struct func_801E5DF8_Obj24 *unk24;
};

s32 func_801E5DF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x15BE67F) != 0) {
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk4 = 0.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unk8 = 13.0f;
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk30->unkC = D_801EA54C;
        func_801E5BF8();
        ((struct func_801E5DF8_Top *) D_8038D8D0)->unk24->unk22 = 1;
        func_801C1000(3, 6);
        return 2;
    }
    return 1;
}


struct func_801E5EAC_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E5EAC_Inner {
    u8 pad0[0x30];
    struct func_801E5EAC_Mid *unk30;
};
struct func_801E5EAC_Top {
    u8 pad0[0x24];
    struct func_801E5EAC_Inner *unk24;
};

s32 func_801E5EAC(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 6, 0x1E) != 0) {
        func_801C10D8(3, 6);
        return 3;
    }
    ratio = (f32) func_801C1134(3, 6) / 30.0f;
    temp_v1 = (u32) (127.0f * ratio);
    ((struct func_801E5EAC_Top *) D_8038D8D0)->unk24->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E5EAC_Top *) D_8038D8D0)->unk24->unk30->unk4F = (s8) temp_v1;
    func_801E5C00();
    return 2;
}


typedef struct func_801E5FE8_StructC {
    u8 pad0[0xC];
    f32 unkC;
} func_801E5FE8_StructC;

typedef struct func_801E5FE8_StructB {
    u8 pad0[0x30];
    func_801E5FE8_StructC *unk30;
} func_801E5FE8_StructB;

typedef struct func_801E5FE8_StructA {
    u8 pad0[0x24];
    func_801E5FE8_StructB *unk24;
} func_801E5FE8_StructA;

extern f32 D_801EA5F8;

s32 func_801E5FE8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x016B28BF) != 0) {
        func_801E5CE4();
        func_801C1000(3, 6);
        D_801EA5F8 = ((func_801E5FE8_StructA *) D_8038D8D0)->unk24->unk30->unkC;
        return 4;
    }
    func_801E5C00();
    return 3;
}


extern void func_801E5CFC(void);

typedef struct func_801E6064_StructS {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E6064_StructS;
typedef struct func_801E6064_StructR {
    u8 pad0[0x30];
    func_801E6064_StructS *unk30;
} func_801E6064_StructR;
typedef struct func_801E6064_StructP {
    u8 pad0[0x24];
    func_801E6064_StructR *unk24;
} func_801E6064_StructP;

s32 func_801E6064(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 6, 0x40) != 0) {
        func_801C10D8(3, 6);
        func_801C1000(3, 6);
        D_801EA5F8 = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC;
        return 5;
    }
    {
        f32 scale = 64.0f;
        f32 q = func_801C1134(3, 6) / scale;
        ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC = (43.5f - D_801EA5F8) * q + D_801EA5F8;
    }
    func_801E5C00();
    func_801E5CFC();
    return 4;
}

extern f32 D_801EA5F0[];
extern f32 D_801EA550;

s32 func_801E6148(s32 arg0, s32 arg1) {
    if (func_801C1088(3, 6, 0x13) != 0) {
        func_801C10D8(3, 6);
        func_801C1000(3, 6);
        D_801EA5F0[1] = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unk8;
        D_801EA5F0[2] = ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC;
        return 6;
    }
    ((func_801E6064_StructP *)D_8038D8D0)->unk24->unk30->unkC = D_801EA5F0[2] + ((f32)func_801C1134(3, 6) / 19.0f) * (D_801EA550 - D_801EA5F0[2]);
    func_801E5C00();
    func_801E5CFC();
    return 5;
}


typedef struct func_801E6244_StructC {
    u8 pad[8];
    f32 unk8;
    f32 unkC;
} func_801E6244_StructC;
typedef struct func_801E6244_StructB {
    u8 pad[0x30];
    func_801E6244_StructC *unk30;
} func_801E6244_StructB;
typedef struct func_801E6244_StructA {
    u8 pad[0x24];
    func_801E6244_StructB *unk24;
} func_801E6244_StructA;
extern f32 D_801EA554;
extern f32 D_801EA558;

s32 func_801E6244(s32 arg0, s32 arg1) {
    f32 temp;

    if (func_801C1088(3, 6, 0x61) != 0) {
        func_801C10D8(3, 6);
        return 7;
    }
    temp = (f32)func_801C1134(3, 6) / 97.0f;
    ((func_801E6244_StructA *)D_8038D8D0)->unk24->unk30->unk8 =
        D_801EA5F0[1] + (D_801EA554 - D_801EA5F0[1]) * temp;
    ((func_801E6244_StructA *)D_8038D8D0)->unk24->unk30->unkC =
        D_801EA5F0[2] + (D_801EA558 - D_801EA5F0[2]) * temp;
    func_801E5C00();
    return 6;
}


s32 func_801E6328(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01EB553C) != 0) {
        func_801C1000(3, 6);
        return 8;
    }
    func_801E5C00();
    return 7;
}


struct func_801E637C_StructMid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E637C_StructInner {
    u8 pad0[0x30];
    struct func_801E637C_StructMid *unk30;
};
struct func_801E637C_StructTop {
    u8 pad0[0x24];
    struct func_801E637C_StructInner *unk24;
};

s32 func_801E637C(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 6, 0x3C) != 0) {
        func_801C10D8(3, 6);
        return 9;
    }
    ratio = (f32) func_801C1134(3, 6) / 60.0f;
    temp_v1 = (u32) (-127.0f * ratio + 127.0f);
    ((struct func_801E637C_StructTop *) D_8038D8D0)->unk24->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E637C_StructTop *) D_8038D8D0)->unk24->unk30->unk4F = (s8) temp_v1;
    func_801E5C00();
    return 8;
}


s32 func_801E64C4(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E64D4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E64E4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E64F4(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E6504(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E6548_Obj22 {
    u8 pad0[0x22];
    u8 unk22;
} func_801E6548_Obj22;

typedef struct func_801E6548_Obj {
    u8 pad0[0x28];
    func_801E6548_Obj22 *unk28;
} func_801E6548_Obj;

s32 func_801E6548(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x01EB553C) != 0) {
        func_801C1000(3, 7);
        ((func_801E6548_Obj *)D_8038D8D0)->unk28->unk22 = 1;
        func_8038D28C(0x20A);
        return 2;
    }
    return 1;
}


typedef struct func_801E65B0_StructC {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x4B - 0x34];
    u8 unk4B;
} func_801E65B0_StructC;

typedef struct func_801E65B0_StructB {
    u8 pad0[0x30];
    func_801E65B0_StructC *unk30;
} func_801E65B0_StructB;

typedef struct func_801E65B0_StructA {
    u8 pad0[0x28];
    func_801E65B0_StructB *unk28;
} func_801E65B0_StructA;


s32 func_801E65B0(s32 arg0, s32 arg1) {
    f32 t;
    if (func_801C1088(3, 7, 0x3C) != 0) {
        func_801C10D8(3, 7);
        ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk30 = (s32) D_801D96C8 | 0x40000000;
        return 3;
    }
    t = (f32) func_801C1134(3, 7) / 60.0f;
    ((func_801E65B0_StructA *) D_8038D8D0)->unk28->unk30->unk4B = (s8) (u32) (255.0f * t);
    return 2;
}


s32 func_801E66F8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6708(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6718(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E6728(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E6738(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E6748(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E6758(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E6768(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E6778(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

extern s32 D_801E9F18;

void func_801E67BC(void) {
    D_801E9F18 = 0;
}

extern s32 D_801EA440[];

typedef struct func_801E67C8_Struct2 {
    u8 pad[0x30];
    s32 unk30;
} func_801E67C8_Struct2;

typedef struct func_801E67C8_Struct1 {
    u8 pad[0x2C];
    func_801E67C8_Struct2 *unk2C;
} func_801E67C8_Struct1;

void func_801E67C8(void) {
    func_8012CF8C(D_8038D8CC,
        ((func_801E67C8_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40,
        0x46C, D_801EA440[D_801E9F18]);
    D_801E9F18++;
    D_801E9F18 %= 8;
}



void func_801E684C(void) {
    D_801E9F18 = 7;
}


struct func_801E685C_Struct2 {
    u8 pad[0x30];
    s32 unk30;
};

struct func_801E685C_Struct1 {
    u8 pad[0x2C];
    struct func_801E685C_Struct2 *unk2C;
};


void func_801E685C(void) {
    func_8012CF8C(D_8038D8CC, ((struct func_801E685C_Struct1 *)D_8038D8D0)->unk2C->unk30 + 0x40, 0x46C, D_801EA440[D_801E9F18]);
    D_801E9F18 = D_801E9F18 - 1;
    if (D_801E9F18 < 0) {
        D_801E9F18 = 7;
    }
}


typedef struct func_801E68D4_StructZ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E68D4_StructZ;

typedef struct func_801E68D4_StructY {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E68D4_StructZ *unk30;
} func_801E68D4_StructY;

typedef struct func_801E68D4_StructX {
    u8 pad0[0x2C];
    func_801E68D4_StructY *unk2C;
} func_801E68D4_StructX;

extern f32 D_801EA55C;

s32 func_801E68D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x012E1FBF) != 0) {
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk4 = 0.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unk8 = 13.0f;
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk30->unkC = D_801EA55C;
        func_801C1000(3, 8);
        func_801E67BC();
        ((func_801E68D4_StructX *) D_8038D8D0)->unk2C->unk22 = 1;
        return 2;
    }
    return 1;
}


struct func_801E6988_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E6988_Inner {
    u8 pad0[0x30];
    struct func_801E6988_Mid *unk30;
};
struct func_801E6988_Top {
    u8 pad0[0x2C];
    struct func_801E6988_Inner *unk2C;
};

s32 func_801E6988(s32 arg0, s32 arg1) {
    extern void func_801E67C8();
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 8, 0x1E) != 0) {
        func_801C10D8(3, 8);
        return 3;
    }
    ratio = (f32) func_801C1134(3, 8) / 30.0f;
    temp_v1 = (u32) (127.0f * ratio);
    ((struct func_801E6988_Top *) D_8038D8D0)->unk2C->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E6988_Top *) D_8038D8D0)->unk2C->unk30->unk4F = (s8) temp_v1;
    func_801E67C8(&D_8038D8D0);
    return 2;
}



s32 func_801E6AC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x015BE67F) != 0) {
        func_801C1000(3, 8);
        return 4;
    }
    func_801E67C8();
    return 3;
}

/* starting point: func_801E6988 (file048), whose assembly is 96% the same as this function's */

struct func_801E6B18_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E6B18_Inner {
    u8 pad0[0x30];
    struct func_801E6B18_Mid *unk30;
};
struct func_801E6B18_Top {
    u8 pad0[0x2C];
    struct func_801E6B18_Inner *unk2C;
};

s32 func_801E6B18(s32 arg0, s32 arg1) {
    extern void func_801E67C8();
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 8, 0x1E) != 0) {
        func_801C10D8(3, 8);
        return 5;
    }
    ratio = (f32) func_801C1134(3, 8) / 30.0f;
    temp_v1 = (u32) ((-127.0f * ratio) + 127.0f);
    ((struct func_801E6B18_Top *) D_8038D8D0)->unk2C->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E6B18_Top *) D_8038D8D0)->unk2C->unk30->unk4F = (s8) temp_v1;
    func_801E67C8(&D_8038D8D0);
    return 4;
}


typedef struct func_801E6C60_StructZ {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801E6C60_StructZ;

typedef struct func_801E6C60_StructY {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    func_801E6C60_StructZ *unk30;
} func_801E6C60_StructY;

typedef struct func_801E6C60_StructX {
    u8 pad0[0x2C];
    func_801E6C60_StructY *unk2C;
} func_801E6C60_StructX;

extern f32 D_801EA560;
extern f32 D_801EA564;

s32 func_801E6C60(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01CCD0BE) != 0) {
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unk4 = 0.0f;
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unk8 = D_801EA560;
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk30->unkC = D_801EA564;
        func_801C1000(3, 8);
        func_801E684C();
        ((func_801E6C60_StructX *) D_8038D8D0)->unk2C->unk22 = 1;
        return 6;
    }
    return 5;
}


struct func_801E6D14_Struct_B {
    u8 pad0[0x30];
    u8 *unk30;
};
struct func_801E6D14_Struct_A {
    u8 pad0[0x2C];
    struct func_801E6D14_Struct_B *unk2C;
};
struct func_801E6D14_Struct_C {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x4F - 0x4C];
    s8 unk4F;
};

s32 func_801E6D14(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 scale;
    f32 q;

    scale = 127.0f;
    if (func_801C1088(3, 8, 0x1E) != 0) {
        func_801C10D8(3, 8);
        return 7;
    }
    q = (f32) func_801C1134(3, 8) / 30.0f;
    temp_v1 = (u32) (scale * q);
    ((struct func_801E6D14_Struct_C *) ((struct func_801E6D14_Struct_A *) D_8038D8D0)->unk2C->unk30)->unk4B = (s8) temp_v1;
    ((struct func_801E6D14_Struct_C *) ((struct func_801E6D14_Struct_A *) D_8038D8D0)->unk2C->unk30)->unk4F = (s8) temp_v1;
    func_801E685C();
    return 6;
}



s32 func_801E6E50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x01EB553C) != 0) {
        func_801C1000(3, 8);
        return 8;
    }
    func_801E685C();
    return 7;
}

/* starting point: func_801E6988 (file048), whose assembly is 96% the same as this function's */

struct func_801E6EA4_Mid {
    u8 pad0[0x4B];
    s8 unk4B;
    u8 pad1[0x3];
    s8 unk4F;
};
struct func_801E6EA4_Inner {
    u8 pad0[0x30];
    struct func_801E6EA4_Mid *unk30;
};
struct func_801E6EA4_Top {
    u8 pad0[0x2C];
    struct func_801E6EA4_Inner *unk2C;
};

s32 func_801E6EA4(s32 arg0, s32 arg1) {
    extern void func_801E685C();
    u32 temp_v1;
    f32 ratio;

    if (func_801C1088(3, 8, 0x3C) != 0) {
        func_801C10D8(3, 8);
        return 9;
    }
    ratio = (f32) func_801C1134(3, 8) / 60.0f;
    temp_v1 = (u32) ((-127.0f * ratio) + 127.0f);
    ((struct func_801E6EA4_Top *) D_8038D8D0)->unk2C->unk30->unk4B = (s8) temp_v1;
    ((struct func_801E6EA4_Top *) D_8038D8D0)->unk2C->unk30->unk4F = (s8) temp_v1;
    func_801E685C(&D_8038D8D0);
    return 8;
}


s32 func_801E6FEC(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E6FFC(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E700C(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E701C(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E702C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E7070_Ptr {
    u8 pad0[0x30];
    struct func_801E58E4_Q *unk30;
};

s32 func_801E7070(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02191BFC) != 0) {
        func_801C1000(3, 9);
        ((struct func_801E7070_Ptr *)D_8038D8D0)->unk30->unk22 = 1;
        return 2;
    }
    return 1;
}


typedef struct func_801E70D0_StructC {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x37];
    u8 unk4B;
    u8 pad4C[3];
    u8 unk4F;
} func_801E70D0_StructC;

typedef struct func_801E70D0_StructB {
    u8 pad0[0x30];
    func_801E70D0_StructC *unk30;
} func_801E70D0_StructB;

typedef struct func_801E70D0_StructA {
    u8 pad0[0x30];
    func_801E70D0_StructB *unk30;
} func_801E70D0_StructA;

s32 func_801E70D0(s32 arg0, s32 arg1) {
    func_801E70D0_StructC *temp_v1;
    u8 v;
    f32 f;

    if (func_801C1088(3, 9, 0x1E) != 0) {
        func_801C10D8(3, 9);
        return 3;
    }
    f = (f32)func_801C1134(3, 9) / 30.0f;
    arg0 = (u32)(127.0f * f);
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk4B = arg0;
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk4F = arg0;
    ((func_801E70D0_StructA *)D_8038D8D0)->unk30->unk30->unk12 += 0x22;
    return 2;
}


typedef struct func_801E7220_StructC {
    u8 pad0[0x12];
    s16 unk12;
} func_801E7220_StructC;

typedef struct func_801E7220_StructB {
    u8 pad0[0x30];
    func_801E7220_StructC *unk30;
} func_801E7220_StructB;

typedef struct func_801E7220_StructA {
    u8 pad0[0x30];
    func_801E7220_StructB *unk30;
} func_801E7220_StructA;

s32 func_801E7220(s32 arg0, s32 arg1) {
    func_801E7220_StructC *temp_v1;

    temp_v1 = ((func_801E7220_StructA *) D_8038D8D0)->unk30->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 4;
}


typedef struct func_801E724C_Struct {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x30 - 0x14];
    struct func_801E724C_Struct *unk30;
} func_801E724C_Struct;

s32 func_801E724C(s32 arg0, s32 arg1) {
    func_801E724C_Struct *temp_v1;

    temp_v1 = ((func_801E724C_Struct *)((func_801E724C_Struct *)((func_801E724C_Struct *)D_8038D8D0)->unk30)->unk30);
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 5;
}


typedef struct func_801E7278_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_801E7278_Leaf;

typedef struct func_801E7278_Node {
    u8 pad0[0x30];
    func_801E7278_Leaf *unk30;
} func_801E7278_Node;

typedef struct func_801E7278_Root {
    u8 pad0[0x30];
    func_801E7278_Node *unk30;
} func_801E7278_Root;

s32 func_801E7278(s32 arg0, s32 arg1) {
    func_801E7278_Leaf *temp_v1;

    temp_v1 = ((func_801E7278_Root *) D_8038D8D0)->unk30->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 6;
}


typedef struct func_801E72A4_Ptr {
    u8 pad0[0x30];
    void *unk30;
} func_801E72A4_Ptr;

typedef struct func_801E72A4_Leaf {
    u8 pad0[0x12];
    s16 unk12;
} func_801E72A4_Leaf;

s32 func_801E72A4(s32 arg0, s32 arg1) {
    func_801E72A4_Leaf *temp_v1;

    temp_v1 = ((func_801E72A4_Ptr *)((func_801E72A4_Ptr *)D_8038D8D0)->unk30)->unk30;
    temp_v1->unk12 = temp_v1->unk12 + 0x22;
    return 7;
}


typedef struct func_801E72D0_Inner {
    u8 pad0[0x12];
    s16 unk12;
} func_801E72D0_Inner;

typedef struct func_801E72D0_Outer {
    u8 pad0[0x30];
    func_801E72D0_Inner *unk30;
} func_801E72D0_Outer;

typedef struct func_801E72D0_Top {
    u8 pad0[0x30];
    func_801E72D0_Outer *unk30;
} func_801E72D0_Top;

s32 func_801E72D0(s32 arg0, s32 arg1) {
    func_801E72D0_Inner *temp_v1;

    temp_v1 = ((func_801E72D0_Top *) D_8038D8D0)->unk30->unk30;
    temp_v1->unk12 = (s16) (temp_v1->unk12 + 0x22);
    return 7;
}



s32 func_801E72FC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E7340(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02285E3C) != 0) {
        func_801C1000(3, 0xD);
        return 2;
    }
    return 1;
}


struct func_801E738C_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E738C_Struct_B {
    u8 pad0[0x30];
    struct func_801E738C_Struct_C *unk30;
};

struct func_801E738C_Struct_A {
    u8 pad0[0x34];
    struct func_801E738C_Struct_B *unk34;
};

s32 func_801E738C(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        func_801C1000(3, 0xD);
        return 3;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E738C_Struct_A *) D_8038D8D0)->unk34->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E738C_Struct_A *) D_8038D8D0)->unk34->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E738C_Struct_A *) D_8038D8D0)->unk34->unk30->unk4A = (s8) temp_v1;
    return 2;
}


struct func_801E74E0_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E74E0_Struct_B {
    u8 pad0[0x30];
    struct func_801E74E0_Struct_C *unk30;
};

struct func_801E74E0_Struct_A {
    u8 pad0[0x38];
    struct func_801E74E0_Struct_B *unk38;
};

s32 func_801E74E0(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        func_801C1000(3, 0xD);
        return 4;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E74E0_Struct_A *) D_8038D8D0)->unk38->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E74E0_Struct_A *) D_8038D8D0)->unk38->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E74E0_Struct_A *) D_8038D8D0)->unk38->unk30->unk4A = (s8) temp_v1;
    return 3;
}


struct func_801E7634_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E7634_Struct_B {
    u8 pad0[0x30];
    struct func_801E7634_Struct_C *unk30;
};

struct func_801E7634_Struct_A {
    u8 pad0[0x3C];
    struct func_801E7634_Struct_B *unk3C;
};

s32 func_801E7634(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        func_801C1000(3, 0xD);
        return 5;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E7634_Struct_A *) D_8038D8D0)->unk3C->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E7634_Struct_A *) D_8038D8D0)->unk3C->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E7634_Struct_A *) D_8038D8D0)->unk3C->unk30->unk4A = (s8) temp_v1;
    return 4;
}


struct func_801E7788_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E7788_Struct_B {
    u8 pad0[0x30];
    struct func_801E7788_Struct_C *unk30;
};

struct func_801E7788_Struct_A {
    u8 pad0[0x40];
    struct func_801E7788_Struct_B *unk40;
};

s32 func_801E7788(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        func_801C1000(3, 0xD);
        return 6;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E7788_Struct_A *) D_8038D8D0)->unk40->unk30->unk4A = (s8) temp_v1;
    return 5;
}


struct func_801E78DC_Struct_C {
    u8 pad0[0x48];
    s8 unk48;
    s8 unk49;
    s8 unk4A;
};

struct func_801E78DC_Struct_B {
    u8 pad0[0x30];
    struct func_801E78DC_Struct_C *unk30;
};

struct func_801E78DC_Struct_A {
    u8 pad0[0x44];
    struct func_801E78DC_Struct_B *unk44;
};

s32 func_801E78DC(s32 arg0, s32 arg1) {
    u32 temp_v1;
    f32 frac;

    if (func_801C1088(3, 0xD, 0xA) != 0) {
        func_801C10D8(3, 0xD);
        return 7;
    }
    frac = (f32) func_801C1134(3, 0xD) / 10.0f;
    temp_v1 = (u32) (255.0f * frac);
    ((struct func_801E78DC_Struct_A *) D_8038D8D0)->unk44->unk30->unk48 = (s8) temp_v1;
    ((struct func_801E78DC_Struct_A *) D_8038D8D0)->unk44->unk30->unk49 = (s8) temp_v1;
    ((struct func_801E78DC_Struct_A *) D_8038D8D0)->unk44->unk30->unk4A = (s8) temp_v1;
    return 6;
}


s32 func_801E7A24(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E7A34(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E7A44(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E7A54(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E7A64(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E7AA8_Obj30 {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};

struct func_801E7AA8_Obj48 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E7AA8_Obj30 *unk30;
};

struct func_801E7AA8_Obj {
    u8 pad0[0x48];
    struct func_801E7AA8_Obj48 *unk48;
};

s32 func_801E7AA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02285E3C) != 0) {
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk18 = 0.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk1C = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk30->unk20 = 1.0f;
        ((struct func_801E7AA8_Obj *) D_8038D8D0)->unk48->unk22 = 1;
        func_801C1000(3, 0xB);
        func_8038D28C(0x20B);
        return 2;
    }
    return 1;
}


struct func_801E7B50_StructC {
    u8 pad0[0x18];
    f32 unk18;
};
struct func_801E7B50_StructB {
    u8 pad0[0x30];
    struct func_801E7B50_StructC *unk30;
};
struct func_801E7B50_StructA {
    u8 pad0[0x48];
    struct func_801E7B50_StructB *unk48;
};

s32 func_801E7B50(s32 arg0, s32 arg1) {
    f32 var_ft1;
    u32 temp_v0;
    f32 scale;
    f32 var_ft2;

    scale = 1.0f;
    if (func_801C1088(3, 0xB, 0x46) != 0) {
        func_801C10D8(3, 0xB);
        return 3;
    }
    temp_v0 = func_801C1134(3, 0xB);
    var_ft1 = (f32) temp_v0;
    var_ft2 = var_ft1 / 70.0f;
    ((struct func_801E7B50_StructA *) D_8038D8D0)->unk48->unk30->unk18 = scale * var_ft2;
    return 2;
}


typedef struct func_801E7BF0_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E7BF0_StructC;
typedef struct func_801E7BF0_StructB {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E7BF0_StructC *unk30;
} func_801E7BF0_StructB;
typedef struct func_801E7BF0_StructA {
    u8 pad0[0x4C];
    func_801E7BF0_StructB *unk4C;
    func_801E7BF0_StructB *unk50;
} func_801E7BF0_StructA;

#define G (*(func_801E7BF0_StructA **)&D_8038D8D0)

s32 func_801E7BF0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        G->unk4C->unk30->unk4 = -50.0f;
        G->unk4C->unk30->unk8 = 0.0f;
        G->unk4C->unk30->unkC = 61.0f;
        G->unk4C->unk30->unk18 = 0.0f;
        G->unk4C->unk30->unk1C = 1.0f;
        G->unk4C->unk30->unk20 = 1.0f;
        G->unk4C->unk22 = 1;
        G->unk50->unk30->unk4 = 50.0f;
        G->unk50->unk30->unk8 = 0.0f;
        G->unk50->unk30->unkC = 61.0f;
        G->unk50->unk30->unk18 = 0.0f;
        G->unk50->unk30->unk1C = 1.0f;
        G->unk50->unk30->unk20 = 1.0f;
        G->unk50->unk22 = 1;
        func_801C1000(3, 0xB);
        return 4;
    }
    return 3;
}


typedef struct func_801E7D44_Leaf {
    u8 pad0[0x18];
    f32 unk18;
} func_801E7D44_Leaf;

typedef struct func_801E7D44_Node {
    u8 pad0[0x30];
    func_801E7D44_Leaf *unk30;
} func_801E7D44_Node;

typedef struct func_801E7D44_Root {
    u8 pad0[0x4C];
    func_801E7D44_Node *unk4C;
    func_801E7D44_Node *unk50;
} func_801E7D44_Root;


s32 func_801E7D44(s32 arg0, s32 arg1) {
    f32 scale;
    f32 quot;
    f32 temp_fv0;

    if (func_801C1088(3, 0xB, 0x3C) != 0) {
        func_801C10D8(3, 0xB);
        return 5;
    }
    scale = 1.0f;
    quot = (f32) func_801C1134(3, 0xB) / 60.0f;
    temp_fv0 = scale * quot;
    ((func_801E7D44_Root *) D_8038D8D0)->unk4C->unk30->unk18 = temp_fv0;
    ((func_801E7D44_Root *) D_8038D8D0)->unk50->unk30->unk18 = temp_fv0;
    return 4;
}


s32 func_801E7DF8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E7E08(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E7E18(s32 arg0, s32 arg1) {
    return 8;
}


struct func_801E7E28_Struct {
    u8 pad[0x4C];
    u8 *unk4C;
    u8 *unk50;
    u8 *unk54;
};

s32 func_801E7E28(s32 arg0, s32 arg1) {
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk4C[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk50[0x22] = 0;
    ((struct func_801E7E28_Struct *)D_8038D8D0)->unk54[0x22] = 1;
    return 8;
}


s32 func_801E7E68(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E7E78(s32 arg0, s32 arg1) {
    return 10;
}


void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DB314[];
extern u8 D_801DB318[];
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E7E88(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2F, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB314);
    func_801CC4C0(1, D_801DB318);
    return 1;
}


extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern u8 D_801DB300[];

s32 func_801E7F1C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DB300);
    func_801CC530();
    return 2;
}

extern struct func_801E8E80_Struct0 *D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

struct func_801E7F74_Struct1 {
    u8 pad0[0x8];
    struct func_801E7F74_Struct2 *unk8;
};

struct func_801E7F74_Struct2 {
    u8 pad0[0x24];
    struct func_801E7F74_Struct3 *unk24;
};

struct func_801E7F74_Struct3 {
    u8 pad0[0x2C];
    struct func_801E7F74_Struct4 *unk2C;
};

struct func_801E7F74_Struct4 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};

extern f32 D_801EA568;
extern f32 D_801EA56C;

s32 func_801E7F74(s32 arg0, s32 arg1) {
    struct func_801E7F74_Struct3 *temp_v0;

    temp_v0 = ((struct func_801E7F74_Struct1 *) D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801EA568;
        ((struct func_801E7F74_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E7F74_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unkC = D_801EA56C;
        ((struct func_801E7F74_Struct1 *) D_801DAB14)->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        return 3;
    }
    return 2;
}


s32 func_801E803C(s32 arg0, s32 arg1) {
    return 4;
}

extern void func_801C0D04(s32 a0, s32 a1);

s32 func_801E804C(s32 arg0, s32 arg1) {
    func_801C0D04(4, 0);
    return 5;
}

#define func_801E8E80_Struct0 func_801E8E80_Struct0__func_801E807C
#define func_801E8E80_Struct1 func_801E8E80_Struct1__func_801E807C
#define func_801E8E80_Struct2 func_801E8E80_Struct2__func_801E807C
#define func_801E8E80_Struct3 func_801E8E80_Struct3__func_801E807C
#define func_801E8E80_Struct4 func_801E8E80_Struct4__func_801E807C
struct func_801E8E80_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E8E80_Struct3 {
    u8 pad0[0x2C];
    struct func_801E8E80_Struct4 *unk2C;
};
struct func_801E8E80_Struct2 {
    u8 pad0[0x24];
    struct func_801E8E80_Struct3 *unk24;
};
struct func_801E8E80_Struct1 {
    u8 pad0[8];
    struct func_801E8E80_Struct2 *unk8;
};
struct func_801E8E80_Struct0 {
    u8 pad0[8];
    struct func_801E8E80_Struct1 *unk8;
};
extern f32 D_801EA570;
extern f64 D_801EA578;
extern f32 D_801EA580;
extern f32 D_801EA584;
extern f32 D_801EA588;
extern f32 D_801EA58C;
extern f32 D_801EA590;
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);
extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CE2D0(s32, s32);

typedef struct func_801E807C_Struct3 { u8 pad[4]; f32 a; f32 b; f32 c; } func_801E807C_Struct3;
typedef struct func_801E807C_Struct2 { u8 pad[0x2C]; func_801E807C_Struct3 *p; } func_801E807C_Struct2;
typedef struct func_801E807C_Struct1 { u8 pad[0x24]; func_801E807C_Struct2 *p; } func_801E807C_Struct1;
typedef struct func_801E807C_Struct0 { u8 pad[8]; func_801E807C_Struct1 *p; } func_801E807C_Struct0;
#define func_801E807C_CHAIN (((func_801E807C_Struct0 *)D_801DAB14)->p->p->p)

s32 func_801E807C(s32 arg0, s32 arg1) {
    f32 k;
    f32 t;
    func_801E807C_Struct3 *c;

    t = (f32)(func_80034C24(func_801C0F18(4, 0)) / D_801EA578) / D_801EA570;
    k = D_801EA570;
    func_801E807C_CHAIN->a = t * D_801EA580 + D_801EA584;
    func_801E807C_CHAIN->c = t * D_801EA588 + D_801EA58C;
    if (func_801C0DE4(4, 0, k) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348007A, 0, 0, 5.0f);
        return 6;
    }
    if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
        c = func_801E807C_CHAIN;
        func_8038D33C(c->a, c->b, *(s32 *)&c->c, 0x67C, D_801EA590, 1.0f);
    }
    return 5;
}
#undef func_801E807C_CHAIN
#undef func_801E8E80_Struct0
#undef func_801E8E80_Struct1
#undef func_801E8E80_Struct2
#undef func_801E8E80_Struct3
#undef func_801E8E80_Struct4

extern s32 func_801CE274();

typedef struct func_801E81E8_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E81E8_StructC;

typedef struct func_801E81E8_StructB {
    u8 pad0[0x2C];
    func_801E81E8_StructC *unk2C;
} func_801E81E8_StructB;

typedef struct func_801E81E8_StructA {
    u8 pad0[0x24];
    func_801E81E8_StructB *unk24;
} func_801E81E8_StructA;

typedef struct func_801E81E8_StructV {
    u8 pad0[8];
    func_801E81E8_StructA *unk8;
} func_801E81E8_StructV;

extern f32 D_801EA594;
extern void func_8038D33C(f32 a0, f32 a1, s32 a2, s32 a3, f32 a4, f32 a5);

s32 func_801E81E8(s32 arg0, s32 arg1) {
    func_801E81E8_StructC *temp_v0;

    if (func_801CE274() == 0) {
        temp_v0 = (*(func_801E81E8_StructV **)(func_801DAAF0 + 0x24))->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67C, D_801EA594, 1.0f);
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 7;
    }
    return 6;
}


s32 func_801E8280(s32 arg0, s32 arg1) {
    return 8;
}


extern s32 func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E8290(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8339C0) != 0) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 9;
    }
    return 8;
}



s32 func_801E82F4(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8001B, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xA;
    }
    return 9;
}

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32, s32, f32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern s32 func_801CE2D0(s32, s32);
extern s32 D_801E9FFC;
extern f64 D_801EA598;
extern f32 D_801EA5A0;
extern f32 D_801EA5A4;
extern f32 D_801EA5A8;
extern f32 D_801EA5AC;

typedef struct func_801E8358_S3 { u8 pad[4]; f32 a; f32 b; f32 c; } func_801E8358_S3;
typedef struct func_801E8358_S2 { u8 pad[0x2C]; func_801E8358_S3 *p; } func_801E8358_S2;
typedef struct func_801E8358_S1 { u8 pad[0x24]; func_801E8358_S2 *p; } func_801E8358_S1;
typedef struct func_801E8358_S0 { u8 pad[8]; func_801E8358_S1 *p; } func_801E8358_S0;
typedef struct func_801E8358_S { u8 pad[0x24]; func_801E8358_S0 *p; } func_801E8358_S;

#define CH (((func_801E8358_S0 *)D_801DAB14)->p->p->p)

s32 func_801E8358(s32 arg0, s32 arg1) {
    f32 t;
    u64 r;
    r = func_801C0F18(4, 0);
    t = (f32)(func_80034C24(r) / D_801EA598) / 3.0f;
    CH->a = t * D_801EA5A0 + 4.5f;
    CH->c = t * D_801EA5A4 + D_801EA5A8;
    if (func_801C0DE4(4, 0, 3.0f) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348005E, 0, 0, 3.0f);
        D_801E9FFC = 0;
        return 0xB;
    }
    if (func_801CE2D0(0x01B8001B, 0xC) != 0 || func_801CE2D0(0x01B8001B, 0x1E) != 0) {
        func_8038D33C(CH->a, CH->b, *(s32 *)&CH->c, 0x67C, D_801EA5AC, 1.0f);
    }
    return 0xA;
}


extern f32 D_801EA5B0;

typedef struct func_801E84CC_StructC { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; } func_801E84CC_StructC;
typedef struct func_801E84CC_StructB { u8 pad0[0x2C]; func_801E84CC_StructC *unk2C; } func_801E84CC_StructB;
typedef struct func_801E84CC_StructA { u8 pad0[0x24]; func_801E84CC_StructB *unk24; } func_801E84CC_StructA;
typedef struct func_801E84CC_StructV { u8 pad0[8]; func_801E84CC_StructA *unk8; } func_801E84CC_StructV;

s32 func_801E84CC(s32 arg0, s32 arg1) {
    func_801E84CC_StructC *p;
    s32 v = D_801E9FFC;

    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    return 0xB;
c0:
    if (func_801CE274() == 0) {
        p = ((func_801E84CC_StructV *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(p->unk4, p->unk8, p->unkC, 0x67C, D_801EA5B0, 1.0f);
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        D_801E9FFC = 1;
    }
    goto out;
c1:
    func_801CC4D8(0, 0x04100034, 0, 0, 5.0f);
    D_801E9FFC = 2;
    goto out;
c2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100034, 0, 0, 5.0f);
        return 0xC;
    }
out:
    return 0xB;
}


extern s32 func_801CE284(void);

s32 func_801E8604(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348007B, 0, 0, 5.0f);
        return 0xD;
    }
    return 0xC;
}



s32 func_801E865C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348007B, 0, 0x100, 7.0f);
        return 0xE;
    }
    return 0xD;
}


s32 func_801E86B4(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E86C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD29240) != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 15.0f);
        return 0x10;
    }
    return 0xF;
}


s32 func_801E8728(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 0x11;
    }
    return 0x10;
}


s32 func_801E8780(s32 arg0, s32 arg1) {
    return 18;
}


s32 func_801E8790(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE1D480) != 0) {
        return 0x13;
    }
    return 0x12;
}


s32 func_801E87CC(s32 arg0, s32 arg1) {
    return 20;
}


s32 func_801E87DC(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E87EC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x013D61FF) != 0) {
        func_801CC4D8(0, 0x01B8002F, 0, 0, 5.0f);
        return 0x16;
    }
    return 0x15;
}



s32 func_801E8850(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x01B8002F, 0, 0, 4.0f);
        return 0x17;
    }
    return 0x16;
}


s32 func_801E88A8(s32 arg0, s32 arg1) {
    return 24;
}



s32 func_801E88B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0189AD3F) != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 5.0f);
        return 0x19;
    }
    return 0x18;
}


s32 func_801E891C(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 0x1A;
    }
    return 0x19;
}


s32 func_801E8974(s32 arg0, s32 arg1) {
    return 27;
}



s32 func_801E8984(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0246E2BC) != 0) {
        func_801CC4D8(0, 0x04100043, 0, 0, 5.0f);
        return 0x1C;
    }
    return 0x1B;
}



s32 func_801E89E8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100043, 0, 0, 7.5f);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E8A40(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E8A50(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0265673C) != 0) {
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E8A8C(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E8A9C(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E8AAC(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E8ABC(s32 arg0, s32 arg1) {
    return 35;
}



s32 func_801E8ACC(s32 arg0, s32 arg1) {
    if ((((func_801E2294_Struct *) func_801BF6B0(7))->unkC < 7) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E8B20(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x0348005E, 0, 0, 30.0f);
    return 0x25;
}


s32 func_801E8B68(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
        return 0x26;
    }
    return 0x25;
}


s32 func_801E8BC0(s32 arg0, s32 arg1) {
    return 39;
}



s32 func_801E8BD0(s32 arg0, s32 arg1) {
    if (((s32)*(s32 *)((u8 *)func_801BF6B0(7) + 0xC) < 0xC) || (func_801C1B1C() == 0)) {
        return 39;
    }
    return 0x28;
}


s32 func_801E8C24(s32 arg0, s32 arg1) {
    return 41;
}



s32 func_801E8C34(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        D_801E9FFC = 0;
        return 0x2A;
    }
    return 0x29;
}



s32 func_801E8C7C(s32 arg0, s32 arg1) {
    if (D_801E9FFC >= 0x13) {
        func_801CC4D8(0, 0x019100CD, 0, 0, 5.0f);
        return 0x2B;
    }
    D_801E9FFC += 1;
    return 0x2A;
}


extern s32 D_801EA000;

s32 func_801E8CE8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x019100CD, 0, 0, 6.0f);
        D_801EA000 = 0;
        return 0x2C;
    }
    return 0x2B;
}


extern f32 D_801EA5B4;

typedef struct func_801E8D48_StructD {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
} func_801E8D48_StructD;

typedef struct func_801E8D48_StructC {
    u8 pad0[0x2C];
    func_801E8D48_StructD *unk2C;
} func_801E8D48_StructC;

typedef struct func_801E8D48_StructB {
    u8 pad0[0x24];
    func_801E8D48_StructC *unk24;
} func_801E8D48_StructB;

typedef struct func_801E8D48_StructA {
    u8 pad0[0x8];
    func_801E8D48_StructB *unk8;
} func_801E8D48_StructA;

s32 func_801E8D48(s32 arg0, s32 arg1) {
    func_801E8D48_StructD *temp_v0;

    if (func_801CE284() != 0) {
        return 0x2D;
    }
    if (++D_801EA000 == 0x24) {
        temp_v0 = ((func_801E8D48_StructA *)D_801DAB14)->unk8->unk24->unk2C;
        func_8038D33C(temp_v0->unk4, temp_v0->unk8, temp_v0->unkC, 0x67C, D_801EA5B4, 1.0f);
    }
    return 0x2C;
}


s32 func_801E8DDC(s32 arg0, s32 arg1) {
    return 45;
}


s32 func_801E8DEC(s32 arg0, s32 arg1) {
    return 46;
}


s32 func_801E8DFC(s32 arg0, s32 arg1) {
    return 47;
}


s32 func_801E8E0C(s32 arg0, s32 arg1) {
    return 48;
}


s32 func_801E8E1C(s32 arg0, s32 arg1) {
    return 49;
}


s32 func_801E8E2C(s32 arg0, s32 arg1) {
    return 50;
}



s32 func_801E8E3C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E8E80_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E8E80_Struct3 {
    u8 pad0[0x2C];
    struct func_801E8E80_Struct4 *unk2C;
};
struct func_801E8E80_Struct2 {
    u8 pad0[0x24];
    struct func_801E8E80_Struct3 *unk24;
};
struct func_801E8E80_Struct1 {
    u8 pad0[8];
    struct func_801E8E80_Struct2 *unk8;
};
struct func_801E8E80_Struct0 {
    u8 pad0[8];
    struct func_801E8E80_Struct1 *unk8;
};

extern f32 D_801EA5B8;
extern f32 D_801EA5BC;

s32 func_801E8E80(s32 arg0, s32 arg1) {
    struct func_801E8E80_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801EA5B8;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801EA5BC;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x0320001B, 0, 0x1100, 6.0f);
        return 2;
    }
    return 1;
}


s32 func_801E8F58(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8F68(s32 arg0, s32 arg1) {
    func_801C0D04(4, 1);
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E8F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file048/801E1BE0/func_801E90F8.s")


extern s32 func_801D2C00();

s32 func_801E9204(s32 arg0, s32 arg1) {
    if (func_801D2C00() == 0) {
        func_801CC470(1, 0x0320001A, 0, 0x100, 10.0f);
        return 7;
    }
    return 6;
}


s32 func_801E925C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E926C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E927C(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E928C(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E929C(s32 arg0, s32 arg1) {
    return 11;
}


extern void D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E92AC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x186A0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 9, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E9334(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E9364(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E9374(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E9384(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E9394(s32 arg0, s32 arg1) {
    return 6;
}



s32 func_801E93A4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x2DC6C0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}



s32 func_801E9434(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 7;
    }
    return 8;
}


s32 func_801E945C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E946C(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E947C(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E9820[];

s32 func_801E948C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9820);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E94C0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

extern void func_801C18CC(s32 a0, void *a1);

typedef struct func_801E94F0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E94F0_Struct;

extern func_801E94F0_Struct D_801EA144;

s32 func_801E94F0(s32 arg0, s32 arg1) {
    func_801E94F0_Struct sp1C;

    sp1C = D_801EA144;
    func_801C18CC(1, &sp1C);
    return 0x4;
}



s32 func_801E9540(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}

extern s32 func_801C1974();

s32 func_801E9570(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801E9598_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9598_Struct;

extern func_801E9598_Struct D_801EA150;

s32 func_801E9598(s32 arg0, s32 arg1) {
    func_801E9598_Struct sp18;

    sp18 = D_801EA150;
    func_801C18CC(2, (void *) &sp18);
    return 7;
}



s32 func_801E9600(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}


extern u8 D_801E990C[];

s32 func_801E9630(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E990C);
    return 9;
}



s32 func_801E9664(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0xA;
    }
    return 0x9;
}


s32 func_801E9694(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xB;
}


typedef struct func_801E96BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E96BC_Struct;

extern func_801E96BC_Struct D_801EA168;

s32 func_801E96BC(s32 arg0, s32 arg1) {
    func_801E96BC_Struct sp18;

    sp18 = D_801EA168;
    func_801C18CC(2, &sp18);
    return 0xC;
}



s32 func_801E9724(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xC;
    }
    return 0xD;
}


s32 func_801E9754(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xE;
}


s32 func_801E977C(s32 arg0, s32 arg1) {
    return 15;
}


extern void func_8038CD3C(void *);
extern u8 D_801E9974[];

s32 func_801E978C(s32 arg0, s32 arg1) {
    func_8038CD3C(D_801E9974);
    return 0x10;
}


extern s32 func_8038CD6C(s32 arg0);

s32 func_801E97BC(s32 arg0, s32 arg1) {
    func_8038CD6C(0x1);
    return 17;
}


s32 func_8001791C(void);

s32 func_801E97E8(s32 arg0, s32 arg1) {
    if (func_8001791C() != 0) {
        return 0x10;
    }
    return 0x11;
}

