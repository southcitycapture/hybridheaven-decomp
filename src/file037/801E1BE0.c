#include "common.h"

extern void func_8038D28C();
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void func_8038BEC8(f32);
extern void D_8038C158(void);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x76);
        D_8038C158();
        return 1;
    }
    return 0;
}


extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
extern f32 D_801E6B50;
extern f32 D_801E6B54;
extern f32 D_801E6B58;
extern f32 D_801E6B5C;
extern f32 D_801E6B60;
extern f32 D_801E6B64;
extern f32 D_801E6B68;
extern f32 D_801E6B6C;

s32 func_801E1C3C(s32 arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv1;

    temp_fv0 = D_801E6B50;
    temp_fv1 = D_801E6B54;
    if (D_8038C17C(0.0f, 3.5f, -52.1f, 303.2f, 72.5f, D_801E6B58, D_801E6B5C, D_801E6B60, temp_fv0, D_801E6B64, D_801E6B68, temp_fv0, D_801E6B6C, -58.5f, temp_fv1, temp_fv1) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E1D18.s")


extern f32 D_801E6B88;
extern f32 D_801E6B8C;
extern f32 D_801E6B90;
extern f32 D_801E6B94;
extern f32 D_801E6B98;
extern f32 D_801E6B9C;
extern f32 D_801E6BA0;
extern f32 D_801E6BA4;
extern f32 D_801E6BA8;
extern f32 D_801E6BAC;

s32 func_801E1DE0(s32 arg0, s32 arg1) {
    f32 temp = D_801E6B88;

    if (D_8038C17C(0.0f, 2.0f, 7.2f, 8.2f,
        D_801E6B8C, D_801E6B90, 7.0f, D_801E6B94,
        D_801E6B98, D_801E6B9C, D_801E6BA0, D_801E6BA4,
        D_801E6BA8, D_801E6BAC, temp, temp) != 0) {
        D_8038C158();
        return 4;
    }
    return 3;
}


extern f32 D_801E6BB0;
extern f32 D_801E6BB4;
extern f32 D_801E6BB8;
extern f32 D_801E6BBC;
extern f32 D_801E6BC0;
extern f32 D_801E6BC4;
extern f32 D_801E6BC8;
extern f32 D_801E6BCC;

s32 func_801E1EC4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, D_801E6BB0, 7.1f, 35.7f, -32.0f, 5.5f, D_801E6BB4, D_801E6BB8, 19.5f, D_801E6BBC, D_801E6BC0, D_801E6BC4, D_801E6BC8, D_801E6BCC, 71.0f, 71.0f)) {
        D_8038C158();
        return 5;
    }
    return 4;
}

extern u8 D_801DAB14[];

extern f32 D_801E6BD0;
extern f32 D_801E6BD4;
extern f32 D_801E6BD8;
extern f32 D_801E6BDC;
extern f32 D_801E6BE0;
extern f32 D_801E6BE4;
extern f32 D_801E6BE8;
extern f32 D_801E6BEC;
extern f32 D_801E6BF0;

struct func_801E1FA8_StructData {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1FA8_StructObj {
    u8 pad[0x2C];
    struct func_801E1FA8_StructData *unk2C;
};
struct func_801E1FA8_StructMid {
    u8 pad[0x24];
    struct func_801E1FA8_StructObj *unk24;
};
struct func_801E1FA8_StructNode {
    u8 pad[8];
    struct func_801E1FA8_StructMid *unk8;
};

#define ROOT (*root)

s32 func_801E1FA8(s32 arg0, s32 arg1) {
    f32 temp = D_801E6BD0;
    struct func_801E1FA8_StructNode **root;
    if (D_8038C17C(0.0f, D_801E6BD4, -16.4f, 110.7f,
        D_801E6BD8, D_801E6BDC, D_801E6BE0, -9.5f,
        D_801E6BE4, 59.5f, -29.0f, D_801E6BE8,
        D_801E6BEC, D_801E6BF0, temp, temp) != 0) {
        root = (struct func_801E1FA8_StructNode **)D_801DAB14;
        ROOT->unk8->unk24->unk2C->unk4 = 9.0f;
        ROOT->unk8->unk24->unk2C->unk8 = 0.0f;
        ROOT->unk8->unk24->unk2C->unkC = -2.0f;
        ROOT->unk8->unk24->unk2C->unk12 = 0x13D2;
        D_8038C158();
        return 6;
    }
    return 5;
}


extern f32 D_801E6BF4;
extern f32 D_801E6BF8;
extern f32 D_801E6BFC;
extern f32 D_801E6C00;
extern f32 D_801E6C04;
extern f32 D_801E6C08;

s32 func_801E20F4(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  f32 d;
  a = D_801E6BF4;
  b = D_801E6BF8;
  c = D_801E6BFC;
  if (1)
  {
  }
  d = 71.0f;
  if (D_8038C17C(0.0f, 1.5f, 9.1f, 5.4f, D_801E6C00, D_801E6C04, D_801E6C08, -13.0f, a, b, c, a, b, c, d, d) != 0)
  {
    D_8038C158();
    return 7;
  }
  return 6;
}


extern f32 D_801E6C0C;
extern f32 D_801E6C10;
extern f32 D_801E6C14;
extern f32 D_801E6C18;
extern f32 D_801E6C1C;
extern f32 D_801E6C20;
extern f32 D_801E6C24;
extern f32 D_801E6C28;
extern f32 D_801E6C2C;

s32 func_801E21C0(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.5f, -34.3f, 7.1f, 25.0f, -35.0f, D_801E6C0C, D_801E6C10, D_801E6C14, D_801E6C18, D_801E6C1C, D_801E6C20, 23.5f, D_801E6C24, D_801E6C28, D_801E6C2C) != 0) {
        D_8038C158();
        return 8;
    }
    return 7;
}

