#include "common.h"


struct func_801C9910_Struct {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1;
    s16 unk24;
    s16 unk26;
    u8 unk28;
    u8 unk29;
    u8 unk2A;
};

extern void func_8001B194(u8, s16, s16, s32);
extern void func_8001B204();
extern u8 D_801CF3F0[];

void func_801C9910(struct func_801C9910_Struct *arg0, f32 arg1) {
    s16 var_a3;
    s16 sp2C;

    sp2C = (s16) ((s32) ((f32) (arg0->unk26 + 0x78) - arg1));
    if (sp2C < -0x14) {
        if (arg0->unk2A == 1) {
            arg0->unk2A = 2;
            func_8001B204(arg0->unk22, 0, 0, D_801CF3F0);
        }
    } else if (sp2C < 0xF0) {
        if (arg0->unk2A == 0) {
            arg0->unk2A = 1;
            func_8001B204(arg0->unk22, arg0->unk24, sp2C, (u8 *) arg0 + 4, arg0->unk28, arg0->unk29);
        }
        var_a3 = 0;
        if (sp2C < 8) {
            var_a3 = (u8) (sp2C - 8);
        }
        if (sp2C + 0xD >= 0xEF) {
            var_a3 = (u8) (sp2C - 0xE1);
        }
        func_8001B194(arg0->unk22, arg0->unk24, sp2C, var_a3);
    }
}

void func_800058DC(void *arg0, void *arg1);
void func_8001A804();

extern void func_80116E80(s32);
extern u8 D_801CF3F4[];
extern void func_801C9AB4();

void func_801C9A24(s32 arg0, s32 arg1) {
    func_80116E80(0x100);
    func_8001A804(5, D_801CF3F4, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, 1, 0, 0, 0, 1);
    func_800058DC((void *) arg0, (void *) func_801C9AB4);
}

extern f32 D_801CFDD0;
void func_801C9C44(s32 arg0, s32 arg1);

extern s32 func_80006214();
extern void func_80145348(void *, s32, s32);
extern void func_80146208(void *, u8 *, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32);

struct func_801C9AB4_StructChild {
    u8 pad[0xB];
    u8 unkB;
};
struct func_801C9AB4_Struct {
    u8 pad[0x28];
    s16 unk28;
    u8 pad2[6];
    struct func_801C9AB4_StructChild *unk30;
};

void func_801C9AB4(void *arg0, struct func_801C9AB4_Struct **arg1)
{
  u8 sp53[8];
  u8 i;
  u8 count;
  func_80006214(arg0);
  i = 0;
  do
  {
    func_80146208(arg0, &sp53[3], 0x66, (s16) ((i << 6) + 0x10), 0xC4, 0x40, 0x20, 0, 0, 0, 0x228, i + 0x15);
    if (1)
    {
      func_80145348(arg0, 1, 0);
    }
    i++;
  }
  while (i < 4);
  func_80146208(arg0, &sp53[3], 0x66, (s16) ((i << 6) + 0x10), 0xC4, 0x20, 0x20, 0, 0, 0, 0x228, i + 0x15);
  func_80145348(arg0, 1, 0);
  count = func_80006214(arg0);
  for (i = 0; i < count; i++)
  {
    arg1[i]->unk28 = 0x100;
    arg1[i]->unk30->unkB = 0;
  }

  D_801CFDD0 = 0.0f;
  func_800058DC(arg0, func_801C9C44);
}


typedef struct func_801C9C44_Struct {
    void (*fn)(struct func_801C9C44_Struct *, s32);
    u8 pad[0x28];
} func_801C9C44_Struct;

extern void func_801C9D0C();
extern func_801C9C44_Struct D_801CD238;
extern func_801C9C44_Struct *D_801CFDD4;
extern f32 D_801CF614;

