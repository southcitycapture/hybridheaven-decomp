#include "common.h"

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


struct func_800078AC_Struct {
    u8 pad[0x92];
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
};

extern s32 func_80001060(s32, s32, s32, void *);
extern struct func_800078AC_Struct D_800892B0;

void func_800078AC(s32 arg0, s32 arg1)
{
  u32 *temp_v0;
  s32 temp_a2;
  struct func_800078AC_Struct *src;
  temp_v0 = D_8008D5BC;
  D_8008D5BC = temp_v0 + 2;
 temp_v0[0] = 0xE3000A01; temp_v0[1] = 0x300000;
  temp_v0 = D_8008D5BC;
  D_8008D5BC = temp_v0 + 2;
  temp_v0[0] = 0xF7000000;
  src = &D_800892B0;
  temp_a2 = ((((src->unk92 << 8) & 0xF800) | ((src->unk94 * 8) & 0x7C0)) | ((((s32) src->unk96) >> 2) & 0x3E)) | (src->unk98 & 1);
  temp_v0[1] = (temp_a2 << 16) | temp_a2;
  if (func_80001060(arg0, arg1, temp_a2, src) != 0)
  {
    temp_v0 = D_8008D5BC;
    D_8008D5BC = temp_v0 + 2;
    temp_v0[1] = 0;
    temp_v0[0] = 0xF69FC77C;
  }
  else
  {
    temp_v0 = D_8008D5BC;
    D_8008D5BC = temp_v0 + 2;
    temp_v0[1] = 0;
    temp_v0[0] = 0xF64FC3BC;
  }
  temp_v0 = D_8008D5BC;
  D_8008D5BC = temp_v0 + 2;
  temp_v0[1] = 0;
  temp_v0[0] = 0xE7000000;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80007750/func_800079B0.s")

