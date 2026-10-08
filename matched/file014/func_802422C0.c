#include "context.h"

extern void func_800058DC(s32, void *);
extern void func_800179B0(void *);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_80242390(void);
extern u8 D_80248404[];
extern u8 D_8024A468[];

void func_802422C0(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A468, 0x1EA, arg0, 0, 2, 1.5f, 35.0f, 5.0f, 280.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80133980(0x68);
        func_800179B0(D_80248404);
        func_800058DC(arg0, func_80242390);
    }
}
