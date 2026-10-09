#include "context.h"

extern s32 func_801C0DE4(s32 a0, s32 a1, u32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern void func_8038D28C(s32 a0);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern f64 func_80034C24(u64 a0);
extern f64 D_801E87F8;
extern f32 D_801E8800;

s32 func_801E3A90(s32 arg0, s32 arg1) {
    if (func_801C0DE4(3, 1, 0x41108888) != 0) {
        func_801C0EB0(3, 1);
        func_8038D28C(0x243);
        return 4;
    }
    *(f32 *) (*(u8 **) (*(u8 **) ((u8 *) D_8038D8D0 + 4) + 0x30) + 8) = (f32) ((((f32) (func_80034C24(func_801C0F18(3, 1)) / D_801E87F8)) / D_801E8800) * -120.0f + 145.0f);
    return 3;
}
