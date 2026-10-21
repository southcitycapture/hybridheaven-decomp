#ifndef GG
float func_8001EAD0(short);
float func_8001EB64(short);
#endif
#include "context.h"

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80190634[];
extern s32 D_801C2F0C(s32, void *);
extern func_8014F400_Struct_Obj *D_801BBCD8;

void func_80150C8C(s32 arg0, s32 arg1) {
    if (func_801C3044() == 0) {
        D_801C2F0C(1, NULL);
        func_8011AAF4(D_80190634, 0xA20, arg0, 2, 1, 0.0f,
                     D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f,
                     D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f,
                     35.0f, -1, -1);
        D_801BBBF0[0x435] &= 0xFFFE;
        func_800058DC(arg0, func_8014C72C);
    }
}
