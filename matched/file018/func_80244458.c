#include "context.h"
void func_800058DC(void *, void (*)());

struct func_80244458_Struct1 {
    u8 pad0[0x2C];
    s32 unk2C;
};
struct func_80244458_Struct0 {
    u8 pad0[0x24];
    struct func_80244458_Struct1 *unk24;
};

extern void func_80243F08();
extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern s32 D_8025C6EC;
extern s8 D_8025C6F8;
extern s8 D_8025C6FA;
extern s8 D_8025C704;

void func_80244458(void *arg0, s32 *arg1)
{
  s32 temp_v0;
  func_800058DC(arg0, func_80243F08);
  D_8025C6F8 = 1;
  D_8025C6FA = 0;
  D_8025C6EC = 0;
  ;
  func_8013E5C4(*arg1, 0, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 4, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 8, ((struct func_80244458_Struct0 *) arg0)->unk24->unk2C + 0xC);
  D_8025C704 = 1;
}
