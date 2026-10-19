#include "context.h"

extern f32 D_801F489C;
extern f32 D_801F48A0;
extern f32 D_801F48A4;
extern f32 D_801F48A8;
extern f32 D_801F48AC;
extern f32 D_801F48B0;
extern f32 D_801F48B4;
extern f32 D_801F48B8;
extern f32 D_801F48BC;
extern f32 D_801F48C0;

s32 func_801E918C(s32 arg0, s32 arg1) {
    s32 rv = func_8038BEF8(0.0f, 1.5f, 28.4f, 2.8f, D_801F489C, D_801F48A0, D_801F48A4, D_801F48A8, D_801F48AC, D_801F48B0, D_801F48B4, D_801F48B8, D_801F48BC, D_801F48C0);
    if (rv != 0) {
        D_8038C158();
        return 0x13;
    }
    return 0x12;
}
