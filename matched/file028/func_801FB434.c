#include "context.h"

extern f32 D_80208CC8;
extern f32 D_80208CCC;
extern f32 D_80208CD0;
extern f32 D_80208CD4;
extern f32 D_80208CD8;
extern f32 D_80208CDC;

s32 func_801FB434(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 2.5f, 16.2f, 4.6f, D_80208CC8, 8.0f, D_80208CCC,
                      D_80208CD0, 4.5f, D_80208CD4, -38.5f, 4.5f, D_80208CD8,
                      D_80208CDC) != 0) {
        func_8038BED4();
        return 0xC;
    }
    return 0xB;
}
