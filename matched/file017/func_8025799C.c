#include "common.h"
#define HHCAT2(a, b) a##b
#define HHCAT(a, b) HHCAT2(a, b)
#define func_80254B3C_Ctx HHCAT(hhctx_, __LINE__)
#define func_80254B3C_Args HHCAT(hhargs_, __LINE__)
#define func_80254B3C_Node HHCAT(hhnode_, __LINE__)
typedef struct hhctx_125 hhctx_125;
typedef struct hhctx_126 hhctx_126;
typedef struct hhctx_130 hhctx_130;
typedef struct hhctx_179 hhctx_179;
typedef struct hhctx_211 hhctx_211;
typedef struct hhctx_239 hhctx_239;
typedef struct hhargs_145 hhargs_145;
typedef struct hhargs_211 hhargs_211;
typedef struct hhargs_291 hhargs_291;
typedef struct hhnode_239 hhnode_239;
extern f32 func_8001EB64(s16);
extern s32 func_80133A24(s32);
typedef struct { u8 pad[0x28]; } func_80254B3C_Args;
typedef struct { u8 pad[0x90]; u16 unk90; } func_80254B3C_Ctx;
typedef struct { u8 pad[0x28]; } func_80254B3C_Node;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

#undef func_80254B3C_Ctx
#undef func_80254B3C_Args
#undef func_80254B3C_Node

typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;

extern f32 func_8001EAD0(s16);
extern s32 func_8012C6B4(s32);

void func_8025799C(func_8025799C_A0 *arg0, func_8025799C_A1 *arg1)
{
  f32 sp3C;
  s32 sp38;
  u8 pad[4];
  f32 sp30;
  sp38 = arg0->unk90++;
  if (func_80133A24(0x13A) == 0)
  {
    arg0->unk9C = (f32) ((((f64) func_8001EAD0(sp38 * 0x1E)) * 2.5) - 2.5);
  }
  arg1->unk4->unk30->unk8 = arg0->unk9C;
  arg1->unk8->unk30->unk8 = arg0->unk9C;
  sp3C = func_8012C6B4(0x2000);
  sp30 = func_8001EAD0((s32) sp3C);
  func_80380F94((sp30 * 7.0) + arg0->unk98, arg0->unk9C + 35.0f, (func_8001EB64((s32) sp3C) * 7.0) + arg0->unkA0, 0, 0.8f, 0.0, 5);
}
