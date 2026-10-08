#include "common.h"

struct func_801D6BC4_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x74 - 0x38];
    s32 unk74;
    u8 pad2[0x90 - 0x78];
    u8 unk90;
    u8 pad3[0x94 - 0x91];
    f32 unk94;
};

s32 func_8012C97C(u16, u16);                        /* extern */
s32 func_80133A24(s32);                             /* extern */
void func_80150314(void *, s32);                    /* extern */
extern u8 D_8018295A[];
extern u8 D_8018295C[];

void func_801D6BC4(struct func_801D6BC4_Struct *arg0, s32 arg1) {
    if (func_80133A24(3) != 0) {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
    } else {
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295A + arg0->unk90 * 0x14));
    }
    if (func_80133A24(0xA) != 0) {
        arg0->unk94 = 0.0f;
        arg0->unk74 = func_8012C97C(arg0->unk36, *(u16 *)(D_8018295C + arg0->unk90 * 0x14));
        func_80150314(arg0, 2);
    }
}
