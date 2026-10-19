#include "context.h"

extern void func_801C7AB8(void);
extern void func_801C7B30(s32);
extern f32 D_801E8AC8;
extern f32 D_801E8ACC;
extern f32 D_801E8AD0;
extern f32 D_801E8AD4;
extern f32 D_801E8AD8;
extern f32 D_801E8ADC;
extern f32 D_801E8AE0;
extern f32 D_801E8AE4;
extern f32 D_801E8AE8;
extern f32 D_801E8AEC;

s32 func_801E2AF4(s32 arg0, s32 arg1) {
    if (func_8038BEF8(0.0f, 3.0f, 14.1f, 50.6f, D_801E8AC8, D_801E8ACC,
                      D_801E8AD0, D_801E8AD4, D_801E8AD8, D_801E8ADC,
                      D_801E8AE0, D_801E8AE4, D_801E8AE8, D_801E8AEC) != 0) {
        D_8038C158();
        func_801C7AB8();
        func_801C7B30(1);
        return 0x13;
    }
    return 0x12;
}
