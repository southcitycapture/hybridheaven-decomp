#include "context.h"

extern f32 D_8024ED88;
extern f32 D_8024ED8C;

void func_802426E4(void *arg0, s32 arg1) {
    extern s32 func_80133A24();

    func_801C3DC8((s32)arg0, 0x43D98000, 0x431A0000, 0x430A0000, D_8024ED88, 120.0f, 105.0f, D_8024ED8C, 35.0f);
    if (func_801C3D20(196.0f, 68.0f, 0x41880000) != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC(arg0, &func_802427D0);
        } else {
            func_800058DC(arg0, &func_802429F8);
        }
    }
    if (func_80150584() != 0) {
        func_801BF1B0(1);
        func_800058DC(arg0, &func_80242CF4);
    }
}
