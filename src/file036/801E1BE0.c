#include "common.h"

typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void func_801BF628(s32 arg0, s32 *arg1);
s32 func_801C0B8C(u64 time);
s32 func_801C0B8C(u64 time);
extern void func_8038BE98(f32);
extern void func_801C7A74(void *arg0);
extern void func_8038BED4(void);
typedef struct func_801E1BE0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
} func_801E1BE0_Struct;
extern void func_801C7944(void);
extern void func_801C7964(f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    s32 sp28[0x1F8 / 4];

    func_801BF628(3, sp28);
    if (sp28[3] < 2) {
        return 0;
    }
    func_801C7944();
    func_801C7964(10.0f, 50.0f, 80.0f, 70.0f, 1.0f, 2.0999999f, 0.100000001f, 0.200000003f);
    ((func_801E1BE0_Struct *)&D_801E5200)->unk0 = 10.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk4 = 50.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk8 = 80.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unkC = 1.0f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk10 = 2.0999999f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk14 = 0.100000001f;
    ((func_801E1BE0_Struct *)&D_801E5200)->unk18 = 0.200000003f;
    func_801C7A74(&D_801E5200);
    if (func_801C0B8C(0) != 0) {
        func_8038BE98(20.0f);
        func_8038BED4();
        return 1;
    }
    return 0;
}


extern s32 func_8038BEF8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E1D0C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.5f, 3.4f, 65.3f, 257.899994f, 3.5999999f, 56.0f, 258.0f, 8.60000038f, 62.5f, 82.6999969f, 8.80000019f, 53.2000008f, 82.9000015f) != 0) {
        D_801E5200.unk0 = 100.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 10.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        func_8038BE98(24.2999992f);
        func_8038BED4();
        return 2;
    }
    return 1;
}



s32 func_801E1E3C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 205.7f, 9.8f, (-82.5999985f), 213.199997f, 9.5f, (-74.1999969f), 23.7999992f, 43.0f, 83.5f, 18.6000004f, 42.7999992f, 76.8000031f) != 0) {
        func_8038BE98(13.5f);
        func_8038BED4();
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = 0.0399999991f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        return 4;
    }
    return 2;
}


s32 func_801E1F68(s32 arg0, s32 arg1) {
    return 3;
}


extern void D_8038C158(void);

s32 func_801E1F78(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 59.0f, 13.2f, 10.0f, 57.7999992f, 13.3000002f, 9.60000038f, 47.0999985f, 15.5f, 46.5999985f, 45.9000015f, 15.6000004f, 46.2000008f) != 0) {
        D_8038C158();
        return 5;
    }
    return 4;
}

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2048(s32 arg0, s32 arg1) {
    f32 a = 9.60000038f, b = 13.8000002f, c = 16.1000004f;
    if (D_8038C17C(0.0f, 4.5f, 58.6f, b, 9.80000019f, 57.7000008f, b, a, 46.7000008f, c, 46.4000015f, 45.7999992f, c, 46.2000008f, a, a) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -100.0f;
        D_801E5200.unkC = 1.0f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 6;
    }
    return 5;
}


s32 func_801E2168(s32 arg0, s32 arg1) {
    f32 k = 24.2999992f;
    if (D_8038C17C(0.0f, 2.0f, 42.8f, 24.4f, 23.8999996f, 42.7000008f, 13.3999996f, 23.7999992f, 38.0999985f, 25.5f, (-103.699997f), 38.0f, 14.6000004f, (-103.800003f), k, k) != 0) {
        ((f32 *)&D_801E5200)[1] = 50.0f;
        ((f32 *)&D_801E5200)[2] = 50.0f;
        ((f32 *)&D_801E5200)[0] = 40.0f;
        ((f32 *)&D_801E5200)[3] = 0.5f;
        ((f32 *)&D_801E5200)[5] = 0.0399999991f;
        ((f32 *)&D_801E5200)[6] = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 7;
    }
    return 6;
}



