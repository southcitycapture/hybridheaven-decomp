#include "context.h"
struct func_801E5784_W { u32 w0; u32 w1; };
extern u8 func_801DABDC[];
extern u8 D_801DABE8[];
extern s32 D_801DAC4C;
extern s32 D_801FB26C;
extern u8 D_801E0D10[];
extern u8 D_801E0F10[];
struct func_801E5784_S3 { u8 pad[0x28]; s32 u28; s32 u2C; s32 u30; };
struct func_801E5784_S2 { u8 pad[0x30]; struct func_801E5784_S3 *u30; };
struct func_801E5784_S1 { u8 pad[4]; struct func_801E5784_S2 *u4; };
struct func_801E5784_D { u8 pad[0x18]; s32 u18; };
extern struct func_801E5784_D func_801DAC30;
#define GP5784 (*(struct func_801E5784_W **)D_801DABE8)
#define OBJ (*(struct func_801E5784_S1 **)&D_801DAC4C)

s32 func_801E5784(s32 arg0, s32 arg1) {
    func_80005E44(func_801DAC30.u18, func_801DABDC + 0x14);
    func_80005E44(func_801DAC30.u18, func_801DABDC + 0x24);
    func_80006214(func_801DAC30.u18);
    GP5784 = (struct func_801E5784_W *)D_801E0D10;
    {
        struct func_801E5784_W *_g = GP5784;
        _g->w0 = 0xDF000000;
        _g->w1 = 0;
    }
    GP5784 = (struct func_801E5784_W *)D_801E0F10;
    {
        struct func_801E5784_W *_g = GP5784++;
        _g->w1 = 0;
        _g->w0 = 0xDF000000;
    }
    OBJ->u4->u30->u30 = 0;
    OBJ->u4->u30->u28 = 0;
    D_801FB26C = 0;
    return 2;
}
