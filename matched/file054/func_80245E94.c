#include "context.h"

extern u8 D_802480CC[];
extern f64 D_802487C8;
extern f64 D_802487D0;
extern f64 D_802487D8;
extern f64 D_802487E0;
extern f64 D_802487E8;
extern f64 D_802487F0;
extern f64 D_802487F8;
void func_802460D0(s32 arg0, s32 arg1);

#define P(a, o) (*(f32 **)(*(u8 **)((a) + (o)) + 0x30))

void func_80245E94(u8 *arg0, u8 *arg1) {
    s32 t;

    t = (*(u16 *)(arg0 + 0x3C))++;
    if (t >= 0x1E) {
        if (t == 0x1E) {
            func_80020718(0x67);
        }
        P(arg1, 4)[1] = P(arg1, 4)[1] + D_802487C8;
        P(arg1, 8)[1] = P(arg1, 8)[1] + D_802487D0;
    }
    func_8011AAF4(D_802480CC, 0x872, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + D_802487D8;
    F(0x1EC) = F(0x1EC) + D_802487E0;
    F(0x1F0) = F(0x1F0) + D_802487E8;
    F(0x1F4) = (f64) F(0x1F4);
    F(0x1F8) = F(0x1F8) + D_802487F0;
    F(0x1FC) = F(0x1FC) + D_802487F8;
    if (t == 0x24) {
        func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
    }
    if (t >= 0x5A) {
        func_80246730();
        func_80020718(0xA);
        func_800058DC(arg0, (void (*)(void))func_802460D0);
    }
}
