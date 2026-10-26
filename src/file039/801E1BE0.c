#include "common.h"


extern void func_8038BEC8(f32);
extern void D_8038C158(void);
extern void func_8038D28C(s32);

s32 func_801E1BE0(s32 arg0, s32 arg1) {
    func_8038BEC8(5.0f);
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        func_8038D28C(0x6B);
        func_8038D28C(0x255);
        return 1;
    }
    return 0;
}


extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8038C4D8(s32, s32);

s32 func_801E1C44(s32 arg0, s32 arg1) {
    if (D_8038C17C(0, 0.900000036f, 0xC1F8CCCD, 0x416CCCCD, (-6.30000019f), (-35.4000015f), -44.0f, 2.5999999f, -50.5f, 24.3999996f, 48.0999985f, (-54.7999992f), (-34.4000015f), 57.0f, 22.0f, 22.0f) != 0) {
        func_8038C4D8(2, 0);
        return 2;
    }
    return 1;
}

#define D_8038C158 D_8038C158__func_801E1D28
extern s32 func_801C0B8C(u64);

void D_8038C158();

s32 func_801E1D28(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x124F80) != 0) {
        D_8038C158();
        return 3;
    }
    return 2;
}
#undef D_8038C158


s32 func_801E1D74(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 3.99999976f, 0xC20D999A, 0xC2300000, 2.5999999f, (-37.5999985f), (-71.6999969f), 17.3999996f, (-54.7999992f), (-34.4000015f), 57.0f, (-32.0999985f), 9.19999981f, 45.5f, 22.0f, 29.5f) != 0) {
        return 4;
    }
    return 3;
}


extern void func_8038BE98(f32);
extern void func_8038BD50(f32, f32, s32);
extern void D_8038BD88(f32, f32, s32);

s32 func_801E1E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_8038BE98(53.7999992f);
        func_8038BD50((-45.0999985f), 8.10000038f, 0x42033333);
        D_8038BD88((-40.0999985f), 2.79999995f, 0x4207999A);
        return 5;
    }
    return 4;
}


s32 func_801E1ED0(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E1EE0(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E1EF0(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x8;
}


s32 func_801E1F18(s32 arg0, s32 arg1) {
    f32 x = (-40.0999985f);
    f32 y = 2.79999995f;
    f32 z = 33.9000015f;
    f32 w = 53.7999992f;
    if (D_8038C17C(0.0f, 4.0f, 0xC2346666, 0x4101999A,
        32.7999992f, -51.0f, 15.1000004f, 29.6000004f,
        x, y, z, x, y, z, w, w) != 0) {
        return 9;
    }
    return 8;
}


extern void *func_801BF6B0(s32 arg0);
extern s32 func_801C1B1C(void);

typedef struct func_801E1FD4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E1FD4_Struct;

s32 func_801E1FD4(s32 arg0, s32 arg1) {
    if ((((func_801E1FD4_Struct *) func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 9;
    }
    return 10;
}


s32 func_801E2028(s32 arg0, s32 arg1) {
    if ((*(s32 *) ((u8 *) func_801BF6B0(7) + 0xC) < 0x7) || (func_801C1B1C() == 0)) {
        return 0xA;
    }
    return 0xB;
}


s32 func_801E207C(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0xC;
}


s32 func_801E20A4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.5f, 0xC1BD999A, 0xC1C0CCCD, 28.1000004f, (-16.2000008f), (-13.3999996f), 24.5f, (-39.7999992f), (-3.29999995f), 39.7999992f, (-33.7999992f), 3.70000005f, 36.4000015f, 36.5f, 19.2999992f) != 0) {
        return 0xD;
    }
    return 0xC;
}

#define func_801BF6B0 func_801BF6B0__func_801E2180

extern void *func_801BF6B0(s32);

typedef struct func_801E2180_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2180_Struct;

s32 func_801E2180(s32 arg0, s32 arg1) {
    if ((((func_801E2180_Struct *)func_801BF6B0(7))->unkC < 0xA) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
#undef func_801BF6B0


typedef struct func_801E21D4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E21D4_Struct;

s32 func_801E21D4(s32 arg0, s32 arg1) {
    func_801E21D4_Struct *obj;

    obj = func_801BF6B0(7);
    if ((obj->unkC < 0xD) || (func_801C1B1C() == 0)) {
        return 0xE;
    }
    return 0xF;
}


s32 func_801E2228(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E2238(s32 arg0, s32 arg1) {
    return 17;
}

/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */

typedef struct func_801E2248_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2248_Struct;


s32 func_801E2248(s32 arg0, s32 arg1) {
    func_801E2248_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0x11;
    }
    return 0x12;
}

#define func_801BF6B0 func_801BF6B0__func_801E229C
#define func_801C1B1C func_801C1B1C__func_801E229C
void *func_801BF6B0();
s32 func_801C1B1C();

struct func_801E229C_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E229C(s32 arg0, s32 arg1) {
    if ((((struct func_801E229C_Struct *) func_801BF6B0(7))->unkC < 0x15) || (func_801C1B1C() == 0)) {
        return 0x12;
    }
    return 0x13;
}
#undef func_801BF6B0
#undef func_801C1B1C



s32 func_801E22F0(s32 arg0, s32 arg1) {
    func_8038BE98(59.4000015f);
    func_8038BD50((-33.5999985f), 36.5f, 0x418C0000);
    D_8038BD88((-39.2999992f), 7.9000001f, 0x4215999A);
    return 0x14;
}

#define func_801BF6B0 func_801BF6B0__func_801E2354
#define func_801C1B1C func_801C1B1C__func_801E2354

typedef struct func_801E2354_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2354_Struct;

void *func_801BF6B0();
s32 func_801C1B1C();

s32 func_801E2354(s32 arg0, s32 arg1) {
    if ((((func_801E2354_Struct *)func_801BF6B0(7))->unkC < 0x1A) || (func_801C1B1C() == 0)) {
        return 0x14;
    }
    return 0x15;
}
#undef func_801BF6B0
#undef func_801C1B1C


typedef struct func_801E23A8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E23A8_Struct;


s32 func_801E23A8(s32 arg0, s32 arg1) {
    func_801E23A8_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x1D || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E23FC(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x17;
}


s32 func_801E2424(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 4.0f, 0xC2413333, 0x40C00000, 27.7999992f, (-41.0999985f), 16.0f, 26.0f, (-41.9000015f), 15.3999996f, 45.7000008f, (-42.9000015f), 15.1999998f, 47.0999985f, 46.5f, 31.5f) != 0) {
        return 0x18;
    }
    return 0x17;
}

/* starting point: func_801E6A9C (file033), whose assembly is 100% the same as this function's */

typedef struct func_801E24FC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E24FC_Struct;

s32 func_801E24FC(s32 arg0, s32 arg1) {
    if ((((func_801E24FC_Struct *) func_801BF6B0(7))->unkC < 0x20) || (func_801C1B1C() == 0)) {
        return 0x18;
    }
    return 0x19;
}



typedef struct func_801E2550_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E2550_Struct;

s32 func_801E2550(s32 arg0, s32 arg1) {
    if ((((func_801E2550_Struct *)func_801BF6B0(7))->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x19;
    }
    return 0x1A;
}


s32 func_801E25A4(s32 arg0, s32 arg1) {
    return 27;
}


s32 func_801E25B4(s32 arg0, s32 arg1) {
    return 28;
}


typedef struct func_801E25C4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E25C4_Struct;

s32 func_801E25C4(s32 arg0, s32 arg1) {
    if ((((func_801E25C4_Struct *)func_801BF6B0(7))->unkC < 0x28) || (func_801C1B1C() == 0)) {
        return 0x1C;
    }
    return 0x1D;
}


s32 func_801E2618(s32 arg0, s32 arg1) {
    return 30;
}


s32 func_801E2628(s32 arg0, s32 arg1) {
    return 31;
}

#define D_8038C158 D_8038C158__func_801E2638
#define func_801C0B8C func_801C0B8C__func_801E2638
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void D_8038C158();

s32 func_801E2638(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x20;
    }
    return 0x1F;
}
#undef D_8038C158
#undef func_801C0B8C


s32 func_801E2680(s32 arg0, s32 arg1)
{
  f32 v = 4.9000001f;
  f32 w = 41.5f;
  if (1)
  {
    if (D_8038C17C(0.0f, 4.0f, 0xC2813333, 0x419C0000, 35.2999992f, -63.0f, 21.6000004f, 39.2999992f, (-44.0999985f), v, 36.9000015f, -44.0f, v, 38.5f, w, w) != 0)
    {
      D_8038C158();
      return 0x21;
    }
    return 0x20;
  }
}


extern s32 B_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2758(s32 arg0, s32 arg1) {
    f32 a = (-64.3000031f);
    f32 b = 36.2000008f;
    f32 c = (-40.5999985f);
    f32 d = 36.7000008f;

    if (B_8038C17C(0.0f, 2.0f, a, 17.5f, b, a, 17.0f, b, c, 2.79999995f, d, c, 2.4000001f, d, 15.6999998f, 15.6999998f) != 0) {
        D_8038C158();
        return 0x22;
    }
    return 0x21;
}


s32 func_801E2824(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0xC1ED999A, 0xC0FCCCCD,
                   18.6000004f, -29.5f, (-7.30000019f), 18.2999992f,
                   (-39.4000015f), 5.30000019f, 41.0999985f, (-39.2999992f),
                   5.9000001f, 40.7999992f, 31.0f, 31.0f) != 0) {
        D_8038C158();
        return 0x23;
    }
    return 0x22;
}

#define D_8038C17C D_8038C17C__func_801E2908

extern s32 D_8038C17C(f32, f32, f32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

s32 func_801E2908(s32 arg0, s32 arg1) {
    f32 v168;
    f32 v16c;
    f32 v170;
    f32 v174;

    v168 = (-64.3000031f);
    v16c = 36.2000008f;
    v170 = (-40.5999985f);
    v174 = 36.7000008f;
    if (D_8038C17C(0.0f, 2.0f, v168, 0x41880000, v16c, v168, 18.8999996f, v16c, v170, 2.4000001f, v174, v170, 3.0999999f, v174, 15.6999998f, 15.6999998f) != 0) {
        D_8038C158();
        return 0x24;
    }
    return 0x23;
}
#undef D_8038C17C



s32 func_801E29D4(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.69999981f, 0xC1F5999A, 0x40D00000, 17.7999992f, (-33.2999992f), 10.5f, 19.5f, -49.0f, 11.3000002f, 47.7999992f, (-50.7000008f), 11.1999998f, 46.7999992f, 21.0f, 17.2999992f) != 0) {
        D_8038C158();
        return 0x25;
    }
    return 0x24;
}


