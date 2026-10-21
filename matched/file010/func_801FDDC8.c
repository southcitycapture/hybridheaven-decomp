#include "context.h"

extern u8 D_802176C0[];
extern void func_80146088(void *, void *, s8 *);

struct func_801FDDC8_Struct {
    s16 s1C; s16 s1E; s16 s20; s16 s22; u8 b24; u8 b25; u8 b26; u8 b27;
    u8 pad[4]; s16 s2C; u16 s2E; u8 b30; u8 b31; u8 b32; u8 b33; u8 tail[0x24];
};

void func_801FDDC8(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)
void *a0; s8 *a1; s16 a2; s16 a3; s16 a4; s16 a5; u8 a6; u8 a7; u8 a8; u8 a9; u16 a10; u8 a11; u8 a12; u8 a13; u8 a14;
{
    struct func_801FDDC8_Struct s;
    s.s1C = a2;
    s.s1E = a3;
    s.s20 = a4;
    s.s22 = a5;
    s.b24 = a6;
    s.b25 = a7;
    s.b26 = a8;
    s.b27 = a9;
    s.b30 = a11;
    s.b31 = a12;
    s.b32 = a13, s.b33 = a14;
    s.s2C = 0xB;
    s.s2E = a10;
    *(void **)(D_802176C0 + 0xC) = &s;
    func_80146088(a0, D_802176C0, a1);
}