s32 func_801E22AC(s32 arg0, s32 arg1);
extern f32 D_801E6C30;
extern f32 D_801E6C34;
extern f32 D_801E6C38;
extern f32 D_801E6C3C;
extern f32 D_801E6C40;
extern f32 D_801E6C44;
extern f32 D_801E6C48;
extern f32 D_801E6C4C;

s32 func_801E22AC(s32 arg0, s32 arg1) {
    f32 a = D_801E6C30;
    f32 b = D_801E6C34;
    f32 c = D_801E6C38;
    f32 d = D_801E6C3C;
    if (D_8038C17C(0.0f, 2.0f, -68.0f, 27.9f, D_801E6C40, D_801E6C44, D_801E6C48, D_801E6C4C, a, b, c, a, b, c, d, d) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}


extern f32 D_801E6C50;
extern f32 D_801E6C54;
extern f32 D_801E6C58;
extern f32 D_801E6C5C;
extern f32 D_801E6C60;
extern f32 D_801E6C64;
extern f32 D_801E6C68;
extern f32 D_801E6C6C;
extern f32 D_801E6C70;
extern f32 D_801E6C74;
extern f32 D_801E6C78;
extern f32 D_801E6C7C;

s32 func_801E2374(s32 arg0, s32 arg1) {
    f32 v = D_801E6C50;
    if (D_8038C17C(0.0f, D_801E6C54, -10.8f, 96.0f, D_801E6C58, D_801E6C5C, D_801E6C60, D_801E6C64, D_801E6C68, D_801E6C6C, D_801E6C70, D_801E6C74, D_801E6C78, D_801E6C7C, v, v) != 0) {
        D_8038C158();
        return 0xA;
    }
    return 9;
}


extern f32 D_801E6C80;
extern f32 D_801E6C84;
extern f32 D_801E6C88;
extern f32 D_801E6C8C;
extern f32 D_801E6C90;
extern f32 D_801E6C94;
extern f32 D_801E6C98;
extern f32 D_801E6C9C;

s32 func_801E2454(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, -32.6f, 16.4f, D_801E6C80, -34.0f, D_801E6C84, D_801E6C88, D_801E6C8C, D_801E6C90, D_801E6C94, D_801E6C98, D_801E6C9C, 61.5f, 32.5f, 29.5f) != 0) {
        D_8038C158();
        return 0xB;
    }
    return 0xA;
}

extern f32 D_801E6CA0;
extern f32 D_801E6CA4;
extern f32 D_801E6CA8;
extern f32 D_801E6CAC;
extern f32 D_801E6CB0;
extern f32 D_801E6CB4;
extern f32 D_801E6CB8;
extern f32 D_801E6CBC;
extern f32 D_801E6CC0;

typedef struct func_801E2540_StructC { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 h12; } func_801E2540_StructC;
typedef struct func_801E2540_StructB { u8 pad[0x2C]; func_801E2540_StructC *p2C; } func_801E2540_StructB;
typedef struct func_801E2540_StructA { u8 pad[0x24]; func_801E2540_StructB *p24; } func_801E2540_StructA;
typedef struct func_801E2540_StructR { u8 pad[8]; func_801E2540_StructA *p8; } func_801E2540_StructR;

#define ROOT (*(func_801E2540_StructR **)D_801DAB14)

s32 func_801E2540(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.5f, -73.8f, 34.9f, D_801E6CA0, D_801E6CA4, D_801E6CA8, D_801E6CAC, -58.0f, D_801E6CB0, D_801E6CB4, D_801E6CB8, 20.0f, D_801E6CBC, 41.5f, D_801E6CC0) != 0) {
        ROOT->p8->p24->p2C->f4 = -46.0f;
        ROOT->p8->p24->p2C->f8 = 8.0f;
        ROOT->p8->p24->p2C->fC = 58.0f;
        ROOT->p8->p24->p2C->h12 = 0xE0B;
        D_8038C158();
        return 0xC;
    }
    return 0xB;
}


extern f32 D_801E6CC4;
extern f32 D_801E6CC8;
extern f32 D_801E6CCC;
extern f32 D_801E6CD0;
extern f32 D_801E6CD4;
extern f32 D_801E6CD8;
extern f32 D_801E6CDC;
extern f32 D_801E6CE0;
extern f32 D_801E6CE4;

s32 func_801E2698(s32 arg0, s32 arg1) {
    f32 v0;
    f32 v1;
    f32 v2;
    f32 v3;

    v0 = D_801E6CC4;
    v1 = D_801E6CC8;
    v2 = D_801E6CCC;
    v3 = D_801E6CD0;
    if (D_8038C17C(0.0f, 1.0f, v0, v1, v2, v0, v1, v2, D_801E6CD4, D_801E6CD8,
                   D_801E6CDC, -53.5f, D_801E6CE0, D_801E6CE4, v3, v3) != 0) {
        D_8038C158();
        return 0xD;
    }
    return 0xC;
}