s32 func_801E2ABC(s32 arg0, s32 arg1) {
    f32 a = (-64.8000031f);
    f32 b = 10.8000002f;
    f32 c = 63.7999992f;
    f32 d = 35.9000015f;

    if (D_8038C17C(0.0f, 0.199999809f, 0xC23C6666, 0x3FCCCCCD,
                   56.5f, -52.5f, 3.0999999f, 57.5999985f,
                   a, b, c, a, b, c, d, d) != 0) {
        func_8038C4D8(2, 1);
        return 0x26;
    }
    return 0x25;
}


s32 func_801E2B88(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB5945F) != 0) {
        return 0x27;
    }
    return 0x26;
}


s32 func_801E2BC4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) == 0) {
        goto ret27;
    }
    func_8038D28C(0x258);
    D_8038C158();
    return 0x28;
ret27:
    return 0x27;
}



s32 func_801E2C18(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 1.0f, 0xC0E33333, 0xC2180000, 67.4000015f, 25.1000004f, (-105.599998f), 42.4000015f, (-33.5999985f), (-4.19999981f), 31.1000004f, (-30.8999996f), -12.0f, 7.30000019f, 41.5f, 41.5f) != 0) {
        D_8038C158();
        func_8038D28C(8);
        return 0x29;
    }
    return 0x28;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E2D00.s")



s32 func_801E2DC0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xE04DDF) != 0) {
        func_8038C4D8(2, 1);
        func_8038D28C(0x259);
        return 0x2B;
    }
    return 0x2A;
}



s32 func_801E2E14(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_8038D28C(0x6A);
        D_8038C158();
        return 0x2C;
    }
    return 0x2B;
}


s32 func_801E2E68(s32 arg0, s32 arg1)
{
  f32 temp = 1.39999998f;
  if (1)
  {
  }
  if (D_8038C17C(0.0f, 2.00000095f, 0x3E99999A, 0x40A66666, (-382.399994f), (-3.79999995f), 5.30000019f, (-384.299988f), 9.5f, temp, (-404.200012f), 7.9000001f, temp, (-404.899994f), 41.5f, 41.5f) != 0)
  {
    D_8038C158();
    return 0x2D;
  }
  return 0x2C;
}


s32 func_801E2F44(s32 arg0, s32 arg1)
{
  f32 a = (-427.299988f);
  f32 b = (-404.200012f);
  if (1)
  {
    if (D_8038C17C(0.0f, 2.0f, 0xBFB33333, 0x40533333, a, (-1.20000005f), 4.5999999f, a, 9.5f, 1.39999998f, b, 9.69999981f, 2.70000005f, b, 29.5f, 29.5f) != 0)
    {
      return 0x2E;
    }
    return 0x2D;
  }
}


s32 func_801E3008(s32 arg0, s32 arg1) {
    return 47;
}


s32 func_801E3018(s32 arg0, s32 arg1) {
    return 48;
}


s32 func_801E3028(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x30;
    }
    return 0x31;
}


s32 func_801E307C(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x32;
}


s32 func_801E30A4(s32 arg0, s32 arg1)
{
  f32 temp = 35.9000015f;
  if (1)
  {
    if (D_8038C17C(0.0f, 4.0f, 0xC0400000, 0x4019999A, (-397.299988f), (-3.29999995f), 4.0f, (-396.899994f), 4.19999981f, 5.80000019f, (-407.200012f), 3.9000001f, 7.5f, (-406.899994f), temp, temp) != 0)
    {
      return 0x33;
    }
  }
  return 0x32;
}


typedef struct func_801E316C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E316C_Struct;

