#include "context.h"

extern f32 D_801E8A6C;
extern f32 D_801E8A70;
extern f32 D_801E8A74;
extern f32 D_801E8A78;
extern f32 D_801E8A7C;
extern f32 D_801E8A80;
extern f32 D_801E8A84;
extern f32 D_801E8A88;
extern f32 D_801E8A8C;

s32 func_801E287C(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 1.5f, 57.5f, 2.6f, 16.5f,
                      D_801E8A6C, D_801E8A70, D_801E8A74,
                      D_801E8A78, 10.5f, D_801E8A7C,
                      D_801E8A80, D_801E8A84, D_801E8A88) != 0) {
        func_8038BE98(D_801E8A8C);
        func_8038BED4();
        return 0x10;
    }
    return 0xF;
}
