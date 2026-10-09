#include "context.h"

struct func_800078AC_Struct {
    u8 pad[0x92];
    u16 unk92;
    u16 unk94;
    u16 unk96;
    u16 unk98;
};

extern s32 func_80001060(s32, s32, s32, void *);
extern struct func_800078AC_Struct D_800892B0;
extern u32 *D_8008D5BC;

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
