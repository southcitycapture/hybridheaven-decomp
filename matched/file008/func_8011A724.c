#include "context.h"

struct func_8011A724_Obj {
    u8 pad0[0x34];
    f32 unk34;
    u8 pad1[0x40 - 0x38];
    f32 unk40;
};

struct func_8011A724_Mid {
    u8 pad0[0x2C];
    struct func_8011A724_Obj *unk2C;
};

struct func_8011A724_Struct {
    u8 pad0[0xE8];
    struct func_8011A724_Mid *unkE8;
    u8 pad1[0x31A - 0xEC];
    s16 unk31A[5];
    f32 unk324;
};

extern struct func_8011A7FC_Struct D_801BBBF0;
void func_8011A1B8(u8);
void func_8011A2D8(u8);
void func_8011A348(u8);

void func_8011A724(u8 arg0) {
    s16 sp36;
    s16 sp34;
    s16 sp32;

    func_8011A0F0((s32) &sp32);
    func_8011A1B8(arg0);
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk34 = ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk34 + ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324;
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk40 = ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C->unk40 + ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324;
    ((struct func_8011A724_Struct *) &D_801BBBF0)->unk324 = 0.0f;
    func_8011A2D8(arg0);
    func_80119F9C(&sp36, &sp34);
    func_8011A148(sp36, sp34, sp32,
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x48),
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x4C),
                  (f32 *) ((u8 *) ((struct func_8011A724_Struct *) &D_801BBBF0)->unkE8->unk2C + 0x50));
    if (((struct func_8011A724_Struct *) &D_801BBBF0)->unk31A[arg0] != -1) {
        func_8011A348(arg0);
    }
}
