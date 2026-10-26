#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
extern s32 D_8025DE10;
extern void func_800058DC();
extern s32 func_8012C6B4(s32);
extern void func_801C2F0C(s32, void *);
extern void func_801C4058(void *, s32, s32, s32);
extern void func_80253A80();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

typedef struct func_80252C14_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80252C14_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801270C0(s32);
extern void func_801FA2E0();
extern void func_80252DBC();
extern f64 D_8025D808;
extern f64 D_8025D810;
extern f32 D_8025D818;

void func_80252C14(func_80252C14_Struct *arg0, void *arg1) {
    f32 sp44;
    f32 sp40;
    s32 s;

    s = arg0->unk3C++;
    func_80253A80((void *)arg0, arg1);
    if (s < 0x3C && !(s % 2)) {
        sp44 = func_8012C6B4(0x2000);
        sp40 = (f32)((f64)func_8012C6B4(0x1E) / 10.0 + 2.0);
        func_80380F94((f32)((f64)(func_8001EAD0((s16)sp44) * sp40) + D_8025D808), 14.0f, (f32)((f64)(func_8001EB64((s16)sp44) * sp40) + D_8025D810), 0.0f, D_8025D818, 0.0f, 5);
    }
    if (s < 0x78) {
        func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
    }
    if (s == 0x78) {
        func_801FA2E0();
    }
    if (s >= 0x96 && func_801270C0(D_8025DE10) != 0) {
        func_801C2F0C(1, NULL);
        func_800058DC(arg0, func_80252DBC);
    }
}
