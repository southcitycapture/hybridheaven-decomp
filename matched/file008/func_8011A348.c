#define func_8011A348 func_8011A348_ctx
#include "context.h"
#undef func_8011A348
s32 func_8011A348(u8 arg0) {
    s16 sp26;
    s16 sp24;

    if (((s16 *)((u8 *)&D_801BBBF0 + arg0 * 2))[0x31A / 2] == -1) {
        return 0;
    }
    func_80119F9C(&sp26, &sp24);
    func_8011A148(sp26, sp24, ((s16 *)((u8 *)&D_801BBBF0 + arg0 * 2))[0x31A / 2], (f32 *)&D_801BBCD8->unk2C->unk48, (f32 *)&D_801BBCD8->unk2C->unk4C, (f32 *)&D_801BBCD8->unk2C->unk50);
    return 0;
}
