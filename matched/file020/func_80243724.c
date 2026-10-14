#include "context.h"

extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern void func_802437F0();
extern void *D_801BBCD8;
extern f32 D_80246BEC;
extern f32 D_80246BF0;
extern f32 D_80246BF4;
extern f32 D_80246BF8;

struct func_80243724_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_80243724_Sub2 {
    u8 pad[0x30];
    s32 unk30;
    s32 unk34;
    s32 unk38;
};

struct func_80243724_Sub {
    u8 pad[0x2C];
    struct func_80243724_Sub2 *unk2C;
};

void func_80243724(struct func_80243724_Struct *arg0, s32 arg1) {
    u16 temp_v0;
    struct func_80243724_Sub2 *temp_v0_2;

    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 + 1;
    if ((s32) temp_v0 >= 2) {
        if (temp_v0 == 2) {
            func_801C3B2C(2);
            func_801C3B10(1);
        }
        temp_v0_2 = ((struct func_80243724_Sub *) D_801BBCD8)->unk2C;
        if (func_801C3DC8(arg0, temp_v0_2->unk30, temp_v0_2->unk34, temp_v0_2->unk38, D_80246BEC, D_80246BF0, D_80246BF4, D_80246BF8, 35.0f) == 0) {
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802437F0);
        }
    }
}
