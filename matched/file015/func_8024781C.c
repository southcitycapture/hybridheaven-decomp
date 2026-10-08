#include "context.h"

typedef struct func_8024781C_Inner {
    u8 pad[0x40];
    f32 a;
    u8 pad2[0x4];
    f32 b;
} func_8024781C_Inner;

typedef struct func_8024781C_Struct {
    u8 pad[0xDC];
    func_8024781C_Inner *inner;
} func_8024781C_Struct;

extern func_8024781C_Struct D_801BBBF0;
extern u8 D_80252A44[];
extern void func_802478B4();
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133980(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_800179B0(void *);
extern void func_801FBB30();

void func_8024781C(s32 arg0, s32 arg1) {
    if (func_801C3D20(-400.0f, 200.0f, 50.0f) != 0) {
        func_80133980(0x75);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.inner->a = 0.0f;
        D_801BBBF0.inner->b = 0.0f;
        func_800179B0(D_80252A44);
        func_801FBB30();
        func_800058DC(arg0, func_802478B4);
    }
}