extern f32 D_801E6CE8;
extern f32 D_801E6CEC;
extern f32 D_801E6CF0;
extern f32 D_801E6CF4;
extern f32 D_801E6CF8;
extern f32 D_801E6CFC;
extern f32 D_801E6D00;
extern f32 D_801E6D04;
extern f32 D_801E6D08;

s32 func_801E276C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, -54.9f, 61.5f, D_801E6CE8, D_801E6CEC, D_801E6CF0, D_801E6CF4, -40.0f, D_801E6CF8, D_801E6CFC, D_801E6D00, D_801E6D04, D_801E6D08, 50.5f, 50.5f)) {
        D_8038C158();
        return 0xE;
    }
    return 0xD;
}


extern s32 D_801E68E0;
extern f32 D_801E6D0C;
extern f32 D_801E6D10;
extern f32 D_801E6D14;
extern f32 D_801E6D18;
extern f32 D_801E6D1C;
extern f32 D_801E6D20;

s32 func_801E284C(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, -30.3f, 39.9f, 40.0f, D_801E6D0C, D_801E6D10, D_801E6D14, -43.5f, D_801E6D18, 52.0f, -48.0f, D_801E6D1C, D_801E6D20, 50.5f, 50.5f) != 0) {
        D_801E68E0 = 0;
        return 0xF;
    }
    return 0xE;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E292C.s")

extern f32 D_801E6D54;
extern f32 D_801E6D58;
extern f32 D_801E6D5C;
extern f32 D_801E6D60;
extern f32 D_801E6D64;
extern f32 D_801E6D68;
extern f32 D_801E6D6C;

s32 func_801E2BD8(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 5.0f, -62.9f, 156.9f, 64.0f, D_801E6D54, 195.0f, 52.0f, D_801E6D58, D_801E6D5C, D_801E6D60, D_801E6D64, D_801E6D68, D_801E6D6C, 50.5f, 50.5f) != 0) {
        return 0x11;
    }
    return 0x10;
}


s32 func_801E2CAC(s32 arg0, s32 arg1) {
    return 17;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E2CBC(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801E6934;

void func_801E2CF8(void)
{
  s32 temp_t7;
  func_801CCEC8(0, *(((s8 *) (&D_801E6934)) + 3), 0, 0);
  ;
  if ((D_801E6934 += 4) >= 0x70)
  {
    D_801E6934 = 0x10;
  }
}


extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E2D50(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, -0x64);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x19, 0x40);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801E6934 = 0x10;
    return 2;
}


s32 func_801E2E0C(s32 arg0, s32 arg1) {
    func_801E2CF8();
    return 0x3;
}


s32 func_801E2E34(s32 arg0, s32 arg1) {
    func_801E2CF8();
    return 0x4;
}


s32 func_801E2E5C(s32 arg0, s32 arg1) {
    func_801E2CF8();
    return 0x5;
}


s32 func_801E2E84(s32 arg0, s32 arg1) {
    func_801E2CF8();
    return 0x5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E2EAC(s32 arg0, s32 arg1) {
    func_801C2420(0x443, func_8038DD54 + 0x14);
    return 1;
}


extern void func_80005E44(s32 a0, void *a1);
extern void func_80006214(s32 a0);
extern void func_8012C89C(s32 a0, s32 a1, s32 a2, s32 a3);
extern u8 D_8017AE98[];
extern u8 D_8038D840[];
extern s32 D_8038D850;
extern struct func_801E2EE0_Obj **D_8038D854;

struct func_801E2EE0_Obj {
    u8 pad0[0x2C];
    struct func_801E2EE0_Data *unk2C;
};
struct func_801E2EE0_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
    u8 pad14[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 pad24[0xC];
    u8 *unk30;
};

s32 func_801E2EE0(s32 arg0, s32 arg1) {
    func_80005E44(D_8038D850, D_8038D840);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0x443, 0);
    (*D_8038D854)->unk2C->unk4 = 0.0f;
    (*D_8038D854)->unk2C->unk8 = 0.0f;
    (*D_8038D854)->unk2C->unkC = 0.0f;
    (*D_8038D854)->unk2C->unk18 = 1.0f;
    (*D_8038D854)->unk2C->unk1C = 1.0f;
    (*D_8038D854)->unk2C->unk20 = 1.0f;
    (*D_8038D854)->unk2C->unk12 = 0;
    (*D_8038D854)->unk2C->unk30 = D_8017AE98;
    return 2;
}


s32 func_801E2FD8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E2FE8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E2FF8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3008(s32 arg0, s32 arg1) {
    return 5;
}


struct func_801E3018_Struct {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
};

extern void D_8038BA70(void);
extern void func_8038BA8C(void);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern struct func_801E3018_Struct D_8038DF70;

