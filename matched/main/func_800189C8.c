#include "context.h"

extern void *func_8001B154(s32);
extern u8 D_8008EC18[];
extern s16 D_801BBF40;

typedef struct func_800189C8_Struct {
    u8 unk0;
    u8 pad1[5];
    s16 unk6;
    u8 pad8[6];
    s16 unkE;
    s16 unk10;
    u8 unk12;
    u8 unk13;
    u8 unk14;
    u8 pad15[2];
    u8 unk17;
    u8 pad18[0x102];
} func_800189C8_Struct;

void func_800189C8(void)
{
  u8 i;
  s32 j;
  func_800189C8_Struct *p;
  func_800189C8_Struct *q;
  i = 0;
  p = func_8001B154(D_8008EBC2 * 4);
  while (i < D_8008EC18[(D_8008EBC2 * 0x26) + 4])
  {
    j = 0;
    q = p;
 do { while (q->unk12 != 0xFF) { j = (j + 1) & 0xFF; q->unk13 = 0; q->unk17 = 0; q->unk14 = 0xFF; q = (func_800189C8_Struct *) (((u8 *) p) + (j * 8)); if (!i) { } } } while (0);
    p->unkE = 0;
    p->unk10 = 0;
    p->unk0 = 1;
    p->unk6 = 0;
    i++;
    p++;
  }

  D_801BBF40 = 0;
}
