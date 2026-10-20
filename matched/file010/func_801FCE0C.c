#include "context.h"

struct func_801FCE0C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x40 - 0x38];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x91 - 0x4C];
    u8 unk91;
    u8 pad3[0x94 - 0x92];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern s32 (*D_802171F0[])();
extern s32 func_80150584();
void func_801FCF14(u8 *arg0, void *arg1);
s32 func_801FD5BC(f32 arg0, f32 arg1, f32 arg2);

void func_801FCE0C(struct func_801FCE0C_Struct *arg0) {
    s32 (*fn)();

    fn = D_802171F0[arg0->unk91];
    if (fn != NULL) {
        if (fn() == 0) {
            if (arg0->unk36 == 0) {
                func_80005700(arg0);
                return;
            }
            func_800058DC(arg0, func_801FCF14);
            return;
        }
        if (func_801FD5BC(arg0->unk94, arg0->unk98, arg0->unk9C) != 0) {
            if (arg0->unk36 == 0) {
                func_80005700(arg0);
            } else {
                func_800058DC(arg0, func_801FCF14);
            }
        }
        if (func_80150584() == 0) {
            arg0->unk94 = arg0->unk94 + arg0->unk40;
            arg0->unk98 = arg0->unk98 + arg0->unk44;
            arg0->unk9C = arg0->unk9C + arg0->unk48;
        }
    }
}
