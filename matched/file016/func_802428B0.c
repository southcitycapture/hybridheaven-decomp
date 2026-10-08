#include "context.h"

extern s32 func_801C3DC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4);
extern f32 D_8024ED94;
extern f32 D_8024ED98;
extern f32 D_8024ED9C;
extern void func_80242934(void);

void func_802428B0(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, 0xC3908000, 0x42CB0000, 0x43330000, -300.0f, D_8024ED94, D_8024ED98, D_8024ED9C, 35.0f) == 0) {
        func_800058DC((void *) arg0, (void *) func_80242934);
    }
}
