#define func_8013C7F8 func_8013C7F8_ctx
#include "context.h"
#undef func_8013C7F8

struct func_8013C7F8_Leaf {
    u8 pad[0x4C];
    s32 unk4C;
};
struct func_8013C7F8_Inner {
    u8 pad0[4];
    struct func_8013C7F8_Leaf *unk4;
    u8 pad1[4];
    u16 unkC;
};
struct func_8013C7F8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x24];
    struct func_8013C7F8_Inner *unk5C;
};
extern struct func_8013BD84_Struct D_8017DC2C;
extern void func_8013A1B4();

void func_8013C7F8(s32 arg0, s32 arg1, u8 arg2) {
    s32 pad[2];
    struct func_8013BD84_Struct sp2C;
    u16 temp_a0;
    struct func_8013C7F8_Inner *temp_v0;

    temp_v0 = ((struct func_8013C7F8_Obj *)arg0)->unk5C;
    if (temp_v0->unkC >= 0x14 && temp_v0->unk4->unk4C >= 0) {
        temp_a0 = ((struct func_8013C7F8_Obj *)arg0)->unk36;
        if ((temp_a0 & 0xFFF) != 0x57) {
            if (arg2 != 0) {
                sp2C = D_8017DC2C;
            } else {
                sp2C = *D_8017D478[func_8013B19C(temp_a0)].unk0;
            }
            func_8013A1B4(arg1, sp2C, 0x40000);
        }
    }
}
