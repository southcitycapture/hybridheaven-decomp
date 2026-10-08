#include "common.h"

struct func_80117CD0_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117CD0_Struct0 {
    u8 pad[0x2C];
    struct func_80117CD0_Struct1 *unk2C;
};

extern s32 func_80117A7C(s16, f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8018959C[];
extern struct func_80117CD0_Struct0 *D_801BBCD8;

void func_80117CD0(s32 arg0, s16 arg1) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_80117A7C(arg1, &sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_8018959C, 0xFB, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, D_801BBCD8->unk2C->unk1C, -1, -1);
}
