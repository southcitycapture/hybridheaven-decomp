#include "context.h"

struct func_802415B4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
extern void func_80002A04();
extern u8 D_80246948[];
extern f32 D_80246A64;
extern f32 D_80246A68;
extern f32 D_80246A6C;
extern void func_802416EC();

void func_802415B4(struct func_802415B4_Struct *arg0, s32 arg1) {
    if (arg0->unk3C == 0x19) {
        func_80002A04();
    }
    if (arg0->unk3C++ >= 0x1E) {
        func_8011AAF4(D_80246948, 0x2DE, arg0, 0, 1, 0.0f, 63.5f, D_80246A64, 146.0f, 0.0f, D_80246A68, -81.0f, D_80246A6C, 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0, 0, 0, 0x14, 0, 2, 0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802416EC);
    }
}
