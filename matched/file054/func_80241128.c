#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#include "context.h"
#undef func_80241974

extern u8 D_8024749C[];
extern u8 D_802474D8[];
extern u8 D_80246A84[];
extern void func_80241304(void);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_8024811C, D_80248120, D_80248124, D_80248128, D_8024812C;
extern f32 D_80248130, D_80248134, D_80248138, D_8024813C, D_80248140, D_80248144;

void func_80241128(u8 *arg0, s32 arg1) {
    f32 k;
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    k = D_8024811C;
    if ((D_8011AAF4(D_8024749C, 0x307, arg0, 0, 2, 4294967296.0f, k, 2.5f, k, D_80248120, D_80248124, D_80248128, D_8024812C, 0.0f, 35.0f, -1, -1) == 0) && (func_800178E8() != 0) && (arg0[0x90] != 0)) {
        func_8011AAF4(D_802474D8, 0x30C, arg0, 0, 1, 0.0f, D_80248130, D_80248134, D_80248138, 0.0f, D_8024813C, D_80248140, D_80248144, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246A84);
        func_8015122C(D_80248804, D_802468DC, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, func_80241304);
    }
}
