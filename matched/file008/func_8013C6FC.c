#include "context.h"

struct func_8013C6FC_StructInner {
    u8 pad[0xC];
    u16 unkC;
};
struct func_8013C6FC_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C6FC_StructInner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC20;
extern void func_8013A1B4();
extern s32 func_8013B19C(u16);

void func_8013C6FC(struct func_8013C6FC_Struct *arg0, s32 arg1, u8 arg2) {
    u8 pad[4];
    u32 temp;
    struct func_8013BD84_Struct sp2C;
    u8 pad2[4];

    temp = (u32) arg0->unk5C;
    if (((struct func_8013C6FC_StructInner *) temp)->unkC >= 0x18) {
        if (arg2 != 0) {
            sp2C = D_8017DC20;
            temp = arg0->unk36;
            if (temp == 0xF9 || temp == 0xFA || temp == 0xFB || temp == 0xF0) {
                sp2C.unk0 = 0x019100B3;
            }
        } else {
            sp2C = *D_8017D478[func_8013B19C(arg0->unk36)].unk0;
        }
        func_8013A1B4(arg1, sp2C, 0xE00000);
    }
}
