#include "context.h"

extern f64 D_802483A0;
extern f64 D_802483A8;
extern f64 D_802483B0;
extern f64 D_802483B8;
extern f64 D_802483C0;
extern f64 D_802483C8;
extern f32 D_802483D0;
extern f32 D_802483D4;
extern u8 D_80246984[];
extern u8 D_80247BE0[];
extern u8 D_80247C1C[];
extern void func_80020718(s32);
extern u8 func_80243018[];

#define G(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
struct func_80242D38_Struct { u8 pad[0x3C]; u16 unk3C; };

void func_80242D38(struct func_80242D38_Struct *arg0, s32 arg1) {
    s32 v;
    f64 d;

    v = arg0->unk3C++;
    if (v >= 6) {
        if (v == 6) {
            func_8015115C(D_80248804, D_80246984);
            func_80020718(0x19A);
        }
        if (!(v % 2)) {
            d = 0.5;
        } else {
            d = -0.5;
        }
        G(0x1EC) = G(0x1EC) + d;
    }
    func_8011AAF4(D_80247BE0, 0x4C9, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
    G(0x1E8) = G(0x1E8) + D_802483A0;
    G(0x1EC) = G(0x1EC) + D_802483A8;
    G(0x1F0) = G(0x1F0) + D_802483B0;
    G(0x1F4) = G(0x1F4) + D_802483B8;
    G(0x1F8) = G(0x1F8) + D_802483C0;
    G(0x1FC) = G(0x1FC) + D_802483C8;
    if (v >= 0x24) {
        G(0x1E8) = -14.0f;
        G(0x1EC) = 8.0f;
        G(0x1F0) = -15.0f;
        G(0x1F4) = D_802483D0;
        G(0x1F8) = D_802483D4;
        G(0x1FC) = -32.5f;
        func_8011AAF4(D_80247C1C, 0x4DD, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_80243018);
    }
}
