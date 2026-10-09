#include "context.h"

typedef struct func_80372654_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80372654_StructVec;

extern void func_8013A334(void *a0, s32 a1, s32 a2, s32 a3);

void func_80372654(f32 *arg0, void *arg1, void *arg2)
{
  s32 temp;
  func_80372654_StructVec sp30;
  func_80372654_StructVec sp24;
  func_80372654_StructVec sp18;
  temp = *((s32 *) (0x5C + ((u8 *) arg1)));
  func_8013A334(&sp24, (s32) arg2, temp, 9);
  func_8013A334(&sp18, (s32) arg2, temp, 0xC);
  sp30.x = (sp24.x + sp18.x) / ((f32) 2);
  if (arg0)
  {
  }
  sp30.y = (sp24.y + sp18.y) / ((f32) 2);
  sp30.z = (sp24.z + sp18.z) / ((f32) 2);
  *((func_80372654_StructVec *) arg0) = sp30;
}
