#include "common.h"



extern void func_80119F9C(s16 *, s16 *);
extern void func_8011A06C(s16, s16, s32, s32, f32, s32);
extern func_8011A0F0_StructA *D_801BBCD8;

void func_8011A0F0(s32 arg0) {
    s16 sp26;
    s16 sp24;
    func_8011A0F0_StructB *temp_v0;

    func_80119F9C(&sp26, &sp24);
    temp_v0 = D_801BBCD8->unk2C;
    func_8011A06C(sp26, sp24, temp_v0->unk48, temp_v0->unk4C, temp_v0->unk50, arg0);
}