s32 func_801E3018(s32 arg0, s32 arg1) {
    func_801C2420(0x444, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x263, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0xA7, &func_8038DDD4[4]);
    D_8038BA70();
    D_8038DF70.unk4 = 0x3000;
    if (func_801C2570(0x43C, &D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70.unk10 = 0xE000;
    if (func_801C2570(0x2DD, (u8 *)&D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801E30F0_Struct2 {
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
} func_801E30F0_Struct2;

typedef struct func_801E30F0_Struct1 {
    u8 pad0[0x30];
    func_801E30F0_Struct2 *unk30;
} func_801E30F0_Struct1;

extern s32 D_8038D8CC;
extern u8 D_801E6978[];
extern u8 D_801D9040[];
extern u8 D_801DA198[];
extern void *D_8038D8D0;

#define OBJ801E30F0 ((func_801E30F0_Struct1 **)D_8038D8D0)

s32 func_801E30F0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 7; i++) {
        func_80005E44(D_8038D8CC, D_801E6978);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x444, 1);
    func_8012C89C(D_8038D8CC, 1, 0x444, 2);
    func_8012C89C(D_8038D8CC, 2, 0x263, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    func_8012C89C(D_8038D8CC, 4, 0x263, 0);
    func_8012C89C(D_8038D8CC, 5, 0x267, 0);
    func_8012C89C(D_8038D8CC, 6, 0x444, 0);
    OBJ801E30F0[0]->unk30->unk4 = -25.0f;
    OBJ801E30F0[0]->unk30->unk8 = 5.0f;
    OBJ801E30F0[0]->unk30->unkC = -77.0f;
    OBJ801E30F0[0]->unk30->unk12 = 0;
    OBJ801E30F0[0]->unk30->unk18 = 1.0f;
    OBJ801E30F0[0]->unk30->unk1C = 1.0f;
    OBJ801E30F0[0]->unk30->unk20 = 1.0f;
    OBJ801E30F0[1]->unk30->unk4 = 40.0f;
    OBJ801E30F0[1]->unk30->unk8 = 5.0f;
    OBJ801E30F0[1]->unk30->unkC = -77.0f;
    OBJ801E30F0[1]->unk30->unk12 = 0;
    OBJ801E30F0[1]->unk30->unk18 = 1.0f;
    OBJ801E30F0[1]->unk30->unk1C = 1.0f;
    OBJ801E30F0[1]->unk30->unk20 = 1.0f;
    OBJ801E30F0[2]->unk30->unk4 = -49.0f;
    OBJ801E30F0[2]->unk30->unk8 = 9.0f;
    OBJ801E30F0[2]->unk30->unkC = 49.0f;
    OBJ801E30F0[2]->unk30->unk12 = 0x1000;
    OBJ801E30F0[2]->unk30->unk18 = 1.0f;
    OBJ801E30F0[2]->unk30->unk1C = 1.0f;
    OBJ801E30F0[2]->unk30->unk20 = 1.0f;
    OBJ801E30F0[3]->unk30->unk4 = -49.0f;
    OBJ801E30F0[3]->unk30->unk8 = 9.0f;
    OBJ801E30F0[3]->unk30->unkC = 49.0f;
    OBJ801E30F0[3]->unk30->unk12 = 0x1000;
    OBJ801E30F0[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ801E30F0[3]->unk30->unk24 = 0x100;
    OBJ801E30F0[3]->unk30->unk48 = 0;
    OBJ801E30F0[3]->unk30->unk49 = 0;
    OBJ801E30F0[3]->unk30->unk4A = 0;
    OBJ801E30F0[3]->unk30->unk4B = 0xFF;
    OBJ801E30F0[4]->unk30->unk4 = -49.0f;
    OBJ801E30F0[4]->unk30->unk8 = 97.0f;
    OBJ801E30F0[4]->unk30->unkC = -49.0f;
    OBJ801E30F0[4]->unk30->unk12 = 0x800;
    OBJ801E30F0[4]->unk30->unk18 = 1.0f;
    OBJ801E30F0[4]->unk30->unk1C = 1.0f;
    OBJ801E30F0[4]->unk30->unk20 = 1.0f;
    OBJ801E30F0[5]->unk30->unk4 = -49.0f;
    OBJ801E30F0[5]->unk30->unk8 = 97.0f;
    OBJ801E30F0[5]->unk30->unkC = -49.0f;
    OBJ801E30F0[5]->unk30->unk12 = 0x800;
    OBJ801E30F0[5]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    OBJ801E30F0[5]->unk30->unk24 = 0x100;
    OBJ801E30F0[5]->unk30->unk48 = 0;
    OBJ801E30F0[5]->unk30->unk49 = 0;
    OBJ801E30F0[5]->unk30->unk4A = 0;
    OBJ801E30F0[5]->unk30->unk4B = 0xFF;
    OBJ801E30F0[6]->unk30->unk4 = 0.0f;
    OBJ801E30F0[6]->unk30->unk8 = 0.0f;
    OBJ801E30F0[6]->unk30->unkC = 0.0f;
    OBJ801E30F0[6]->unk30->unk12 = 0;
    OBJ801E30F0[6]->unk30->unk30 = (s32)D_801DA198 | 0x40000000;
    OBJ801E30F0[6]->unk30->unk24 = 0x100;
    OBJ801E30F0[6]->unk30->unk48 = 0;
    OBJ801E30F0[6]->unk30->unk49 = 0;
    OBJ801E30F0[6]->unk30->unk4A = 0;
    OBJ801E30F0[6]->unk30->unk4B = 0xFF;
    func_8038D28C(0x6B6);
    return 2;
}


extern void func_801C0D04(s32 arg0, s32 arg1);

s32 func_801E3624(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_8038D28C(0x249);
        func_801C0D04(3, 0);
        return 3;
    }
    return 2;
}

extern f64 func_80034C24();
extern s32 func_801C0DE4(s32 arg0, s32 arg1, s32 arg2);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);

struct func_801E3678_Struct1 {
    u8 pad0[4];
    f32 unk4;
};
struct func_801E3678_Struct2 {
    u8 pad0[0x30];
    struct func_801E3678_Struct1 *unk30;
};

extern f64 D_801E6D70;

s32 func_801E3678(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 0, 0x40F00000) != 0) {
        func_801C0EB0(3, 0);
        return 4;
    }
    temp_ret = func_801C0F18(3, 0);
    (*(struct func_801E3678_Struct2 **)D_8038D8D0)->unk30->unk4 = (f32) ((((f32) (func_80034C24(temp_ret) / D_801E6D70)) / 7.5f) * 20.0f + -25.0f);
    return 3;
}


s32 func_801E3724(s32 arg0, s32 arg1) {
    return 4;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E3734(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3778(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801C0D04(3, 1);
        return 2;
    }
    return 1;
}


struct func_801E37C0_Struct1 {
    u8 pad0[4];
    struct func_801E37C0_Struct2 *unk4;
};
struct func_801E37C0_Struct2 {
    u8 pad0[0x30];
    struct func_801E37C0_Struct3 *unk30;
};
struct func_801E37C0_Struct3 {
    u8 pad0[4];
    f32 unk4;
};

extern f64 D_801E6D78;

s32 func_801E37C0(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(3, 1, 0x40F00000) != 0) {
        func_801C0EB0(3, 1);
        return 4;
    }
    temp_ret = func_801C0F18(3, 1);
    ((struct func_801E37C0_Struct1 *) D_8038D8D0)->unk4->unk30->unk4 = (f32) (((f32) (func_80034C24(temp_ret) / D_801E6D78) / 7.5f) * -20.0f + 40.0f);
    return 2;
}


s32 func_801E386C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E387C(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E388C(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern f32 D_801E69B0;

s32 func_801E38D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_8038D28C(0x24B);
        func_801C0D04(3, 2);
        D_801E69B0 = *(f32 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x8) + 0x30) + 0x8);
        return 2;
    }
    return 1;
}


