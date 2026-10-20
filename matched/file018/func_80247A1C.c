#include "context.h"



extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025C338[];
extern f32 D_8025C5CC;
extern void func_80247B20();

void func_80247A1C(func_80247A1C_StructArg0 *arg0, s32 arg1) {
    u8 pad[8];
    func_80247A1C_StructObj *sp54;

    sp54 = arg0->unk5C;
    func_8011AAF4(D_8025C338, 0x505, arg0, 0, 2, 1.0f, -5.0f, 254.0f, 292.0f, 1.5f, -2.0f, 228.0f, D_8025C5CC, 0.0f, 35.0f, -1, -1);
    if (func_80010550(arg1, sp54) != 0) {
        sp54->unk78 = 1;
        arg0->unk90 = 0x80;
        func_800058DC(arg0, &func_80247B20);
    }
}
