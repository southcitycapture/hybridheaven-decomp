#include "context.h"

extern s32 D_801DA7C8[];

void func_801C9ACC(u8 *arg0, func_801C8B98_Struct **arg1) {
    u32 idx;
    func_801C8B98_Struct **p = arg1;
    idx = (u32)(((f32)*(u16 *)(arg0 + 0xB0) / (f32)*(u16 *)(arg0 + 0xB2)) * 20.0f) % 20U;
    func_8012CF8C(arg0, (*p)->unk30 + 0x40, 0x2DD, D_801DA7C8[idx]);
    *(f32 *)((*p)->unk30 + 8) += *(f32 *)(arg0 + 0x90);
    *(f32 *)(arg0 + 0x90) += *(f32 *)(arg0 + 0x94);
    *(u16 *)(arg0 + 0xB0) += 1;
    if (*(u16 *)(arg0 + 0xB0) >= *(u16 *)(arg0 + 0xB2)) {
        func_80005700(arg0);
    }
}
