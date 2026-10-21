#include "context.h"

struct func_80025940_Struct {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad34[0x40 - 0x34];
    s16 unk40;
    u8 pad42[0x5E - 0x42];
    u8 unk5E;
    u8 pad5F;
    u8 *unk60;
};
#define O ((struct func_80025940_Struct *)D_800CBDA4)

void func_80025940(void) {
    s32 temp_v0;

    temp_v0 = *D_800CBDA0;
    D_800CBDA0 += 1;
    O->unk5E++;
    if ((temp_v0 == 0) || (temp_v0 * 1 != O->unk5E)) {
        O->unk40 += (s8)*D_800CBDA0;
        D_800CBDA0 += 1;
        O->unk32 += (s8)*D_800CBDA0 * 8;
        D_800CBDA0 += 1;
        D_800CBDA0 = O->unk60;
        return;
    }
    O->unk40 = 0;
    O->unk32 = O->unk40;
    D_800CBDA0 += 2;
}
