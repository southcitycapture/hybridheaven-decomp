#include "context.h"

void func_80022528(void) {
    s32 value;
    s32 i;

    D_800CBDB3 = 0;
    D_800CBDD0 = 0;
    for (i = 0; i < 1; i++) {
        D_800CBB90[i] = 0;
        D_800CBB91[i] = 0;
        D_800CBBD8[i] = 0;
    }
    D_800CBB20 = 0;
    D_800CBAD0[0] = D_800CBAD0[1] = 0;
    for (i = 0; i < 20; i++) {
        if (D_800CBAC2 != 0) {
            value = *(s32 *)D_800CBDA4 & 0x7FFF;
            if (value == 0x11E || value == 0x122 || value == 0x125 || value == 0x12A || value == 0x213 || value == 0x214) {
            } else {
                *(u32 *)((u8 *)&D_801B5520 + i * 0xD8) = 0x10;
            }
        } else {
            *(u32 *)((u8 *)&D_801B5520 + i * 0xD8) = 0x10;
        }
    }
    func_80022694();
    for (i = 0; i < 1; i++) {
        D_800CBAC8[i] = D_800CBAC4[i].unk2 = 0;
    }
    D_800CBAC2 = 0;
}
