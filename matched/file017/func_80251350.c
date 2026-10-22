#include "context.h"

typedef struct func_80251350_Struct_Cam {
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
} func_80251350_Struct_Cam;
typedef struct func_80251350_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_80251350_Struct;
typedef struct func_80251350_Struct_Holder {
    u8 pad[0x2C];
    func_80251350_Struct_Cam *unk2C;
} func_80251350_Struct_Holder;

extern func_80251350_Struct_Holder *D_801BBCD0;
extern func_80251350_Struct_Holder *D_801BBCD8;
extern u8 D_8025D4A8[];
extern f32 D_8025D58C;


void func_80251350(func_80251350_Struct *arg0, s32 arg1) {
    u8 pad[4];
    f32 sp50;

    sp50 = func_8001EAD0(D_801BBCD0->unk2C->unk12);
    if (D_801C3DC8(arg0, (f32) ((f64) D_801BBCD0->unk2C->unk4 - ((f64) sp50 * 40.0)), D_801BBCD0->unk2C->unk8 + 20.0f, (f32) ((f64) D_801BBCD0->unk2C->unkC - ((f64) func_8001EB64(D_801BBCD0->unk2C->unk12) * 40.0)), D_801BBCD0->unk2C->unk4, D_801BBCD0->unk2C->unk8 + 17.0f, D_801BBCD0->unk2C->unkC, D_8025D58C, 35.0f) == 0) {
        func_8011AAF4(D_8025D4A8, 0x492, arg0, 2, 1, 0.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        arg0->unk74 = 0;
        func_801C2F0C(1, 0);
        func_801FBB20();
        func_800058DC(arg0, func_802514F4);
    }
}
