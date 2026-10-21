#include "context.h"

extern u8 D_8017DCC8;
extern u8 D_8017DCC9;
extern struct func_802329F8_Struct D_8017DDA4;

void func_802329F8(void) {
    if ((D_801BBBF0[0x748] - D_801BBBF0[0xAE4]) >= 0xA) {
        if ((D_8017DCC8 + D_8017DDA4.unk2) < 5) {
            D_8017DDA4.unk2 = D_8017DDA4.unk2 + 1;
        }
    } else if (((D_801BBBF0[0xAE4] - D_801BBBF0[0x748]) >= 0xA) && ((D_8017DCC9 + D_8017DDA4.unk3) < 2)) {
        D_8017DDA4.unk3 = D_8017DDA4.unk3 + 1;
    }
}
