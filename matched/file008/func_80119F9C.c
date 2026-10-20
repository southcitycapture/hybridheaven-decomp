#include "context.h"
typedef struct func_8011A0F0_StructB {
    u8 pad0[0x48];
    s32 unk48;
    s32 unk4C;
    f32 unk50;
} func_8011A0F0_StructB;
typedef struct func_8011A0F0_StructA {
    u8 pad0[0x2C];
    func_8011A0F0_StructB *unk2C;
} func_8011A0F0_StructA;
s16 func_8001EF38(f32, f32);                        /* extern */

typedef struct func_80119F9C_Inner {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80119F9C_Inner;

typedef struct func_80119F9C_Outer {
    u8 pad0[0x2C];
    func_80119F9C_Inner *unk2C;
} func_80119F9C_Outer;

extern struct func_8011A0F0_StructA *D_801BBCD8;
extern f32 func_8002FC20(f32, f32);

void func_80119F9C(s16 *arg0, s16 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 len;

    x = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk3C - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk30;
    y = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk40 - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk34;
    z = ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk44 - ((func_80119F9C_Outer *) D_801BBCD8)->unk2C->unk38;
    len = func_8002FC20((x * x) + (z * z), x);
    *arg0 = func_8001EF38(z, x) & 0x1FFF;
    if (func_8001EF38(y, len) & 0x1000) {
        *arg1 = (func_8001EF38(y, len) & 0x1FFF) - 0x2000;
    } else {
        *arg1 = func_8001EF38(y, len) & 0x1FFF;
    }
}
