#include "context.h"
void func_801DB74C(f32 arg0, f32 *arg1, f32 *arg2);
typedef struct func_801DB868_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_801DB868_StructVec;
typedef struct func_801DB868_StructObj {
    u8 pad[0xC];
    u16 unkC;
    u8 pad2[0x74 - 0xE];
    u8 unk74;
    u8 pad3[0xB0 - 0x75];
    func_801DB868_StructVec unkB0;
    func_801DB868_StructVec unkBC;
    func_801DB868_StructVec unkC8;
    func_801DB868_StructVec unkD4;
} func_801DB868_StructObj;

void func_801DB788(func_801DB868_StructVec arg0, func_801DB868_StructObj *arg1, f32 arg2, f32 arg3, s32 arg4)
{
  f32 sp2C;
  f32 sp28;
  f32 sp24;
  f32 sp20;
  u8 *p = (u8 *) arg1;
  sp2C = arg0.x - (*((f32 *) (p + 0xA4)));
  sp28 = arg0.z - (*((f32 *) (p + 0xAC)));
  sp24 = (sp2C * arg3) + (sp28 * arg2);
  func_801DB74C(sp24, (f32 *) (p + 0xB0), (f32 *) (p + 0xBC));
  sp20 = ((-sp2C) * arg2) + (sp28 * arg3);
  sp2C = sp24;
  func_801DB74C(sp20, (f32 *) (p + 0xB8), (f32 *) (p + 0xC4));
  if (((u8) arg4) != 0)
  {
    func_801DB74C(arg0.y, (f32 *) (p + 0xCC), (f32 *) (p + 0xD8));
    func_801DB74C(sp2C, (f32 *) (p + 0xC8), (f32 *) (p + 0xD4));
    func_801DB74C(sp20, (f32 *) (p + 0xD0), (f32 *) (p + 0xDC));
  }
}
