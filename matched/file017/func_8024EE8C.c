#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_8024D9B8 CAT(func_8024D9B8_L, __LINE__)
#include "context.h"
#undef func_8024D9B8

typedef struct func_8024EE8C_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8024EE8C_Struct_Cam;
typedef struct func_8024EE8C_Struct_Holder {
    u8 pad[0x2C];
    func_8024EE8C_Struct_Cam *unk2C;
} func_8024EE8C_Struct_Holder;
typedef struct func_8024EE8C_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_8024EE8C_Struct;

extern func_8024EE8C_Struct_Holder *D_801BBCD0;
extern func_8024EE8C_Struct_Holder *D_801BBCD8;
extern u8 D_8025D1F8[];
extern f32 D_8025D2DC;
extern void func_801C2F0C(s32, s32);
extern void func_801FBB20(void);

void func_8024EE8C(func_8024EE8C_Struct *arg0, s32 arg1) {
    f32 pad;
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    if (D_801C3DC8(arg0, (f32) ((f64) D_801BBCD0->unk2C->unk4 - ((f64) sp50 * 40.0)), D_801BBCD0->unk2C->unk8 + 20.0f,
                   (f32) ((f64) D_801BBCD0->unk2C->unkC - ((f64) func_8001EB64(D_801BBCD0->unk2C->unk12) * 40.0)),
                   D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 17.0f, D_801BBCD0->unk2C->unkC, D_8025D2DC, 35.0f) == 0) {
        func_8011AAF4(D_8025D1F8, 0x488, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f,
                      D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk74 = 0;
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC(arg0, (void *)func_8024F030);
    }
}
