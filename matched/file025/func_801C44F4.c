#include "context.h"

extern s32 D_801DA304[];

void func_801C44F4(u8 *arg0, struct func_801C2E9C_Struct **arg1) {
    u32 idx;
    struct func_801C2E9C_Struct **p = arg1;
    idx = (u32)(((f32)*(u16 *)(arg0 + 0xB0) / (f32)*(u16 *)(arg0 + 0xA8)) * 20.0f) % 20U;
    func_8012CF8C(arg0, (*p)->unk30 + 0x40, 0x2DD, D_801DA304[idx]);
    *(u16 *)(arg0 + 0xB0) += 1;
    if (*(u16 *)(arg0 + 0xB0) >= *(u16 *)(arg0 + 0xA8)) {
        func_80005700(arg0);
    }
}
