#include "context.h"

extern f32 D_80208A54;
extern f32 D_80208A58;
extern f32 D_80208A5C;
extern f32 D_80208A60;
extern f32 D_80208A64;
extern f32 D_80208A68;
extern f32 D_80208A6C;
extern f32 D_80208A70;
extern f32 D_80208A74;
extern f32 D_80208A78;
extern f32 D_80208A7C;
extern f32 D_80208A80;

s32 func_801F3C80(volatile s32 arg0, volatile s32 arg1) {
    if (func_8038BEF8(0.0f, 4.0f, 201.3f, 27.1f,
        D_80208A54, D_80208A58, D_80208A5C, D_80208A60,
        D_80208A64, 0.0f, D_80208A68, D_80208A6C,
        D_80208A70, 0.0f) != 0) {
        func_8038BD50(D_80208A74, D_80208A78, 0x4134CCCD);
        func_8038BD88(D_80208A7C, D_80208A80, 0.0f);
        func_8038BED4();
        return 2;
    }
    return 1;
}
