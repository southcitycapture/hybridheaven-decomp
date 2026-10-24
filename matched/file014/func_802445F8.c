#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988
#include "context.h"

struct func_802445F8_Struct {
    u8 pad0[0x24];
    struct func_80244B3C_StructMid *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[0x2C];
    struct func_80246478_Child *unk5C;
};

void func_802445F8(struct func_802445F8_Struct *arg0, s32 arg1) {
    s32 v;
    struct func_80246478_Child *sp28;
    func_802455D8_Sub *a;
    struct func_80244B3C_StructSub *b;

    sp28 = arg0->unk5C;
    if (func_80242890() == 0) {
        arg0->unk2C |= 0x80;
        if (func_8012CE9C(arg1, sp28, D_802484DC, 10) == 0) {
            D_80010550(arg1, sp28);
            a = D_801BBCD0->unk2C;
            b = arg0->unk24->unk2C;
            v = (arg0->unk24->unk2C->unk12 - func_8001EF38(a->unk4 - b->unk4, a->unkC - b->unkC)) & 0x1FFF & 0xFFFF;
            if (v < 0x200 || (v > 0x1E00 && v < 0x1FFF)) {
                sp28->unk78 = 1;
                func_800058DC(arg0, func_80244714);
            }
            func_8012A94C(arg0, 0x80);
        }
    }
}
