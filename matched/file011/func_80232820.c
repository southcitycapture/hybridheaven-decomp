#include "context.h"
struct func_802329F8_Struct { u8 pad0[2]; u8 unk2; u8 unk3; };
extern struct func_802329F8_Struct D_8017DDA4;

extern f64 D_8023FCD8;
extern f64 D_8023FCE0;

void func_80232820(void) {
    u16 *p = (u16 *)(D_801BBBF0 + 0x49A);
    p[0] = (u32)((f64)p[0] * ((f64)(((u8 *)&D_8017DC40)[0x88] + D_8017DDA4.unk2) * D_8023FCD8 + 1.0));
    p[1] = (u32)((f64)p[1] * ((f64)(((u8 *)&D_8017DC40)[0x89] + D_8017DDA4.unk3) * D_8023FCE0 + 1.0));
}
