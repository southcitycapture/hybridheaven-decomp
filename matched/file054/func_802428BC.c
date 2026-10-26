#include "common.h"
#define HHX2(a, b) a##b
#define HHX(a, b) HHX2(a, b)
#define func_80241974 HHX(hhx_80241974_, __LINE__)
#define func_80246360 HHX(hhx_80246360_, __LINE__)
extern void func_800058DC(void *, void (*)(void));
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80241974(void);
extern u8 func_80246360[];


extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80247A78[];
extern u8 D_80247AB4[];
extern f32 D_80248328__load_func_802428BC;
extern f32 D_8024832C__load_func_802428BC;
extern f32 D_80248330__load_func_802428BC;
extern f32 D_80248334__load_func_802428BC;
extern f32 D_80248338__load_func_802428BC;
extern f32 D_8024833C__load_func_802428BC;
extern f32 D_80248340__load_func_802428BC;
extern f32 D_80248344__load_func_802428BC;
extern f32 D_80248348__load_func_802428BC;
extern void func_80242A28();

void func_802428BC(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247A78, 0x47D, arg0, 0, 2, D_80248328__load_func_802428BC, -4.0f, 5.5f, D_8024832C__load_func_802428BC, 4294967296.0f, D_80248330__load_func_802428BC, D_80248334__load_func_802428BC, D_80248338__load_func_802428BC, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247AB4, 0x482, arg0, 0, 1, 0.0f, D_8024833C__load_func_802428BC, 14.0f, D_80248340__load_func_802428BC, 0.0f, D_80248344__load_func_802428BC, 16.5f, D_80248348__load_func_802428BC, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242A28);
    }
}