s32 func_801E316C(s32 arg0, s32 arg1) {
    if ((((func_801E316C_Struct *)func_801BF6B0(7))->unkC < 0x34) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


typedef struct func_801E31C0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E31C0_Struct;

s32 func_801E31C0(s32 arg0, s32 arg1) {
    if ((((func_801E31C0_Struct *)func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x34;
    }
    return 0x35;
}


s32 func_801E3214(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x36;
}


s32 func_801E323C(s32 arg0, s32 arg1) {
    f32 v = 28.1000004f;
    if (D_8038C17C(0.0f, 4.0f, 0x40D66666, 0x4139999A,
                   (-411.399994f), 6.5999999f, 12.3999996f, (-411.200012f),
                   14.3000002f, 16.1000004f, (-423.799988f), 14.1000004f,
                   16.7999992f, (-423.600006f), v, v)) {
        return 0x37;
    }
    return 0x36;
}


struct func_801E3310_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3310(s32 arg0, s32 arg1) {
    if ((((struct func_801E3310_Struct *)func_801BF6B0(7))->unkC < 0x3C) || (func_801C1B1C() == 0)) {
        return 0x37;
    }
    return 0x38;
}


typedef struct func_801E3364_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3364_Struct;

s32 func_801E3364(s32 arg0, s32 arg1) {
    if ((((func_801E3364_Struct *)func_801BF6B0(7))->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}


s32 func_801E33B8(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x3A;
}


s32 func_801E33E0(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;

    a = 13.1999998f;
    b = 28.1000004f;
    if (D_8038C17C(0.0f, 2.0f, 0x41566666, 0x4190CCCD, (-438.799988f), 14.6000004f,
                   17.7999992f, (-438.700012f), a, 16.6000004f, (-423.600006f), a,
                   16.2000008f, (-423.700012f), b, b) != 0) {
        D_8038C158();
        return 0x3B;
    }
    return 0x3A;
}



s32 func_801E34BC(s32 arg0, s32 arg1) {
    f32 x = 16.3999996f;
    if (D_8038C17C(0.0f, 2.0f, 0x412B3333, 0x4194CCCD, (-427.700012f), 10.8000002f, 19.5f, (-427.600006f), 10.3000002f, 18.1000004f, (-423.700012f), 10.3999996f, 19.1000004f, (-423.600006f), x, x) != 0) {
        return 0x3C;
    }
    return 0x3B;
}


typedef struct func_801E3590_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3590_Struct;

s32 func_801E3590(s32 arg0, s32 arg1) {
    if ((((func_801E3590_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}

/* starting point: func_801ED034 (file033), whose assembly is 95% the same as this function's */

typedef struct func_801E35E4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E35E4_Struct;

s32 func_801E35E4(s32 arg0, s32 arg1) {
    if ((((func_801E35E4_Struct *)func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x3D;
    }
    return 0x3E;
}


s32 func_801E3638(s32 arg0, s32 arg1) {
    func_8038BE98(64.4000015f);
    func_8038BD50(0.400000006f, 2.0f, 0xC3DA4CCD);
    D_8038BD88(11.1000004f, 13.0f, 0xC3D20CCD);
    return 0x3F;
}


s32 func_801E36A0(s32 arg0, s32 arg1) {
    return 64;
}


struct func_801E36B0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E36B0(s32 arg0, s32 arg1) {
    if ((((struct func_801E36B0_Struct *)func_801BF6B0(7))->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x40;
    }
    return 0x41;
}


struct func_801E3704_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E3704(s32 arg0, s32 arg1) {
    struct func_801E3704_Struct *obj;

    obj = (struct func_801E3704_Struct *) func_801BF6B0(7);
    if ((obj->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x41;
    }
    return 0x42;
}



s32 func_801E3758(s32 arg0, s32 arg1) {
    func_8038BE98(45.7999992f);
    func_8038BD50(21.2000008f, 2.5f, 0xC3CCB333);
    D_8038BD88(11.8999996f, 14.1999998f, 0xC3D40CCD);
    return 0x43;
}


s32 func_801E37C0(s32 arg0, s32 arg1) {
    return 68;
}


typedef struct func_801E37D0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E37D0_Struct;

s32 func_801E37D0(s32 arg0, s32 arg1) {
    if ((((func_801E37D0_Struct *)func_801BF6B0(7))->unkC < 0x52) || (func_801C1B1C() == 0)) {
        return 0x44;
    }
    return 0x45;
}



s32 func_801E3824(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x45;
    }
    return 0x46;
}


s32 func_801E3878(s32 arg0, s32 arg1) {
    D_8038C158();
    return 0x47;
}


s32 func_801E38A0(s32 arg0, s32 arg1)
{
  f32 t;
  if (1)
  {
    t = 9.80000019f;
  }
  if (D_8038C17C(0.0f, 4.0f, 0x424C0000, 0x4282999A, (-386.899994f), 64.5f, 55.9000015f, (-453.700012f), t, t, (-422.700012f), 10.1999998f, 11.3000002f, -420.0f, 50.5f, 50.5f))
  {
    return 0x48;
  }
  return 0x47;
}


typedef struct func_801E3968_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E3968_Struct;

s32 func_801E3968(s32 arg0, s32 arg1) {
    if ((((func_801E3968_Struct *)func_801BF6B0(7))->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x48;
    }
    return 0x49;
}


s32 func_801E39BC(s32 arg0, s32 arg1) {
    return 74;
}


s32 func_801E39CC(s32 arg0, s32 arg1) {
    return 75;
}

#define D_8038C158 D_8038C158__func_801E39DC
#define func_801C0B8C func_801C0B8C__func_801E39DC
extern s32 func_801C0B8C(u64);
s32 func_801C0B8C(u64 time);

extern void D_8038C158();

s32 func_801E39DC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        D_8038C158();
        return 0x4C;
    }
    return 0x4B;
}
#undef D_8038C158
#undef func_801C0B8C


s32 func_801E3A24(s32 arg0, s32 arg1) {
    if (D_8038C17C(0.0f, 2.0f, 0x41680000, 0x41566666,
        (-402.5f), 13.6999998f, 16.8999996f, (-407.700012f),
        12.1000004f, 14.6000004f, (-424.299988f), 13.1999998f,
        16.6000004f, (-424.200012f), 69.0999985f, 16.3999996f) != 0) {
        return 0x4D;
    }
    return 0x4C;
}


s32 func_801E3AFC(s32 arg0, s32 arg1) {
    return 77;
}


s32 func_801E3B0C(s32 arg0, s32 arg1) {
    return 78;
}


s32 func_801E3B1C(s32 arg0, s32 arg1) {
    return 79;
}


s32 func_801E3B2C(s32 arg0, s32 arg1) {
    return 80;
}


extern s32 func_801CD044();
extern void D_801CCF48(s32, s32);
extern s32 D_801DABB8;
extern s32 D_801DABBC;

s32 func_801E3B3C(s32 arg0, s32 arg1) {
    func_801CD044();
    D_801CCF48(D_801DABB8, D_801DABBC);
    return 1;
}

extern void func_801CCEC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 D_801EA4BC;

void func_801E3B78(void)
{
  s32 temp_t7;
  func_801CCEC8(0, *(((s8 *) (&D_801EA4BC)) + 3), 0, 0);
  ;
  if ((D_801EA4BC += 4) >= 0x70)
  {
    D_801EA4BC = 0x10;
  }
}

#define func_801CCEC8 func_801CCEC8__func_801E3BD0

extern void func_801CCE0C(s32 a0);
extern void func_801CCE50(s32 a0, s32 a1, s32 a2);
extern void func_801CCE88(s32 a0, s32 a1, s32 a2, s32 a3);
extern void func_801CCEC8(s32 a0, s32 a1, s32 a2, s32 a3);

s32 func_801E3BD0(s32 arg0, s32 arg1) {
    func_801CCE0C(3);
    func_801CCE88(0, 0xFF, 0, 0);
    func_801CCEC8(0, 0, 0, 0);
    func_801CCE88(1, 0xF8, 0x1D, 8);
    func_801CCEC8(1, 0x39, -0x21, 0x48);
    func_801CCE88(2, 0x84, 0x18, 0x76);
    func_801CCEC8(2, -0x80, 0x1C, -0x5F);
    func_801CCE50(0x30, 9, 4);
    D_801EA4BC = 0x10;
    return 2;
}
#undef func_801CCEC8

#define func_801E3B78 func_801E3B78__func_801E3C8C
extern s32 func_801E3B78();

s32 func_801E3C8C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x3;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3CB4
extern s32 func_801E3B78();

s32 func_801E3CB4(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x4;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3CDC
extern s32 func_801E3B78();

s32 func_801E3CDC(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x5;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3D04
extern s32 func_801E3B78();

s32 func_801E3D04(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x6;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3D2C
extern s32 func_801E3B78();

s32 func_801E3D2C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x7;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3D54
extern s32 func_801E3B78();

s32 func_801E3D54(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x8;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3D7C
extern s32 func_801E3B78();

s32 func_801E3D7C(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x9;
}
#undef func_801E3B78

#define func_801E3B78 func_801E3B78__func_801E3DA4
extern s32 func_801E3B78();

s32 func_801E3DA4(s32 arg0, s32 arg1) {
    func_801E3B78();
    return 0x9;
}
#undef func_801E3B78


extern void D_8038BA70(void);
extern void func_801C2420(s32, void *);
extern s32 func_801C2570(s32, void *);
extern void func_8038BA8C(void);
extern u8 D_8038DD90[];
extern u8 D_8038DDA8[];
extern u8 D_8038DDC0[];
extern u8 func_8038DDD4[];
extern u8 D_8038DE08[];
extern u8 D_8038DF70[];

s32 func_801E3DCC(s32 arg0, s32 arg1) {
    func_801C2420(0x263, D_8038DD90);
    D_8038BA70();
    func_801C2420(0x267, D_8038DDA8);
    D_8038BA70();
    func_801C2420(0x443, D_8038DDC0);
    D_8038BA70();
    func_801C2420(0x444, func_8038DDD4 + 4);
    D_8038BA70();
    func_801C2420(0x445, func_8038DDD4 + 0x1C);
    D_8038BA70();
    func_801C2420(0xA7, D_8038DE08);
    D_8038BA70();
    ((s32 *)D_8038DF70)[1] = 0x3000;
    if (func_801C2570(0x43C, D_8038DF70) != 0) {
        func_8038BA8C();
    }
    ((s32 *)D_8038DF70)[4] = 0xE000;
    if (func_801C2570(0x2DD, D_8038DF70 + 0xC) != 0) {
        func_8038BA8C();
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E3ED4.s")


s32 func_801E4778(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4788(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4798(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E47A8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E47B8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E47C8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E47D8(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E47E8(s32 arg0, s32 arg1) {
    return 9;
}


extern void func_801BF628(s32 arg0, s32 *arg1);

s32 func_801E47F8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E483C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E484C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E485C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E486C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E487C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E488C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E489C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E48AC(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E48BC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4900(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4910(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4920(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4930(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4940(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4950(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4960(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4970(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4980(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E49C4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E49D4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E49E4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E49F4(s32 arg0, s32 arg1) {
    return 5;
}


extern s32 D_801EA570;
extern s32 D_801EA574;

void func_801E4A04(void) {
    D_801EA570 = 0;
    D_801EA574 = 0;
}


extern u8 *D_8038D8D0;

s32 func_801E4A18() {
    f32 t;
    u8 v;

    t = (f32)(u32)D_801EA570 / 30.0f;
    if (D_801EA574 != 0) {
        if (D_801EA574 == 1) goto l1;
        goto done;
    }
    v = (u32)(128.0f * t + 127.0f);
    goto done;
l1:
    v = (u32)(-128.0f * t + 255.0f);
done:
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x48) = v;
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x49) = v;
    *(u8 *)(*(u8 **)(*(u8 **)(D_8038D8D0 + 0xC) + 0x30) + 0x4A) = v;
    D_801EA570 = D_801EA570 + 1;
    if ((u32)D_801EA570 >= 0x1F) {
        D_801EA570 = 0;
        D_801EA574 = D_801EA574 + 1;
        D_801EA574 = D_801EA574 & 1;
    }
}


s32 func_801E4C38(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xD7261F) != 0) {
        func_801E4A04();
        return 6;
    }
    return 5;
}

#define func_801E4A18 func_801E4A18__func_801E4C84
extern s32 func_801E4A18();

s32 func_801E4C84(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x7;
}
#undef func_801E4A18

#define func_801E4A18 func_801E4A18__func_801E4CAC
extern s32 func_801E4A18();

s32 func_801E4CAC(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x8;
}
#undef func_801E4A18

#define func_801E4A18 func_801E4A18__func_801E4CD4
extern s32 func_801E4A18();

s32 func_801E4CD4(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x9;
}
#undef func_801E4A18

#define func_801E4A18 func_801E4A18__func_801E4CFC
extern s32 func_801E4A18();

s32 func_801E4CFC(s32 arg0, s32 arg1) {
    func_801E4A18();
    return 0x9;
}
#undef func_801E4A18



s32 func_801E4D24(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4D68(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4D78(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4D88(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4D98(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4DA8(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4DB8(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4DC8(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4DD8(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4DE8(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4E2C(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4E3C(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4E4C(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4E5C(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4E6C(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4E7C(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4E8C(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4E9C(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4EAC(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4EF0(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4F00(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4F10(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4F20(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4F30(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E4F40(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E4F50(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E4F60(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E4F70(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E4FB4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E4FC4(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E4FD4(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E4FE4(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E4FF4(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5004(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5014(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5024(s32 arg0, s32 arg1) {
    return 8;
}



s32 func_801E5034(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


typedef struct func_801E5078_StructValue {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E5078_StructValue;

typedef struct func_801E5078_StructNode {
    u8 pad[0x30];
    func_801E5078_StructValue *unk30;
} func_801E5078_StructNode;

typedef struct func_801E5078_StructRoot {
    u8 pad[0x20];
    func_801E5078_StructNode *unk20;
    func_801E5078_StructNode *unk24;
    func_801E5078_StructNode *unk28;
    func_801E5078_StructNode *unk2C;
} func_801E5078_StructRoot;


#define ROOT ((func_801E5078_StructRoot *)(D_8038D8D0 + offset * 4))

s32 func_801E5078(s32 arg0, s32 arg1) {
    f32 value;
    s32 offset;

    value = (-1170.0f);
    for (offset = 0; offset < 12; offset++) {
        ROOT->unk20->unk30->unk4 = 0.0f;
        ROOT->unk20->unk30->unk8 = value;
        value += 195.0f;
        ROOT->unk20->unk30->unkC = 0.0f;
        ROOT->unk20->unk30->unk12 = 0;
    }
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E5204.s")

extern s32 func_801E5204();

s32 func_801E52D4(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x3;
}


s32 func_801E52FC(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x4;
}


s32 func_801E5324(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x5;
}


s32 func_801E534C(s32 arg0, s32 arg1) {
    func_801E5204();
    return 0x6;
}


typedef struct func_801E5374_Struct {
    u8 pad[0x20];
    func_801E5078_StructNode *unk20[12];
} func_801E5374_Struct;

s32 func_801E5374(s32 arg0, s32 arg1) {
    s32 i;
    f32 f;

    if (func_801C0B8C(0xB8A19F) != 0) {
        f = (-1170.0f);
        for (i = 0; i < 12; i++) {
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk4 = 0.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk8 = f;
            f += 195.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unkC = 0.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        }
        return 7;
    }
    func_801E5204();
    return 6;
}


s32 func_801E5538(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5548(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5558(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5568(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E5578(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E55BC(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E55CC(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E55DC(s32 arg0, s32 arg1) {
    return 4;
}


extern s32 func_801C7DB4();
extern s32 D_801EA65C;

s32 func_801E55EC(s32 arg0, s32 arg1) {
    D_801EA65C = 0;
    func_801C7DB4();
    return 5;
}


extern void func_801C7DE8(void *, s32, s32, s32, f32, f32, f32, f32, f32, s32, s32);

extern u8 D_801EB3D0[];
extern u8 D_801EB3D4[];
extern u8 D_801EB3D8[];

s32 func_801E561C(s32 arg0, s32 arg1) {
    f32 k;
    if (D_801EA65C == 0) goto c0;
    if (D_801EA65C == 1) goto c1;
    if (D_801EA65C == 2) goto c2;
    if (D_801EA65C == 3) goto c3;
    return 5;
c0:
    if (func_801C0B8C(0x9A1D20) != 0) {
        func_8038D28C(0x256);
        k = 0.400000006f;
        func_801C7DE8(D_801EB3D0, 0xC2800000, 0x41400000, 0x42780000, 0.0f, 163.0f, 323.0f, k, k, 2, 0);
        D_801EA65C = 1;
    }
    goto done;
c1:
    if (func_801C0B8C(0xA037A0) != 0) {
        k = 0.400000006f;
        func_801C7DE8(D_801EB3D4, 0xC2800000, 0x41500000, 0x42800000, 6.0f, 171.0f, 274.0f, k, k, 2, 0);
        D_801EA65C = 2;
    }
    goto done;
c2:
    if (func_801C0B8C(0xA7D8C0) != 0) {
        k = 0.400000006f;
        func_801C7DE8(D_801EB3D8, 0xC2820000, 0x41600000, 0x42820000, 0.0f, 175.0f, 267.0f, k, k, 2, 1);
        D_801EA65C = 3;
    }
    goto done;
c3:
    if (func_801C0B8C(0xAF79E0) != 0) {
        k = 0.400000006f;
        func_801C7DE8(D_801EB3D0, 0xC2800000, 0x41400000, 0x42780000, 0.0f, 163.0f, 323.0f, k, k, 2, 0);
        return 6;
    }
done:
    return 5;
}


extern void func_801C7F10();

s32 func_801E5858(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801C7F10();
        func_801C7DB4();
        func_8038D28C(0x25A);
        return 7;
    }
    return 6;
}

#define func_801C7DE8 func_801C7DE8__func_801E58B4

extern s32 func_801C7DE8(u8 *, s32, s32, s32, f32, f32, f32, f32, f32, s32, s32);

extern u8 D_801EB3DC[];
extern u8 D_801EB3E0[];
extern u8 D_801EB3E4[];
extern u8 D_801EB3E8[];
extern u8 D_801EB3EC[];
extern u8 D_801EB3F0[];
extern u8 D_801EB3F4[];
extern u8 D_801EB3F8[];
extern u8 D_801EB3FC[];
extern u8 D_801EB400[];
extern u8 D_801EB404[];
extern u8 D_801EB408[];
extern u8 D_801EB40C[];

s32 func_801E58B4(s32 arg0, s32 arg1)
{
  func_801C7DE8(D_801EB3D0, 0xC2780000, 0x42900000, 0xC3EA0000, 90.0f, 26.0f, 90.0f, 4.0f, 2.0f, 0, 0);
  goto l2;
  l2:
  func_801C7DE8(D_801EB3D4, 0xC2140000, 0x42480000, 0xC3F28000, 0.0f, 0.0f, 63.0f, 2.0f, 2.0f, 0, 0);

  goto l3;
  l3:
  func_801C7DE8(D_801EB3D8, 0x425C0000, 0x42480000, 0xC3F28000, 0.0f, 0.0f, 90.0f, 4.0f, 2.0f, 0, 0);

  goto l4;
  l4:
  func_801C7DE8(D_801EB3DC, 0x42800000, 0x42E00000, 0xC3DD8000, 283.0f, 37.0f, 270.0f, 4.0f, 2.0f, 0, 0);

 if (1) { } if (1) { } if (1) { } if (1) { }
  goto l5;
  l5:
  func_801C7DE8(D_801EB3E0, 0x42800000, 0x41C80000, 0xC3E10000, 270.0f, 39.0f, 270.0f, 4.0f, 2.0f, 0, 0);

  goto l6;
  l6:
  func_801C7DE8(D_801EB3E4, 0x42780000, 0x42E00000, 0xC3BE0000, 283.0f, 37.0f, 270.0f, 4.0f, 2.0f, 0, 0);

  goto l7;
  l7:
  func_801C7DE8(D_801EB3E8, 0xC2780000, 0x42900000, 0xC3EA0000, 90.0f, 26.0f, 90.0f, 4.0f, 2.0f, 0, 0);

  goto l8;
  l8:
  func_801C7DE8(D_801EB3EC, 0x41800000, 0x43070000, 0xC3B28000, 0.0f, 0.0f, 26.0f, 4.0f, 2.0f, 0, 0);

  goto l9;
  l9:
  func_801C7DE8(D_801EB3F0, 0xC2860000, 0x42900000, 0xC3BD0000, 90.0f, 27.0f, 90.0f, 4.0f, 2.0f, 0, 0);

  goto l10;
  l10:
  func_801C7DE8(D_801EB3F4, 0xC2860000, 0x41880000, 0xC3CF8000, 90.0f, 27.0f, 90.0f, 4.0f, 2.0f, 0, 0);

  goto l11;
  l11:
  func_801C7DE8(D_801EB3F8, 0xC2040000, 0x42C60000, 0xC3F28000, 0.0f, 34.0f, 0.0f, 2.0f, 2.0f, 0, 1);

  goto l12;
  l12:
  func_801C7DE8(D_801EB3FC, 0x41B80000, 0x42D60000, 0xC3F28000, 0.0f, 0.0f, 0.0f, 2.0f, 4.0f, 0, 1);

  goto l13;
  l13:
  func_801C7DE8(D_801EB400, 0x41B80000, 0x428C0000, 0xC3F28000, 0.0f, 0.0f, 34.0f, 2.0f, 2.0f, 0, 1);

  goto l14;
  l14:
  func_801C7DE8(D_801EB404, 0x428A0000, 0x41E00000, 0xC3CF0000, 0.0f, 270.0f, 0.0f, 2.0f, 4.0f, 0, 1);

  goto l15;
  l15:
  func_801C7DE8(D_801EB408, 0x42780000, 0x434D0000, 0xC3BD8000, 90.0f, 90.0f, 270.0f, 4.0f, 4.0f, 0, 1);

  goto l16;
  l16:
  func_801C7DE8(D_801EB40C, 0x41E80000, 0x42340000, 0xC3B20000, 0.0f, 0.0f, 153.0f, 2.0f, 4.0f, 0, 1);

  return 8;
}
#undef func_801C7DE8


s32 func_801E5D50(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E5D60(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E5D70(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E5D80(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E5D90(s32 arg0, s32 arg1) {
    return 12;
}



s32 func_801E5DA0(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(3, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


s32 func_801E5DE4(s32 arg0, s32 arg1) {
    return 2;
}


s32 func_801E5DF4(s32 arg0, s32 arg1) {
    return 3;
}


extern s32 D_801EA694;

s32 func_801E5E04(s32 arg0, s32 arg1) {
    D_801EA694 = 0;
    return 0x4;
}


extern s32 func_801C4028(s32, f32, f32, f32, s32, s32, s32, f32, f32, s32, s32, s32, s32, s32, s32, s32);

s32 func_801E5E1C(s32 arg0, s32 arg1) {
    f32 k;
    if (D_801EA694 != 0) {
        if (D_801EA694 == 1) {
            goto case1;
        }
        return 4;
    }
    if (func_801C0B8C(0xB5122A) != 0) {
        func_8038D28C(0x257);
        func_801C4028(1, -61.0f, 9.0f, 62.0f, 0, 0x69, 0, 0.5f, 0.5f, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        D_801EA694 = 1;
    }
    goto end;
case1:
    if (func_801C0B8C(0xB71B00) != 0) {
        k = 0.400000006f;
        func_801C4028(1, -60.0f, 9.0f, 62.0f, 0, 0x69, 0, k, k, 0xFF, 0xFF, 0x70, 0xD8, 0x20, 0, 0x14);
        return 5;
    }
end:
    return 4;
}


s32 func_801E5F78(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E5F88(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E5F98(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E5FA8(s32 arg0, s32 arg1) {
    return 8;
}


void func_801CC318(void);
void func_801CC458(s32 arg0, void *arg1);
void func_801CC4C0(s32 arg0, void *arg1);
extern u8 D_801DB660[];
extern u8 D_801DB664[];
extern u8 D_801E0A48[];
extern u8 func_801DAC30[];

s32 func_801E5FB8(s32 arg0, s32 arg1) {
    func_801C2420(0x29, D_801E0A48);
    func_801CC318();
    func_801CC458(0, func_801DAC30 + 0x40);
    func_801CC4C0(0, func_801DAC30 + 0x44);
    func_801C2420(0x11B, D_801E0A48 + 0x18);
    func_801CC318();
    func_801CC458(1, D_801DB660);
    func_801CC4C0(1, D_801DB664);
    return 1;
}

extern struct func_801E77A0_A func_801DAAF0;
struct func_801E77A0_A { u8 pad0[0x24]; struct func_801E77A0_B *unk24; };
struct func_801E77A0_B { u8 pad0[0x8]; struct func_801E77A0_C *unk8; };
struct func_801E77A0_C { u8 pad0[0x8]; struct func_801E77A0_D *unk8; };
struct func_801E77A0_D { u8 pad0[0x24]; struct func_801E77A0_E *unk24; };
struct func_801E77A0_E { u8 pad0[0x2C]; struct func_801E77A0_F *unk2C; };
struct func_801E77A0_F { u8 pad0[0x4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };

extern void func_80005670(void *a0, void *a1);
extern void func_801CC530(void);
extern void func_801D517C(s32 a0);
extern void func_801D5188(s32 a0);
extern u8 D_801DB64C[];

s32 func_801E604C(s32 arg0, s32 arg1) {
    func_80005670(func_801DAAF0.unk24, func_801DAC30 + 0x2C);
    func_801D517C(0);
    func_801D5188(0);
    func_80005670(func_801DAAF0.unk24->unk8, D_801DB64C);
    func_801CC530();
    return 2;
}

extern s32 func_801CC470(s32, s32, s32, s32, f32);

struct func_801E60B4_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E60B4_Struct_D {
    u8 pad[0x2C];
    struct func_801E60B4_Struct_F *unk2C;
};

struct func_801E60B4_Struct_C {
    u8 pad[0x24];
    struct func_801E60B4_Struct_D *unk24;
};

struct func_801E60B4_Struct_B {
    u8 pad[0x8];
    struct func_801E60B4_Struct_C *unk8;
};

extern struct func_801E60B4_Struct_B *D_801DAB14;

s32 func_801E60B4(s32 arg0, s32 arg1) {
    struct func_801E60B4_Struct_D *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        D_801DAB14->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unkC = 0.0f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(0, 0x0348006B, 0, 0x100, 5.0f);
        return 3;
    }
    return 2;
}


s32 func_801E6170(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E6180(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xDBBA0) != 0) {
        D_801DAB14->unk8->unk24->unk2C->unk4 = (-36.7000008f);
        D_801DAB14->unk8->unk24->unk2C->unk8 = (-16.2000008f);
        D_801DAB14->unk8->unk24->unk2C->unkC = 36.5f;
        D_801DAB14->unk8->unk24->unk2C->unk12 = 0x1C00;
        return 5;
    }
    return 4;
}


extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 D_801EA6EC;

s32 func_801E6234(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        func_801CC4D8(0, 0x0348006D, 0, 0, 3.0f);
        D_801EA6EC = 0;
        return 6;
    }
    return 5;
}


s32 func_801E62A0(s32 arg0, s32 arg1) {
    if (D_801EA6EC == 0) {
        goto case0;
    }
    if (D_801EA6EC == 1) {
        goto case1;
    }
    if (D_801EA6EC == 2) {
        goto case2;
    }
    return 6;
case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006D, 0, 0, 3.0f);
        D_801EA6EC = 1;
    }
    goto ret6;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x0348006B, 0, 0, 3.0f);
        D_801EA6EC = 2;
    }
    goto ret6;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006B, 0, 0x100, 5.0f);
        return 7;
    }
ret6:
    return 6;
}


s32 func_801E63A4(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E63B4(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E63C4(s32 arg0, s32 arg1) {
    return 10;
}


s32 func_801E63D4(s32 arg0, s32 arg1) {
    return 11;
}


s32 func_801E63E4(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E63F4(s32 arg0, s32 arg1) {
    return 13;
}

#define func_801BF6B0 func_801BF6B0__func_801E6404

extern void *func_801BF6B0(s32);

typedef struct func_801E6404_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6404_Struct;

s32 func_801E6404(s32 arg0, s32 arg1) {
    if ((((func_801E6404_Struct *)func_801BF6B0(7))->unkC < 4) || (func_801C1B1C() == 0)) {
        return 0xD;
    }
    return 0xE;
}
#undef func_801BF6B0


s32 func_801E6458(s32 arg0, s32 arg1) {
    return 15;
}


s32 func_801E6468(s32 arg0, s32 arg1) {
    return 16;
}


s32 func_801E6478(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801CC4D8(0, 0x0348006D, 0, 0, 3.0f);
        return 0x11;
    }
    return 0x10;
}

extern s32 func_801CE274();

s32 func_801E64DC(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006D, 0, 0, 3.0f);
        return 0x12;
    }
    return 0x11;
}


s32 func_801CE284(void);

s32 func_801E6534(s32 arg0, s32 arg1) {
    if (func_801CE284() != 0) {
        return 0x13;
    }
    return 0x12;
}


s32 func_801E6564(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x7A1200) != 0) {
        func_801CC4D8(0, 0x0348006C, 0, 0, 10.0f);
        return 0x14;
    }
    return 0x13;
}


s32 func_801E65C8(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006C, 0, 0, 8.0f);
        return 0x15;
    }
    return 0x14;
}


s32 func_801E6620(s32 arg0, s32 arg1) {
    return 22;
}


s32 func_801E6630(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) != 0) {
        func_801CC4D8(0, 0x0348006E, 0, 0, 3.0f);
        return 0x17;
    }
    return 0x16;
}



s32 func_801E6694(s32 arg0, s32 arg1) {
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348006E, 0, 0, 5.0f);
        return 0x18;
    }
    return 0x17;
}


s32 func_801E66EC(s32 arg0, s32 arg1) {
    return 25;
}



s32 func_801E66FC(s32 arg0, s32 arg1) {
    u8 *p;

    if (func_801C0B8C(0xD7261F) != 0) {
        p = (u8 *) &func_801DAAF0;
        p += 0x24;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 4) = 8.19999981f;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 8) = 0.0f;
        *(f32 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0xC) = (-404.399994f);
        *(s16 *) (*(u8 **) (*(u8 **) (*(u8 **) (*(u8 **) p + 8) + 0x24) + 0x2C) + 0x12) = 0x1000;
        func_801CC470(0, 0x03480070, 0, 1, 1.0f);
        return 0x1A;
    }
    return 0x19;
}

#define func_801CC470 func_801CC470__func_801E67D0

extern void func_801CC470(s32, s32, s32, s32, f32);

s32 func_801E67D0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xEF901F) != 0) {
        func_801CC470(0, 0x03480070, 0, 0, 10.0f);
        func_8038D28C(0x23B);
        return 0x1B;
    }
    return 0x1A;
}
#undef func_801CC470


s32 func_801E683C(s32 arg0, s32 arg1) {
    return 28;
}


s32 func_801E684C(s32 arg0, s32 arg1) {
    return 29;
}


s32 func_801E685C(s32 arg0, s32 arg1) {
    return 30;
}


typedef struct func_801E686C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E686C_Struct;

s32 func_801E686C(s32 arg0, s32 arg1) {
    if ((((func_801E686C_Struct *) func_801BF6B0(7))->unkC < 0x2F) || (func_801C1B1C() == 0)) {
        return 0x1E;
    }
    return 0x1F;
}


s32 func_801E68C0(s32 arg0, s32 arg1) {
    return 32;
}


s32 func_801E68D0(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E68E0(s32 arg0, s32 arg1) {
    return 34;
}


typedef struct func_801E68F0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E68F0_Struct;

s32 func_801E68F0(s32 arg0, s32 arg1) {
    if ((((func_801E68F0_Struct *)func_801BF6B0(7))->unkC < 0x34) || (func_801C1B1C() == 0)) {
        return 0x22;
    }
    return 0x23;
}


typedef struct func_801E6944_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6944_Struct;

s32 func_801E6944(s32 arg0, s32 arg1) {
    if ((((func_801E6944_Struct *) func_801BF6B0(7))->unkC < 0x3F) || (func_801C1B1C() == 0)) {
        return 0x23;
    }
    return 0x24;
}


s32 func_801E6998(s32 arg0, s32 arg1) {
    func_801CC4D8(0, 0x03480066, 0, 0, 3.0f);
    D_801EA6EC = 0;
    return 0x25;
}


s32 func_801E69E4(s32 arg0, s32 arg1) {
    if (D_801EA6EC == 0) {
        goto case0;
    }
    if (D_801EA6EC == 1) {
        goto case1;
    }
    if (D_801EA6EC != 2) {
        goto block_10;
    }
    goto case2;
case0:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480066, 0, 0, 4.0f);
        D_801EA6EC = 1;
    }
    goto block_10;
case1:
    if (func_801CE284() != 0) {
        func_801CC4D8(0, 0x03480028, 0, 0, 20.0f);
        D_801EA6EC = 2;
    }
    goto block_10;
case2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x03480028, 0, 0x100, 10.0f);
        return 0x26;
    }
block_10:
    return 0x25;
}


s32 func_801E6AE8(s32 arg0, s32 arg1) {
    return 39;
}


typedef struct func_801E6AF8_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6AF8_Struct;

s32 func_801E6AF8(s32 arg0, s32 arg1) {
    if ((((func_801E6AF8_Struct *) func_801BF6B0(7))->unkC < 0x42) || (func_801C1B1C() == 0)) {
        return 0x27;
    }
    return 0x28;
}


typedef struct func_801E6B4C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6B4C_Struct;

s32 func_801E6B4C(s32 arg0, s32 arg1) {
    if ((((func_801E6B4C_Struct *) func_801BF6B0(7))->unkC < 0x45) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


s32 func_801E6BA0(s32 arg0, s32 arg1) {
    return 42;
}


s32 func_801E6BB0(s32 arg0, s32 arg1) {
    return 43;
}


s32 func_801E6BC0(s32 arg0, s32 arg1) {
    return 44;
}


struct func_801E6BD0_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E6BD0(s32 arg0, s32 arg1) {
    if ((((struct func_801E6BD0_Struct *)func_801BF6B0(7))->unkC < 0x4A) || (func_801C1B1C() == 0)) {
        return 0x2C;
    }
    return 0x2D;
}


s32 func_801E6C24(s32 arg0, s32 arg1) {
    return 46;
}


s32 func_801E6C34(s32 arg0, s32 arg1) {
    return 46;
}



s32 func_801E6C44(s32 arg0, s32 arg1) {
    s32 buf[0x7E];

    func_801BF628(4, buf);
    if (buf[3] >= 2) {
        return 1;
    }
    return 0;
}


struct func_801E6C88_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E6C88_Struct_E {
    u8 pad[0x2C];
    struct func_801E6C88_Struct_F *unk2C;
};
struct func_801E6C88_Struct_D {
    u8 pad[0x24];
    struct func_801E6C88_Struct_E *unk24;
};
struct func_801E6C88_Struct_C {
    u8 pad[0x8];
    struct func_801E6C88_Struct_D *unk8;
};
struct func_801E6C88_Struct_B {
    u8 pad[0x8];
    struct func_801E6C88_Struct_C *unk8;
};

s32 func_801E6C88(s32 arg0, s32 arg1) {
    struct func_801E6C88_Struct_E *temp_v0;

    temp_v0 = ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 5120.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unkC = 0.0f;
        ((struct func_801E6C88_Struct_B *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk12 = 0;
        func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
        return 2;
    }
    return 1;
}


s32 func_801E6D54(s32 arg0, s32 arg1) {
    return 3;
}


struct func_801E6D64_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};

struct func_801E6D64_Struct_E {
    u8 pad[0x2C];
    struct func_801E6D64_Struct_F *unk2C;
};

struct func_801E6D64_Struct_D {
    u8 pad[0x24];
    struct func_801E6D64_Struct_E *unk24;
};

struct func_801E6D64_Struct_C {
    u8 pad[0x8];
    struct func_801E6D64_Struct_D *unk8;
};

struct func_801E6D64_Struct_B {
    u8 pad[0x8];
    struct func_801E6D64_Struct_C *unk8;
};

s32 func_801E6D64(s32 arg0, s32 arg1) {
    struct func_801E6D64_Struct_B **pp;

    if (func_801C0B8C(0xDBBA0) != 0) {
        pp = (struct func_801E6D64_Struct_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = -42.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = 43.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0x6AA;
        return 4;
    }
    return 3;
}


s32 func_801E6E24(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E6E34(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E6E44(s32 arg0, s32 arg1) {
    return 7;
}


typedef struct func_801E6E54_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E6E54_Struct;

s32 func_801E6E54(s32 arg0, s32 arg1) {
    if ((((func_801E6E54_Struct *)func_801BF6B0(7))->unkC < 0xD) || (func_801C1B1C() == 0)) {
        return 7;
    }
    return 8;
}

extern s32 D_801EA7AC;
extern s32 func_801D51F0(s32 a0);

s32 func_801E6EA8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0348001D, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 9;
}


s32 func_801E6F00(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 9;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348001D, 0, 0, 4.0f);
        D_801EA7AC = 1;
    }
    goto block_10;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(1, 0x0348007D, 0, 0, 3.0f);
        D_801EA7AC = 2;
    }
    goto block_10;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348007D, 0, 0x100, 10.0f);
        return 0xA;
    }
block_10:
    return 9;
}


s32 func_801E7010(s32 arg0, s32 arg1) {
    return 11;
}

/* starting point: func_801E22B0 (file030), whose assembly is 95% the same as this function's */

typedef struct func_801E7020_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7020_Struct;


s32 func_801E7020(s32 arg0, s32 arg1) {
    func_801E7020_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x12 || func_801C1B1C() == 0) {
        return 0xB;
    }
    return 0xC;
}

#define func_801BF6B0 func_801BF6B0__func_801E7074
#define func_801C1B1C func_801C1B1C__func_801E7074
void *func_801BF6B0();
s32 func_801C1B1C();

struct func_801E7074_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E7074(s32 arg0, s32 arg1) {
    if ((((struct func_801E7074_Struct *) func_801BF6B0(7))->unkC < 0x15) || (func_801C1B1C() == 0)) {
        return 0xC;
    }
    return 0xD;
}
#undef func_801BF6B0
#undef func_801C1B1C

#define func_801CC4D8 func_801CC4D8__func_801E70C8

extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);

s32 func_801E70C8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480069, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0xE;
}
#undef func_801CC4D8

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7120.s")


s32 func_801E733C(s32 arg0, s32 arg1) {
    return 16;
}

#define func_801BF6B0 func_801BF6B0__func_801E734C
#define func_801C1B1C func_801C1B1C__func_801E734C

typedef struct func_801E734C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E734C_Struct;

void *func_801BF6B0();
s32 func_801C1B1C();

s32 func_801E734C(s32 arg0, s32 arg1) {
    if ((((func_801E734C_Struct *)func_801BF6B0(7))->unkC < 0x1A) || (func_801C1B1C() == 0)) {
        return 0x10;
    }
    return 0x11;
}
#undef func_801BF6B0
#undef func_801C1B1C


s32 func_801E73A0(s32 arg0, s32 arg1) {
    if ((((func_801E734C_Struct *) func_801BF6B0(7))->unkC < 0x23) || (func_801C1B1C() == 0)) {
        return 0x11;
    }
    return 0x12;
}


s32 func_801E73F4(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480069, 0, 0, 3.0f);
    func_801D51F0(1);
    return 0x13;
}


extern s32 func_801D5194();

s32 func_801E7444(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480069, 0, 0, 4.0f);
        return 0x14;
    }
    return 0x13;
}

#define func_801D51F0 func_801D51F0__func_801E749C

s32 func_801D51F0(s32 arg0);
s32 func_801D51A4(void);

s32 func_801E749C(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 21;
    }
    return 20;
}
#undef func_801D51F0


typedef struct func_801E74DC_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E74DC_Struct;


s32 func_801E74DC(s32 arg0, s32 arg1) {
    func_801E74DC_Struct *obj;

    obj = func_801BF6B0(7);
    if (obj->unkC < 0x28 || func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}


s32 func_801E7530(s32 arg0, s32 arg1) {
    return 23;
}


s32 func_801E7540(s32 arg0, s32 arg1) {
    return 24;
}


s32 func_801E7550(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0) != 0) {
        func_801CC4D8(1, 0x0348006A, 0, 0, 3.0f);
        D_801EA7AC = 0;
        return 0x19;
    }
    return 0x18;
}


extern s32 D_801EA7B0;

s32 func_801E75B8(s32 arg0, s32 arg1) {
    s32 v = D_801EA7AC;

    if (v == 0) {
        goto case0;
    }
    if (v == 1) {
        goto case1;
    }
    if (v == 2) {
        goto case2;
    }
    return 0x19;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348006A, 0, 0, 4.0f);
        D_801EA7B0 = 0;
        D_801EA7AC = 1;
    }
    goto block_end;
case1:
    if (func_801D51A4() != 0) {
        func_801CC4D8(1, 0x0348007E, 0, 0, 3.0f);
        D_801EA7AC = 2;
    }
    goto block_end;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348007E, 0, 0x100, 10.0f);
        return 0x1A;
    }
block_end:
    return 0x19;
}


s32 func_801E76C4(s32 arg0, s32 arg1) {
    return 27;
}

#define func_801CC4D8 func_801CC4D8__func_801E76D4

extern s32 func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E76D4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xB8A19F) != 0) {
        func_801CC4D8(1, 0x0348006F, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}
#undef func_801CC4D8


s32 func_801E7738(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348006F, 0, 0, 5.0f);
        return 0x1D;
    }
    return 0x1C;
}


s32 func_801E7790(s32 arg0, s32 arg1) {
    return 30;
}

#define func_801CC470 func_801CC470__func_801E77A0



s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E77A0(s32 arg0, s32 arg1)
{
  struct func_801E77A0_B **pp;
  if (func_801C0B8C(0xD7261F) != 0)
  {
    pp = &func_801DAAF0.unk24;
    pp += 0;
    (*pp)->unk8->unk8->unk24->unk2C->unk4 = 11.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
    (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0xF1C;
    func_801CC470(1, 0x03480016, 0, 1, 1.0f);
    return 0x1F;
  }
  return 0x1E;
}
#undef func_801CC470



s32 func_801E7884(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0xEF901F) != 0) {
        func_801CC470(1, 0x03480016, 0, 0, 4.0f);
        return 0x20;
    }
    return 0x1F;
}


s32 func_801E78E8(s32 arg0, s32 arg1) {
    return 33;
}


s32 func_801E78F8(s32 arg0, s32 arg1) {
    struct func_801E77A0_B **pp;

    if (func_801C0B8C(0x11D56E0) != 0) {
        pp = (struct func_801E77A0_B **)&D_801DAB14;
        (*pp)->unk8->unk8->unk24->unk2C->unk4 = 14.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unkC = -424.0f;
        (*pp)->unk8->unk8->unk24->unk2C->unk12 = 0;
        return 0x22;
    }
    return 0x21;
}


s32 func_801E79B4(s32 arg0, s32 arg1) {
    return 35;
}


s32 func_801E79C4(s32 arg0, s32 arg1) {
    return 36;
}


typedef struct func_801E79D4_Struct {
    u8 pad0[0xC];
    s32 unkC;
} func_801E79D4_Struct;

s32 func_801E79D4(s32 arg0, s32 arg1) {
    if (((func_801E79D4_Struct *)func_801BF6B0(7))->unkC < 0x2F || func_801C1B1C() == 0) {
        return 0x24;
    }
    return 0x25;
}



s32 func_801E7A28(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x0348007F, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x26;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file039/801E1BE0/func_801E7A80.s")


s32 func_801E7C10(s32 arg0, s32 arg1) {
    return 40;
}


struct func_801E7C20_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

s32 func_801E7C20(s32 arg0, s32 arg1) {
    if ((((struct func_801E7C20_Struct *)func_801BF6B0(7))->unkC < 0x34) || (func_801C1B1C() == 0)) {
        return 0x28;
    }
    return 0x29;
}


typedef struct func_801E7C74_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7C74_Struct;

s32 func_801E7C74(s32 arg0, s32 arg1) {
    if ((((func_801E7C74_Struct *)func_801BF6B0(7))->unkC < 0x37) || (func_801C1B1C() == 0)) {
        return 0x29;
    }
    return 0x2A;
}


s32 func_801E7CC8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480071, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x2B;
}


s32 func_801E7D20(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 0x2B;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480071, 0, 0, 6.0f);
        D_801EA7AC = 1;
    }
    goto ret2b;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(1, 0x0348007C, 0, 0, 20.0f);
        D_801EA7AC = 2;
    }
    goto ret2b;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x0348007C, 0, 0x100, 10.0f);
        return 0x2C;
    }
ret2b:
    return 0x2B;
}


s32 func_801E7E30(s32 arg0, s32 arg1) {
    return 45;
}


typedef struct func_801E7E40_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E7E40_Struct;

s32 func_801E7E40(s32 arg0, s32 arg1) {
    if (((func_801E7E40_Struct *)func_801BF6B0(7))->unkC < 0x3C || func_801C1B1C() == 0) {
        return 0x2D;
    }
    return 0x2E;
}


s32 func_801E7E94(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x45 || func_801C1B1C() == 0) {
        return 0x2E;
    }
    return 0x2F;
}

#define func_801D51F0 func_801D51F0__func_801E7EE8

extern s32 func_801D51F0(s32);

s32 func_801E7EE8(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480068, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x30;
}
#undef func_801D51F0


s32 func_801E7F40(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 0x30;
case0:
    if (func_801D5194() != 0) {
        goto ret30;
    }
    func_801CC470(1, 0x03480068, 0, 0, 4.0f);
    D_801EA7AC = 1;
    goto ret30;
case1:
    if (func_801D51A4() == 0) {
        goto ret30;
    }
    func_801D51F0(0);
    func_801CC4D8(1, 0x0348007C, 0, 0, 3.0f);
    D_801EA7AC = 2;
    goto ret30;
case2:
    if (func_801D5194() != 0) {
        goto ret30;
    }
    func_801CC470(1, 0x0348007C, 0, 0x100, 10.0f);
    return 0x31;
ret30:
    return 0x30;
}


s32 func_801E8050(s32 arg0, s32 arg1) {
    return 50;
}

#define func_801BF6B0 func_801BF6B0__func_801E8060
/* starting point: func_801ECC30 (file033), whose assembly is 95% the same as this function's */

extern void *func_801BF6B0(s32);

s32 func_801E8060(s32 arg0, s32 arg1) {
    if (((s32 *)func_801BF6B0(7))[3] < 0x4A || func_801C1B1C() == 0) {
        return 0x32;
    }
    return 0x33;
}
#undef func_801BF6B0


typedef struct func_801E80B4_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E80B4_Struct;

s32 func_801E80B4(s32 arg0, s32 arg1) {
    if ((((func_801E80B4_Struct *)func_801BF6B0(7))->unkC < 0x4D) || (func_801C1B1C() == 0)) {
        return 0x33;
    }
    return 0x34;
}


s32 func_801E8108(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480067, 0, 0, 3.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x35;
}


s32 func_801E8160(s32 arg0, s32 arg1) {
    if (D_801EA7AC == 0) {
        goto case0;
    }
    if (D_801EA7AC == 1) {
        goto case1;
    }
    if (D_801EA7AC == 2) {
        goto case2;
    }
    return 0x35;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480067, 0, 0, 4.0f);
        D_801EA7AC = 1;
    }
    goto ret35;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC4D8(1, 0x03480079, 0, 0, 2.0f);
        D_801EA7AC = 2;
    }
    goto ret35;
case2:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480079, 0, 0x100, 10.0f);
        return 0x36;
    }
ret35:
    return 0x35;
}


s32 func_801E8270(s32 arg0, s32 arg1) {
    return 55;
}


struct func_801E8280_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E8280(s32 arg0, s32 arg1) {
    if ((((struct func_801E8280_Struct *)func_801BF6B0(7))->unkC < 0x52) || (func_801C1B1C() == 0)) {
        return 0x37;
    }
    return 0x38;
}



s32 func_801E82D4(s32 arg0, s32 arg1) {
    if ((((s32 *)func_801BF6B0(7))[3] < 0x55) || (func_801C1B1C() == 0)) {
        return 0x38;
    }
    return 0x39;
}



s32 func_801E8328(s32 arg0, s32 arg1) {
    func_801CC4D8(1, 0x03480072, 0, 0, 30.0f);
    D_801EA7AC = 0;
    func_801D51F0(1);
    return 0x3A;
}


s32 func_801E8380(s32 arg0, s32 arg1) {
    s32 state;

    state = D_801EA7AC;
    if (state == 0) {
        goto case0;
    }
    if (state == 1) {
        goto case1;
    }
    if (state == 2) {
        goto case2;
    }
    return 0x3A;
case0:
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        D_801EA7AC = 1;
    }
    goto ret3A;
case1:
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        D_801EA7AC = 2;
    }
    goto ret3A;
case2:
    if (func_801D51A4() != 0) {
        func_801CC470(1, 0x03480072, 0, 0, 6.0f);
        return 0x3B;
    }
ret3A:
    return 0x3A;
}



s32 func_801E8490(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        return 0x3C;
    }
    return 0x3B;
}


typedef struct func_801E84C0_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E84C0_Struct;

s32 func_801E84C0(s32 arg0, s32 arg1) {
    if ((((func_801E84C0_Struct *) func_801BF6B0(7))->unkC < 0x5A) || (func_801C1B1C() == 0)) {
        return 0x3C;
    }
    return 0x3D;
}


s32 func_801E8514(s32 arg0, s32 arg1) {
    return 62;
}


s32 func_801E8524(s32 arg0, s32 arg1) {
    return 63;
}


s32 func_801E8534(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1E8480) != 0) {
        func_801CC4D8(1, 0x03480073, 0, 0, 3.0f);
        return 0x40;
    }
    return 0x3F;
}



s32 func_801E8598(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(1, 0x03480073, 0, 0, 4.0f);
        func_801D51F0(1);
        return 0x41;
    }
    return 0x40;
}

#define func_801D51F0 func_801D51F0__func_801E85F8

s32 func_801D51F0(s32 arg0);

s32 func_801E85F8(s32 arg0, s32 arg1) {
    if (func_801D51A4() != 0) {
        func_801D51F0(0);
        return 66;
    }
    return 65;
}
#undef func_801D51F0


s32 func_801E8638(s32 arg0, s32 arg1) {
    return 66;
}

extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;
extern void D_8038C97C(s32, s32, s32, s32, s32, s32, s32);

s32 func_801E8648(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0;
    }
    if (func_801C0B8C(0x493E0) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 9, 0, 2);
        return 1;
    }
    return 0;
}



s32 func_801E86D0(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 1;
    }
    D_80089354 = 0;
    return 2;
}


s32 func_801E8700(s32 arg0, s32 arg1) {
    return 3;
}


s32 func_801E8710(s32 arg0, s32 arg1) {
    return 4;
}


s32 func_801E8720(s32 arg0, s32 arg1) {
    return 5;
}


s32 func_801E8730(s32 arg0, s32 arg1) {
    return 6;
}


s32 func_801E8740(s32 arg0, s32 arg1) {
    return 7;
}


s32 func_801E8750(s32 arg0, s32 arg1) {
    return 8;
}


s32 func_801E8760(s32 arg0, s32 arg1) {
    return 9;
}


s32 func_801E8770(s32 arg0, s32 arg1) {
    return 10;
}



s32 func_801E8780(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x1E, 0, 1);
        func_8038D28C(0xA);
        return 0xB;
    }
    return 0xA;
}



s32 func_801E8810(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 11;
    }
    return 12;
}


s32 func_801E8838(s32 arg0, s32 arg1) {
    return 12;
}


s32 func_801E8848(s32 arg0, s32 arg1) {
    return 1;
}


void func_8038CB60(f32 arg0, void *arg1);
extern u8 D_801E9DF0[];

s32 func_801E8858(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9DF0);
    return 2;
}


s32 func_8038CBF0(void);

s32 func_801E888C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3;
    }
    return 0x2;
}

/* starting point: func_801E704C (file032), whose assembly is 100% the same as this function's */

typedef struct func_801E88BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E88BC_Struct;

extern func_801E88BC_Struct D_801EA908;

s32 func_801E88BC(s32 arg0, s32 arg1) {
    func_801E88BC_Struct sp18;

    sp18 = D_801EA908;
    func_801C18CC(2, (void *) &sp18);
    return 4;
}

#define func_801C1B1C func_801C1B1C__func_801E8924

s32 func_801C1B1C();

s32 func_801E8924(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4;
    }
    return 0x5;
}
#undef func_801C1B1C

extern s32 func_801C1974();

s32 func_801E8954(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x6;
}


typedef struct func_801E897C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E897C_Struct;

extern func_801E897C_Struct D_801EA920;

s32 func_801E897C(s32 arg0, s32 arg1) {
    func_801E897C_Struct sp1C;

    sp1C = D_801EA920;
    func_801C18CC(1, &sp1C);
    return 0x7;
}

#define func_801C1B1C func_801C1B1C__func_801E89CC

s32 func_801C1B1C();

s32 func_801E89CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x7;
    }
    return 0x8;
}
#undef func_801C1B1C


s32 func_801E89FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x9;
}


typedef struct func_801E8A24_Struct {
    s32 w[3];
} func_801E8A24_Struct;

extern func_801E8A24_Struct D_801EA92C;

s32 func_801E8A24(s32 arg0, s32 arg1) {
    func_801E8A24_Struct sp1C;

    sp1C = D_801EA92C;
    func_801C18CC(1, &sp1C);
    return 0xA;
}

#define func_801C1B1C func_801C1B1C__func_801E8A74

s32 func_801C1B1C();

s32 func_801E8A74(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xA;
    }
    return 0xB;
}
#undef func_801C1B1C


s32 func_801E8AA4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0xC;
}


typedef struct func_801E8ACC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8ACC_Struct;

extern func_801E8ACC_Struct D_801EA938;

s32 func_801E8ACC(s32 arg0, s32 arg1) {
    func_801E8ACC_Struct sp18;

    sp18 = D_801EA938;
    func_801C18CC(2, &sp18);
    return 0xD;
}

#define func_801C1B1C func_801C1B1C__func_801E8B34

s32 func_801C1B1C();

s32 func_801E8B34(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0xD;
    }
    return 0xE;
}
#undef func_801C1B1C


extern u8 D_801E9E6C[];

s32 func_801E8B64(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9E6C);
    return 15;
}



s32 func_801E8B98(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x10;
    }
    return 0xF;
}


s32 func_801E8BC8(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x11;
}


typedef struct func_801E8BF0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8BF0_Struct;

extern func_801E8BF0_Struct D_801EA950;

s32 func_801E8BF0(s32 arg0, s32 arg1) {
    func_801E8BF0_Struct sp18;

    sp18 = D_801EA950;
    func_801C18CC(2, (void *) &sp18);
    return 0x12;
}

#define func_801C1B1C func_801C1B1C__func_801E8C58

s32 func_801C1B1C();

s32 func_801E8C58(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x12;
    }
    return 0x13;
}
#undef func_801C1B1C


s32 func_801E8C88(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x14;
}


typedef struct func_801E8CB0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8CB0_Struct;

extern func_801E8CB0_Struct D_801EA968;

s32 func_801E8CB0(s32 arg0, s32 arg1) {
    func_801E8CB0_Struct sp18;

    sp18 = D_801EA968;
    func_801C18CC(2, &sp18);
    return 0x15;
}

#define func_801C1B1C func_801C1B1C__func_801E8D18

s32 func_801C1B1C();

s32 func_801E8D18(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x15;
    }
    return 0x16;
}
#undef func_801C1B1C


extern u8 D_801E9EF4[];

s32 func_801E8D48(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801E9EF4);
    return 23;
}



s32 func_801E8D7C(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x18;
    }
    return 0x17;
}


s32 func_801E8DAC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x19;
}


