#include "context.h"
extern void func_800058DC(s32 arg0, void *arg1);
extern s32 D_801DABCC;
void func_801CDC8C(s32 arg0, s32 arg1);
extern s32 D_801DAC48;
extern s32 D_801DAC4C;
extern s32 D_801DABD0;
void func_801CDDF8(void);
typedef struct func_801CDD3C_StructGfx {
    u32 w0;
    u32 w1;
} func_801CDD3C_StructGfx;
extern func_801CDD3C_StructGfx *D_801DABE8;
extern func_801CDD3C_StructGfx D_801E0D10[];
extern func_801CDD3C_StructGfx D_801E0F10[];
void func_801CDDF8(void);
extern void func_801BF6C4(s32 a);

void func_801CDBF0(s32 arg0, s32 arg1)
{
  func_801CDD3C_StructGfx *g;
  func_801CDD3C_StructGfx *new_var;
  D_801DABCC = 0;
  D_801DAC48 = 0;
  D_801DAC4C = 0;
  D_801DABD0 = 0;
  func_801BF6C4(5);
  func_801CDDF8();
  g = (D_801DABE8 = D_801E0D10);
  g->w0 = 0xDF000000;
  g->w1 = 0;
  new_var = (D_801DABE8 = D_801E0F10);
  g = new_var;
  D_801DABE8++;
  g->w1 = 0;
  g->w0 = 0xDF000000;
  func_800058DC(arg0, (void *) func_801CDC8C);
}
