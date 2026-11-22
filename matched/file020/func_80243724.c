#include "common.h"

extern void *D_801BBCD8;
extern void func_800058DC(void *, void *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
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
extern void func_802437F0();
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
        if (func_801C3DC8(arg0, temp_v0_2->unk30, temp_v0_2->unk34, temp_v0_2->unk38, (-217.5f), 15.3000002f, 628.700012f, 0.200000003f, 35.0f) == 0) {
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802437F0);
        }
    }
}
