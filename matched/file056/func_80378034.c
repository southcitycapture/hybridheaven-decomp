#include "context.h"

struct func_80378034_Sub {
    u8 pad[0x2C];
    u16 unk2C;
};
struct func_80378034_Struct {
    u8 pad[0xC];
    struct func_80378034_Sub *unkC;
};

void func_80378034(struct func_80378034_Struct *arg0, s32 arg1) {
    struct func_80378034_Sub *temp_v0;

    temp_v0 = arg0->unkC;
    temp_v0->unk2C = temp_v0->unk2C + 1;
    func_80005700((s32) arg0);
}