void func_801C9C44(s32 arg0, s32 arg1)
{
  s32 var_s0;
  s32 *var_s2;
  var_s2 = (s32 *) (&D_801CFDD0);
 D_801CFDD4 = &D_801CD238; var_s0 = 0; do { D_801CFDD4->fn(D_801CFDD4, *var_s2);
    var_s0 += 1;
    D_801CFDD4 = (func_801C9C44_Struct *) (((u8 *) D_801CFDD4) + 0x2C);
  }
  while (var_s0 != 0x64);
  D_801CFDD0 += 1.0f;
  if (D_801CF614 <= D_801CFDD0)
  {
    func_800058DC(arg0, func_801C9D0C);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801C9910/func_801C9D0C.s")


void func_801C9DEC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

extern u8 D_801CF41C[];
extern void func_8012FE50(s32, s32, s32, s32, s32);

typedef struct func_801C9DF8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C9DF8_Struct;

void func_801C9DF8(func_801C9DF8_Struct *arg0, struct func_801C9AB4_Struct **arg1) {
    s16 v;
    s32 i;

    v = arg1[0]->unk30->unkB;
    if (arg0->unk3C == 0) {
        v -= 6;
        if (v < 0) {
            v = 0;
            func_8012FE50(0x20, 0xC2, 1, 1, 0);
            func_800058DC(arg0, func_801C9DEC);
        }
        func_8001A804(5, D_801CF41C, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, 0xFF - v, 0, 0, 0, 0xFF - v);
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unkB = v;
        }
        return;
    }
    arg0->unk3C = arg0->unk3C - 1;
}

extern u8 D_80089474[];

struct func_801C9F24_Struct2 { u8 pad[0xB]; u8 unkB; };
struct func_801C9F24_Struct0 { u8 pad[0x30]; struct func_801C9F24_Struct2 *unk30; };
extern s32 func_801CA530();
extern s32 func_801CA590(s32);
extern s32 func_801CA5AC();
extern s32 func_801CA630();
extern u16 D_801BBBFA;
extern s32 D_8001B204();
struct func_801C9F24_Struct3 { u8 pad[0x3C]; u16 unk3C; };
void func_801CA284();
extern u8 D_801CF444[], D_801CF460[], D_801CF480[], D_801CF49C[], D_801CF4A4[], D_801CF4C4[], D_801CF4E0[], D_801CF4FC[], D_801CF518[], D_801CF534[], D_801CF550[], D_801CF56C[], D_801CF588[], D_801CF58C[];

void func_801C9F24(struct func_801C9F24_Struct3 *arg0, struct func_801C9F24_Struct0 **arg1) {
    s32 w;
    s16 sp52;
    s32 v;
    s32 i;

    sp52 = (*arg1)->unk30->unkB;
    if (arg0->unk3C == 0) {
        sp52 = sp52 - 6;
        if (sp52 < 0) {
            sp52 = 0;
            func_8001B204(0, 0x20, 0x1D, D_801CF444, 1, func_801CA530());
            func_8001B204(2, 0x20, 0x39, D_801CF460, 1, func_801CA630());
            func_8001B204(3, 0x20, 0x47, D_801CF480, 1);
            D_8001B204(4, 0x7D0, 0x55, D_801CF49C, 1, func_801CA5AC());
            func_8001B204(5, 0x20, 0x63, D_801CF4A4, 1, (s32)D_801BBBFA >> 6, D_801BBBFA & 0x3F);
            func_8001B204(6, 0x20, 0x71, D_801CF4C4, 1, func_801CA590(0));
            func_8001B204(7, 0x20, 0x7F, D_801CF4E0, 1, func_801CA590(1));
            func_8001B204(8, 0x20, 0x8D, D_801CF4FC, 1, func_801CA590(2));
            func_8001B204(9, 0x20, 0x9B, D_801CF518, 1, func_801CA590(3));
            func_8001B204(0xA, 0x20, 0xA9, D_801CF534, 1, func_801CA590(4));
            func_8001B204(0xB, 0x20, 0xB7, D_801CF550, 1, func_801CA590(5));
            func_8001B204(0xC, 0x20, 0xC5, D_801CF56C, 1, func_801CA590(6));
            func_8001B204(0xF, 0, 0, D_801CF588);
            arg0->unk3C = 0xFF;
            func_800058DC(arg0, func_801CA284);
        }
        v = 0xFF - sp52;
        func_8001A804(5, D_801CF58C, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, v, 0, 0, 0, v);
        for (i = 0; i < 5; i++) {
            arg1[i]->unk30->unkB = sp52;
        }
    } else if (*(u16 *)(D_80089474 + 4) & 0xF000) {
        arg0->unk3C = 0;
    } else {
        arg0->unk3C = arg0->unk3C - 1;
    }
}


struct func_801CA284_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern u8 D_801CF5B4[];
extern u8 D_801CF5DC[];
extern void func_801CA358();

void func_801CA284(struct func_801CA284_Struct *arg0, s32 arg1) {
    if (arg0->unk3C < 6) {
        arg0->unk3C = 0;
    } else {
        arg0->unk3C = arg0->unk3C - 6;
    }
    func_8001A804(5, D_801CF5B4, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
    if (arg0->unk3C == 0) {
        func_8001A804(5, D_801CF5DC, 0, 0, 0, 0, 0);
        func_800058DC(arg0, func_801CA358);
    }
}

extern u8 D_801BBBFC[];
struct func_801CA398_Struct;
void func_801CA398(struct func_801CA398_Struct *arg0, s32 arg1);

void func_801CA358(u8 *arg0, s32 arg1) {
    if (*(u16 *)(D_80089474 + 4) & 0xF000) {
        *(u16 *)(arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_801CA398);
    }
    *(u16 *)D_801BBBFC = 0;
}

extern s32 D_801CD234;
void func_801CA45C(s32 arg0, s32 arg1);

extern s32 func_80005670();
extern u8 D_80044090[];
extern u8 D_801CF5EC[];

struct func_801CA398_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_801CA398(struct func_801CA398_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk3C + 6;
    if (temp_v0 >= 0x100) {
        arg0->unk3C = 0xFF;
        D_801CD234 = func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CA45C);
    } else {
        arg0->unk3C = (u16) temp_v0;
    }
    func_8001A804(5, D_801CF5EC, 8, 8, 0x130, 0xE0, 4, 0, 0, 0, arg0->unk3C, 0, 0, 0, arg0->unk3C);
}


extern void func_80142570();
extern void func_8013EA94();
extern s8 D_801BBBF0;
extern void func_801CA4A4();

void func_801CA45C(s32 arg0, s32 arg1) {
    func_80142570();
    func_8013EA94();
    D_801BBBF0 = 1;
    func_800058DC((void *) arg0, func_801CA4A4);
}


extern s32 func_8013EB2C();
extern void func_80005700(s32);
extern void func_801CA520();

void func_801CA4A4(s32 arg0, s32 arg1) {
    if (func_8013EB2C() != 0) {
        func_80142570();
        func_8012FE50(0x23, 0xC4, 1, 1, 0);
        if (D_801CD234 != 0) {
            func_80005700(D_801CD234);
            D_801CD234 = 0;
        }
        func_800058DC((void *)arg0, &func_801CA520);
    }
}


void func_801CA520(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

