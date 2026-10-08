#include "common.h"

extern void func_800058DC(void *, void *);
extern void func_80010550(s32, s32);
extern s32 func_80133A24(s32);
extern void func_8013A334(f32 *, s32, s32, s32);
extern f32 D_8025C71C;
extern f32 D_8025C720;
extern f32 D_8025C724;
extern void func_802453E0(void);

void func_80245360(void *arg0, s32 arg1) {
    s32 temp_a2;
    f32 sp18[3];

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x5C);
    func_8013A334(sp18, arg1, temp_a2, 6);
    D_8025C71C = sp18[0];
    D_8025C720 = sp18[1];
    D_8025C724 = sp18[2];
    func_80010550(arg1, temp_a2);
    if (func_80133A24(0x13F) != 0) {
        func_800058DC(arg0, func_802453E0);
    }
}
