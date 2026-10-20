#include "context.h"

extern f32 D_801FBFC4;
struct func_801E4348_S2 { u8 pad[0x12]; s16 unk12; };
struct func_801E4348_S1 { u8 pad[0x30]; struct func_801E4348_S2 *unk30; };
struct func_801E4348_S0 { u8 pad[0x14]; struct func_801E4348_S1 *unk14; };

s32 func_801E4348(s32 arg0, s32 arg1) {
    struct func_801E4348_S2 *p;

    if (func_801C0B8C(0x3F3A860) != 0) {
        p = ((struct func_801E4348_S0 *)D_8038D8D0)->unk14->unk30;
        p->unk12 = (s16)(p->unk12 - (s16)(s32)D_801FBFC4);
        if (func_801C0B8C(0x46DBA60) != 0) {
            return 2;
        }
    }
    return 1;
}
