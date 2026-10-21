#include "context.h"

extern f32 D_801E7138;
extern f32 D_801E713C;
extern f32 D_801E7140;
extern f32 D_801E7144;
extern f32 D_801E7148;
extern f32 D_801E714C;

s32 func_801E27D0(s32 arg0, s32 arg1) {
    f32 temp0;
    f32 temp1;

    do {
        temp0 = D_801E7138;
        temp1 = D_801E713C;
    } while (0);
    if (D_8038C17C(0.0f, 2.5f, 0xC23ECCCD, 0xC0000000,
                  D_801E7140, D_801E7144, D_801E7148, D_801E714C,
                  temp0, temp1, 41.0f,
                  temp0, temp1, 41.0f, 41.5f, 41.5f) != 0) {
        return 0x19;
    }
    return 0x18;
}
