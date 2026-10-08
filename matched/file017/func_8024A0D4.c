#include "common.h"

typedef struct func_8024A0D4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024A0D4_Struct;

extern s32 func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C2F0C(s32, s32);
extern void func_8024A418(void);
extern u8 D_8025CBE0[];
extern f32 D_8025CD48;
extern f32 D_8025CD4C;

void func_8024A0D4(func_8024A0D4_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk3C++ >= 0x78) {
        func_8011AAF4(D_8025CBE0, 0x280, arg0, 2, 1, 0.0f, D_8025CD48, -180.0f, -30.0f, 0.0f, D_8025CD4C, -185.0f, 0.0f, 0.0f, 55.0f, -1, -1);
        func_801C2F0C(1, 0);
        func_800058DC(arg0, func_8024A418);
    }
}
