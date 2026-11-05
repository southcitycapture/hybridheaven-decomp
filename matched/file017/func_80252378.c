#include "common.h"
extern void func_800058DC();
extern s32 func_8012C6B4(s32);
typedef struct func_802525FC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802525FC_Struct;
void func_80252538(func_802525FC_Struct *arg0);
extern void func_802538A4();
typedef struct func_802538A4_Struct {
    u8 pad[0x96];
    u16 unk96;
} func_802538A4_Struct;

#undef func_80252378
typedef struct func_80252378_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80252378_Struct;
extern f64 D_8025D7E8;
extern f64 D_8025D7F0;
extern void func_80020718(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);

void func_80252378(func_80252378_Struct *arg0, s32 arg1) {
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
    func_802538A4((func_802538A4_Struct *)arg0, arg1);
    if (s == 5) {
        func_80020718(0x183);
    }
    if (s < 0x19) {
        d = 10;
    } else {
        d = 2;
    }
    if ((s % d) == 0) {
        sp4C = (f32)func_8012C6B4(0x2000);
        sp48 = (f32)(1.0 + ((f64)func_8012C6B4(0x64) / 100.0));
        t = (s32)sp4C;
        sp30 = (s16)t;
        sp34 = func_8001EAD0((s16)t);
        sp38 = func_8012C6B4(0x64);
        func_80380F94((f32)((f64)(sp34 * sp48) + D_8025D7E8), (f32)(((f64)(f32)sp38 / 10.0) + 10.0f), (f32)((f64)(func_8001EB64(*(s16 *)((u8 *)&sp30 + 2)) * sp48) + D_8025D7F0), 0.0f, 0.0f, 0.0f, 9);
    }
    if (s >= 0x28) {
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80252538);
    }
}
