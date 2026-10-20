#include "context.h"

extern void func_8011B474(s16, f32, f32, f32 *, f32 *);

void func_8011B3D8(s16 arg0, f32 arg1, f32 arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    f32 sp2C;
    f32 sp28;
    s16 sp26;
    s16 temp_a0;

    sp26 = arg0 - 0x800;
    func_8011B474(sp26, arg1, arg2, &sp2C, &sp28);
    temp_a0 = -sp26;
    func_8011B474(temp_a0, 0.0f, sp28, arg3, arg4);
    func_8011B474(temp_a0, sp2C, 0.0f, arg5, arg6);
}
