#include "context.h"

typedef struct func_80250AB0_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80250AB0_Struct;
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80259EDC[];
extern u8 D_80259F1C[];
extern f32 D_8025A178;
extern f32 D_8025A17C;
extern f32 D_8025A180;
extern f32 D_8025A184;
extern f32 D_8025A188;
extern f32 D_8025A18C;
extern f32 D_8025A190;
extern f32 D_8025A194;
extern f32 D_8025A198;
extern f32 D_8025A19C;
extern void func_80250C58();

void func_80250AB0(func_80250AB0_Struct *arg0, s32 arg1) {
    arg0->unk90 = arg0->unk90 + 1;
    if (func_8011AAF4(D_80259EDC, 0x618, arg0, 0, 2, D_8025A178, D_8025A17C, -124.0f, 450.0f, 4294967296.0f, D_8025A180, D_8025A184, 450.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80259F1C, 0x61C, arg0, 0, 1, 0.0f, D_8025A188, D_8025A18C, D_8025A190, 0.0f, D_8025A194, D_8025A198, D_8025A19C, 0.0f, 35.0f, -1, -1);
        func_80251E44(-180.0f, -130.0f, 450.0f, 0.06f, 0.0f, 0.0f);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80250C58);
    }
}
