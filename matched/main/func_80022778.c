#include "context.h"

extern void func_80022C8C(u8, u8 *);
extern u8 D_801B6600[];

void func_80022778(u8 arg0)
{
  u32 *p;
  u32 v;
 p = &D_801B5520; do {
    v = (*p) & 0x7FFF;
    if ((((v >= 0x10) ^ 0) && (v < 0x100)) && (arg0 == ((u8 *) p)[0xD5]))
    {
      D_800CBB48 = v;
      func_80022C8C(arg0, D_801B6600);
      return;
    }
    p += 0x36;
  }
  while (((u8 *) p) != D_801B6600);
}
