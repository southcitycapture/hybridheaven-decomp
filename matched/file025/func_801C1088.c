#include "context.h"
struct func_801C1134_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern struct func_801C1134_Struct D_801DEA40[];
extern struct func_801C1134_Struct D_801DEBC0[];

s32 func_801C1088(u32 arg0, s32 arg1, u32 arg2)
{
  struct func_801C1134_Struct *p;
 p = D_801DEA40; do { if ((arg0 == p->unk0) && (arg1 == p->unk4)) {
      break;
    }
    p++;
  }
  while (p != D_801DEBC0);
  arg0 = D_801D8DA8 - p->unk8;
  return arg0 >= arg2;
}
