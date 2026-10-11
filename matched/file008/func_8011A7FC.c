#include "common.h"




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
