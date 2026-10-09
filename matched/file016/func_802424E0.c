#include "context.h"

extern s32 func_801C3D90();
extern void func_8001F74C(s32);
extern void func_801BF1B0(s32);
extern void func_80242544();

void func_802424E0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_801C3D90() != 0) {
            func_8001F74C(arg0);
            func_801BF1B0(0);
            func_800058DC(arg0, func_80242544);
        }
    }
}
