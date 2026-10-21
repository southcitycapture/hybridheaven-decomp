#include "context.h"
extern s32 func_80000704(void *);
extern u8 D_8005C4B0[];
extern u8 D_8038F800[];
extern u8 D_80400000[];
extern u16 D_8008934A;
extern u32 *D_8008D5BC;

typedef struct {
    u32 w0;
    u32 w1;
} func_80007750_Gfx;

void func_80007750(void) {
    extern s32 func_80001060();

    {
        func_80007750_Gfx *_g = (func_80007750_Gfx *)D_8008D5BC;
        D_8008D5BC += 2;
        _g->w0 = 0xE7000000;
        _g->w1 = 0;
    }
    if (func_80001060() != 0) {
        {
            func_80007750_Gfx *_g = (func_80007750_Gfx *)D_8008D5BC;
            D_8008D5BC += 2;
            _g->w0 = 0xED000000, _g->w1 = 0xA00780;
        }
        {
            func_80007750_Gfx *_g = (func_80007750_Gfx *)D_8008D5BC;
            D_8008D5BC += 2;
            _g->w0 = ((D_8008934A & 3) << 0x13) | 0xFF000000 | 0x27F;
            _g->w1 = (func_80000704(D_8005C4B0) << 0x14) + 0x80000000 + (u32)D_80400000;
        }
    } else {
        {
            func_80007750_Gfx *_g = (func_80007750_Gfx *)D_8008D5BC;
            D_8008D5BC += 2;
            _g->w0 = 0xED000000, _g->w1 = 0x5003C0;
        }
        {
            func_80007750_Gfx *_g = (func_80007750_Gfx *)D_8008D5BC;
            D_8008D5BC += 2;
            _g->w0 = ((D_8008934A & 3) << 0x13) | 0xFF000000 | 0x13F;
            _g->w1 = (func_80000704(D_8005C4B0) * 0x25800) + 0x80000000 + (u32)D_8038F800;
        }
    }
}
