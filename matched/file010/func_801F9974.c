#include "context.h"

struct func_801F9974_Struct {
    u8 pad0[0x24];
    func_801F40BC_StructB *unk24;
    u8 pad1[0x5C - 0x28];
    void *unk5C;
    u8 pad2[0x92 - 0x60];
    s16 unk92;
    f32 unk94;
    u8 pad4[0xAE - 0x98];
    u8 unkAE;
};
struct func_801F9974_Sub {
    u8 pad0[0x22];
    u8 unk22;
};
extern u8 func_801F9A8C[];
extern void func_8012A94C(void *, s32);

void func_801F9974(struct func_801F9974_Struct *arg0, s32 arg1) {
    void *sp2C;
    f32 sp20[3];

    sp2C = arg0->unk5C;
    func_80010550(arg1, sp2C);
    if (func_801C3B3C() == 0) {
        if (func_801F40BC((void *)arg0, (f32)arg0->unkAE) != 0) {
            ((struct func_801F9974_Sub *)arg0->unk24)->unk22 = 1;
            arg0->unk92 = func_801F3F70(arg0);
            arg0->unk94 = (arg0->unk24->unk2C->unk8 - (f32)arg0->unk92) + 3.0f;
            func_801F5230((void *)arg0);
            func_8013A334(sp20, arg1, sp2C, 1);
            if (func_801F53C4((void *)arg0) != 0) {
                func_801F536C();
            }
            func_800058DC(arg0, (s32)func_801F9A8C);
            return;
        }
    }
    func_8012A94C(arg0, 0x40);
}
