#include "common.h"

extern f32 D_80246A34;
extern f32 D_80246C60;

struct func_8024092C_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_8024092C(struct func_8024092C_Struct *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    D_80246C60 = D_80246A34;
}
