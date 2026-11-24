#include "common.h"
extern u8 D_801DAB14[];
extern s32 D_801ECEE8;
extern s32 D_801ECEEC;
struct func_801E4EE0_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x4B - 0x14];
    u8 unk4B;
};
struct func_801E4EE0_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad1[0x30 - 0x23];
    struct func_801E4EE0_Leaf *unk30;
};
struct func_801E4EE0_Obj {
    u8 pad0[0x1C];
    struct func_801E4EE0_Mid *unk1C;
};
extern struct func_801E4EE0_Obj *D_8038D8D0;
typedef struct func_801E9614_StructF { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_801E9614_StructF;
typedef struct func_801E9614_StructA { u8 pad[0x2C]; func_801E9614_StructF *unk2C; } func_801E9614_StructA;
typedef struct func_801E9614_StructB { u8 pad[0x24]; func_801E9614_StructA *unk24; } func_801E9614_StructB;
typedef struct func_801E9614_StructC { u8 pad[8]; func_801E9614_StructB *unk8; } func_801E9614_StructC;
typedef struct func_801E9614_StructR { u8 pad[8]; func_801E9614_StructC *unk8; } func_801E9614_StructR;
#define ROOT (*(func_801E9614_StructR **)D_801DAB14)
extern void func_801C1000(s32 arg0, s32 arg1);
extern void func_801C80C8(f32, f32, f32, f32, f32, f32, f32, s32);
extern void func_801C815C(f32, f32, f32, f32, f32, f32, f32, s32);


struct func_801E7420_StructB
{
  u8 pad0[4];
  f32 unk4;
  f32 unk8;
  f32 unkC;
};
struct func_801E7420_StructA
{
  u8 pad0[0x2C];
  struct func_801E7420_StructB *unk2C;
};
struct func_801E7420_StructF
{
  u8 pad0[0x24];
  struct func_801E7420_StructA *unk24;
};
struct func_801E7420_StructE
{
  u8 pad0[8];
  struct func_801E7420_StructF *unk8;
};
struct func_801E7420_StructC
{
  u8 pad0[0x22];
  u8 unk22;
};
struct func_801E7420_StructD
{
  u8 pad0[0x14];
  struct func_801E7420_StructC *unk14;
  struct func_801E7420_StructC *unk18;
};
extern s32 func_801C0DE4(s32, s32, s32);
extern void func_801C0EB0(s32, s32);
extern u64 func_801C0F18(s32, s32);
extern f64 func_80034C24(u64);
#define ROOT (*(struct func_801E7420_StructE **)D_801DAB14)

s32 func_801E7420(s32 arg0, s32 arg1)
{
  struct func_801E7420_StructB *new_var;
  f64 t;
  struct func_801E7420_StructB *b;
  if (func_801C0DE4(4, 0, 0x3E2E1480) != 0)
  {
    ((struct func_801E7420_StructD *) D_8038D8D0)->unk14->unk22 = 0;
    ((struct func_801E7420_StructD *) D_8038D8D0)->unk18->unk22 = 1;
    func_801C0EB0(4, 0);
    func_801C1000(4, 0);
    D_801ECEE8 = 0;
    D_801ECEEC = 0;
    return 0x1E;
  }
  t = ((f32) (func_80034C24(func_801C0F18(4, 0)) / (1e+06))) / (0.17000008f);
  ROOT->unk8->unk24->unk2C->unk4 = (t * (3.5999999999999943)) + (114.7);
  ROOT->unk8->unk24->unk2C->unk8 = (t * (3.3000000000000007)) + 13.5;
  ROOT->unk8->unk24->unk2C->unkC = (t * (-3.700000000000003)) + (-72.8);
  b = ROOT->unk8->unk24->unk2C;
  func_801C80C8(b->unk4, b->unk8 + 10.5f, b->unkC, 1.0f, 1.0f, 1.0f, 1.0f, 0x14);
  b = new_var = ROOT->unk8->unk24->unk2C;
  func_801C815C(b->unk4, ROOT->unk8->unk24->unk2C->unk8 + 8.0f, new_var->unkC, 1.0f, 1.0f, 1.0f, 1.0f, 0x14);
  return 0x1D;
}
