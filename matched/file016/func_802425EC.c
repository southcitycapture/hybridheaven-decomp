#include "context.h"

extern s32 func_801C3D20(f32, f32, s32);
extern s32 func_80133A24(s32);
extern void func_800058DC(void *, void *);
extern void func_802427D0();
extern void func_802429F8();

void func_802425EC(s32 arg0, s32 arg1) {
    if (func_801C3D20(196.0f, 68.0f, 0x41880000) != 0) {
        if (func_80133A24(0xBE) != 0) {
            func_800058DC((void *) arg0, func_802427D0);
            return;
        }
        func_800058DC((void *) arg0, func_802429F8);
    }
}
