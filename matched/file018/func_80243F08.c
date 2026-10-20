#include "context.h"

struct func_80243F08_Inner {
    u8 pad0[0x2C];
    s32 unk2C;
};

struct func_80243F08_Struct {
    u8 pad0[0x24];
    struct func_80243F08_Inner *unk24;
};

extern void func_80127014();

void func_80243F08(struct func_80243F08_Struct *volatile arg0, s32 *arg1) {
    s32 temp_v0;

    s32 a;
    D_8025C6EC = 0;
    a = *arg1;
    temp_v0 = arg0->unk24->unk2C;
    func_8013E5C4(a, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80127014);
}
