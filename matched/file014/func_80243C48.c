#define ZP(p, l) ZQ(p, l)
#define ZQ(p, l) p##_##l
#define func_80243820 ZP(zA, __LINE__)
#define func_802448C8 ZP(zC, __LINE__)
#define func_80244988 ZP(zD, __LINE__)
#define func_80243C48 D_80243C48
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988
#undef func_80243C48

struct func_80243C48_Struct_Sub { u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; };
struct func_80243C48_Struct_Mid { u8 pad0[0x2C]; struct func_80243C48_Struct_Sub *unk2C; };
struct func_80243C48_Struct {
    u8 pad0[0x24];
    struct func_80243C48_Struct_Mid *unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x28];
    struct func_80246478_Child *unk5C;
    u8 pad3[0x34];
    s16 unk94;
};
extern struct func_802438E4_Table D_802484F4;
extern f32 D_8024AADC;
extern void func_80244988();
extern void func_802448C8();
extern void func_80243E38();

void func_80243C48(struct func_80243C48_Struct *arg0, s32 arg1) {
    struct func_80246478_Child *sp2C;
    s16 v;

    sp2C = arg0->unk5C;
    if (func_80242890() != 0) {
        return;
    }
    if (func_8012CE9C(arg1, sp2C, D_802484F4, 0xA) != 0) {
        return;
    }
    {
        D_80010550(arg1, sp2C);
        if (arg0->unk94-- == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80244988);
            return;
        }
        if (arg0->unk30 & 0x10) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_802448C8);
            return;
        }
        if (arg0->unk30 & 0x80) {
            sp2C->unk78 = 1;
            if ((func_80133A24(0x4F) != 0) && (D_801BBBF4 == 0x10)) {
                func_800058DC(arg0, func_80244988);
                return;
            }
            func_800058DC(arg0, func_802448C8);
            return;
        }
        if (func_8012A564(arg0, 0x42900000) != 0) {
            struct func_80243C48_Struct_Sub *t;
            sp2C->unk78 = 1;
            *(u16 *)&arg0->unk94 = 1;
            t = arg0->unk24->unk2C;
            func_80127430(t->unk4, t->unk8, t->unkC, 0x66D, D_8024AADC, 1.0f);
            func_800058DC(arg0, func_80243E38);
        } else {
            func_8012A94C(arg0, 0x40);
        }
        if (func_8012A564(arg0, 0x43340000) == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_802438E4);
        }
    }
}
