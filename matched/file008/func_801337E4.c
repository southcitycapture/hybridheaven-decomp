#include "common.h"
extern u8 D_801BCD90[];


s32 func_801337E4(s32 arg0)
{
  return (D_801BCD90[(arg0 / 8) & 0xFF] & ((unsigned char) (1 << ((arg0 % 8) & 0xFF)))) & 0xFF;
}