typedef struct func_801E8DD4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8DD4_Struct;

extern func_801E8DD4_Struct D_801EA980;

s32 func_801E8DD4(s32 arg0, s32 arg1) {
    func_801E8DD4_Struct sp18;

    sp18 = D_801EA980;
    func_801C18CC(2, (void *) &sp18);
    return 0x1A;
}

#define func_801C1B1C func_801C1B1C__func_801E8E3C

s32 func_801C1B1C();

s32 func_801E8E3C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1A;
    }
    return 0x1B;
}
#undef func_801C1B1C


s32 func_801E8E6C(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1C;
}


typedef struct func_801E8E94_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8E94_Struct;

extern func_801E8E94_Struct D_801EA998;

s32 func_801E8E94(s32 arg0, s32 arg1) {
    func_801E8E94_Struct sp1C;

    sp1C = D_801EA998;
    func_801C18CC(1, &sp1C);
    return 0x1D;
}

#define func_801C1B1C func_801C1B1C__func_801E8EE4

s32 func_801C1B1C();

s32 func_801E8EE4(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x1D;
    }
    return 0x1E;
}
#undef func_801C1B1C


s32 func_801E8F14(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x1F;
}


typedef struct func_801E8F3C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E8F3C_Struct;

extern func_801E8F3C_Struct D_801EA9A4;

