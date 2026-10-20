#include "context.h"
extern u8 D_801E1110[];
void func_801CDDF8(void);


extern void func_801C25B0(void *arg0);
extern func_801CDD3C_StructGfx *D_801DABE8;
extern func_801CDD3C_StructGfx D_801E0D10[];
extern func_801CDD3C_StructGfx D_801E0F10[];

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
