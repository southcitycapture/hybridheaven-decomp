#include "context.h"

extern f32 D_801E8B74;
extern f32 D_801E8B78;
extern f32 D_801E8B7C;
extern f32 D_801E8B80;
extern f32 D_801E8B84;
extern f32 D_801E8B88;
extern f32 D_801E8B8C;
extern f32 D_801E8B90;
extern f32 D_801E8B94;

s32 func_801E2EA4(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 5.0f, 32.4f, 19.6f,
                      D_801E8B74, D_801E8B78, D_801E8B7C,
                      D_801E8B80, D_801E8B84, 12.5f,
                      D_801E8B88, D_801E8B8C, D_801E8B90,
                      D_801E8B94) != 0) {
        func_8038BE98(7.0f);
        D_8038C158();
        return 0x17;
    }
    return 0x16;
}
