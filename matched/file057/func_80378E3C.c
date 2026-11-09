#include "common.h"
struct func_8037865C_Struct {
    u8 pad4[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x3D];
    u16 unk48;
    u8 pad4A[8];
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};
extern struct func_8037865C_Struct D_8017DC40;
struct func_80376D48_Player {
    u16 unk0;
    u16 unk2;
    u8 unk4;
    u8 pad5;
    u16 unk6;
    u16 unk8;
    u8 unkA;
    u8 padB;
    u16 unkC;
    u8 padE[0x32];
    u16 unk40;
    u16 unk42;
    u16 unk44;
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};
#define P (*(struct func_80376D48_Player *)&D_8017DC40)


u16 func_80378E3C(s32 arg0) {
    s32 *p = &arg0;
    arg0 &= 0xFF;
    switch (arg0) {
    case 0:
        return P.unk0;
    case 1:
        return P.unk8;
    case 2:
        return P.unk40;
    case 3:
        return P.unk42;
    case 4:
        return P.unk46;
    case 5:
        return P.unk44;
    default:
        return P.unk0;
    }
}
