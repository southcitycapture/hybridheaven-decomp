#include "context.h"
extern void func_800058DC(void *arg0, void *arg1);

extern f32 D_80246A30;
extern f32 D_80246C60;
extern void func_8024092C();

struct func_802408F0_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_802408F0(struct func_802408F0_Struct *arg0, s32 arg1) {
    D_80246C60 = D_80246A30;
    arg0->unk3C = 0;
    func_800058DC(arg0, &func_8024092C);
}
