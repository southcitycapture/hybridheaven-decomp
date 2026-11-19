#include "common.h"
void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
typedef struct func_80242080_Struct2 {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x17];
    u8 unk4B;
} func_80242080_Struct2;
typedef struct func_80242080_Struct1 {
    u8 pad0[0x30];
    func_80242080_Struct2 *unk30;
} func_80242080_Struct1;
typedef struct func_80242440_StructObj {
    u8 pad[0x2C];
    s32 unk2C;
} func_80242440_StructObj;
void func_80242440(func_80242440_StructObj *arg0, func_80242080_Struct1 **arg1);


void func_802423F0(void *arg0, void *arg1)
{
  func_80242440_StructObj *obj = arg0;

  if (func_80133A24(0xBD) != 0)
  {
    obj->unk2C = obj->unk2C | 0x800;
    func_800058DC(obj, func_80242440);
  }
}
