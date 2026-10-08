#include "common.h"

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

s16 func_8001EF38(f32, f32);                        /* extern */
extern func_8011A7FC_Struct D_801BBBF0;

void func_8011A7FC(void) {
    func_8011A7FC_StructInner *temp_v0;

    D_801BBBF0.unk2AD = 0;
    D_801BBBF0.unk2B5 = 0;
    D_801BBBF0.unk2B0 = 0;
    if ((D_801BBBF0.unk254 == 0) && (D_801BBBF0.unk255 == 0) && (D_801BBBF0.unk256 == 0)) {
        temp_v0 = D_801BBBF0.unkE8->unk2C;
        D_801BBBF0.unk232 = func_8001EF38(temp_v0->unk44 - temp_v0->unk38, temp_v0->unk3C - temp_v0->unk30);
    }
}
