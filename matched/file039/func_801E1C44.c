#include "context.h"

extern s32 D_8038C17C(f32, f32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_8038C4D8(s32, s32);

extern f32 D_801EB040;
extern f32 D_801EB044;
extern f32 D_801EB048;
extern f32 D_801EB04C;
extern f32 D_801EB050;
extern f32 D_801EB054;
extern f32 D_801EB058;
extern f32 D_801EB05C;

s32 func_801E1C44(s32 arg0, s32 arg1) {
    if (D_8038C17C(0, D_801EB040, 0xC1F8CCCD, 0x416CCCCD, D_801EB044, D_801EB048, -44.0f, D_801EB04C, -50.5f, D_801EB050, D_801EB054, D_801EB058, D_801EB05C, 57.0f, 22.0f, 22.0f) != 0) {
        func_8038C4D8(2, 0);
        return 2;
    }
    return 1;
}
