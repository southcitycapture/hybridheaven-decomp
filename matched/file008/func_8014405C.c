#include "context.h"
extern s16 D_801BEC52;
void func_80144A4C(s32 a0, s16 a1, s16 a2, s32 a3, s32 a4);
extern void func_8014456C(s32 a0, s16 a1, s16 a2, u8 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

typedef struct func_8014405C_Struct {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 e;
    s16 f;
} func_8014405C_Struct;

extern func_8014405C_Struct D_80181510;

void func_8014405C(s32 arg0)
{
  u8 *sp3C;
  func_8014405C_Struct sp40;
  sp40 = D_80181510;
  sp3C = (u8 *) (arg0 - 0x10);
  D_801BEC52 = 6;
  func_8014456C(5, sp40.a, sp40.b, *sp3C, *((u8 *) (arg0 - 0xE)), *((u8 *) (arg0 - 0xD)), *((u16 *) (arg0 - 0xC)), *((u8 *) (arg0 - 0xA)), *((u8 *) (arg0 - 0x9)));
  sp3C = (u8 *) (arg0 - ((unsigned int) 0x10));
  func_8014456C(3, sp40.c, sp40.d, sp3C[8], sp3C[0xA], sp3C[0xB], *((u16 *) (sp3C + 0xC)), sp3C[0xE], sp3C[0xF]);
  func_8014456C(4, sp40.e, sp40.f, sp3C[0x10], sp3C[0x12], sp3C[0x13], *((u16 *) (sp3C + 0x14)), sp3C[0x16], sp3C[0x17]);
  func_80144A4C(4, sp40.e, sp40.f, 0x42, 0x9E);
}