s32 func_801E8F3C(s32 arg0, s32 arg1) {
    func_801E8F3C_Struct sp1C;

    sp1C = D_801EA9A4;
    func_801C18CC(1, &sp1C);
    return 0x20;
}

#define func_801C1B1C func_801C1B1C__func_801E8F8C

s32 func_801C1B1C();

s32 func_801E8F8C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x20;
    }
    return 0x21;
}
#undef func_801C1B1C


s32 func_801E8FBC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x22;
}


typedef struct func_801E8FE4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E8FE4_Struct;

extern func_801E8FE4_Struct D_801EA9B0;

s32 func_801E8FE4(s32 arg0, s32 arg1) {
    func_801E8FE4_Struct sp18;

    sp18 = D_801EA9B0;
    func_801C18CC(2, &sp18);
    return 0x23;
}

#define func_801C1B1C func_801C1B1C__func_801E904C

s32 func_801C1B1C();

s32 func_801E904C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x23;
    }
    return 0x24;
}
#undef func_801C1B1C


extern u8 D_801EA038[];

s32 func_801E907C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA038);
    return 37;
}



s32 func_801E90B0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x26;
    }
    return 0x25;
}


s32 func_801E90E0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x27;
}


typedef struct func_801E9108_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9108_Struct;

extern func_801E9108_Struct D_801EA9C8;

