#include "context.h"

extern void func_800058DC(void *arg0, void *arg1);
extern s32 func_801C3DC8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5);
extern f32 D_8024A578;
extern void func_80241960(void);

void func_802418D8(void *arg0, s32 arg1) {
    s32 *temp_v0;

    temp_v0 = ((s32 **)arg0)[0x24 / 4][0x30 / 4];
    if (func_801C3DC8(arg0, ((s32 *)arg0)[0x90 / 4], ((s32 *)arg0)[0x94 / 4], ((s32 *)arg0)[0x98 / 4], ((f32 *)temp_v0)[1], ((f32 *)temp_v0)[2] + 3.0f, ((f32 *)temp_v0)[3], D_8024A578, 35.0f) == 0) {
        func_800058DC(arg0, func_80241960);
    }
}
