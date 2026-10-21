#include "context.h"

void func_80119F9C(s16 *arg0, s16 *arg1);
extern void func_8011A06C(s16, s16, s32, s32, f32, s32);
void func_8011A148(s16 arg0, s16 arg1, s16 arg2, f32 *arg3, f32 *arg4, f32 *arg5);

s8 func_80119E24(void *arg0, void *arg1, void *arg2, s16 arg3, s32 arg4) {
    s16 sp36;
    s16 sp34;
    s16 t;
    s16 sp30;
    s32 v;
    s32 a;
    s32 b;

    func_80119F9C(&sp36, &sp34);
    func_8011A06C(sp36, sp34, *(s32 *)arg0, *(s32 *)arg1, *(f32 *)arg2, (s32)&sp30);
    t = arg3 - sp30;
    if (t & 0x1000) {
        v = (s16)((t & 0x1FFF) - 0x2000);
    } else {
        v = (s16)(t & 0x1FFF);
    }
    if (((s16)arg4 * v) < 0) {
        b = (v < 0) ? -v : v;
        v = (s16)((s16)(0x2000 - b) & 0x1FFF);
    }
    if ((s16)arg4 == 0) {
        return 0;
    }
    a = (v < 0) ? -v : v;
    b = ((s16)arg4 < 0) ? -(s16)arg4 : (s16)arg4;
    if (a > b) {
        sp30 = sp30 + (s16)arg4;
        func_8011A148(sp36, sp34, sp30, arg0, arg1, arg2);
        return 1;
    }
    sp30 = arg3 & 0x1FFF;
    func_8011A148(sp36, sp34, sp30, arg0, arg1, arg2);
    return 0;
}
