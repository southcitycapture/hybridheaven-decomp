#include "context.h"

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_802414F8(void);
extern u8 D_80249994[];

void func_80241428(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80249994, 0x18E, arg0, 0, 2, 1.0f, 600.0f, 52.0f, 195.0f, 1.0f, 640.0f, 33.0f, 253.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_800058DC((void *) arg0, (void *) func_802414F8);
    }
}
