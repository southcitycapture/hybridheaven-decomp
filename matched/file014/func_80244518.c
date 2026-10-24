#define HZQ(p, l) p##_##l
#define HZP(p, l) HZQ(p, l)
#define func_80243820 HZP(hA, __LINE__)
#define func_802448C8 HZP(hB, __LINE__)
#define func_80244988 HZP(hC, __LINE__)
#include "context.h"

struct func_80244518_StructObj {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x2C];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
};

void func_80244518(struct func_80244518_StructObj *arg0, s32 arg1) {
    s16 temp_v1;
    s32 is_zero;
    struct func_80246478_Child *temp_s1;

    temp_s1 = arg0->unk5C;
    if (func_8012A564(arg0, 0x436A0000) == 0) {
        temp_s1->unk78 = 1;
        arg0->unk2C &= ~0x80;
        func_800058DC(arg0, func_802445F8);
        return;
    }
    if (func_8012CE9C(arg1, temp_s1, *(struct func_802438E4_Table *)&D_802484B8, 10) == 0) {
        D_80010550(arg1, temp_s1);
        if (arg0->unk94-- == 0) {
            temp_s1->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
    }
}
