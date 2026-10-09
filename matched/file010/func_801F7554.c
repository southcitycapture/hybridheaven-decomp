#include "context.h"

s32 func_80150584();
s32 func_801505E4();
s32 func_80150614();
s32 func_8015067C(s32, u16);

struct func_801F7554_Struct24 {
    u8 pad[0x22];
    u8 unk22;
};

struct func_801F7554_Struct {
    u8 pad0[0x24];
    struct func_801F7554_Struct24 *unk24;
};

void func_801F7554(struct func_801F7554_Struct *arg0, s32 arg1) {
    s32 sp1C;

    if (func_80150584() != 0) {
        sp1C = func_80150614();
        if (func_8015067C(func_801505E4() & 0xFFFF, (u16) sp1C) & 4) {
            arg0->unk24->unk22 = 0;
        }
    }
}
