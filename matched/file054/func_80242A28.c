#include "common.h"
extern void func_800058DC(void *, void (*)(void));
struct func_80242D38_Struct { u8 pad[0x3C]; u16 unk3C; };
void func_80242B8C(struct func_80242D38_Struct *arg0, s32 arg1);

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80247AF0[];
extern u8 D_80247B2C[];

void func_80242A28(void *arg0, s32 arg1) {
    if (func_8011AAF4(D_80247AF0, 0x48F, arg0, 0, 2, 0.294f, -6.4f, 14.2f, -1.7f, 4294967296.0f, 3.9f, 16.5f, 4.9f,
                      0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247B2C, 0x494, arg0, 0, 1, 0.0f, -5.3f, 16.4f, -15.7f, 0.0f, -1.2f, 17.5f, -33.1f, 0.0f,
                      16.4f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_80242B8C);
    }
}
