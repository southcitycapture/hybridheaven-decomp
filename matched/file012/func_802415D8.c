#include "context.h"
void *func_80241304(s32 arg0, s32 arg1);
void func_80241640(s32 arg0, s32 arg1);
extern struct func_8024175C_Struct D_801BBBF0;
struct func_8024175C_Struct {
    u8 pad[0xF26];
    s8 unkF26;
};

extern u8 D_80248DDC[];

typedef struct func_802415D8_Struct {
    u8 pad[0xF26];
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 pad2[0x3];
    s8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
} func_802415D8_Struct;

void func_802415D8(s32 arg0, s32 arg1)
{
  func_802415D8_Struct *g;
  g = (func_802415D8_Struct *) (&D_801BBBF0);
 g->unkF26 = 0x40; g->unkF28 = -0xF;
  g->unkF27 = 0x40;
  g->unkF2C = -0x40;
  g->unkF2D = -0x40;
  g->unkF2E = -0xF;
 func_80241304(arg0, (s32) D_80248DDC); func_800058DC(arg0, &func_80241640);
}
