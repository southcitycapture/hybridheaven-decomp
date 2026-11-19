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

extern s8 func_80243E50(u8, s32, u8, u8);

s32 func_8023A51C(s32 arg0, u8 arg1) {
    s32 p;
    s32 i;
    p = *(s32 *)(arg0 + 0x98);
    i = func_80243E50(((u8 *)&D_80240880)[0x1B], (((u8 *)&D_80240880)[0x1C] - 1) / 2 & 0xFF, ((u8 *)&D_80240880)[0x1D], arg1);
    if (*(u8 *)(p + 0xA8 + i * 6) == 1) {
        return 1;
    }
    return 0;
}