struct func_801E3944_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801E3944_Struct2 {
    u8 pad0[0x30];
    struct func_801E3944_Struct1 *unk30;
};
struct func_801E3944_Struct3 {
    u8 pad0[0x8];
    struct func_801E3944_Struct2 *unk8;
};

extern f64 D_801E6D80;

s32 func_801E3944(s32 arg0, s32 arg1) {
    f64 temp_f0;

    if (func_801C0DE4(3, 2, 0x41200000) != 0) {
        func_801C0EB0(3, 2);
        return 3;
    }
    temp_f0 = func_80034C24(func_801C0F18(3, 2));
    ((struct func_801E3944_Struct3 *) D_8038D8D0)->unk8->unk30->unk8 = (f32) ((((D_801E69B0 + 121.0f) - D_801E69B0) * ((f32) (temp_f0 / D_801E6D80) / 10.0f)) + D_801E69B0);
    return 2;
}


s32 func_801E39F8(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3A08(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E3A4C_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_801E3A4C_Struct2 {
    u8 pad0[0x30];
    struct func_801E3A4C_Struct1 *unk30;
};

struct func_801E3A4C_Struct3 {
    u8 pad0[0xC];
    struct func_801E3A4C_Struct2 *unkC;
};

extern f32 D_801E69C4;

s32 func_801E3A4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x11EDD81) != 0) {
        func_801C0D04(3, 3);
        D_801E69C4 = ((struct func_801E3A4C_Struct3 *) D_8038D8D0)->unkC->unk30->unk8;
        return 2;
    }
    return 1;
}


