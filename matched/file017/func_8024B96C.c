#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801270C0(s32);
extern void func_801C2F0C(s32, s32);
extern void func_801FA2E0(void);
extern f32 D_8025CFF8;
extern s32 D_8025DDE0;
extern f64 D_8025CFF0;
void func_8024BB18(s32 arg0, s32 arg1);
extern void D_8024CEA0(void);

void func_8024B96C(func_8024B2A4_Struct *arg0, s32 s) {
    f32 sp44;
    f32 sp40;
    s16 ang;
    extern s32 func_8012C6B4();

    s = arg0->unk3C++;
    D_8024CEA0();
    if (s < 0x3C && !(s % 2)) {
        sp44 = (f32)func_8012C6B4(0x2000);
        sp40 = (f32)(((f64)func_8012C6B4(0x1E) / 10.0) + 2.0);
        ang = sp44;
        func_80380F94((f32)((f64)(func_8001EAD0(ang) * sp40) + -128.0), 14.0f,
                      (f32)((f64)(func_8001EB64(ang) * sp40) + D_8025CFF0), 0.0f, D_8025CFF8, 0.0f, 5);
    }
    if (s < 0x78) {
        func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
    }
    if (s == 0x78) {
        func_801FA2E0();
    }
    if (s >= 0x96 && func_801270C0(D_8025DDE0) != 0) {
        func_801C2F0C(1, 0);
        func_800058DC((s32)arg0, func_8024BB18);
    }
}
