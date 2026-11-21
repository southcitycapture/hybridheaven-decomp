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
extern struct func_8023A2BC_Struct D_80240880;


s32 func_8023A3C4(u8 arg0) {
    s32 i;
    s32 n;

    n = ((u8 *)&D_80240880)[0x23];
    for (i = 0; i < n; i = (i + 1) & 0xFF) {
        if (arg0 == ((u8 *)&D_80240880)[0x51 + i]) {
            break;
        }
    }
    if (n == i) {
        return 0xFF;
    }
    return i;
}
