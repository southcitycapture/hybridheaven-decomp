#include "context.h"

struct func_80241C7C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
extern void func_80002A04();
extern u8 D_802469B0[];
extern f32 D_80246A74;
extern f32 D_80246A7C;
extern f32 D_80246A84;
extern f32 D_80246A70;
extern f32 D_80246A78;
extern f32 D_80246A80;

void func_80241C7C(struct func_80241C7C_Struct *arg0, s32 arg1) {
    if (arg0->unk3C == 0x19) {
        func_80002A04();
    }
    if (arg0->unk3C++ >= 0x1E) {
        func_8011AAF4(D_802469B0, 0x3AA, arg0, 0, 1, 0.0f, D_80246A70, D_80246A74, D_80246A78, 0.0f, D_80246A7C, D_80246A80, D_80246A84, 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 2, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241DB4);
    }
}
