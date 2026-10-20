#include "common.h"

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


extern s32 func_801BF968(void);
extern void func_801CDCD0();

void func_801CDC8C(s32 arg0, s32 arg1) {
    D_801DABCC = 1;
    if (func_801BF968() != 0) {
        func_800058DC(arg0, func_801CDCD0);
    }
}


extern void func_801BF850(void *arg0, s32 arg1, void *arg2);
extern u8 D_801DABC0[];
extern u8 D_801E1188[];

void func_801CDCD0(s32 arg0, s32 arg1) {
    D_801DAC48 = arg0;
    D_801DAC4C = arg1;
    func_801BF850(D_801DABC0, 5, D_801E1188);
}



s32 func_801CDD14(void) {
    return D_801DABCC;
}



s32 func_801CDD20(void) {
    return (D_801DABD0 = D_801DABD0 + 1) < 0xA;
}

extern u8 D_801E1110[];


extern void func_801C25B0(void *arg0);

s32 func_801CDD3C(void) {
    u8 *var_s1;
    s32 var_s0;

    D_801DABE8 = D_801E0D10;
    {
    func_801CDD3C_StructGfx *gfx = D_801DABE8;
    gfx->w0 = 0xDF000000;
    gfx->w1 = 0;
    }
    D_801DABE8 = D_801E0F10;
    {
    func_801CDD3C_StructGfx *gfx = D_801DABE8++;
    gfx->w1 = 0;
    gfx->w0 = 0xDF000000;
    }
    if (D_801DABD0 != 0) {
        var_s0 = 0;
        if (D_801DABD0 > 0) {
            var_s1 = D_801E1110;
            do {
                func_801C25B0(var_s1);
                var_s0 += 1;
                var_s1 += 0xC;
            } while (var_s0 < D_801DABD0);
        }
        D_801DABD0 = 0;
    }
    func_801CDDF8();
    return 1;
}


extern void func_801C26C4(s32 arg0, void *arg1);

void func_801CDDF8(void) {
    D_801DABD0 = 0;
    func_801C26C4(0xA, D_801E1110);
}


void func_801CDE28(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


void func_801CDE34(s32 arg0, s32 arg1) {
    s32 temp = D_801DAC48;

    func_800058DC(temp, (void *) func_801CDC8C);
}


void func_801CDE68(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

