#include "context.h"

extern f32 D_801F49EC;
extern f32 D_801F49F0;
extern f32 D_801F49F4;
extern f32 D_801F49F8;
extern f32 D_801F49FC;
extern f32 D_801F4A00;
extern f32 D_801F4A04;

s32 func_801EA624(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, D_801F49EC, -9.4f, 14.0f,
                      D_801F49F0, D_801F49F4, 13.0f, D_801F49F8,
                      D_801F49FC, 16.0f, -39.5f, D_801F4A00,
                      15.0f, D_801F4A04) != 0) {
        func_8038BED4();
        return 0x50;
    }
    return 0x4F;
}
