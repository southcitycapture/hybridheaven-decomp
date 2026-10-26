#include "common.h"
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80243820 LP(fA, __LINE__)
#define func_802448C8 D_802448C8
#define func_80244988 D_80244988
extern s32 D_80010550(s32, void *);
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
extern void func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, u8, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80127430(f32, f32, s32, s32, f32, f32);
struct func_802438E4_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern s32 func_8012CE9C(s32, void *, struct func_802438E4_Table, s32);
extern void func_8013A334(f32 *, s32, void *, s32);
#define MYQ(p, l) p##_##l
#define MYP(p, l) MYQ(p, l)
#define func_80243820 MYP(fB, __LINE__)
#define func_802448C8 MYP(fC, __LINE__)
extern u8 func_80244988[];
struct func_80246478_Child {
    u8 pad0[0x78];
    s16 unk78;
};


struct func_802460F0_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    s32 unkC;
};
struct func_802460F0_Mid {
    u8 pad0[0x2C];
    struct func_802460F0_Sub *unk2C;
};
struct func_802460F0_Obj {
    u8 pad0[0x24];
    struct func_802460F0_Mid *unk24;
    u8 pad1[0x34];
    struct func_80246478_Child *unk5C;
    u8 pad2[0x34];
    s16 unk94;
    u8 pad3[6];
    s16 unk9C;
    s16 unk9E;
    s16 unkA0;
};
extern u8 D_8024A984[];
extern struct func_802438E4_Table D_802484E8;
extern f32 D_8024AB38__load_func_802460F0;
extern u8 func_80246280[];

void func_802460F0(struct func_802460F0_Obj *arg0, s32 arg1) {
    struct func_80246478_Child *c;
    f32 sp[3];
    struct func_802460F0_Sub *s;

    c = arg0->unk5C;
    func_8013A334(sp, arg1, c, 6);
    func_8011AAF4(D_8024A984, 0x579, arg0, 0, 1, 4294967296.0f, (f32)arg0->unk9C, (f32)arg0->unk9E, (f32)arg0->unkA0, 4.0f, sp[0], sp[1], sp[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, c, D_802484E8, 0xA) == 0) {
        D_80010550(arg1, c);
        if (arg0->unk94-- == 0) {
            c->unk78 = 1;
            s = arg0->unk24->unk2C;
            func_80127430(s->unk4, s->unk8, s->unkC, 0x66B, D_8024AB38__load_func_802460F0, 1.0f);
            func_800058DC(arg0, func_80246280);
        }
    }
}
