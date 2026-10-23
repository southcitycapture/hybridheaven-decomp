#define HHX2(a, b) a##b
#define HHX(a, b) HHX2(a, b)
#define func_80241974 HHX(hhx_80241974_, __LINE__)
#define func_80246360 HHX(hhx_80246360_, __LINE__)
#include "context.h"

extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80247A78[];
extern u8 D_80247AB4[];
extern f32 D_80248328;
extern f32 D_8024832C;
extern f32 D_80248330;
extern f32 D_80248334;
extern f32 D_80248338;
extern f32 D_8024833C;
extern f32 D_80248340;
extern f32 D_80248344;
extern f32 D_80248348;
extern void func_80242A28(void);

void func_802428BC(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247A78, 0x47D, arg0, 0, 2, D_80248328, -4.0f, 5.5f, D_8024832C, 4294967296.0f, D_80248330, D_80248334, D_80248338, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247AB4, 0x482, arg0, 0, 1, 0.0f, D_8024833C, 14.0f, D_80248340, 0.0f, D_80248344, 16.5f, D_80248348, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242A28);
    }
}
