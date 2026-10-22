#include "context.h"
struct func_8021DEA8_Actor {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x20 - 0x10];
    u16 unk20;
    u8 pad22[0x5C - 0x22];
    struct func_8021DEA8_Actor *unk5C;
};
struct func_8021DEA8_Dev {
    u8 pad0[0xDC];
    struct func_8021DEA8_Actor *unkDC;
    u8 padE0[0xEC - 0xE0];
    struct func_8021DEA8_Actor *unkEC;
    u8 padF0[0xB90 - 0xF0];
    f32 unkB90;
};
#define D ((struct func_8021DEA8_Dev *)&D_801BBBF0)
s32 func_8021DEA8(struct func_8021DEA8_Actor *arg0)
{
  struct func_8021DEA8_Actor *v1;
  struct func_8021DEA8_Actor *a;
  s32 r;
  if (arg0 != ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkDC)
  {
    v1 = ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkDC;
  }
  else
  {
    v1 = ((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkEC;
  }
  a = v1->unk5C;
  r = (((((((((func_8022560C(a, (struct func_8021DEA8_Dev *) (&D_801BBBF0)) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF;
  if ((((((((((((((((r == 1) && (a->unkE != 0x148)) || (r == 0x15)) || (r == 0x16)) || (r == 0x17)) || (r == 0x18)) || (r == 0x19)) || (r == 0x1A)) || ((r == 0x1B) ^ 0)) || (r == 0x1C)) || (r == 0x1D)) || (r == 0x1E)) || (r == 0x20)) || (r == 0x1F)) && (a->unk20 >= 4)) && (((struct func_8021DEA8_Dev *) (&D_801BBBF0))->unkB90 < 50.0f))
  {
    return 1;
  }
  return 0;
}
