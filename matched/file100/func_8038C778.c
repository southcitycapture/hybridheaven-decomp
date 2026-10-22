#include "context.h"

extern s32 func_8038C824(s32, s32);
extern s32 D_8038D8F0;
extern s32 *D_8038DB34[];

struct func_8038C778_StructEntry {
    s32 a;
    s32 b;
    u8 pad[8];
};

struct func_8038C600_StructC *func_8038C778(void)
{
  s32 a;
  s32 b;
  s32 offset;
  s32 *base;
  struct func_8038C778_StructEntry *entry;
  if ((D_8038D8F0 > 0) && (D_8038D8F0 < 9))
  {
    entry = ((struct func_8038C778_StructEntry *) (&D_8038E070)) + D_8038D8F0;
    a = entry[-1].a;
    b = entry[-1].b;
    if (func_8038C824(a, b))
    {
      base = D_8038DB34[a];
      offset = b * 0x10;
      if ((*((s32 *) (((u8 *) base) + offset))) == 0)
      {
        base = D_8038DB34[a];
        return (struct func_8038C600_StructC *) (((u8 *) base) + offset);
      }
      D_8038D8F0--;
      return 0;
    }
  }
  return 0;
}
