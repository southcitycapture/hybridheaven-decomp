#include "context.h"

extern s32 D_801BEB50;
extern s32 D_801BEB80;

struct func_8013E570_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

s32 func_8013E570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  struct func_8013E570_Struct *var_v1;
  struct func_8013E570_Struct *var_v2;
 var_v1 = (struct func_8013E570_Struct *) (&D_801BEB50); var_v2 = (struct func_8013E570_Struct *) (&D_801BEB80); while (1) { if (var_v1->unk0 == 0) { var_v1->unkC = arg4;
      var_v1->unk0 = arg0;
      var_v1->unk4 = arg2;
      var_v1->unk8 = arg3;
      return 1;
      var_v1 = (struct func_8013E570_Struct *) (&D_801BEB50);
    }
    var_v1++;
    if (var_v1 == var_v2)
    {
      return 0;
    }
  }

}
