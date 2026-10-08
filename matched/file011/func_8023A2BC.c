#include "common.h"

struct func_8023A2BC_Struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B[0x6A - 0x1B];
    u8 unk6A;
    u8 unk6B;
};

s32 func_80236C9C();
extern u8 D_801BCC20;
extern struct func_8023A2BC_Struct D_80240880;
extern s16 D_80240894;

void func_8023A2BC(void) {
    if (D_801BCC20 == 0) {
        D_80240880.unk10 = 0x1A;
        D_80240880.unk12 = 0x34;
        D_80240894 = D_80240880.unk10 + 0x64;
        D_80240880.unk16 = 0x47;
        if (func_80236C9C() != 0) {
            D_80240880.unk14 = 0xC8;
            D_80240880.unk16 = 0xC3;
        }
        D_80240880.unk1A = 0;
        D_80240880.unk18 = 3;
        D_80240880.unk19 = 4;
    } else {
        D_80240880.unk10 = 0x105;
        D_80240880.unk12 = 0xA3;
        D_80240894 = D_80240880.unk10 - 0x4B;
        D_80240880.unk16 = 0xAA;
        D_80240880.unk1A = 1;
        D_80240880.unk18 = 0xD;
        D_80240880.unk19 = 0x20;
    }
    D_80240880.unk6A = 0xFF;
    D_80240880.unk6B = 0xFF;
}