s32 func_801E2294(s32 arg0, s32 arg1) {
    f32 a = 13.6000004f;
    f32 b = 46.2999992f;
    f32 c = 15.8999996f;
    f32 d = 10.1000004f;
    if (D_8038C17C(0.0f, 4.5f, 58.2f, a, 9.69999981f, 57.7000008f, a, 9.60000038f, b, c, b, 45.7999992f, c, 46.2000008f, d, d) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 70.0f;
        D_801E5200.unkC = 1.5f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 8;
    }
    return 7;
}



s32 func_801E23B4(s32 arg0, s32 arg1) {
    f32 v = 37.7000008f;
    if (D_8038C17C(0.0f, 4.0f, 50.9f, -0.9f, 20.1000004f, 40.2999992f, (-1.70000005f), 20.2000008f, 45.0999985f, 18.8999996f, 46.0f, 41.9000015f, 17.7999992f, 46.9000015f, v, v) != 0) {
        D_8038C158();
        return 9;
    }
    return 8;
}


s32 func_801E2498(s32 arg0, s32 arg1) {
    f32 a = 46.0999985f;
    f32 b = 18.2999992f;
    f32 c = 15.6999998f;
    if (D_8038C17C(0.0f, 3.0f, 60.0f, -1.9f, 25.7999992f, 45.7999992f, 0.800000012f, 20.0f, a, b, 48.0f, a, b, 48.2999992f, c, c) != 0) {
        f32 *p = (f32 *)&D_801E5200;
        p[1] = 50.0f;
        p[2] = 50.0f;
        p[0] = 40.0f;
        p[3] = 0.5f;
        p[5] = 0.0399999991f;
        p[6] = 0.200000003f;
        func_801C7A74(p);
        D_8038C158();
        return 0xA;
    }
    return 9;
}


s32 func_801E25B0(s32 arg0, s32 arg1) {
    f32 k = 10.1000004f;
    if (D_8038C17C(0.0f, 2.5f, 67.9f, 12.1f, -12.0f, 69.1999969f, 12.3000002f, (-13.1999998f), 48.7000008f, 15.8000002f, 47.0999985f, 45.0f, 16.0f, 45.9000015f, k, k) != 0) {
        return 0xB;
    }
    return 0xA;
}

extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);


s32 func_801E2684(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x021DAFE0) != 0) {
        D_8038C158();
        return 0xC;
    }
    func_8038BE98(7.9000001f);
    func_8038BD50(57.4000015f, 14.1000004f, 9.5f);
    D_8038BD88(45.5f, 16.3999996f, 46.0f);
    return 0xB;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file036/801E1BE0/func_801E2708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file036/801E1BE0/func_801E27E4.s")

typedef struct func_801E2904_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2904_Struct;

s32 func_801E2904(s32 arg0, s32 arg1) {
    f32 a = 23.7000008f;
    f32 b = (-103.900002f);
    f32 c = 24.2999992f;
    if (D_8038C17C(0.0f, 3.0f, 44.9f, 12.5f, a, 44.7000008f, 14.5f, a, 40.2000008f, 13.6999998f, b, 40.0f, 15.6999998f, b, c, c) != 0) {
        ((func_801E2904_Struct *)&D_801E5200)->unk0 = 30.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk4 = 50.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk8 = -40.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unkC = 2.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk14 = 0.100000001f;
        ((func_801E2904_Struct *)&D_801E5200)->unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0xF;
    }
    return 0xE;
}


