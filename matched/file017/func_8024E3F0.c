#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024D9B8 CAT(func_8024D9B8_L, __LINE__)
#define func_80380F94 func_80380F94_ctx
#include "context.h"
#undef func_8024D9B8
#undef func_80380F94

extern s32 func_8012C6B4(s32);
extern s32 func_801270C0(s32);
extern void func_801C2F0C(s32, s32);
extern void func_801FA2E0();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern f64 D_8025D2A0;
extern f64 D_8025D2A8;
extern f32 D_8025D2B0;

void func_8024E3F0(func_8024D9B8_Struct *arg0, func_8024D030_Args *arg1) {
    f32 sp44;
    f32 sp40;
    s32 t;

    t = arg0->unk3C;
    arg0->unk3C++;
    func_8024F294((func_8024D030_Ctx *)arg0, arg1);
    if (t < 0x3C && !(t % 2)) {
        sp44 = (f32) func_8012C6B4(0x2000);
        sp40 = (f32) (((f64) func_8012C6B4(0x1E) / 10.0) + 2.0);
        func_80380F94((f32) ((f64) (func_8001EAD0((s16) (s32) sp44) * sp40) + D_8025D2A0), 14.0f, (f32) ((f64) (func_8001EB64((s16) (s32) sp44) * sp40) + D_8025D2A8), 0.0f, D_8025D2B0, 0.0f, 5);
    }
    if (t < 0x78) {
        func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
    }
    if (t == 0x78) {
        func_801FA2E0();
    }
    if (t >= 0x96 && func_801270C0(D_8025DDF0) != 0) {
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024E598);
    }
}
