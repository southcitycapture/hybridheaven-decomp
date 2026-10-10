#include "context.h"

void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern struct func_801EC5B4_Struct0 *D_801DAB14;

extern f32 D_801FBFD4;
extern f32 D_801FBFD8;

#define FUNC_801E4D24_Z ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) *(u8 **) ((u8 *) D_801DAB14 + 0x8) + 0x24) + 0x2C))

s32 func_801E4D24(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03F3A860) != 0) {
        *(f32 *) (FUNC_801E4D24_Z + 0x4) = D_801FBFD4;
        *(f32 *) (FUNC_801E4D24_Z + 0x8) = 0.0f;
        *(f32 *) (FUNC_801E4D24_Z + 0xC) = D_801FBFD8;
        *(s16 *) (FUNC_801E4D24_Z + 0x12) = 0x1800;
        func_801CC470(0, 0x01B80014, 0, 0x1100, 1.0f);
        return 7;
    }
    return 6;
}