s32 func_801E2A24(s32 arg0, s32 arg1) {
    f32 k = 24.2999992f;
    if (D_8038C17C(0.0f, 5.0f, 62.0f, -0.3f, (-147.300003f), 62.5999985f, 9.89999962f, (-148.300003f), 53.7999992f, 12.3000002f, (-95.0999985f), 53.7000008f, 13.3999996f, (-94.8000031f), k, k) != 0) {
        D_801E5200.unk0 = 30.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -130.0f;
        D_801E5200.unkC = 1.20000005f;
        D_801E5200.unk14 = 0.100000001f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0x10;
    }
    return 0xF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file036/801E1BE0/func_801E2B54.s")


s32 func_801E2C20(s32 arg0, s32 arg1)
{
  f32 a;
  f32 b;
  f32 c;
  a = 46.4000015f;
  b = 16.7000008f;
  c = (-59.5999985f);
 if (0) { }
  if (D_8038C17C(0.0f, 3.0f, a, b, c, a, 16.5f, c, a, 16.8999996f, -97.5f, a, b, -97.5f, 9.19999981f, 9.19999981f) != 0)
  {
    D_801E5200.unk4 = 50.0f;
    D_801E5200.unk8 = 50.0f;
    D_801E5200.unk0 = 40.0f;
    D_801E5200.unkC = 0.5f;
    D_801E5200.unk14 = 0.0399999991f;
    D_801E5200.unk18 = 0.200000003f;
    func_801C7A74(&D_801E5200);
    D_8038C158();
    return 0x12;
  }
  return 0x11;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file036/801E1BE0/func_801E2D2C.s")





s32 func_801E2E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3CE04F7) != 0) {
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = 0.0399999991f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        return 0x14;
    }
    func_8038BE98(9.19999981f);
    func_8038BD50(46.4000015f, 16.7000008f, -59.6f);
    D_8038BD88(46.4000015f, 16.8999996f, -97.5f);
    return 0x13;
}



s32 func_801E2F18(s32 arg0, s32 arg1) {
    func_8038BE98(14.1999998f);
    func_8038BD50(52.0999985f, 15.6000004f, 25.3f);
    D_8038BD88(44.5f, 16.1000004f, 44.6f);
    return 0x15;
}


