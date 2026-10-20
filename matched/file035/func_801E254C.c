#include "context.h"
extern f32 D_801E8A0C;
extern f32 D_801E8A10;
extern f32 D_801E8A14;
extern f32 D_801E8A18;
extern f32 D_801E8A1C;
extern f32 D_801E8A20;
extern f32 D_801E8A24;

s32 func_801E254C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801E8A0C, -15.5f, 77.8f, 34.5f, D_801E8A10, 66.5f, 29.0f, D_801E8A14, D_801E8A18, -3.0f, D_801E8A1C, 14.5f, D_801E8A20) != 0) {
        func_8038BE98(D_801E8A24);
        func_8038BED4();
        func_801CC470(0, 0x03480056, 0, 1, 1.0f);
        return 0xC;
    }
    return 0xB;
}
