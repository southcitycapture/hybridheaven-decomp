#include "context.h"

typedef struct func_8024B7A8_Sub { u8 pad[0x4B]; u8 unk4B; } func_8024B7A8_Sub;
typedef struct func_8024B7A8_Mid { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_8024B7A8_Sub *unk30; } func_8024B7A8_Mid;
typedef struct func_8024B7A8_Struct1 { u8 pad[0x18]; func_8024B7A8_Mid *unk18; } func_8024B7A8_Struct1;
typedef struct func_8024B7A8_Struct0 { u8 pad[0x3C]; u16 unk3C; } func_8024B7A8_Struct0;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern s16 func_80151478(s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_80258DD8[];
extern u8 D_8025CDD8[];
extern f64 D_8025CFE8;
extern s32 D_8025DDE0;
extern void func_8024B96C();

void func_8024B7A8(func_8024B7A8_Struct0 *arg0, func_8024B7A8_Struct1 *arg1) {
    s16 sp66;
    s32 tmp;

    tmp = arg0->unk3C++;
    func_8024CEA0(arg0, arg1);
    if (tmp >= 0x14) {
        if (tmp == 0x14) {
            sp66 = func_80151478(D_8025DDE0);
            func_8011AAF4(D_8025CDD8, 0x383, arg0, 0, 1, 0.0f, (f32) ((f64) (func_8001EAD0(sp66) * 100.0f) + -128.0), 45.0f, (f32) ((f64) (func_8001EB64(sp66) * 100.0f) + D_8025CFE8), 0.0f, -128.0f, 12.0f, 150.0f, 0.0f, 35.0f, -1, -1);
            func_8015115C(D_8025DDE0, D_80258DD8);
            func_80020718(0x226);
        } else {
            func_801C4058(arg0, 0xBE19999A, -0.25f, 0);
        }
        arg1->unk18->unk30->unk4B -= 4;
        if (arg1->unk18->unk30->unk4B >= 0xFC) {
            arg1->unk18->unk22 = 0;
            arg0->unk3C = 0;
            func_800058DC((s32)arg0, func_8024B96C);
        }
    }
}
