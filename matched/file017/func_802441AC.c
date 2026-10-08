#include "context.h"

struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

extern struct func_802441AC_Struct D_801BBBF0;
extern f32 D_8025C79C;

void func_802441AC(void) {
    D_801BBBF0.unk29C = 5.0f;
    D_801BBBF0.unkF23 = 0xFF;
    D_801BBBF0.unkF20 = 0;
    D_801BBBF0.unkF21 = 0;
    D_801BBBF0.unkF22 = 0;
    D_801BBBF0.unkF24 = 0xB4;
    D_801BBBF0.unkF25 = 0xDC;
    D_801BBBF0.unkF26 = 0x14;
    D_801BBBF0.unkF27 = 0x1E;
    D_801BBBF0.unkF28 = -0x1E;
    D_801BBBF0.unkF29 = 0x14;
    D_801BBBF0.unkF2A = 0xFA;
    D_801BBBF0.unkF2B = 0x14;
    D_801BBBF0.unkF2C = 0x6E;
    D_801BBBF0.unkF2D = 0x50;
    D_801BBBF0.unkF2E = -0x46;
    D_801BBBF0.unkF32 = 0;
    D_801BBBF0.unkF33 = 0;
    D_801BBBF0.unkF34 = 0;
    D_801BBBF0.unkF35 = 0xB9;
    D_801BBBF0.unk2A0 = D_8025C79C;
}
