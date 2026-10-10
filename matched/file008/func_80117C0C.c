#include "context.h"

extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern struct func_80117CD0_Struct0 *D_801BBCD8;
extern void func_801178E4(f32 *, f32 *, f32 *, f32 *, f32 *, f32 *);
extern u8 D_80189558[];

struct func_80117C0C_Struct1 {
    u8 pad[0x1C];
    f32 unk1C;
};

struct func_80117C0C_Struct0 {
    u8 pad[0x2C];
    struct func_80117C0C_Struct1 *unk2C;
};

void func_80117C0C(s32 arg0) {
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    func_801178E4(&sp64, &sp60, &sp5C, &sp58, &sp54, &sp50);
    func_8011AAF4(D_80189558, 0xE6, arg0, 2, 1, 0.0f, sp64, sp60, sp5C, 0.0f, sp58, sp54, sp50, 0.0f, ((struct func_80117C0C_Struct0 *)D_801BBCD8)->unk2C->unk1C, -1, -1);
}
