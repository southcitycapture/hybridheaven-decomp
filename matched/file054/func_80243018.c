#define HZ2(a, b) a##b
#define HZ(a, b) HZ2(a, b)
#define func_80241974 HZ(hz_80241974_, __LINE__)
#define func_80243018 hz_self_80243018
#include "context.h"
#undef func_80243018
extern f64 D_802483D8;
extern f64 D_802483E0;
extern f64 D_802483E8;
extern f64 D_802483F0;
extern f64 D_802483F8;
extern f64 D_80248400;
extern f32 D_80248408;
extern f32 D_8024840C;
extern f32 D_80248410;
extern f32 D_80248414;
extern f32 D_80248418;
extern u8 D_80247C58[];
extern u8 D_80247C94[];
extern u8 D_80246978[];
extern u8 D_802470B0[];

void func_80243018(func_80241024_Struct *arg0, s32 arg1) {
    s32 t;
    f32 a;

    t = arg0->unk3C++;
    func_8011AAF4(D_80247C58, 0x4F0, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
    G(0x1E8) = G(0x1E8) + D_802483D8;
    G(0x1EC) = G(0x1EC) + D_802483E0;
    G(0x1F0) = G(0x1F0) + D_802483E8;
    G(0x1F4) = G(0x1F4) + D_802483F0;
    G(0x1F8) = G(0x1F8) + D_802483F8;
    G(0x1FC) = G(0x1FC) + D_80248400;
    G(0x1EC) = (!(t % 2) ? 0.5 : -0.5) + G(0x1EC);
    if (t >= 0x2D) {
        a = D_80248408;
        G(0x1E8) = D_8024840C;
        G(0x1EC) = a;
        G(0x1F0) = D_80248410;
        G(0x1F4) = a;
        G(0x1F8) = D_80248414;
        G(0x1FC) = D_80248418;
        func_8011AAF4(D_80247C94, 0x506, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
        func_8015115C(D_80248804, D_80246978);
        func_800179B0(D_802470B0);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_802432D4);
    }
}
