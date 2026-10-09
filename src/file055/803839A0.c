#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_803839A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_803839DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_803839E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383AD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383BCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383D08.s")


typedef struct func_80383E54_Struct {
    u32 w0;
    u32 w1;
} func_80383E54_Struct;

extern void func_80383F34(void *, void *, void *, u8);
extern u8 D_80385070[];
extern u8 D_80387D30[];
extern u8 D_8038BD30[];
extern u8 D_8038BF30[];
extern u8 D_8038D2BC[];
extern u8 D_8038D73C[];
extern u8 D_8038DAFC[];
extern u8 D_8038DB44[];
extern u8 D_8038DBA4[];
extern s32 D_8038DBBC;
extern u8 D_8038DBC0;
extern s32 D_8038DBD0;
extern u8 D_8038DBD4;
extern s32 D_8038DBD8;
extern void *D_8038DDC0;

void *func_80383E54(void *arg0, void *arg1)
{
  int new_var;
  s32 temp_a0;
  D_8038DDC0 = arg1;
  if (D_8038DBD8 == 1)
  {
    func_80383F34(D_8038DBA4, D_8038BD30, D_8038D73C, 0xFF ^ 0);
  }
  if (D_8038DBBC == 1)
  {
    func_80383F34(D_8038DAFC, D_80385070, D_8038BF30, D_8038DBC0);
    if (!D_8038DDC0)
    {
    }
  }
 do { } while (0);
  if (D_8038DBD0 == 1)
  {
    func_80383F34(D_8038DB44, D_80387D30, D_8038D2BC, D_8038DBD4);
  }
  if (D_8038DBD8)
  {
  }
  temp_a0 = (s32) D_8038DDC0;
  new_var = 0;
  D_8038DDC0 = (void *) (temp_a0 + 8);
  ((s32 *) temp_a0)[1] = 0;
  ((s32 *) temp_a0)[new_var] = 0xDF000000;
  return D_8038DDC0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file055/803839A0/func_80383F34.s")

