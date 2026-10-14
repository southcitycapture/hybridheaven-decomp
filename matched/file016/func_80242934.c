#include "context.h"
void func_80242CF4(s32 arg0, s32 arg1);

extern f32 D_8024EDA0;
extern f32 D_8024EDA4;
extern f32 D_8024EDA8;
extern f32 D_8024EDAC;

void func_80242934(s32 arg0, s32 arg1) {
    func_801C3DC8(arg0, 0xC3908000, 0x42CB0000, 0x43330000, -300.0f, D_8024EDA0, D_8024EDA4, D_8024EDA8, 35.0f);
    if (func_801C3D20(D_8024EDAC, 75.0f, 0x41A00000) != 0) {
        func_800058DC((void *) arg0, func_802427D0);
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC((void *) arg0, (void *) func_80242CF4);
    }
}
