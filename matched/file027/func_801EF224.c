#include "context.h"

extern f32 D_801F59C4;
extern f32 D_801F59C8;
extern f32 D_801F59CC;
extern f32 D_801F59D0;
extern f32 D_801F59D4;
extern f32 D_801F59D8;
extern f32 D_801F59DC;

s32 func_801EF224(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 10.0f, 28.4f, 71.0f, D_801F59C4, D_801F59C8,
                      44.5f, -9.0f, D_801F59CC, D_801F59D0, -23.0f,
                      D_801F59D4, D_801F59D8, D_801F59DC) != 0) {
        return 6;
    }
    return 5;
}
