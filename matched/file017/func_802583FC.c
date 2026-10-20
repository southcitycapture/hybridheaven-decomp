#include "context.h"
typedef struct func_80258514_Struct_Arg1 {
    u8 pad[0x22];
    u8 unk22;
} func_80258514_Struct_Arg1;
typedef struct func_80258514_Struct_Arg0 {
    u8 pad[0x74];
    s32 unk74;
} func_80258514_Struct_Arg0;
void func_80258514(func_80258514_Struct_Arg0 *arg0, func_80258514_Struct_Arg1 **arg1);

extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133980(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_8025DD50[];

void func_802583FC(s32 arg0, s32 arg1) {
    if ((func_801C3D20(-76.0f, -12.0f, 15.0f) != 0) || (func_801C3D20(-76.0f, 12.0f, 15.0f) != 0)) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025DD50, 0x186, (void *)arg0, 0, 1, 0.0f, -109.0f, 17.5f, -0.5f, 0.0f, -36.5f, 14.0f, 2.0f, 0.0f, 55.0f, -1, -1);
        func_80133980(0x138);
        func_800058DC(arg0, func_80258514);
    }
}
