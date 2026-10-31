#include "common.h"
#define ZZC2(a, b) a##b
#define ZZC(a, b) ZZC2(a, b)
extern void func_800058DC(void *, void (*)(void));
void func_802425EC(void *arg0, s32 arg1);

extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_802482A0;
extern f32 D_802482A4;
extern f32 D_802482A8;
extern f32 D_802482AC;
extern f32 D_802482B0;
extern f32 D_802482B4;
extern f32 D_802482B8;
extern f32 D_802482BC;
extern f32 D_802482C0;
extern f32 D_802482C4;
extern f32 D_802482C8;
extern f32 D_802482CC;
extern u8 D_80247910[];
extern u8 D_8024794C[];

void func_80242488(void *arg0, s32 arg1) {
    if (func_8011AAF4(D_80247910, 0x447, arg0, 0, 2, D_802482A0, D_802482A4, D_802482A8, D_802482AC, 4294967296.0f, D_802482B0, D_802482B4, D_802482B8, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_8024794C, 0x44C, arg0, 0, 1, 0.0f, D_802482C0, 16.399999618530273f, D_802482C4, 0.0f, D_802482C8, D_802482CC, -33.0f, 0.0f, 16.399999618530273f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_802425EC);
    }
}
