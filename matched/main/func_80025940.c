#include "common.h"
extern u8 *D_800CBDA0;
struct func_800243F0_Struct {
    u8 pad[0x18];
    s16 unk18;
    u8 pad2[0x1D - 0x1A];
    u8 unk1D;
};
extern struct func_800243F0_Struct *D_800CBDA4;


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

/* GGA: sndCmdLoopEnd */
void func_80025940(void) {
    s16 temp_v0;

    temp_v0 = *D_800CBDA0++;
    O->unk5E++;
    if (temp_v0 != 0) {
        s32 passesOverLimit = O->unk5E - temp_v0;
        if (passesOverLimit == 0) {
            goto loop_done;
        }
    }
    O->unk40 += (s8)*D_800CBDA0;
    D_800CBDA0 += 1;
    O->unk32 += (s8)*D_800CBDA0 * 8;
    D_800CBDA0 += 1;
    D_800CBDA0 = O->unk60;
    return;
loop_done:
    O->unk40 = 0;
    O->unk32 = O->unk40;
    D_800CBDA0 += 2;
}
