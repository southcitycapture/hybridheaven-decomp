#define CP2(a, b) a##b
#define CP(a, b) CP2(a, b)
#define func_80243820 CP(func_80243820_, __LINE__)
#define func_802448C8 CP(func_802448C8_, __LINE__)
#define func_80244988 CP(func_80244988_, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988
extern u8 D_8024A754[];
extern struct func_802438E4_Table D_802484AC;
void func_802455D8();
struct func_8024541C_Info {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_8024541C_Obj {
    u8 pad0[0x38];
    struct func_8024541C_Info *unk38;
    u8 pad1[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x3C];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};

void func_8024541C(struct func_8024541C_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp[3];

    s1 = arg0->unk5C;
    func_8013A334(sp, arg1, s1, 6);
    func_8011AAF4(D_8024A754, 0x477, arg0, 0, 1, 4294967296.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 3.0f, sp[0], sp[1], sp[2], 0.0f, 35.0f, -1, -1);
    if ((arg0->unk38->unk10 >> 0x18) & 1) {
        if (func_8012CE9C(arg1, s1, *(struct func_802438E4_Table *)&D_802484B8, 0xA) != 0) {
            return;
        }
    } else {
        if (func_8012CE9C(arg1, s1, D_802484AC, 0xA) != 0) {
            return;
        }
    }
    if (D_80010550(arg1, s1) != 0) {
        D_801BBFAC[0x78] = 4;
        func_800058DC(arg0, func_802455D8);
        s1->unk78 = 1;
    }
}
