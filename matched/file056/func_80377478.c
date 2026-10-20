#include "context.h"
extern u16 D_801BBBF8;
extern u8 D_803891E8[];
extern f64 D_80389388;
extern f64 D_80389390;
extern void func_803775C0();
extern void func_8014B4A0(u16, f32 *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80377478(s32 arg0, s32 arg1) {
    struct { u8 pad2[8]; f32 sp60; f32 sp64; f32 v[3]; s16 h; s16 pad; } L;
    func_8014B4A0(D_801BBBF8, L.v);
    L.sp64 = L.v[0] + func_8001EAD0(L.h) * D_80389388;
    L.sp60 = L.v[1] + 25.0;
    func_8011AAF4(D_803891E8, 0x212, arg0, 0, 1, 10.0f, L.sp64, L.sp60,
        L.v[2] + func_8001EB64(L.h) * D_80389390, 10.0f, L.v[0], L.v[1] + 15.0, L.v[2], 0.0f, 35.0f, -1, -1);
    func_800058DC((void *)arg0, (void *)func_803775C0);
}
