#include "context.h"

struct func_80242778_StructB { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; };
struct func_80242778_StructA { u8 pad[0x2C]; struct func_80242778_StructB *unk2C; };
struct func_80242778_StructC { u8 pad[0xA0]; f32 unkA0; };
extern struct func_80242778_StructA *D_801BBCD8;
extern u8 D_8024A53C[];
extern f64 D_8024A5D8;

void func_80242778(struct func_80242778_StructC *arg0, s32 arg1) {
    f64 k;

    func_8011AAF4(D_8024A53C, 0x25B, (s32)arg0, 0, 1, 0.0f, D_801BBCD8->unk2C->unk30, arg0->unkA0 + D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
    k = 1.0 - 2.0;
    arg0->unkA0 = (f32)((f64)arg0->unkA0 * k);
    if (!(arg1 % 2)) {
    } else {
        arg0->unkA0 = (f32)((f64)arg0->unkA0 * D_8024A5D8);
    }
}
