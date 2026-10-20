#include "context.h"
struct func_801C2E9C_Struct {
    u8 pad0[0x30];
    u8 *unk30;
};
extern void func_80005700();

extern s32 D_801DA250[];
extern f32 D_801DD214;

void func_801C2BC4(func_801C2980_Struct *arg0, struct func_801C2E9C_Struct **arg1) {
    s32 index;

    index = (s32)(((f32)(u32)arg0->unk9C / (f32)(u32)arg0->unkA0) * D_801DD214);
    func_8012CF8C(arg0, (*arg1)->unk30 + 0x40, 0xA8, D_801DA250[index]);
    arg0->unk9C++;
    if (arg0->unkA0 < arg0->unk9C) {
        func_80005700(arg0);
    }
}