s32 func_801E2F80(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E2F90(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E2FA0(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E2FB0(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E2FC0(s32 arg0, s32 arg1) {
    return 25;
}


s32 func_801E2FD0(s32 arg0, s32 arg1) {
    return 26;
}


s32 func_801E2FE0(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E2FF0(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E3000(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E3010(s32 arg0, s32 arg1) {
    return 30;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E3020(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}


extern void func_801CCE0C(s32 arg0);
extern void func_801CCE50(s32 arg0, s32 arg1, s32 arg2);
extern void func_801CCE88(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_801E305C(s32 arg0, s32 arg1) {
    func_801CCE0C(1);
    func_801CCE88(0, 0, 0xFF, 0);
    func_801CCEC8(0, 0x64, 0, 0);
    func_801CCE50(0x66, 0x66, 0x66);
    return 2;
}


extern s32 D_801E4CC4;
extern s32 D_801E4CC8;

s32 func_801E30C0(s32 arg0, s32 arg1)
{
  s32 temp_t9;
  s32 temp_t7;
  s32 temp_v1;
  temp_v1 = D_801E4CC4;
  if (temp_v1 >= 0x15)
  {
    D_801E4CC4 = 0;
    ;
    if ((D_801E4CC8 = D_801E4CC8 ^ 1) != 0)
    {
      func_801CCE88(0, 0xFF, 0, 0);
      return 2;
    }
    func_801CCE88(0, 0, 0xFF, 0);
    return 2;
  }
  temp_t9 = temp_v1 + 1;
  D_801E4CC4 = temp_t9;
  return 2;
}


s32 func_801E3154(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E3164(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3174(s32 arg0, s32 arg1) {
    return 5;
}

void func_801C2420(s32 arg0, void *arg1);

extern u8 func_8038DD54[];

s32 func_801E3184(s32 arg0, s32 arg1) {
    func_801C2420(0xA1, func_8038DD54 + 0x14);
    return 1;
}


typedef struct func_801E31B8_Struct30 {
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
} func_801E31B8_Struct30;

typedef struct func_801E31B8_StructQ {
    u8 pad0[0x30];
    func_801E31B8_Struct30 *unk30;
} func_801E31B8_StructQ;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);

extern s32 D_8038D850;
extern s32 D_8038D854;
extern u8 D_8038D88C[];

s32 func_801E31B8(s32 arg0, s32 arg1) {
    func_801E31B8_StructQ ***pp;

    func_80005E44(D_8038D850, D_8038D88C);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0xA1, 0);
    pp = (func_801E31B8_StructQ ***)&D_8038D854;
    (**pp)->unk30->unk4 = 0.0f;
    (**pp)->unk30->unk8 = (-53.2999992f);
    (**pp)->unk30->unkC = (-1191.30005f);
    (**pp)->unk30->unk18 = 1.0f;
    (**pp)->unk30->unk1C = 1.0f;
    (**pp)->unk30->unk20 = 1.0f;
    (**pp)->unk30->unk12 = 0;
    return 2;
}


s32 func_801E32A8(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E32B8(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E32C8(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E32D8(s32 arg0, s32 arg1) {
    return 5;
}


extern void D_8038BA70(void);
extern s32 func_801C2570(s32 arg0, void *arg1);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern s32 D_8038DF70[];

s32 func_801E32E8(s32 arg0, s32 arg1) {
    func_801C2420(0xA2, D_8038DD90);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DDA8);
    D_8038BA70();
    D_8038DF70[1] = 0x1000;
    if (func_801C2570(0x442, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[4] = 0x4000;
    if (func_801C2570(0xA8, &D_8038DF70[3]) != 0) {
        func_8038BA8C();
    }
    D_8038DF70[7] = 0x6000;
    if (func_801C2570(0x472, &D_8038DF70[6]) != 0) {
        func_8038BA8C();
    }
    return 1;
}


typedef struct func_801E33BC_Struct2 {
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
} func_801E33BC_Struct2;

typedef struct func_801E33BC_Struct1 {
    u8 pad0[0x30];
    func_801E33BC_Struct2 *unk30;
} func_801E33BC_Struct1;

extern void func_8012CF8C(s32, void *, s32, s32);
extern u8 D_8038D830[];
extern u8 D_8038D8B8[];
extern func_801E33BC_Struct1 **D_8038D8D0;

s32 func_801E33BC(s32 arg0, s32 arg1) {
    func_80005E44(*(s32 *)(D_8038D8B8 + 0x14), D_8038D830 + 0x5C);
    func_80006214(*(s32 *)(D_8038D8B8 + 0x14));
    func_8012C89C(*(s32 *)(D_8038D8B8 + 0x14), 0, 0xA2, 0);
    (*D_8038D8D0)->unk30->unk4 = 0.0f;
    (*D_8038D8D0)->unk30->unk8 = 0.0f;
    (*D_8038D8D0)->unk30->unkC = 0.0f;
    (*D_8038D8D0)->unk30->unk12 = 0;
    (*D_8038D8D0)->unk30->unk18 = 1.0f;
    (*D_8038D8D0)->unk30->unk1C = 1.0f;
    (*D_8038D8D0)->unk30->unk20 = 1.0f;
    func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 0);
    return 2;
}


extern s32 D_801E4D0C;
extern s32 D_801E4D10;

void func_801E34C0(void) {
    D_801E4D0C = 0;
    D_801E4D10 = 0;
}



void func_801E34D4(void) {
    if (D_801E4D0C >= 0x15) {
        D_801E4D0C = 0;
        D_801E4D10 ^= 1;
        if (D_801E4D10 != 0) {
            func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 1);
            return;
        }
        func_8012CF8C(*(s32 *)(D_8038D8B8 + 0x14), (u8 *)(*D_8038D8D0)->unk30 + 0x40, 0x442, 0);
        return;
    }
    D_801E4D0C += 1;
}


extern s32 D_801E4D14;
extern s32 D_801E4D18;
extern f32 D_801E5220[];
extern f32 D_801E5230[];

void func_801E3584(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801E5220[0] = arg0;
    D_801E5220[1] = arg1;
    D_801E5220[2] = arg2;
    D_801E5230[0] = arg3;
    D_801E5230[1] = arg4;
    D_801E5230[2] = arg5;
    D_801E4D14 = 0;
    D_801E4D18 = 1;
}


extern s32 func_801C8668(f32, f32, s32, f32, f32, s32);

void func_801E35DC(void)
{
  s32 temp_t0;
  if (D_801E4D18 != 0)
  {
    if (D_801E4D14 == 0)
    {
      func_801C8668(D_801E5220[0], D_801E5220[1], ((s32 *) D_801E5220)[2], 0.200000003f, 0.200000003f, 0x24);
    }
  }
  temp_t0 = (D_801E4D14 = D_801E4D14 + 1);
  if (((u32) temp_t0) >= 0x97U)
  {
    D_801E4D14 = 0;
  }
}



void func_801E3660(s32 arg0) {
    D_801E4D18 = arg0;
}

#define func_801E34C0 func_801E34C0__func_801E366C
#define func_801E3584 func_801E3584__func_801E366C
#define func_801E3660 func_801E3660__func_801E366C

extern void func_801E34C0();
extern void func_801E3584(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void func_801E3660(s32 arg0);

s32 func_801E366C(s32 arg0, s32 arg1) {
    func_801E34C0();
    func_801E3584(45.5f, 16.5f, -94.5f, 45.0f, 17.0f, -94.5f);
    func_801E3660(0);
    return 3;
}
#undef func_801E34C0
#undef func_801E3584
#undef func_801E3660

#define func_801E34D4 func_801E34D4__func_801E36D0
#define func_801E35DC func_801E35DC__func_801E36D0

extern void func_801E34D4();
extern void func_801E35DC();

s32 func_801E36D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2D9E0F7) != 0) {
        func_801E3660(1);
    }
    func_801E34D4();
    func_801E35DC();
    return 3;
}
#undef func_801E34D4
#undef func_801E35DC


s32 func_801E3724(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E3734(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E3744(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E3754(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E3764(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E3774(s32 arg0, s32 arg1) {
    return 9;
}



s32 func_801E3784(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


extern s32 D_801E4D44;
extern s32 D_801E4D48;
extern f32 D_801E5240[];
extern f32 D_801E5250[];

void func_801E37C8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    D_801E5240[0] = arg0;
    D_801E5240[1] = arg1;
    D_801E5240[2] = arg2;
    D_801E5250[0] = arg3;
    D_801E5250[1] = arg4;
    D_801E5250[2] = arg5;
    D_801E4D44 = 0;
    D_801E4D48 = 1;
}



void func_801E3820(void)
{
  s32 temp_t0;
  if (D_801E4D48 != 0)
  {
    if (D_801E4D44 == 0)
    {
      func_801C8668(D_801E5240[0], D_801E5240[1], ((s32 *) D_801E5240)[2], 0.200000003f, 0.200000003f, 0x24);
    }
  }
  temp_t0 = (D_801E4D44 = D_801E4D44 + 1);
  if (((u32) temp_t0) >= 0x97U)
  {
    D_801E4D44 = 0;
  }
}



void func_801E38A4(s32 arg0) {
    D_801E4D48 = arg0;
}

#define func_801E37C8 func_801E37C8__func_801E38B0
#define func_801E38A4 func_801E38A4__func_801E38B0
extern void func_801E37C8(f32, f32, f32, f32, f32, f32);
extern void func_801E38A4(s32);

s32 func_801E38B0(s32 arg0, s32 arg1) {
    func_801E37C8(47.5f, 16.0f, 44.0f, 48.5f, 16.5f, 44.0f);
    func_801E38A4(1);
    return 2;
}
#undef func_801E37C8
#undef func_801E38A4

#define func_801E3820 func_801E3820__func_801E3910
extern void func_801E3820(void);

s32 func_801E3910(s32 arg0, s32 arg1) {
    func_801E3820();
    return 0x3;
}
#undef func_801E3820


s32 func_801E3938(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03262C37) != 0) {
        func_801E38A4(0);
        return 4;
    }
    func_801E3820();
    return 3;
}

#define func_801E37C8 func_801E37C8__func_801E398C
#define func_801E3820 func_801E3820__func_801E398C
#define func_801E38A4 func_801E38A4__func_801E398C

extern void func_801E37C8(f32, f32, f32, f32, f32, f32);
extern void func_801E3820(void);
extern void func_801E38A4(s32);

s32 func_801E398C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CE04F7) != 0) {
        func_801E37C8(45.5f, 16.0f, 42.0f, 46.5f, 16.5f, 42.0f);
        func_801E38A4(1);
        return 5;
    }
    func_801E3820();
    return 4;
}
#undef func_801E37C8
#undef func_801E3820
#undef func_801E38A4

#define func_801E3820 func_801E3820__func_801E3A10
extern void func_801E3820(void);

s32 func_801E3A10(s32 arg0, s32 arg1) {
    func_801E3820();
    return 0x5;
}
#undef func_801E3820


void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DBA24[];
extern u8 D_801DBA28[];
extern u8 D_801E0A48[];
extern u8 func_801DB868[];

s32 func_801E3A38(s32 arg0, s32 arg1) {
    func_801C2420(0x2C, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DB868 + 0x100);
    func_801CC4C0(0, func_801DB868 + 0x104);
    func_801C2420(0x142, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DBA24);
    func_801CC4C0(1, D_801DBA28);
    return 1;
}


extern void func_80005670(void *, void *);
extern void func_801CC530(void);
extern u8 D_801DBA10[];
extern u8 func_801DAAF0[];

s32 func_801E3ACC(s32 arg0, s32 arg1) {
    func_80005670(*(void **)(func_801DAAF0 + 0x24), func_801DB868 + 0xEC);
    func_80005670(*(void **)(*(u8 **)(func_801DAAF0 + 0x24) + 0x8), D_801DBA10);
    func_801CC530();
    return 2;
}


struct func_801E3FB4_Sub;
extern struct func_801E3FB4_Sub D_801DAB14;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

typedef struct func_801E3B24_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E3B24_Inner;

typedef struct func_801E3B24_Node2 {
    u8 pad0[0x2C];
    func_801E3B24_Inner *unk2C;
} func_801E3B24_Node2;

typedef struct func_801E3B24_Node {
    u8 pad0[8];
    struct func_801E3B24_Node *unk8;
    u8 pad1[0x18];
    func_801E3B24_Node2 *unk24;
} func_801E3B24_Node;

typedef struct func_801E3B24_Sub {
    func_801E3B24_Node *unk0;
} func_801E3B24_Sub;

s32 func_801E3B24(s32 arg0, s32 arg1) {
    func_801E3B24_Node2 *temp_v0;

    temp_v0 = ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unkC = -96.0f;
        ((func_801E3B24_Sub *)&D_801DAB14)->unk0->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 3;
    }
    return 2;
}


s32 func_801E3BE8(s32 arg0, s32 arg1) {
    return 4;
}



s32 func_801E3BF8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2371E4B) != 0) {
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 4) = 47.0999985f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 12) = -96.0f;
        *(s16 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)&D_801DAB14 + 8) + 0x24) + 0x2C) + 18) = 0;
        func_801CC470(0, 0x0348007A, 0, 0x100, 10.0f);
        return 5;
    }
    return 4;
}


