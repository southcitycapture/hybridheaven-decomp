#include "context.h"

struct func_801E30E0_S3 { u8 pad[8]; f32 unk8; };
struct func_801E30E0_S2 { u8 pad[0x30]; struct func_801E30E0_S3 *unk30; };
struct func_801E30E0_S1 { u8 pad[8]; struct func_801E30E0_S2 *unk8; };

s32 func_801E30E0() {
    s32 v;
    u32 t;
    s32 n;
    f32 q;

    if (D_801E3D10 != 0) {
        v = D_801E3D14;
    } else {
        v = 0x3B - D_801E3D14;
    }
    q = (f32)v / 60.0f;
    t = (u32)(-190.0f * q + 190.0f) & 0xFF;
    ((struct func_801E30E0_S1 *)D_8038D8D0)->unk8->unk30->unk8 = (f32)t;
    D_801E3D14++;
    n = D_801E3D14;
    if (n >= 0x3C) {
        if (D_801E3D10 != 0) {
            D_801E3D10 = 0;
        } else {
            D_801E3D10 = 1;
        }
    }
    D_801E3D14 = n % 60;
}
