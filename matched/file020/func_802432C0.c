#include "common.h"

extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_8024332C(void);

void func_802432C0(void *arg0, void *arg1) {
    if (func_801C3D20(410.0f, 660.0f, 40.0f) != 0) {
        ((s16 *)arg0)[0x3C / 2] = 0;
        ((s16 *)arg0)[0x90 / 2] = 1;
        ((s16 *)arg0)[0x92 / 2] = 8;
        func_80020718(0x155);
        func_800058DC(arg0, func_8024332C);
    }
}