s32 func_801E9108(s32 arg0, s32 arg1) {
    func_801E9108_Struct sp18;

    sp18 = D_801EA9C8;
    func_801C18CC(2, &sp18);
    return 0x28;
}

#define func_801C1B1C func_801C1B1C__func_801E9170

s32 func_801C1B1C();

s32 func_801E9170(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x28;
    }
    return 0x29;
}
#undef func_801C1B1C


s32 func_801E91A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x2A;
}


s32 func_801E91C8(s32 arg0, s32 arg1) {
    return 43;
}


s32 func_801E91D8(s32 arg0, s32 arg1) {
    return 44;
}


s32 func_801E91E8(s32 arg0, s32 arg1) {
    return 45;
}


s32 func_801E91F8(s32 arg0, s32 arg1) {
    return 46;
}


typedef struct func_801E9208_Struct {
    s32 w[9];
} func_801E9208_Struct;

s32 func_801C18CC(s32 arg0, func_801E9208_Struct *arg1);
extern func_801E9208_Struct D_801EA9E0;

s32 func_801E9208(s32 arg0, s32 arg1) {
    func_801E9208_Struct sp1C;

    sp1C = D_801EA9E0;
    func_801C18CC(3, &sp1C);
    return 47;
}

#define func_801C1B1C func_801C1B1C__func_801E926C

