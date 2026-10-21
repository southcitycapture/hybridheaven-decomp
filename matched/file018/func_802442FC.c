#include "context.h"

struct func_802442FC_Struct {
    u8 pad0[0x24];
    struct func_80243E0C_StructMid *unk24;
    u8 pad28[0x34];
    struct func_80242868_Inner *unk5C;
};

void func_802442FC(struct func_802442FC_Struct *arg0, s32 arg1) {
    s32 diff;
    struct func_80242868_Inner *sp28;
    struct func_80242868_Inner **pp = &sp28;
    func_802455D8_Sub *other;
    struct func_80243E0C_StructSub *self;

    sp28 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp28, D_80258DA4, 10) == 0) {
        func_80010550(arg1, *pp);
        other = D_801BBCD0->unk2C;
        self = arg0->unk24->unk2C;
        diff = (u16)((arg0->unk24->unk2C->unk12 - func_8001EF38(other->unk4 - self->unk4, other->unkC - self->unkC)) & 0x1FFF);
        if (diff < 0x200 || (diff >= 0x1E01 && diff < 0x1FFF)) {
            (*pp)->unk78 = 1;
            D_8025C704 = 1;
            D_8025C6FA = 0;
            D_8025C6FD = 0;
            func_800058DC(arg0, func_80242E5C);
        }
        func_8012A94C(arg0, 0x40);
    }
}
