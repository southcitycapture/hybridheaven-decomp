#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define func_80243820 CAT(func_80243820_, __LINE__)
#define func_802448C8 CAT(func_802448C8_, __LINE__)
#define func_80244988 CAT(func_80244988_, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

struct func_80244A54_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80244A54_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80244A54_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};
struct func_80244A54_Leaf {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80244A54_Mid {
    u8 pad0[0x2C];
    struct func_80244A54_Leaf *unk2C;
};

extern s32 func_8012A988(void *, s32, s32, s32, s32);

void func_80244A54(struct func_80244A54_Struct *arg0, s32 arg1) {
    struct func_80244A54_Inner *sp2C;
    struct func_80244A54_Leaf *temp_v1;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80242890() == 0 && func_8012CE9C(arg1, sp2C, D_802484DC, 0xA) == 0) {
        D_80010550(arg1, sp2C);
        temp_v1 = ((struct func_80244A54_Mid *) D_801BBCD0)->unk2C;
        if (func_8012A988(arg0, ((s32 *) temp_v1)[1], ((s32 *) temp_v1)[3], 0x30, 0x1000) == 0) {
            arg0->unk94 = func_8012C6B4(0x40) + 0x80;
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244B3C);
        }
    }
}
