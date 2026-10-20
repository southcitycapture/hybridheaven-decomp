#include "context.h"

struct func_801CC9B0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801E0CE8[];
extern void func_801CCA44();

void func_801CC9B0(struct func_801CC9B0_Struct *arg0, void **arg1) {
    u8 pad[4];
    u8 sp1B;
    u8 *var_v0;

    if ((void *)arg0 == (void *)D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp1B = var_v0[0x2D9];
    D_801E4080 = func_80005670(arg0, D_801E0CE8);
    ((u8 *)D_801E4080)[0x30] = sp1B;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_801CBE04((void *)arg0, arg1);
    func_800058DC(arg0, func_801CCA44);
}
