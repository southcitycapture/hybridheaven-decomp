#include "context.h"
void func_800058DC(void *, void *);
extern s32 func_801C3DC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4);

extern f32 D_8024ED80;
extern f32 D_8024ED84;
void func_802426E4(void);

void func_80242660(s32 arg0, s32 arg1) {
    if (func_801C3DC8(arg0, 0x43D98000, 0x431A0000, 0x430A0000, D_8024ED80, 120.0f, 105.0f, D_8024ED84, 35.0f) == 0) {
        func_800058DC((void *) arg0, (void *) func_802426E4);
    }
}
