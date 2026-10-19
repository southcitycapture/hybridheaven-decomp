#include "context.h"

typedef struct func_8024CA84_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024CA84_Struct;

extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8024CBB0(void);
extern u8 D_802595B8[];
extern f32 D_8025978C;
extern f32 D_80259790;
extern f32 D_80259794;
extern f32 D_80259798;
extern f32 D_8025979C;
extern f32 D_802597A0;
extern f32 D_802597A4;
extern f32 D_802597A8;

void func_8024CA84(func_8024CA84_Struct *arg0, s32 arg1) {
    func_8011AAF4(D_802595B8, 0x295, arg0, 0, 2, D_8025978C, D_80259790, D_80259794, D_80259798, D_8025979C, D_802597A0, D_802597A4, D_802597A8, 0.0f, 35.0f, -1, -1);
    if (arg0->unk90++ >= 0x28) {
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 0x14, 0, 1, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CBB0);
    }
}
