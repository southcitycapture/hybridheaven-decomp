#include "common.h"

struct func_801C4D3C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};

struct func_801C4D3C_Struct2 {
    u8 pad0[0xB0];
    u16 unkB0;
    u16 unkB2;
};

extern void func_8012CF8C(void *arg0, u8 *arg1, s32 arg2, s32 arg3);
extern s32 D_801DA37C[];

void func_801C4D3C(struct func_801C4D3C_Struct2 *arg0, struct func_801C4D3C_Struct **arg1) {
    s32 temp_v0;
    s32 idx;

    temp_v0 = arg0->unkB0;
    idx = (temp_v0 / (s32) arg0->unkB2) & 7;
    arg0->unkB0 = temp_v0 + 1;
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0x2DD, D_801DA37C[idx]);
    arg0->unkB0 = arg0->unkB0 + 1;
}