s32 func_801E3CC8(s32 arg0, s32 arg1) {
    return 6;
}


extern s32 func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E3CD8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02D9E0F7) != 0) {
        func_801CC4D8(0, 0x03480076, 0, 0, 35.0f);
        return 7;
    }
    return 6;
}

extern s32 func_801D697C();

s32 func_801E3D3C(s32 arg0, s32 arg1) {
    if (func_801D697C() == 0) {
        func_801CC470(0, 0x03480076, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}


s32 func_801D698C(void);

s32 func_801E3D94(s32 arg0, s32 arg1) {
    if (func_801D698C() != 0) {
        return 0x9;
    }
    return 0x8;
}


s32 func_801E3DC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03633537) != 0) {
        func_801CC4D8(0, 0x03480077, 0, 0, 5.0f);
        return 0xA;
    }
    return 9;
}


extern s32 D_801E4D70;

s32 func_801E3E28(s32 arg0, s32 arg1) {
    if (func_801D697C() == 0) {
        func_801CC470(0, 0x03480077, 0, 0, 5.0f);
        D_801E4D70 = 0;
        return 0xB;
    }
    return 0xA;
}


extern void func_801D6AB8(s32);
extern void func_8038D28C(s32);
extern s32 D_801E4D74;

s32 func_801E3E88(s32 arg0, s32 arg1) {
    if (D_801E4D70++ >= 0x35) {
        D_801E4D74 = 0;
        func_801D6AB8(1);
        func_8038D28C(0x632);
        return 0xC;
    }
    return 0xB;
}