s32 func_801C1B1C();

s32 func_801E926C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x2F;
    }
    return 0x30;
}
#undef func_801C1B1C


extern u8 D_801EA098[];

s32 func_801E929C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA098);
    return 49;
}



s32 func_801E92D0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x32;
    }
    return 0x31;
}


s32 func_801E9300(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x33;
}

#define func_801C18CC func_801C18CC__func_801E9328

typedef struct func_801E9328_Struct {
    s32 w[9];
} func_801E9328_Struct;

s32 func_801C18CC(s32 arg0, func_801E9328_Struct *arg1);
extern func_801E9328_Struct D_801EAA04;

s32 func_801E9328(s32 arg0, s32 arg1) {
    func_801E9328_Struct sp1C;

    sp1C = D_801EAA04;
    func_801C18CC(3, &sp1C);
    return 52;
}
#undef func_801C18CC

#define func_801C1B1C func_801C1B1C__func_801E938C

s32 func_801C1B1C();

s32 func_801E938C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x34;
    }
    return 0x35;
}
#undef func_801C1B1C


s32 func_801E93BC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x36;
}


typedef struct func_801E93E4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E93E4_Struct;

extern func_801E93E4_Struct D_801EAA28;

s32 func_801E93E4(s32 arg0, s32 arg1) {
    func_801E93E4_Struct sp18;

    sp18 = D_801EAA28;
    func_801C18CC(2, &sp18);
    return 0x37;
}

