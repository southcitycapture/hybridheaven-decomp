#include "context.h"

void func_80228CC4(func_80228C20_StructArg *arg0, f32 arg1, f32 arg2)
{
  func_80228C20_StructPos *v0;
  func_80228C20_StructPos *v1;
  if (arg0->unkC->unkC == ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkDC)
  {
    ;
    v0 = (*((func_80228C20_StructGlobal *) (&D_801BBBF0))->unk448)->unk24->unk2C;
    func_8001EF38((v0->unkC - ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C->unkC) + arg2, (v0->unk4 - ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C->unk4) + arg1);
  }
  else
  {
    v1 = ((func_80228C20_StructGlobal *) (&D_801BBBF0))->unkE0->unk2C;
    v0 = (*((func_80228C20_StructGlobal *) (&D_801BBBF0))->unk448)->unk24->unk2C;
    func_8001EF38((v1->unkC - v0->unkC) + arg2, (v1->unk4 - v0->unk4) + arg1);
  }
}
