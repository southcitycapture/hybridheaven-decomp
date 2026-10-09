#include "context.h"

extern void func_80005700(void);
extern u8 D_801BBBF0[];
extern u8 D_801BBC00[];

s32 func_801FDB3C(s32 arg0)
{
  u8 *var_v0;
 var_v0 = D_801BBBF0; do {
    if (arg0 == (*((s32 *) (var_v0 + 0x20C))))
    {
      *((s32 *) (var_v0 + 0x20C)) = 0;
      func_80005700();
      return 1;
    }
    var_v0 += 4;
  }
  while (((s32) var_v0) != ((s32) D_801BBC00));
  return 0;
}