#define func_801C1B1C func_801C1B1C__func_801E944C

s32 func_801C1B1C();

s32 func_801E944C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x37;
    }
    return 0x38;
}
#undef func_801C1B1C


extern u8 D_801EA0F4[];

s32 func_801E947C(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA0F4);
    return 57;
}



s32 func_801E94B0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x3A;
    }
    return 0x39;
}


s32 func_801E94E0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3B;
}


typedef struct func_801E9508_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9508_Struct;

extern func_801E9508_Struct D_801EAA40;

s32 func_801E9508(s32 arg0, s32 arg1) {
    func_801E9508_Struct sp18;

    sp18 = D_801EAA40;
    func_801C18CC(2, &sp18);
    return 0x3C;
}

#define func_801C1B1C func_801C1B1C__func_801E9570

s32 func_801C1B1C();

s32 func_801E9570(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3C;
    }
    return 0x3D;
}
#undef func_801C1B1C


s32 func_801E95A0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x3E;
}


typedef struct func_801E95C8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E95C8_Struct;

extern func_801E95C8_Struct D_801EAA58;

s32 func_801E95C8(s32 arg0, s32 arg1) {
    func_801E95C8_Struct sp18;

    sp18 = D_801EAA58;
    func_801C18CC(2, &sp18);
    return 0x3F;
}

#define func_801C1B1C func_801C1B1C__func_801E9630

s32 func_801C1B1C();

s32 func_801E9630(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x3F;
    }
    return 0x40;
}
#undef func_801C1B1C


s32 func_801E9660(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x41;
}


typedef struct func_801E9688_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9688_Struct;

extern func_801E9688_Struct D_801EAA70;

s32 func_801E9688(s32 arg0, s32 arg1) {
    func_801E9688_Struct sp18;

    sp18 = D_801EAA70;
    func_801C18CC(2, &sp18);
    return 0x42;
}

#define func_801C1B1C func_801C1B1C__func_801E96F0

s32 func_801C1B1C();

s32 func_801E96F0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x42;
    }
    return 0x43;
}
#undef func_801C1B1C


s32 func_801E9720(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x44;
}

#define func_801C18CC func_801C18CC__func_801E9748

typedef struct func_801E9748_Struct {
    s32 w[9];
} func_801E9748_Struct;

s32 func_801C18CC(s32 arg0, func_801E9748_Struct *arg1);
extern func_801E9748_Struct D_801EAA88;

s32 func_801E9748(s32 arg0, s32 arg1) {
    func_801E9748_Struct sp1C;

    sp1C = D_801EAA88;
    func_801C18CC(3, &sp1C);
    return 69;
}
#undef func_801C18CC

#define func_801C1B1C func_801C1B1C__func_801E97AC

s32 func_801C1B1C();

s32 func_801E97AC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x45;
    }
    return 0x46;
}
#undef func_801C1B1C


extern u8 D_801EA170[];

s32 func_801E97DC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA170);
    return 71;
}



s32 func_801E9810(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x48;
    }
    return 0x47;
}


s32 func_801E9840(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x49;
}

#define func_801C18CC func_801C18CC__func_801E9868

typedef struct func_801E9868_Struct {
    s32 w[9];
} func_801E9868_Struct;

s32 func_801C18CC(s32 arg0, func_801E9868_Struct *arg1);
extern func_801E9868_Struct D_801EAAAC;

s32 func_801E9868(s32 arg0, s32 arg1) {
    func_801E9868_Struct sp1C;

    sp1C = D_801EAAAC;
    func_801C18CC(3, &sp1C);
    return 74;
}
#undef func_801C18CC

#define func_801C1B1C func_801C1B1C__func_801E98CC

s32 func_801C1B1C();

s32 func_801E98CC(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4A;
    }
    return 0x4B;
}
#undef func_801C1B1C


s32 func_801E98FC(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x4C;
}


typedef struct func_801E9924_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9924_Struct;

extern func_801E9924_Struct D_801EAAD0;

s32 func_801E9924(s32 arg0, s32 arg1) {
    func_801E9924_Struct sp18;

    sp18 = D_801EAAD0;
    func_801C18CC(2, &sp18);
    return 0x4D;
}

#define func_801C1B1C func_801C1B1C__func_801E998C

s32 func_801C1B1C();

s32 func_801E998C(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x4D;
    }
    return 0x4E;
}
#undef func_801C1B1C


extern u8 D_801EA1EC[];

s32 func_801E99BC(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA1EC);
    return 79;
}



s32 func_801E99F0(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x50;
    }
    return 0x4F;
}


s32 func_801E9A20(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x51;
}


typedef struct func_801E9A48_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9A48_Struct;

extern func_801E9A48_Struct D_801EAAE8;

s32 func_801E9A48(s32 arg0, s32 arg1) {
    func_801E9A48_Struct sp18;

    sp18 = D_801EAAE8;
    func_801C18CC(2, &sp18);
    return 0x52;
}

#define func_801C1B1C func_801C1B1C__func_801E9AB0

s32 func_801C1B1C();

s32 func_801E9AB0(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x52;
    }
    return 0x53;
}
#undef func_801C1B1C


s32 func_801E9AE0(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x54;
}


typedef struct func_801E9B08_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9B08_Struct;

extern func_801E9B08_Struct D_801EAB00;

s32 func_801E9B08(s32 arg0, s32 arg1) {
    func_801E9B08_Struct sp18;

    sp18 = D_801EAB00;
    func_801C18CC(2, &sp18);
    return 0x55;
}

#define func_801C1B1C func_801C1B1C__func_801E9B70

s32 func_801C1B1C();

s32 func_801E9B70(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x55;
    }
    return 0x56;
}
#undef func_801C1B1C


extern u8 D_801EA230[];

s32 func_801E9BA0(s32 arg0, s32 arg1) {
    func_8038CB60(0.0f, D_801EA230);
    return 87;
}



s32 func_801E9BD4(s32 arg0, s32 arg1) {
    if (func_8038CBF0() != 0) {
        return 0x58;
    }
    return 0x57;
}


s32 func_801E9C04(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x59;
}


typedef struct func_801E9C2C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801E9C2C_Struct;

extern func_801E9C2C_Struct D_801EAB18;

s32 func_801E9C2C(s32 arg0, s32 arg1) {
    func_801E9C2C_Struct sp18;

    sp18 = D_801EAB18;
    func_801C18CC(2, &sp18);
    return 0x5A;
}

#define func_801C1B1C func_801C1B1C__func_801E9C94

s32 func_801C1B1C();

s32 func_801E9C94(s32 arg0, s32 arg1) {
    if (func_801C1B1C() == 0) {
        return 0x5A;
    }
    return 0x5B;
}
#undef func_801C1B1C


s32 func_801E9CC4(s32 arg0, s32 arg1) {
    func_801C1974();
    return 0x5C;
}


s32 func_801E9CEC(s32 arg0, s32 arg1) {
    return 93;
}


s32 func_801E9CFC(s32 arg0, s32 arg1) {
    return 94;
}


extern void func_8038CD3C(void *);
extern u8 D_801EA254[];

s32 func_801E9D0C(s32 arg0, s32 arg1) {
    func_8038CD3C(D_801EA254);
    return 0x5F;
}


extern void func_8038CF3C(s32, s32);

s32 func_801E9D3C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x2932E0) != 0) {
        func_8038CF3C(1, 0x2D);
        return 0x60;
    }
    return 0x5F;
}


s32 func_8038CF94(void);

s32 func_801E9D88(s32 arg0, s32 arg1) {
    if (func_8038CF94() != 0) {
        return 0x61;
    }
    return 0x60;
}


s32 func_801E9DB8(s32 arg0, s32 arg1) {
    return 97;
}


s32 func_801E9DC8(s32 arg0, s32 arg1) {
    return 98;
}


s32 func_801E9DD8(s32 arg0, s32 arg1) {
    return 99;
}

