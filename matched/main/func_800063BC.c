#include "context.h"

struct func_800063BC_Struct {
    struct func_800063BC_Struct *next;
    u8 pad4[4];
    s32 unk8;
    u8 padC[0x10];
    s32 unk1C;
    u8 pad20[4];
    u32 unk24;
};

struct func_800063BC_StructGlobals {
    u8 pad[0xB0];
    struct func_800063BC_Struct *free;
};

void *func_800063BC(void *arg0, u32 arg1)
{
  struct func_800063BC_Struct *node;
  ;
  if (((struct func_800063BC_StructGlobals *) (&D_800892B0))->free != 0)
  {
    node = ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free;
    ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free = ((struct func_800063BC_StructGlobals *) (&D_800892B0))->free->next;
    node->unk24 = arg1;
    node->unk8 = 0;
    node->unk1C = 0;
    func_80006414(arg0, (struct func_80006414_Struct *) node);
    return node;
  }
  return 0;
}
