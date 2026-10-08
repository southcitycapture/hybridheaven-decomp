#include "common.h"

extern s32 func_8011AAF4(s32 *a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 f5, f32 f6, f32 f7, f32 f8, f32 f9, f32 f10, f32 f11, f32 f12, f32 f13, f32 f14, s32 s15, s32 s16);
extern s32 D_8038DCB8[];

s32 func_8038C548(s32 arg0, s32 arg1) {
    func_8011AAF4(D_8038DCB8, 0x16E, arg0, 0, 1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, -4.0f, 0.0f, 35.0f, -1, -1);
    return 1;
}
