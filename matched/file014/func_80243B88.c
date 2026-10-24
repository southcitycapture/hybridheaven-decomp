#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fD, __LINE__)
#define func_80244988 CP(fE, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

typedef struct func_80243B88_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80243B88_StructInner;

typedef struct func_80243B88_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80243B88_StructInner *unk5C;
    u8 pad60[0x34];
    s16 unk94;
} func_80243B88_Struct;

extern struct func_802438E4_Table D_802484D0;
extern u8 D_80243C48[];

void func_80243B88(func_80243B88_Struct *arg0, s32 arg1) {
    func_80243B88_StructInner *sp2C;

    sp2C = arg0->unk5C;
    if ((func_80242890() == 0) && (func_8012CE9C(arg1, sp2C, D_802484D0, 0xA) == 0) && (D_80010550(arg1, sp2C) != 0)) {
        arg0->unk2C = arg0->unk2C | 0x80;
        sp2C->unk78 = 1;
        arg0->unk94 = (s16) (func_8012C6B4(0x100) + 0x200);
        func_800058DC(arg0, D_80243C48);
    }
}
