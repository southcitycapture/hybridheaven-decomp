#include "context.h"

extern s16 func_80151478(s32 a);
extern u8 D_8025D0D0[];
extern u8 D_80259060[];
extern f64 D_8025D290;
extern f64 D_8025D298;
extern void func_8024E3F0();
extern void func_8024F294();

void func_8024E230(u8 *arg0, u8 *arg1) {
    s16 ang;
    s32 n;
    s32 pad;
    f32 s;

    n = (*(u16 *)(arg0 + 0x3C))++;
    func_8024F294((func_8024D030_Ctx *)arg0, (func_8024D030_Args *)arg1);
    if (n >= 0x14) {
        if (n == 0x14) {
            ang = func_80151478(D_8025DDF0);
            s = func_8001EAD0(ang);
            func_8011AAF4(D_8025D0D0, 0x354, arg0, 0, 1, 0.0f, (f32)((f64)(s * 100.0f) + D_8025D290), 45.0f, (f32)((f64)(func_8001EB64(ang) * 100.0f) + D_8025D298), 0.0f, -143.0f, 12.0f, -130.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DDF0, D_80259060);
            func_80020718(0x225);
        } else {
            func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
        }
        (*(u8 **)(*(u8 **)(arg1 + 0x1C) + 0x30))[0x4B] -= 4;
        if ((*(u8 **)(*(u8 **)(arg1 + 0x1C) + 0x30))[0x4B] >= 0xFC) {
            (*(u8 **)(arg1 + 0x1C))[0x22] = 0;
            *(u16 *)(arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_8024E3F0);
        }
    }
}
