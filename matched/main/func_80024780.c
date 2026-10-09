#include "context.h"

struct func_80024780_Struct {
    u8 pad0[0xD];
    u8 unkD;
    u8 pad1[0x25 - 0xE];
    u8 unk25;
};

extern s8 D_8004889C[];
extern struct func_80024780_Struct *D_800CBDA4;
extern void func_80024614(s8 *);

void func_80024780(void)
{
  int new_var;
  struct func_80024780_Struct *temp_v0;
  s8 *temp_a0;
  temp_v0 = D_800CBDA4;
  new_var = 8;
  temp_a0 = (s8 *) (D_8004889C + ((temp_v0->unk25 * new_var) - 0x240));
  temp_v0->unkD = temp_a0[0];
  temp_a0 = temp_a0 + 1;
  func_80024614(temp_a0);
}
