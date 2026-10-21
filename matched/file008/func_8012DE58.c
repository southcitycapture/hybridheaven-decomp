#include "context.h"
typedef struct func_8012DE58_C { s32 pad; f32 unk4; f32 unk8; f32 unkC; } func_8012DE58_C;
typedef struct func_8012DE58_B { u8 pad[0x2C]; func_8012DE58_C *unk2C; func_8012DE58_C *unk30; } func_8012DE58_B;
typedef struct func_8012DE58_A { u8 pad[0x24]; func_8012DE58_B *unk24; } func_8012DE58_A;
extern s32 func_801F1114();

void func_8012DE58(func_8012DE58_A *arg0)
{
  func_8012DE58_B *b;
  if (arg0 == (*((func_8012DE58_A **) (D_801BBBF0 + 0xDC))))
  {
    if (func_801F1114() == 0x28)
    {
      b = arg0->unk24;
      if (arg0->unk24->unk2C != 0)
      {
        arg0->unk24->unk2C->unk4 += *((f32 *) (D_801BBBF0 + 0x390));
        arg0->unk24->unk2C->unk8 += *((f32 *) (D_801BBBF0 + 0x394));
        arg0->unk24->unk2C->unkC += *((f32 *) (D_801BBBF0 + 0x398));
      }
      else
      {
        arg0->unk24->unk30->unk4 += *((f32 *) (D_801BBBF0 + 0x390));
        arg0->unk24->unk30->unk8 += *((f32 *) (D_801BBBF0 + 0x394));
        arg0->unk24->unk30->unkC += *((f32 *) (D_801BBBF0 + 0x398));
      }
    }
  }
}
