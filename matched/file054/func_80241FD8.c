#include "context.h"

extern u8 D_802477A8[];
extern u8 D_802477E4[];
extern u8 D_80246840[];
extern f32 D_80248224;
extern f32 D_80248228;
extern f32 D_8024822C;
extern f32 D_80248230;
extern f32 D_80248234;
extern f32 D_80248238;
extern f32 D_8024823C;
extern f32 D_80248240;
extern f32 D_80248244;
extern f32 D_80248248;
extern f32 D_8024824C;
extern f32 D_80248250;
extern u8 func_80242158[];
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80241FD8(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_802477A8, 0x406, arg0, 0, 2, D_80248224, 0.0f, D_80248228, D_8024822C, 4294967296.0f, 0.5f, D_80248230, D_80248234, D_80248238, D_8024823C, -1, -1) == 0) {
        D_8011AAF4(D_802477E4, 0x40B, arg0, 0, 1, 0.0f, D_80248240, D_80248244, -22.5f, 0.0f, D_80248248, D_8024824C, D_80248250, 0.0f, 35.0f, -1, -1);
        func_8015115C(D_80248800, D_80246840);
        func_800058DC(arg0, (void (*)(void))func_80242158);
    }
}
