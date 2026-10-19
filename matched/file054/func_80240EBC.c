#include "context.h"
extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_8015115C(s32, void *);
extern u8 D_80246810[];
extern u8 D_80247460[];
extern f32 D_8024810C;
extern f32 D_80248110;
extern f32 D_80248114;
extern f32 D_80248118;
extern void func_80241024();

void func_80240EBC(void *arg0, s32 arg1) {
    if (func_801517CC(D_80248800) != 0 && func_801517CC(D_80248804) != 0) {
        f32 z = 0.0f;
        func_801512CC(D_80248800, z, z, -33.0f);
        func_80151430(D_80248800, 0);
        func_8015115C(D_80248800, D_80246810);
        func_801512CC(D_80248804, z, z, 17.0f);
        func_80151430(D_80248804, 0x1000);
        func_8015115C(D_80248804, D_802468C4);
        func_8011AAF4(D_80247460, 0x2CC, arg0, 0, 1, z, D_8024810C, 2.5f, D_8024810C, z, D_80248110, D_80248114, D_80248118, z, 35.0f, -1, -1);
        *(u16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_80241024);
    }
}
