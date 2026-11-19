#include "common.h"
extern u8 D_801BCDF8[];


s32 func_80133904(s32 arg0)
{
  return (D_801BCDF8[(arg0 / 8) & 0xFF] & ((unsigned char) (1 << ((arg0 % 8) & 0xFF)))) & 0xFF;
}
