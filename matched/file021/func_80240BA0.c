#include "common.h"
extern void func_800058DC(void *, void *);
void func_80240C74(s32 arg0, s32 arg1);


struct func_80240BA0_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};

struct func_80240BA0_Outer {
    u8 pad0[0x2C];
    struct func_80240BA0_Inner *unk2C;
};

extern struct func_80240BA0_Outer *D_801BBCD8;
extern u8 D_80256EF4[];
extern void func_8011AAF4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4,
                          f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10,
                          f32 a11, f32 a12, f32 a13, f32 a14, s32 a15, s32 a16);
extern void func_801FBB20(void);

void func_80240BA0(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        func_8011AAF4(D_80256EF4, 0xD4, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC((void *)arg0, &func_80240C74);
    }
}
