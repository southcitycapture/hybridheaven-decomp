#include "context.h"

struct func_801C1134_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern struct func_801C1134_Struct D_801DEA40[];
extern struct func_801C1134_Struct D_801DEBC0[];

s32 func_801C1134(s32 arg0, s32 arg1)
{
  struct func_801C1134_Struct *var_v1;
  struct func_801C1134_Struct *var_v0;
  var_v0 = D_801DEBC0;
 var_v1 = D_801DEA40; do { if (arg0 == var_v1->unk0) {
      if (arg1 == var_v1->unk4)
      {
        break;
      }
    }
    var_v1++;
  }
  while (var_v1 != D_801DEBC0);
  return D_801D8DA8 - var_v1->unk8;
}