struct func_801E3AB4_Struct1 {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801E3AB4_Struct2 {
    u8 pad0[0x30];
    struct func_801E3AB4_Struct1 *unk30;
};
struct func_801E3AB4_Struct3 {
    u8 pad0[0xC];
    struct func_801E3AB4_Struct2 *unkC;
};

extern f64 D_801E6D88;

s32 func_801E3AB4(s32 arg0, s32 arg1) {
    f64 temp_f0;

    if (func_801C0DE4(3, 3, 0x41200000) != 0) {
        func_801C0EB0(3, 3);
        return 3;
    }
    temp_f0 = func_80034C24(func_801C0F18(3, 3));
    ((struct func_801E3AB4_Struct3 *) D_8038D8D0)->unkC->unk30->unk8 = (f32) ((((D_801E69C4 + 121.0f) - D_801E69C4) * ((f32) (temp_f0 / D_801E6D88) / 10.0f)) + D_801E69C4);
    return 2;
}


s32 func_801E3B68(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3B78(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3BBC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3BCC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3BDC(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3BEC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E3C30(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E3C40(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E3C50(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3C60(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E69F8;
extern s32 D_801E69FC;

void func_801E3CA4(void) {
    D_801E69F8 = 0;
    D_801E69FC = 0;
}


s32 func_801E3CB8() {
    f32 t;
    u8 v;

    t = (f32)(u32)D_801E69F8 / 30.0f;
    if (D_801E69FC != 0) {
        if (D_801E69FC == 1) goto l1;
        goto done;
    }
    v = (u32)(128.0f * t + 127.0f);
    goto done;
l1:
    v = (u32)(-128.0f * t + 255.0f);
done:
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x48) = v;
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x49) = v;
    *(u8 *)(*(u8 **)(*(u8 **)((u8 *)D_8038D8D0 + 0x18) + 0x30) + 0x4A) = v;
    D_801E69F8 = D_801E69F8 + 1;
    if ((u32)D_801E69F8 >= 0x1F) {
        D_801E69F8 = 0;
        D_801E69FC = D_801E69FC + 1;
        D_801E69FC = D_801E69FC & 1;
    }
}


s32 func_801E3ED8(s32 arg0, s32 arg1) {
    func_801E3CA4();
    return 0x2;
}


s32 func_801E3F00(s32 arg0, s32 arg1) {
    func_801E3CB8();
    return 0x2;
}


s32 func_801E3F28(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E3F38(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_801C7DB4(void);

s32 func_801E3F7C(s32 arg0, s32 arg1) {
    func_801C7DB4();
    func_8038D28C(0x248);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E3FAC.s")


s32 func_801E439C(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E43AC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern void func_801C4028(s32 a0, f32 a1, f32 a2, f32 a3, s32 a4, s32 a5, s32 a6, f32 a7, f32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15);
extern void func_8038C4D8(s32 a0, s32 a1);

s32 func_801E43F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF9020) != 0) {
        func_8038D28C(0x24A);
        func_801C4028(1, 41.0f, 167.0f, 32.0f, 0, 0xF5, 0x23, 8.0f, 8.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x20);
        func_8038C4D8(2, 0);
        return 2;
    }
    return 1;
}


s32 func_801E44B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x011EDD81) != 0) {
        func_8038D28C(0x24A);
        func_801C4028(1, -3.0f, 64.0f, 45.0f, 0x100, 0, 0, 4.0f, 4.0f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 3;
    }
    return 2;
}


s32 func_801E4568(s32 arg0, s32 arg1) {
    return 3;
}


void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DAD28[];
extern u8 D_801DAD2C[];
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E4578(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x2D, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DAD28);
    func_801CC4C0(1, D_801DAD2C);
    return 1;
}

extern u8 func_801DAAF0[];

extern void func_80005670(void *a0, void *a1);
extern void func_801CEDBC(s32 a0);
extern void func_801CEDC8(s32 a0);
extern void func_801CC530(void);
extern u8 D_801DAD14[];

s32 func_801E460C(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DAC30 + 0x2C);
    func_801CEDBC(0);
    func_801CEDC8(0);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 8), D_801DAD14);
    func_801CC530();
    return 2;
}

void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);

struct func_801E4674_Node {
    u8 pad0[0x8];
    struct func_801E4674_Mid *unk8;
};

struct func_801E4674_Mid {
    u8 pad0[0x24];
    struct func_801E4674_Obj *unk24;
};

struct func_801E4674_Obj {
    u8 pad0[0x2C];
    struct func_801E4674_Data *unk2C;
};

struct func_801E4674_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
};

s32 func_801E4674(s32 arg0, s32 arg1) {
    struct func_801E4674_Obj *temp_v0;

    temp_v0 = (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 9.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unk8 = 0.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unkC = -60.0f;
        (*(struct func_801E4674_Node **)D_801DAB14)->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 3;
    }
    return 2;
}

extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

extern s32 func_801CE2D0(s32 arg0, s32 arg1);
extern f64 D_801E6D98;

struct func_801E4744_A {
    u8 pad0[0x24];
    struct func_801E4744_B *unk24;
};
struct func_801E4744_B {
    u8 pad0[0x8];
    struct func_801E4744_C *unk8;
};
struct func_801E4744_C {
    u8 pad0[0x24];
    struct func_801E4744_D *unk24;
};
struct func_801E4744_D {
    u8 pad0[0x2C];
    struct func_801E4744_E *unk2C;
};
struct func_801E4744_E {
    u8 pad0[0xC];
    f32 unkC;
};

s32 func_801E4744(s32 arg0, s32 arg1) {
    u64 temp_ret;

    if (func_801C0DE4(4, 0, 0x40000000) != 0) {
        func_801C0EB0(4, 0);
        func_801CC4D8(0, 0x0348005E, 0, 0, 8.0f);
        return 4;
    }
    temp_ret = func_801C0F18(4, 0);
    ((struct func_801E4744_A *)func_801DAAF0)->unk24->unk8->unk24->unk2C->unkC =
        (f32) (((f32) (func_80034C24(temp_ret) / D_801E6D98) * 0.5f * 58.0f) + -60.0f);
    if ((func_801CE2D0(0x01680040, 9) != 0) || (func_801CE2D0(0x01680040, 0x12) != 0)) {
        func_8038D28C(0x677);
    }
    return 3;
}

s32 func_801CE274();

s32 func_801E4850(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_8038D28C(0x677);
        func_801CC470(0, 0x0348005E, 0, 0, 6.0f);
        return 5;
    }
    return 4;
}


extern s32 func_801CE284();
extern s32 D_801E6A58;

s32 func_801E48B4(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        D_801E6A58 = 0;
        return 6;
    }
    return 5;
}


s32 func_801E48F0(s32 arg0, s32 arg1) {
    s32 v = D_801E6A58;
    if (v == 0) goto c0;
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v == 3) goto c3;
    return 6;
c0:
    func_801CC4D8(0, 0x0410002B, 0, 0, 8.0f);
    D_801E6A58 = 1;
    goto end;
