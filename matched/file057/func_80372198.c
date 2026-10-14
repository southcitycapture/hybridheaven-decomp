#include "context.h"

struct func_80372198_Struct {
    u8 pad[0x7A];
    u8 unk7A;
    u8 unk7B;
};
extern void func_803721E0();

void func_80372198(struct func_80372198_Struct *arg0, s32 arg1) {
    s32 temp_v0;
    s32 lt;

    temp_v0 = arg0->unk7A;
    lt = temp_v0 < 3;
    if (lt) {}
    arg0->unk7A = (u8) (temp_v0 + 1);
    if (!lt) {
        arg0->unk7A = 1;
        arg0->unk7B = 0;
        func_800058DC(arg0, func_803721E0);
    }
}
