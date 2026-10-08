#include "context.h"

struct func_8037EABC_Struct {
    u8 pad0[0x10];
    struct func_8037EABC_Struct *unk10;
    u8 pad1[0xE];
    u8 unk22;
    u8 pad2[0x72];
    u8 unk95;
    s8 unk96;
};

extern void func_801453CC(void *, s32, s32, s32, s32, s32, s32);
extern struct func_8037EABC_Struct *D_8038A9C0;

void func_8037EABC(struct func_8037EABC_Struct *arg0) {
    struct func_8037EABC_Struct *temp_s0;

    temp_s0 = D_8038A9C0;
    temp_s0->unk22 = 1;
    func_801453CC(temp_s0, 0x180, 0, 0x1A, 1, 3, 0x1A);
    if (arg0->unk96 == 0) {
        temp_s0->unk22 = 0;
        func_80145310(temp_s0, 0, 1);
    }
    temp_s0 = temp_s0->unk10;
    temp_s0->unk22 = 1;
    func_801453CC(temp_s0, 0, 0, 0x1A, 1, 3, 0x1A);
    if (((s32) arg0->unk95 < 0xA) || (arg0->unk95 == (arg0->unk96 + 0xA))) {
        temp_s0->unk22 = 0;
        func_80145310(temp_s0, 0, 1);
    }
}
