#include "context.h"
typedef struct func_8024B0E0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B0E0_Struct;
extern f64 D_8025CFE0;
extern void D_8024CCC4();
extern s32 D_8012C6B4(s32);
extern void func_800058DC(s32, void (*)());
extern void func_80020718(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_8024B2A4();

void func_8024B0E0(func_8024B0E0_Struct *arg0) {
    f32 sp4C;
    f32 sp48;
    u8 pad[12];
    s32 sp38;
    f32 sp34;
    s32 sp30;
    s32 t;
    s32 d;
    u16 s;

    s = arg0->unk3C;
    arg0->unk3C = s + 1;
    D_8024CCC4(arg0);
    if (s == 5) {
        func_80020718(0x183);
    }
    if (s < 0x19) {
        d = 10;
    } else {
        d = 2;
    }
    if ((s % d) == 0) {
        sp4C = (f32)D_8012C6B4(0x2000);
        sp48 = (f32)(1.0 + ((f64)D_8012C6B4(0x64) / 100.0));
        t = (s32)sp4C;
        sp30 = (s16)t;
        sp34 = func_8001EAD0((s16)t);
        sp38 = D_8012C6B4(0x64);
        func_80380F94((f32)((f64)(sp34 * sp48) + -128.0), (f32)(((f64)(f32)sp38 / 10.0) + 10.0f), (f32)((f64)(func_8001EB64(*(s16 *)((u8 *)&sp30 + 2)) * sp48) + D_8025CFE0), 0.0f, 0.0f, 0.0f, 9);
    }
    if (s >= 0x28) {
        arg0->unk3C = 0;
        func_800058DC((s32)arg0, func_8024B2A4);
    }
}
