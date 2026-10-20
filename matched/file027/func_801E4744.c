#include "context.h"

struct func_801E4744_S2 { u8 pad0[4]; f32 u4; f32 u8; u8 padC[6]; s16 u12; };
struct func_801E4744_S1 { u8 pad[0x30]; struct func_801E4744_S2 *u30; };
struct func_801E4744_S0 { u8 pad[0x1C]; struct func_801E4744_S1 *u1C; };
extern f64 D_801F5838;
extern f32 D_801F5840;
#define G (*(struct func_801E4744_S0 **)&D_8038D8D0)

s32 func_801E4744(s32 arg0, s32 arg1) {
    u64 r;
    f64 d;
    f32 t;
    f32 a;

    if (func_801C0B8C(0xC65D40)) {
        return 0xA;
    }
    if (func_801C0B8C(0x3D0900)) {
        r = func_801C0B2C();
        d = func_80034C24(r);
        G->u1C->u30->u4 = 0.0f;
        t = (f32)(d / D_801F5838 - 4.0) / 9.0f;
        G->u1C->u30->u8 = t * 18.0f + 16.0f;
        a = t * D_801F5840;
        G->u1C->u30->u12 = (s16)(s32)(((a - (f32)((s32)(a / 360.0f) * 360)) * 2048.0f) / 90.0f);
    }
    return 9;
}
