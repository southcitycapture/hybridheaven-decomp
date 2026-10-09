#include "context.h"

struct func_80242E30_Struct {
    u8 pad0[0x34];
    s16 *unk34;
};

void func_80242E30(struct func_80242E30_Struct *arg0, s32 arg1)
{
  s16 *temp_v0;
  s16 temp_t8;
  temp_v0 = arg0->unk34;
  temp_v0[4] = 0;
  temp_t8 = temp_v0[4];
  temp_v0[1] = 0;
  temp_v0[2] = 0;
  temp_v0[5] = 0;
  temp_v0[6] = 0;
  temp_v0[3] = ((temp_t8 & 0xFFFFu) & 0xFFFFu) & 0xFFFFu;
}
