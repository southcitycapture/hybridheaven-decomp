#define func_80108280 func_80108280_decl
#include "context.h"
#undef func_80108280

struct func_80108280_StructB { u8 pad0[8]; struct func_80108280_StructA *head; };
struct func_80108280_StructA {
    struct func_80108280_StructA *next;
    u8 pad4[0x20];
    s32 f24;
    u8 pad28[4];
    s32 f2C;
    u8 pad30[0x44];
    u8 *f74;
};
struct func_80108280_StructC {
    u8 pad0[4];
    u16 f4;
    u8 pad6[0x4A];
    struct func_80108280_StructB *f50;
};
extern struct func_80108280_StructC D_801BBBF0;
extern s32 func_8012FF58();

s32 func_80108280(void)
{
  struct func_80108280_StructA *s0;
  s32 a0;
  s32 s1;
  u8 *p;
  D_801BBAD0 = 0;
  s0 = D_801BBBF0.f50->head;
  a0 = 0;
  if (s0 != 0)
  {
    do
    {
      if (s0->f24 != 0)
      {
        p = s0->f74;
        if (((p != 0) && (s0->f2C & 0x800)) && (s0->f74[0] == 0xFD))
        {
          D_801BBAD0 = (s32) s0;
          s1 = func_8012FF58(a0) & 0xFFFF;
          a0 = (((func_8012FF58() % 10) + ((s1 / 10) << 8)) + 0x101) & 0xFFFF;
          if (D_801BBBF0.f4 >= 0x64)
          {
            a0 = 0;
          }
        }
      }
      s0 = s0->next;
    }
    while (s0 != 0);
  }
  return a0;
}
