#include "common.h"


extern s32 func_80005670();
extern u8 D_801BC3D8[];
extern u8 D_803897CC[];
extern s32 D_8038CFB0;

s32 func_8037FFF0(s32 arg0) {
    if (*(u16 *)&D_801BC3D8[0x3B2] == 0) {
        func_80005670(arg0, D_803897CC);
        D_8038CFB0 = arg0;
        *(u16 *)&D_801BC3D8[0x3B2] = 1;
        return 0;
    }
    if (*(u16 *)&D_801BC3D8[0x3B2] == 2) {
        return 1;
    }
    return 0;
}


typedef struct func_8038005C_Struct {
    u8 pad[0x94];
    u8 unk94;
} func_8038005C_Struct;

extern s32 func_80006214(void *);
extern s32 func_80147250(s32, s32, s32, s32, s32);
extern s32 D_8008DA88[];

void func_8038005C(func_8038005C_Struct *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4)
{
  s32 *temp_s3;
  s32 *temp_v0;
  s32 *temp_s2;
  s32 var_s0;
  temp_v0 = *((s32 **) (((u8 *) D_8038CFB0) + 0x5C));
  temp_s3 = (s32 *) temp_v0[1];
 func_80006214(D_8038CFB0); temp_s2 = (s32 *) D_8008DA88; var_s0 = 1; if (arg0->unk94 >= 2) { do {
      if (temp_s3[var_s0] >= 0)
      {
        func_80147250(temp_s2[var_s0], arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF, arg4);
      }
      var_s0 = (var_s0 + 1) & 0xFF;
    }
    while (var_s0 < arg0->unk94);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80380140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_8038047C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_803805A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_803807D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_8038092C.s")


extern void func_80005700();

struct func_80380AF4_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80380AF4(struct func_80380AF4_Struct *arg0, s32 arg1) {
    if (arg0->unk8 == 0) {
        func_80005700();
        *(s16 *)&D_801BC3D8[0x3B2] = 2;
    }
}

typedef struct func_80380B30_SB { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[0x20]; u32 unk30; } func_80380B30_SB;
typedef struct func_80380B30_SA { u8 pad[0x2C]; func_80380B30_SB *unk2C; } func_80380B30_SA;
typedef struct func_80380B30_S { u8 pad0[0x24]; func_80380B30_SA *unk24; u8 pad28[0x14]; u16 unk3C; u8 unk3E; u8 pad3F; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x44]; s16 unk90; u8 unk92; u8 pad93; f32 unk94; f32 unk98; } func_80380B30_S;
extern s32 func_8012C6B4();
extern s32 func_801472C0(s32, u8, u8, s32, s32);
extern s32 func_800058DC();
extern u8 D_80389880[];
extern f64 D_8038BE08;
extern f64 D_8038BE10;
extern f64 D_8038BE18;
extern func_80380B30_SA *D_8038CFB4;
extern u8 func_80380CD8[];

void func_80380B30(func_80380B30_S *arg0, s32 arg1)
{
  u8 c;
  f32 f;
  f64 k;
  s32 r;
  func_80380B30_SA *p;
  arg0->unk3E = 1;
  r = func_8012C6B4(0x50);
  k = D_8038BE08;
  f = (f32) ((((f64) ((f32) r)) * D_8038BE10) + 1.0);
  arg0->unk98 = f;
  arg0->unk44 = f;
  arg0->unk24->unk2C->unk30 = ((u32) D_80389880) | 0x40000000;
  arg0->unk40 = (f32) (((f64) (arg0->unk24->unk2C->unk4 - D_8038CFB4->unk2C->unk4)) * k);
 if (1) { } if (1) { } if (1) { } if (1) { } if (1) { }
  arg0->unk48 = (f32) (((f64) (arg0->unk24->unk2C->unkC - D_8038CFB4->unk2C->unkC)) * k);
  arg0->unk90 = func_8012C6B4(0x300) + 0x100;
  arg0->unk3C = func_8012C6B4(0x3C) + 0x1E;
  arg0->unk94 = (f32) (((f64) ((f32) arg0->unk3C)) * D_8038BE18);
  arg0->unk92 = func_8012C6B4(8);
  c = func_8012C6B4(0x3C) + 0x8C;
  func_80147250((s32) arg0->unk24, 0, 0, 0, 0xFF);
  func_801472C0((s32) arg0->unk24, c, c, c & 0xFF, 0xFF);
  func_800058DC(arg0, func_80380CD8);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80380CD8.s")


extern void (*D_803897C0)(void *);

typedef struct func_80381230_StructA {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[0x92 - 0x34];
    s16 unk92;
} func_80381230_StructA;

typedef struct func_80381230_StructB {
    u8 pad0[0x4B];
    u8 unk4B;
} func_80381230_StructB;

typedef struct func_80381230_StructC {
    u8 pad0[0x30];
    func_80381230_StructB *unk30;
} func_80381230_StructC;

void func_80381230(func_80381230_StructA *arg0, func_80381230_StructC **arg1)
{
  s32 var_v0;
  func_80381230_StructB *temp_v1;
  temp_v1 = (*arg1)->unk30;
  var_v0 = temp_v1->unk4B;
  var_v0 += arg0->unk92;
  if (var_v0 < 0)
  {
    var_v0 = 0;
  }
  if (var_v0 >= 0x100)
  {
    var_v0 = 0xFF;
  }
  temp_v1->unk4B = var_v0;
  if (D_803897C0 != 0)
  {
    if (((!arg1) && (!arg1)) && (!arg1))
    {
    }
    D_803897C0(arg0);
  }
  if ((arg0->unk30 & 0x20) || (var_v0 == 0))
  {
    func_80005700();
  }
}


struct func_803812C0_Struct2 {
    u8 pad0[0x48];
    u8 unk48;
};

struct func_803812C0_Struct1 {
    u8 pad0[0x30];
    struct func_803812C0_Struct2 *unk30;
};

struct func_803812C0_Struct0 {
    u8 pad0[0x44];
    f32 unk44;
    u8 pad1[0x94 - 0x48];
    f32 unk94;
};

void func_803812C0(struct func_803812C0_Struct0 *arg0, struct func_803812C0_Struct1 **arg1) {
    s32 var_v0;

    arg0->unk44 = (f32) (arg0->unk44 + arg0->unk94);
    var_v0 = (*arg1)->unk30->unk48 - 5;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 0x100) {
        var_v0 = 0xFF;
    }
    (*arg1)->unk30->unk48 = (u8) var_v0;
}

