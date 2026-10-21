#include "context.h"

extern f32 D_8024EDE4;
extern f32 D_8024EDE8;
extern f32 D_8024EDEC;
extern f32 D_8024EDF0;
extern s32 D_801C3DC8(s32, f32, s32, s32, f32, f32, f32, f32, f32);

void func_80243054(void *arg0, void *arg1) {
    f32 temp;

    temp = D_801BBCD0->unk2C->unk4;
    D_801C3DC8((s32)arg0, temp, 0x43830000, 0x439B8CCD, temp, D_8024EDE4, D_8024EDE8, D_8024EDEC, 35.0f);
    if (func_801C3D20(D_8024EDF0, 105.0f, 0x41980000) != 0) {
        func_800058DC(arg0, func_80242F80);
    }
    if (func_801C3D20(380.0f, 108.0f, 0x41980000) != 0) {
        func_800058DC(arg0, func_80243124);
    }
}