s32 func_801E3EEC(s32 arg0, s32 arg1) {
    if (D_801E4D70++ >= 0x4B) {
        func_801D6AB8(0);
        return 0xD;
    }
    return 0xC;
}


s32 func_801E3F40(s32 arg0, s32 arg1) {
    return 13;
}


s32 func_801E3F50(s32 arg0, s32 arg1) {
    return 14;
}


s32 func_801E3F60(s32 arg0, s32 arg1) {
    return 15;
}



s32 func_801E3F70(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}

#define func_801CC470 func_801CC470__func_801E3FB4

extern void func_801CC470(s32, s32, s32, s32, f32);

struct func_801E3FB4_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
};

struct func_801E3FB4_Node2 {
    u8 pad0[0x2C];
    struct func_801E3FB4_Inner *unk2C;
};

struct func_801E3FB4_Node {
    u8 pad0[8];
    struct func_801E3FB4_Node *unk8;
    u8 pad1[0x18];
    struct func_801E3FB4_Node2 *unk24;
};

struct func_801E3FB4_Sub {
    struct func_801E3FB4_Node *unk0;
};


s32 func_801E3FB4(s32 arg0, s32 arg1) {
    struct func_801E3FB4_Node2 *temp_v0;

    temp_v0 = D_801DAB14.unk0->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 46.0f;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unkC = 43.7000008f;
        D_801DAB14.unk0->unk8->unk8->unk24->unk2C->unk12 = 0x5BE;
        func_801CC470(1, 0x01B8003D, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}
#undef func_801CC470


s32 func_801E408C(s32 arg0, s32 arg1) {
    return 3;
}



s32 func_801E409C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x90F560) != 0) {
        func_801CC4D8(1, 0x01B8003E, 0, 0, 5.0f);
        return 4;
    }
    return 3;
}


