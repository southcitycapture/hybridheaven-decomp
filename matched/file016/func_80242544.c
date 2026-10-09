#include "context.h"
void func_800058DC(void *, void *);
extern s32 func_80150584();
extern s32 func_801C3D20(f32, f32, s32);
void func_802425EC(s32 arg0, s32 arg1);
void func_802428B0(s32 arg0, s32 arg1);

extern f32 D_8024ED7C;
extern f32 D_8024F4F0;

void func_80242544(s32 arg0, s32 arg1) {
    if ((func_801C3D20(230.0f, -235.0f, 0x41F00000) != 0) && (func_80150584() == 0)) {
        D_8024F4F0 = -300.0f;
        func_800058DC((void *)arg0, (void *)func_802425EC);
    }
    if ((func_801C3D20(D_8024ED7C, -235.0f, 0x41F00000) != 0) && (func_80150584() == 0)) {
        func_800058DC((void *)arg0, (void *)func_802428B0);
    }
}
