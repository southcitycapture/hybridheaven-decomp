#include "context.h"

extern s32 func_8012C6B4(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_801C2F0C(s32, s32);
extern void func_801FA2E0();
extern s32 func_801270C0(s32);
extern f64 D_8025D558;
extern f64 D_8025D560;
extern f32 D_8025D568;
extern void func_80251750();
extern void func_80250A98();

void func_802508F0(struct func_802503CC_Struct *arg0, void *arg1) {
    f32 sp44;
    f32 sp40;
    s32 t;

    t = arg0->unk3C;
    arg0->unk3C++;
    func_80251750((void *)arg0, arg1);
    if (t < 0x3C && !(t % 2)) {
        sp44 = func_8012C6B4(0x2000);
        sp40 = func_8012C6B4(0x1E) / 10.0 + 2.0;
        func_80380F94(func_8001EAD0((s32)sp44) * sp40 + D_8025D558, 14.0f, func_8001EB64((s32)sp44) * sp40 + D_8025D560, 0.0f, D_8025D568, 0.0f, 5);
    }
    if (t < 0x78) {
        func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
    }
    if (t == 0x78) {
        func_801FA2E0();
    }
    if (t >= 0x96 && func_801270C0(D_8025DE00) != 0) {
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_80250A98);
    }
}