s32 func_801E4100(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B8003E, 0, 0, 5.0f);
        return 5;
    }
    return 4;
}


s32 func_801D6FC0(void);

s32 func_801E4158(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        func_801CC4D8(1, 0x01B8003D, 0, 0, 5.0f);
        return 6;
    }
    return 5;
}


s32 func_801E41B0(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B8003D, 0, 0x100, 10.0f);
        return 7;
    }
    return 6;
}


s32 func_801E4208(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4218(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E4228(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E4238(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF42400) != 0) {
        func_801CC4D8(1, 0x01B8003F, 0, 0, 20.0f);
        return 0xB;
    }
    return 0xA;
}


s32 func_801E429C(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B8003F, 0, 0, 4.0f);
        return 0xC;
    }
    return 0xB;
}



s32 func_801E42F4(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        return 0xD;
    }
    return 0xC;
}



s32 func_801E4324(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x013D6200) != 0) {
        func_801CC4D8(1, 0x01B80040, 0, 0, 5.0f);
        return 0xE;
    }
    return 0xD;
}


s32 func_801E4388(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80040, 0, 0, 6.0f);
        return 0xF;
    }
    return 0xE;
}



s32 func_801E43E0(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801E4410(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x0175D720) != 0) {
        func_801CC4D8(1, 0x01B80041, 0, 0, 20.0f);
        return 0x11;
    }
    return 0x10;
}

