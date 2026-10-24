#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fB, __LINE__)
#define func_80244988 CP(fC, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

struct func_80245290_Info {
    u8 pad0[0x10];
    u32 unk10;
};
struct func_80245290_Struct {
    u8 pad0[0x38];
    struct func_80245290_Info *unk38;
    u8 pad1[0x20];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
    u8 pad3[0x6];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};
extern u8 D_8024A71C[];
extern struct func_802438E4_Table D_802484E8;
extern void func_8024541C();

void func_80245290(struct func_80245290_Struct *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp60[3];
    s16 v;
    extern void func_80020744();

    s1 = arg0->unk5C;
    func_8013A334(sp60, arg1, s1, 6);
    func_8011AAF4(D_8024A71C, 0x457, arg0, 0, 1, 4294967296.0f, (f32) arg0->unk9C, (f32) arg0->unk9E, (f32) arg0->unkA0, 3.0f, sp60[0], sp60[1], sp60[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, s1, D_802484E8, 0xA) == 0) {
        D_80010550(arg1, s1);
        if (arg0->unk94-- == 0) {
            s1->unk78 = 1;
            if ((arg0->unk38->unk10 >> 0x18) & 1) {
                func_80020744(0x668);
            } else {
                func_80020744(0x66B);
            }
            func_800058DC(arg0, func_8024541C);
        }
    }
}