c1:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0410002B, 0, 0, 5.0f);
        D_801E6A58 = 2;
    }
    goto end;
c2:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0410002E, 0, 0, 8.0f);
        D_801E6A58 = 3;
    }
    goto end;
c3:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0410002E, 0, 0, 4.0f);
        return 7;
    }
end:
    return 6;
}



s32 func_801E4A30(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348005E, 0, 0, 8.0f);
        return 8;
    }
    return 7;
}



s32 func_801E4A88(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348005E, 0, 0x100, 1.0f);
        return 9;
    }
    return 8;
}


s32 func_801E4AE0(s32 arg0, s32 arg1) {
    return 10;
}


struct func_801E4AF0_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_801E4AF0_Struct *func_801BF6B0(s32 arg0);

s32 func_801E4AF0(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 6) {
        func_801CC4D8(0, 0x04100029, 0, 0, 5.0f);
        return 0xB;
    }
    return 0xA;
}


s32 func_801E4B54(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x04100029, 0, 0, 1.0f);
        return 0xC;
    }
    return 0xB;
}


s32 func_801E4BAC(s32 arg0, s32 arg1) {
    return 13;
}



s32 func_801E4BBC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB4D110) != 0) {
        func_801CC470(0, 0x01680040, 0, 1, 1.0f);
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1BD2;
        return 0xE;
    }
    return 0xD;
}



s32 func_801E4C3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xC7E3E0) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x4) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0x8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x24) + 0x2C) + 0xC) = -2.0f;
        func_801CC470(0, 0x01680040, 0, 0x1100, 1.0f);
        func_801C0D04(4, 0);
        return 0xF;
    }
    return 0xE;
}


extern void func_8038D33C(f32, f32, f32, s32, f32, f32);
extern f64 D_801E6DA0;
extern f32 D_801E6DA8;
extern f32 D_801E6DAC;
extern f32 D_801E6DB0;
extern f32 D_801E6DB4;

struct func_801E4D04_StructData {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_801E4D04_StructObj {
    u8 pad[0x2C];
    struct func_801E4D04_StructData *data;
};
struct func_801E4D04_StructMid {
    u8 pad[0x24];
    struct func_801E4D04_StructObj *obj;
};
struct func_801E4D04_StructNode {
    u8 pad[8];
    struct func_801E4D04_StructMid *mid;
};
#define NODE (*(struct func_801E4D04_StructNode **)D_801DAB14)

s32 func_801E4D04(s32 arg0, s32 arg1) {
    f32 t;
    struct func_801E4D04_StructData *data;

    if (func_801C0DE4(4, 0, 0x40133334)) {
        func_801C0EB0(4, 0);
        NODE->mid->obj->data->x = -46.0f;
        NODE->mid->obj->data->y = 8.0f;
        NODE->mid->obj->data->z = 58.0f;
        NODE->mid->obj->data->angle = 0x1BD2;
        func_801CC470(0, 0x0348005F, 0, 1, 1.0f);
        return 0x10;
    }
    t = (f32)(func_80034C24(func_801C0F18(4, 0)) / D_801E6DA0) / D_801E6DA8;
    NODE->mid->obj->data->x = t * D_801E6DAC + 9.0f;
    NODE->mid->obj->data->z = t * D_801E6DB0 + -2.0f;
    if (func_801CE2D0(0x01680040, 9) || func_801CE2D0(0x01680040, 0x12)) {
        data = NODE->mid->obj->data;
        func_8038D33C(data->x, data->y, data->z, 0x677, D_801E6DB4, 1.0f);
    }
    return 0xF;
}


extern s32 D_801E6A5C;

s32 func_801E4EF4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7E1) != 0) {
        func_801CC470(0, 0x0348005F, 0, 0, 3.0f);
        D_801E6A5C = 0;
        return 0x11;
    }
    return 0x10;
}


struct func_801E4F60_Struct_Node {
    u8 pad0[0x8];
    struct func_801E4F60_Struct_Mid *unk8;
};
struct func_801E4F60_Struct_Mid {
    u8 pad0[0x24];
    struct func_801E4F60_Struct_Obj *unk24;
};
struct func_801E4F60_Struct_Obj {
    u8 pad0[0x2C];
    struct func_801E4F60_Struct_Data *unk2C;
};
struct func_801E4F60_Struct_Data {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
};

extern f32 D_801E6A60;

s32 func_801E4F60(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0xC) {
        D_801E6A58 = 0;
        D_801E6A60 = (*(struct func_801E4F60_Struct_Node **)D_801DAB14)->unk8->unk24->unk2C->unk8;
        func_801C0D04(4, 0);
        return 0x12;
    }
    if (D_801E6A5C == 0x12) {
        func_8038D28C(0x677);
    }
    D_801E6A5C = D_801E6A5C + 1;
    return 0x11;
}

extern f64 D_801E6DB8;

