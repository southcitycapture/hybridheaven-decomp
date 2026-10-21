#include "context.h"
typedef struct { u16 a; u8 t; u8 p[3]; } func_800213DC_Struct;
extern func_800213DC_Struct D_800CBDD8[];
extern u8 D_800CBDD0;
extern void (*D_80047E0C[])(void);
extern void func_80021518();
extern void func_80021824();
extern s32 func_80021EB8();

void func_800213DC(void)
{
  func_800213DC_Struct *e;
  u16 v;
  while (D_800CBDD0 != 0)
  {
    D_800CBDD0--;
    e = &D_800CBDD8[D_800CBDD0];
    v = e->a;
    switch (e->t)
    {
      case 0:
        D_800CBB48 = v;
        if (v < 0x100U)
      {
        if (v < 0x10U)
        {
          D_80047E0C[v - 1]();
        }
        else
        {
          func_80021EB8();
        }
      }
      else
      {
        func_80021968(0);
      }
        break;

      case 1:
        func_80021518(v, (unsigned long) v);
        break;

      case 2:
        func_80021824(0);
        break;

      case 3:
        func_80021824(1);
        break;

      case 4:
        func_80021824(2);
        break;

    }

  }

}
