#include "context.h"
typedef struct func_8011A7FC_StructInner {
    u8 pad0[0x30];
    f32 unk30;
    u8 pad1[0x4];
    f32 unk38;
    f32 unk3C;
    u8 pad2[0x4];
    f32 unk44;
} func_8011A7FC_StructInner;
typedef struct func_8011A7FC_StructOuter {
    u8 pad0[0x2C];
    func_8011A7FC_StructInner *unk2C;
} func_8011A7FC_StructOuter;
typedef struct func_8011A7FC_Struct {
    u8 pad0[0xE8];
    func_8011A7FC_StructOuter *unkE8;
    u8 pad1[0x232 - 0xEC];
    s16 unk232;
    u8 pad2[0x254 - 0x234];
    u8 unk254;
    u8 unk255;
    u8 unk256;
    u8 pad3[0x2AD - 0x257];
    u8 unk2AD;
    u8 pad4[0x2B0 - 0x2AE];
    s32 unk2B0;
    u8 unk2B4;
    u8 unk2B5;
} func_8011A7FC_Struct;
extern func_8011A7FC_Struct D_801BBBF0;

extern f64 D_80189E88;

typedef struct func_8011A2D8_StructInner {
    u8 pad0[0x1C];
    f32 unk1C;
} func_8011A2D8_StructInner;

s32 func_8011A2D8(u8 arg0) {
    f32 temp_fv0;
    f64 temp_fv1;

    temp_fv0 = ((f32 *) &D_801BBBF0)[arg0 + 0xC3];
    temp_fv1 = (f64) temp_fv0;
    if ((temp_fv1 > 0.0) && (temp_fv1 < D_80189E88)) {
        ((func_8011A2D8_StructInner *) D_801BBBF0.unkE8->unk2C)->unk1C = temp_fv0;
        return 0;
    }
    return -1;
}
