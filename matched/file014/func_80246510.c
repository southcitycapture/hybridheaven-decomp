#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988
#include "context.h"

extern u8 D_8024A9F4[];
extern u8 func_8024664C[];
struct func_80246510_Struct3 {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};
struct func_80246510_Struct2 {
    u8 pad[0x2C];
    void *unk2C;
};
extern struct func_80246510_Struct2 *D_801BBCD8;
extern s32 D_8013A334(f32 *, s32, void *, s32);

void func_80246510(struct func_80246478_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *s0;
    f32 sp58[3];

    s0 = arg0->unk5C;
    D_8013A334(sp58, arg1, s0, 6);
    func_8011AAF4(D_8024A9F4, 0x5C0, arg0, 0, 1, 4294967296.0f, ((struct func_80246510_Struct3 *)D_801BBCD8->unk2C)->unk30, -544.0f, ((struct func_80246510_Struct3 *)D_801BBCD8->unk2C)->unk38, 4.0f, sp58[0], sp58[1], sp58[2], 0.0f, 35.0f, -1, -1);
    if ((func_8012CE9C(arg1, s0, *(struct func_802438E4_Table *)&D_802484B8, 0xA) == 0) && (D_80010550(arg1, s0) != 0)) {
        s0->unk78 = 1;
        func_800058DC(arg0, func_8024664C);
    }
}
