#define CPQ(p, l) p##_##l
#define CP(p, l) CPQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fA, __LINE__)
#define func_80244988 CP(fA, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern void func_8013A334(f32 *, s32, void *, s32);
extern u8 D_8024A9BC[];
extern struct func_802438E4_Table D_802484AC;

void func_80246280(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s1;
    f32 sp58[3];

    s1 = arg0->unk5C;
    func_8013A334(sp58, arg1, s1, 6);
    func_8011AAF4(D_8024A9BC, 0x58C, arg0, 0, 1, 4294967296.0f, (f32) *(s16 *)((u8 *)arg0 + 0x9C), (f32) *(s16 *)((u8 *)arg0 + 0x9E), (f32) *(s16 *)((u8 *)arg0 + 0xA0), 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, s1, D_802484AC, 10) == 0) {
        if (D_80010550(arg1, s1) != 0) {
            func_800058DC(arg0, func_802455D8);
            s1->unk78 = 1;
        }
    }
}
