#include "context.h"
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_801C3D20(f32, f32, f32);
extern u8 D_8025C1F4[];
extern u8 func_80240F50[];
typedef struct func_80240DEC_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_80240DEC_Struct;

void func_80240DEC(func_80240DEC_Struct *arg0, s32 arg1) {
    s32 t;

    if (func_801C3D20(func_8001EAD0(arg0->unk9C) * 5.0f + arg0->unk90, func_8001EB64(arg0->unk9C) * 5.0f + arg0->unk98, 8.0f) != 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        t = (s16)(*(u16 *)&arg0->unk9C + 0x2AA) & 0x1FFF;
        func_8011AAF4(D_8025C1F4, 0xEE, arg0, 0, 1, 0.0f, func_8001EAD0(t) * 20.0f + arg0->unk90, arg0->unk94 + 30.0f, func_8001EB64(t) * 20.0f + arg0->unk98, 0.0f, arg0->unk90, arg0->unk94 + 5.0f, arg0->unk98, 0.0f, 55.0f, -1, -1);
        func_800058DC(arg0, func_80240F50);
    }
}
