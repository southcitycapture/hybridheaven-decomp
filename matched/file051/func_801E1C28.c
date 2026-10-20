#include "context.h"

extern f32 D_801E77F8;
extern f32 D_801E77FC;
extern f32 D_801E7800;
extern f32 D_801E7804;

void func_801E1C28(void) {
    f32 temp_fv0;

    temp_fv0 = D_801E7148;
    D_801E7148 += D_801E714C;
    D_801E714C -= D_801E7150;
    if ((temp_fv0 * D_801E7148) < 0.0f) {
        if (D_801E7148 < 0.0f) {
            D_801E714C = D_801E77F8;
            D_801E7150 = D_801E77FC;
        } else {
            D_801E714C = D_801E7800;
            D_801E7150 = D_801E7804;
        }
    }
    D_801BBCD8->unk2C->unk34 = D_801E7148 + D_801E7144;
}