#define func_801CC470 func_801CC470__func_801E4474

extern void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D6FB0(void);

s32 func_801E4474(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80041, 0, 0, 6.0f);
        return 0x12;
    }
    return 0x11;
}
#undef func_801CC470


s32 func_801E44CC(s32 arg0, s32 arg1) {
    return 19;
}


s32 func_801E44DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1B2E020) != 0) {
        return 0x14;
    }
    return 0x13;
}


s32 func_801E4518(s32 arg0, s32 arg1) {
    return 21;
}


s32 func_801E4528(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E4538(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E4548(s32 arg0, s32 arg1) {
    return 24;
}

#define func_801CC4D8 func_801CC4D8__func_801E4558

extern s32 *func_801BF6B0(s32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4558(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)[3] >= 0xA) {
        func_801CC4D8(1, 0x01B80042, 0, 0, 15.0f);
        return 0x19;
    }
    return 0x18;
}
#undef func_801CC4D8


extern void func_801D70A4(s32 arg0);

s32 func_801E45BC(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801D70A4(1);
        func_801CC470(1, 0x01B80042, 0, 0, 5.0f);
        return 0x1A;
    }
    return 0x19;
}



s32 func_801E4620(s32 arg0, s32 arg1) {
    if (func_801D6FC0() != 0) {
        return 0x1B;
    }
    return 0x1A;
}


s32 func_801E4650(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x021DAFE0) != 0) {
        return 0x1C;
    }
    return 0x1B;
}


s32 func_801E468C(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E469C(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E46AC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02371E4B) != 0) {
        return 0x1F;
    }
    return 0x1E;
}


s32 func_801E46E8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x028D95B7) != 0) {
        func_801CC4D8(1, 0x01B80043, 0, 0, 5.0f);
        return 0x20;
    }
    return 0x1F;
}


s32 func_801E474C(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80043, 0, 0, 10.0f);
        return 0x21;
    }
    return 0x20;
}


s32 func_801E47A4(s32 arg0, s32 arg1) {
    return 34;
}


s32 func_801E47B4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03262C37) != 0) {
        func_801CC4D8(1, 0x01B80044, 0, 0, 5.0f);
        return 0x23;
    }
    return 0x22;
}


s32 func_801E4818(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80044, 0, 0, 6.0f);
        return 0x24;
    }
    return 0x23;
}


s32 func_801E4870(s32 arg0, s32 arg1) {
    return 37;
}


s32 func_801E4880(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CE04F7) != 0) {
        func_801CC4D8(1, 0x01B80045, 0, 0, 5.0f);
        return 0x26;
    }
    return 0x25;
}

extern s32 D_801E4DB8;

s32 func_801E48E4(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80045, 0, 0, 6.0f);
        D_801E4DB8 = 0;
        return 0x27;
    }
    return 0x26;
}

#define func_8038D28C func_8038D28C__func_801E4944

extern void func_801D7044(s32 arg0);
extern void func_8038D28C(s32 arg0);

s32 func_801E4944(s32 arg0, s32 arg1) {
    if (D_801E4DB8++ >= 0x55) {
        func_801D7044(1);
        func_8038D28C(0x633);
        return 0x28;
    }
    return 0x27;
}
#undef func_8038D28C


s32 func_801E49A0(s32 arg0, s32 arg1) {
    if (D_801E4DB8++ >= 0x78) {
        func_801D7044(0);
        return 0x29;
    }
    return 0x28;
}


s32 func_801E49F4(s32 arg0, s32 arg1) {
    return 41;
}


extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E4A04(s32 arg0, s32 arg1) {
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



s32 func_801E4A8C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E4ABC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4ACC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E4ADC(s32 arg0, s32 arg1) {
    return 1;
}


s32 func_801E4AEC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4AFC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4B0C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4B1C(s32 arg0, s32 arg1) {
    return 5;
}

