#include "context.h"
extern func_8024EF6C_Vec D_80254B30;
extern u8 D_80259D3C[];
extern f32 D_8025A10C;
extern f32 D_8025A110;
extern f32 D_8025A114;
extern f32 D_8025A118;
extern u8 func_80250334[];

void func_802501F4(func_8024F984_Struct *arg0, volatile s32 arg1) {
    s32 t = arg0->unk5C;
    if (func_80011140(arg1, t, D_80254B30, 0x14) != 0) {
        GF(0) = D_8025A10C;
        GF(1) = -113.0f;
        GF(2) = 454.0f;
        GF(3) = D_8025A110;
        GF(4) = D_8025A114;
        GF(5) = D_8025A118;
        func_8011AAF4(D_80259D3C, 0x54D, arg0, 0, 1, 0.0f, GF(0), GF(1), GF(2), 0.0f, GF(3), GF(4), GF(5), 0.0f, 35.0f, -1, -1);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, func_80250334);
    }
}
