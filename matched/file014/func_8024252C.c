#include "context.h"

struct func_8024252C_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
};
struct func_8024252C_StructA {
    u8 pad0[0x2C];
    struct func_8024252C_StructB *unk2C;
};
struct func_8024252C_StructD {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
};
struct func_8024252C_StructC {
    u8 pad[0x2C];
    struct func_8024252C_StructD *unk2C;
};
struct func_80242778_StructA;
extern struct func_80242778_StructA *D_801BBCD8;
void func_802426D0(s32 arg0, s32 arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 D_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern u8 D_8024A4E0[];
extern f32 D_8024A5D0;

#define CD0 ((struct func_8024252C_StructA *)D_801BBCD0)
#define CD8 ((struct func_8024252C_StructC *)D_801BBCD8)

void func_8024252C(s32 arg0, s32 arg1) {
    s32 pad;
    f32 sp50;
    s32 pad2;

    sp50 = func_8001EAD0(CD0->unk2C->unk12);
    if (D_801C3DC8((void *)arg0,
            (f64)CD0->unk2C->unk4 - (f64)sp50 * 30.0,
            CD0->unk2C->unk8 + 20.0f,
            CD0->unk2C->unkC - (f64)func_8001EB64(CD0->unk2C->unk12) * 30.0,
            CD0->unk2C->unk4,
            CD0->unk2C->unk8 + 17.0f,
            CD0->unk2C->unkC, D_8024A5D0, 35.0f) == 0) {
        if (func_801C3044() == 0) {
            func_8011AAF4(D_8024A4E0, 0x226, arg0, 2, 1, 0.0f, CD8->unk2C->unk30, CD8->unk2C->unk34, CD8->unk2C->unk38, 0.0f, CD8->unk2C->unk3C, CD8->unk2C->unk40, CD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
            func_801C2F0C(1, 0);
            func_800058DC((void *)arg0, (void *)func_802426D0);
        }
    }
}
#undef CD0
#undef CD8
