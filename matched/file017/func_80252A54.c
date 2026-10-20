#include "context.h"
typedef struct func_80252A54_In { u8 pad[0x4B]; u8 unk4B; } func_80252A54_In;
typedef struct func_80252A54_Nd { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80252A54_In *unk30; } func_80252A54_Nd;
typedef struct func_80252A54_A1 { u8 pad[0x1C]; func_80252A54_Nd *unk1C; } func_80252A54_A1;
typedef struct func_80252A54_A0 { u8 pad[0x3C]; u16 unk3C; } func_80252A54_A0;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s16 func_80151478(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025D628[];
extern u8 D_802594C0[];
extern u8 func_80252C14[];
extern f64 D_8025D7F8;
extern f64 D_8025D800;
void func_80252A54(func_80252A54_A0 *arg0, func_80252A54_A1 *arg1) {
    s16 a;
    s32 n;
    f32 t;
    f32 s;
    n = arg0->unk3C++;
    func_80253A80(arg0, arg1);
    if (n >= 0x14) {
        if (n == 0x14) {
            a = func_80151478(D_8025DE10);
            s = func_8001EAD0(a);
            t = func_8001EB64(a);
            func_8011AAF4(D_8025D628, 0x355, arg0, 0, 1, 0.0f, s * 100.0f + D_8025D7F8, 45.0f, t * 100.0f + D_8025D800, 0.0f, 150.0f, 12.0f, 125.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DE10, D_802594C0);
            func_80020718(0x228);
        } else {
            func_801C4058(arg0, 0xBE19999A, 0xBE800000, 0);
        }
        arg1->unk1C->unk30->unk4B -= 4;
        if (arg1->unk1C->unk30->unk4B >= 0xFC) {
            arg1->unk1C->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80252C14);
        }
    }
}
