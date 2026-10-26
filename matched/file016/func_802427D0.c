#include "common.h"
struct func_80242F10_Inner {
    u8 pad[4];
    f32 unk4;
};
struct func_80242F10_Outer {
    u8 pad[0x2C];
    struct func_80242F10_Inner *unk2C;
};
extern struct func_80242F10_Outer *D_801BBCD0;
void func_800058DC(void *, void *);
extern s32 func_801C3D20(f32, f32, s32);
void func_80242660(s32 arg0, s32 arg1);
void func_802428B0(s32 arg0, s32 arg1);


extern f32 D_8024ED90;
extern void B_801C3DC8(s32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_802427D0(s32 arg0, s32 arg1) {
    f32 temp;

    temp = *(f32 *)(*(s32 *)((u8 *)D_801BBCD0 + 0x2C) + 4);
    B_801C3DC8(arg0, temp + 110.0f, 55.0f, 75.0f, temp, 10.0f, 75.0f, D_8024ED90, 35.0f);
    if (func_801C3D20(221.0f, 42.0f, 0x41880000) != 0) {
        func_800058DC((void *)arg0, (void *)func_80242660);
        return;
    }
    if (func_801C3D20(-464.0f, 40.0f, 0x41880000) != 0) {
        func_800058DC((void *)arg0, (void *)func_802428B0);
    }
}
