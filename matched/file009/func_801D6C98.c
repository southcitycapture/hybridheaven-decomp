#include "common.h"

struct func_801D6C98_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x3C];
    s32 unk74;
    u8 pad2[0x18];
    u8 unk90;
};

s32 func_8012C97C(u16, u16);
void func_8012D844(void *, s32, s32);
s32 func_80133A24(s32);
extern u8 D_8018295A[];
extern u8 D_8018295C[];

void func_801D6C98(void *arg0, s32 arg1) {
    struct func_801D6C98_Struct *s = arg0;

    if (func_80133A24(3) != 0) {
        s->unk74 = func_8012C97C(s->unk36, *(u16 *)(D_8018295A + s->unk90 * 0x14));
        func_8012D844(arg0, 0x78, 1);
        return;
    }
    s->unk74 = func_8012C97C(s->unk36, *(u16 *)(D_8018295C + s->unk90 * 0x14));
    func_8012D844(arg0, 0x78, 0);
}
