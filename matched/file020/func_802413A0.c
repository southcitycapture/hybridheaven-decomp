#include "context.h"

s32 func_80126944(void);
s32 func_801C3B20(void);
s32 func_801C3D20(f32, f32, f32);
void func_801C3B10(s32);
void func_801C3B2C(s32);
void func_801FBB30(void);
void func_80241420(void);

void func_802413A0(void *arg0, s32 arg1) {
    if (func_80126944() == 0) {
        if (func_801C3D20(-180.0f, -90.0f, 20.0f) != 0) {
            if (func_801C3B20() == 0) {
                func_801FBB30();
                func_801C3B2C(2);
                func_801C3B10(1);
                func_800058DC(arg0, func_80241420);
            }
        }
    }
}
