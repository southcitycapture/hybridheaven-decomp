#include "context.h"

typedef struct { u8 pad[0x90]; u8 unk90; } func_80241D14_Struct;
extern void func_80241E3C();
extern u8 D_80247730[];
extern u8 D_80246F3C[];
extern u8 D_80246834[];
extern f32 D_80248200;
extern f32 D_80248204;
extern f32 D_80248208;
extern f32 D_8024820C;

void func_80241D14(func_80241D14_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_80246918);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_80247730, 0x3D5, arg0, 0, 1, 0.0f, D_80248200, 18.5f, D_80248204, 0.0f, D_80248208, D_8024820C, -32.0f, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246F3C);
        func_8015115C(D_80248800, D_80246834);
        func_800058DC(arg0, func_80241E3C);
    }
}
