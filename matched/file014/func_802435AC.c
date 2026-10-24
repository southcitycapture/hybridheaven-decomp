#define CQ(p, l) p##_##l
#define CP(p, l) CQ(p, l)
#define func_80243820 CP(fA, __LINE__)
#define func_802448C8 CP(fB, __LINE__)
#define func_80244988 CP(fC, __LINE__)
#include "context.h"
#undef func_80243820
#undef func_802448C8
#undef func_80244988

extern u8 D_8024A5E0[];
extern struct func_802438E4_Table D_802484AC;
extern void func_8013A334(f32 *, s32, void *, s32);
extern u8 D_802436F0[];

typedef struct {
    f32 x, y, z;
} func_802435AC_Vec;

void func_802435AC(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s0;
    func_802435AC_Vec sp58;

    s0 = arg0->unk5C;
    func_8013A334(&sp58.x, arg1, s0, 6);
    if (func_80133A24(0x48) != 0) {
        func_8011AAF4(D_8024A5E0, 0x1EC, arg0, 0, 1, 4.0f, -75.0f, 57.0f, -372.0f, 4294967296.0f, sp58.x, sp58.y, sp58.z, 0.0f, 35.0f, -1, -1);
        if (func_8012CE9C(arg1, s0, D_802484AC, 0xA) == 0 && D_80010550(arg1, s0) != 0) {
            s0->unk78 = 1;
            func_800058DC(arg0, D_802436F0);
        }
    }
}
