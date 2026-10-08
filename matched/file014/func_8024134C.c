#include "context.h"

struct func_8024134C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80005700(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8024A350[];
extern f32 D_8024A388;
extern f32 D_8024A38C;

void func_8024134C(struct func_8024134C_Struct *arg0, s32 arg1) {
    if (arg0->unk3C++ > 0) {
        func_8011AAF4(D_8024A350, 0x50, arg0, 0, 1, 0.0f, D_8024A388, -74.0f, -117.0f, 0.0f, D_8024A38C, -138.0f, -72.0f, 0.0f, 50.0f, -1, -1);
        func_80005700(arg0);
    }
}
