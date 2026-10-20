#include "context.h"

struct func_801E4870_S3 { u8 pad[8]; f32 unk8; };
struct func_801E4870_S2 { u8 pad[0x30]; struct func_801E4870_S3 *unk30; };
struct func_801E4870_S1 { u8 pad[8]; struct func_801E4870_S2 *unk8; };

s32 func_801E4870() {
    s32 v;
    u32 t;
    s32 n;
    f32 q;

    if (D_801EA76C != 0) {
        v = D_801EA770;
    } else {
        v = 0x3B - D_801EA770;
    }
    q = (f32)v / 60.0f;
    t = (u32)(-190.0f * q + 190.0f) & 0xFF;
    ((struct func_801E4870_S1 *)D_8038D8D0)->unk8->unk30->unk8 = (f32)t;
    D_801EA770++;
    n = D_801EA770;
    if (n >= 0x3C) {
        if (D_801EA76C != 0) {
            D_801EA76C = 0;
        } else {
            D_801EA76C = 1;
        }
    }
    D_801EA770 = n % 60;
}