s32 func_801E5008(s32 arg0, s32 arg1)
{
  u64 r;
  f32 f;
  s32 v;
  f32 new_var;
  v = D_801E6A58;
  if (D_801E6A58 == 0)
  {
    goto l0;
  }
  if (v == 1)
  {
    goto l1;
  }
  if (v != 2)
  {
    goto def;
  }
  goto l2;
  l0:
  if (func_801CE284() != 0)
  {
    func_801CC4D8(0, 0x0348005E, 0, 0, 5.0);
    D_801E6A58 = 1;
  }

  if (D_801E6A5C == 0x12)
  {
    func_8038D28C(0x677);
  }
  D_801E6A5C = D_801E6A5C + 1;
  goto join;
  l1:
  if (func_801CE274() == 0)
  {
    func_801CC470(0, 0x0348005E, 0, 0x100, 6.0f);
    D_801E6A58 = 2;
  }

  goto join;
  l2:
  if (func_801C0B8C(0x01B77401))
  {
    func_801C0EB0(4, 0);
 return 0x13;
  }

  join:
  def:
  r = func_801C0F18(4, 0);


  ;
  *((f32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) ((*((s32 *) (func_801DAAF0 + 0x24))) + 8))) + 0x24))) + 0x2C))) + 8)) = ((((f32) (func_80034C24(r) / D_801E6DB8)) / 10.0f) * ((D_801E6A60 + 121.0f) - (new_var = D_801E6A60))) + D_801E6A60;
  return 0x12;
}


s32 func_801E5194(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E51A4(s32 arg0, s32 arg1) {
    return 20;
}



s32 func_801E51B4(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E51F8_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E51F8_Struct_E {
    u8 pad[0x2C];
    struct func_801E51F8_Struct_F *unk2C;
};
struct func_801E51F8_Struct_D {
    u8 pad[0x24];
    struct func_801E51F8_Struct_E *unk24;
};
struct func_801E51F8_Struct_C {
    u8 pad[0x8];
    struct func_801E51F8_Struct_D *unk8;
};
struct func_801E51F8_Struct_B {
    u8 pad[0x8];
    struct func_801E51F8_Struct_C *unk8;
};
struct func_801E51F8_Struct_A {
    struct func_801E51F8_Struct_B *unk0;
};

s32 func_801E51F8(s32 arg0, s32 arg1) {
    struct func_801E51F8_Struct_E *temp_v0;

    temp_v0 = ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -8.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unkC = -49.0f;
        ((struct func_801E51F8_Struct_A *)D_801DAB14)->unk0->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x04100000, 0, 0x1100, 3.0f);
        func_801C0D04(4, 1);
        return 2;
    }
    return 1;
}


extern f64 D_801E6DC0;
extern s32 func_801CEE30(s32 arg0, s32 arg1);

struct func_801E52D4_A {
    u8 pad0[0x8];
    struct func_801E52D4_B *unk8;
};
struct func_801E52D4_B {
    u8 pad0[0x8];
    struct func_801E52D4_C *unk8;
};
struct func_801E52D4_C {
    u8 pad0[0x24];
    struct func_801E52D4_D *unk24;
};
struct func_801E52D4_D {
    u8 pad0[0x2C];
    struct func_801E52D4_E *unk2C;
};
struct func_801E52D4_E {
    u8 pad0[0xC];
    f32 unkC;
};

s32 func_801E52D4(s32 arg0, s32 arg1) {
    u64 temp;

    if (func_801C0DE4(4, 1, 0x40000000) != 0) {
        func_801C0EB0(4, 1);
        return 3;
    }
    temp = func_801C0F18(4, 1);
    (*(struct func_801E52D4_A **)(func_801DAAF0 + 0x24))->unk8->unk8->unk24->unk2C->unkC =
        (f32)(func_80034C24(temp) / D_801E6DC0) * 0.5f * 79.0f + -49.0f;
    if (func_801CEE30(0x4100000, 0x1B) != 0 || func_801CEE30(0x4100000, 0x36) != 0) {
        func_8038D28C(0x677);
    }
    return 2;
}



s32 func_801E53B8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x8ADAE0) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = -42.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 42.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)D_801DAB14 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0xB3E;
        func_801CC4D8(1, 0x02A80032, 0, 0, 5.0f);
        return 4;
    }
    return 3;
}


s32 func_801CEDD4(void);

s32 func_801E54A0(s32 arg0, s32 arg1) {
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80032, 0, 0x100, 3.0f);
        return 5;
    }
    return 4;
}


s32 func_801E54F8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5508(s32 arg0, s32 arg1) {
    u8 *v0;

    if (func_801C0B8C(0xEAFC40) != 0) {
        v0 = D_801DAB14;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x4) = -62.5f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x8) = 9.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0xC) = 64.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)v0 + 0x8) + 0x8) + 0x24) + 0x2C) + 0x12) = 0x1800;
        func_801CC470(1, 0x0348008E, 0, 1, 1.0f);
        return 7;
    }
    return 6;
}


extern s32 D_801E6AB8;

s32 func_801E55F0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF8B7E1) != 0) {
        func_801CC470(1, 0x0348008E, 0, 0, 2.0f);
        D_801E6AB8 = 0;
        return 8;
    }
    return 7;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file037/801E1BE0/func_801E565C.s")


s32 func_801E5A90(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5AA0(s32 arg0, s32 arg1) {
    return 10;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E5AB0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x7A120) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E5B38(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E5B68(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x198EF81) != 0) {
        return 3;
    }
    return 2;
}


s32 func_801E5BA4(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0x3;
    }
    D_80089354 = 0;
    D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
    func_8038D28C(8);
    return 0x4;
}



s32 func_801E5C18(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 4;
    }
    return 5;
}


s32 func_801E5C40(s32 arg0, s32 arg1) {
    return 5;
}

